#include <iostream>
#include <vector>

using namespace std;
int main() {
	
	int testCases,N,E,A,B,Ith,Jth;
	cin>>testCases;
	for(int i=0 ;i <testCases ; i++){
		cin>>A>>B;
		vector<int> numOfRoadsConnected(A);
		vector <vector<int> > vec(0,vector<int> (A));
		for(int q=0 ; q<A ; q++){
			cin>>Ith>>Jth;
			cout<<"Here"<<endl;
			
			vec[Ith][Jth]++;
			vec[Jth][Ith]++;
		}
		for(int k=0 ; k<A ; k++ ){
			for(int m=0 ; m<A ; m++){
				if(vec[k][m]>0){
					numOfRoadsConnected[k]++;
				}
			}
		}int counter=0;
		while (true){
			int maxx=numOfRoadsConnected[0],indexOfMax=0;
	  	 	for(int J=1 ; J<A ; J++){
	   				if(numOfRoadsConnected[J]>maxx){
	   					indexOfMax=J;
	   			    	maxx=numOfRoadsConnected[J];
	   		   	 	  }
	   		  }
	   		  if(maxx==0)
	   		  	break;
	   		  for(int F=0 ; F<A ; F++){
	   		  	  vec[indexOfMax][F]=0;
	   		  	  vec[F][indexOfMax]=0;
	   		  }
	   		  numOfRoadsConnected[indexOfMax]=0;
	   		  counter++;
	 	}
		 cout<<"counter = " <<counter<<endl;		
	}
	return 0;
}
