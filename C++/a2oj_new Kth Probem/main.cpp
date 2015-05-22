#include <bits/stdc++.h>
using namespace std; 
  int counter=0;
  long long m_w, m_z;
  int get_random()
	{
		m_z = 36969 * (m_z & 65535) + (m_z >> 16);
		m_w = 18000 * (m_w & 65535) + (m_w >> 16);
		long long res = (m_z << 16) + m_w;
		return res % 1000000000;
	}
	 int partion(vector<int> arr, int L, int R){ // it must take an kth number
       
        int i=L+1,pivot=arr[L],temp,j;
      
        if(R<=L)
            return i-1;
        
        for( j =i ; j<=R ; j++){
           //counter++;
            if(arr[j]<pivot ){
                 if(j==i)
                     i++;
                else {
                     temp = arr[j];
          			 arr[j]=arr[i];
          			 arr[i]=temp;
                     i++;
                 }                    
            }
        }
       		temp = arr[L];
          	arr[L]=arr[i-1];
          	arr[i-1]=temp;
           
        return i-1;
    }
    long long Find_kth_Element(vector<int> arr, int L, int R, int kth_Element ){
      
        if(R<=L)
           return arr[R] ; 
            
        int p = partion(arr, L, R);
        cout<<"Positon = "<<p<<"  element = "<<arr[p]<<endl;
        if(p==kth_Element)
        	return arr[p];
        else if (p > kth_Element)
        Find_kth_Element(arr, L, p-1,kth_Element);
        else 
        Find_kth_Element(arr, p+1, R,kth_Element );
    }
    
	
int main() {
	long long  K,N;
	int testCases;
	cin>>testCases;
	
//	map <long long, int > mp ;
//	map <long long, int > :: iterator iter;
	
	for(int l=0 ; l<testCases ; l++){
		cin>>N>>K>>m_w>>m_z;
	   vector<int> vec(N);
	   for(int i=0 ; i<N ; i++){
			vec[i]=get_random();
		}
	    for(int i=0 ; i<N ; i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
		cout<<Find_kth_Element(vec,0,vec.size(),K);
	/*	for(int i=0 ; i<N ; i++){
			mp[get_random()]++;
		}
		int count=1;
		for(iter= mp.begin() ; iter!=mp.end() ; iter++){
			if(count==K){
				cout<<iter->first<<endl;
				break;
			}
			count++;
		}
		mp.clear();
	*/
		
	}
	
	return 0;
}
