    #include<bits/stdc++.h>
    using namespace std;
     
int main() {
     
    freopen("cooking_the_books.txt","r",stdin); // for reading
    freopen("output.out","w",stdout);//for writing
    stringstream ss; 
    int n,Min, minIndex=0,maxIndex=0,ch ,Max;
    string nums,numMin , numMax;
    char temp;
    bool checkMin=false  ,checkMax =false ;
    cin>>n;
    	for(int i= 0 ;i< n ; i++){
    		cin>>nums;
    		checkMin=false  ,checkMax =false ;
    		for(int q=0 ;q<nums.size() ; q++){
    			if(q==0){
    				Min = nums[q]-48;
    				Max = nums[q]-48 ;
    			}
    			 ch = nums[q]-48;
    			 if(ch < Min && ch !=0){
    			 		Min = ch;
						minIndex = q;  
						checkMin =true ;
    			  }
    			if(ch>Max ){
    			  	     Max = ch;
					     maxIndex = q; 
						 checkMax=true; 
    			}
    		}
    		
    		numMin = nums;
    		if(checkMin)
    			swap(numMin[0], numMin[minIndex]);
    
    		numMax = nums;
    		if(checkMax)
    			swap(numMax[0], numMax[maxIndex]);
    	
    		cout<<"Case #"<<i+1<<": "<<numMin << " " <<numMax<<endl; 
   	 	}
   
    return 0;
}
