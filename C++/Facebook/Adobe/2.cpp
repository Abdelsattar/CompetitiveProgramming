    #include<bits/stdc++.h>
    using namespace std;
    
    vector <int> performTheExperiment(vector <int> colonies){
    	
    	if(colonies.size()==2)
    		return colonies;
    	for(int i=1 ; i <colonies.size()-2 ; i++ ){
    		
    		if(colonies[i-1]<colonies[i] && colonies[i+1]<colonies[i])
    		 	colonies[i]--;
    		else if  (colonies[i-1]>colonies[i] && colonies[i+1]>colonies[i])
    		 	colonies[i]++;
    		
    	}
    	return  colonies;
    }
     
int main() {
     
     int i;
     cin>>i;
    vector <int> vec(i);
     for(int o=0 ; o<i ; o++)
     	cin>>vec[o];
    vec= performTheExperiment(vec);
    for(int i=0  ; i < vec.size() ; i++){
    	cout<<vec[i]<<" "<<endl;
    }
    return 0;
}
