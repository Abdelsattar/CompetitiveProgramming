#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

class BigInt
{
	private:
		string num;
		
	public:
    	BigInt()
    	{
    		num="";
    	}
	   
	   BigInt (string input)
	{
           num = input;
         for (int i = 0; i < input.size(); i++)
         if (input[i] < '0' || input[i] > '9')
             num = "0";
   }      
   // it check if there exist anything in the string except nums 
   //if it is true put string =0 
	//	string operator +(string m[o]);
		int size() {return num.size();}
		
	   virtual  BigInt operator+(const  BigInt& arg)
	    { BigInt argy=arg;
	     int min = size(), max = min, carry = 0, diff=0;
         bool whMax = true;
	     char nextDigit;
	     string res = "";
     	// Check which integer is longer		
	     if (size() > argy.size())
	  	 min = argy.size(); 
	     else 
		 {
		  whMax = false;
		  max = argy.size();
	      } 
	     diff = max-min;
	     // sum part
	     for (int i = max - 1; i >= diff; i--)
		  {
           if (whMax)
        	nextDigit =  (char) (num[i] + arg.num[i-diff] - 48 + carry);				
           else
            nextDigit =  (char) (num[i-diff] + arg.num[i] - 48 + carry);				
            carry = (nextDigit > '9'); 
		    nextDigit -= (carry ? 10 : 0);				
            res = nextDigit + res;				
         }
        // Add the rest of the longer integer + arry
	     for (int i = diff - 1; i >= 0; i--) {
		 nextDigit = (char)(whMax ? num[i] : arg.num[i]) + carry;		
         carry = (nextDigit > '9'); 
         nextDigit -= (carry ? 10 : 0);	
		 res = nextDigit + res;	
        }
         cout << "\n";
          if(carry)
	       {
	       	res='1'+res;
	       }
           return BigInt (res);
       }
       
       void view ()
	   {
	   	cout<<num<<endl;
	   }	
	   
	  virtual   BigInt operator-(const  BigInt& arg)
       {
       	   BigInt argy=arg;
       	   int min = size(), max = min, diff=1;
           bool whMax = true;
	       char nextDigit;
	       string result = "";
     	// Check which integer is longer		
	       if (size() > argy.size())
	  	    min = argy.size(); 
	       else 
		  {
		    whMax = false;
		    max = argy.size();
	      }
	    // swap fn
	      if(!whMax)
	      swap (argy.num,num);
	    //suptract part 
	       for (int i = max - 1; i >= diff; i--)
		  {
		  	//const string ten="91",nine="9"; 
            if(num[i]>=argy.num[i])            
        	nextDigit =  (char) (num[i] - arg.num[i-diff] +'0');
			
			else
			for (int l=i-1;l>=0;l--)
			{
				if (num[l]!='0')
				{ 
				    				
				//	num[i]+=10;
				//	nextDigit= (char)(num[i]-argy.num[i]+'0');
				
					break ;
					////
					
					int subdigit;										
					 string nafso1,nafso2;
					nafso1=num[i];
                     // string to int
                    istringstream buffer(nafso1);
                    int intstr1;
                     buffer >> intstr1;
                     
					 intstr1=intstr1+10;
                    nextDigit =  (char) (num[i] - arg.num[i-diff] - 48);
					// dy nafs elly fo2 bas m4 bt3mel  num[i]=(int)(num[i]+31+39-48);
				   // num[i]=(char)(num[i]+'1'+'9');
			      
			         istringstream buffer(nafso2);
                     int intstr2;
                     buffer >> intstr2;
                     
                     intstr2=intstr2-1;
				 //num[l]=(char) (num[l]-'1' -48);
			     
				      // int to string
                     // int some_int;
                     /* ostringstream nothing;
                      nothing << intstr1;
                      string some_string = nothing.str();   
				      num[i]=some_string;
				      
				      ostringstream nothing2;
                      nothing2 << intstr1;
                      string some_string2 = nothing2.str();   
				      num[l]=some_string2;
				      */
				 	num[l]-=1;
				}
			    else 
			    {
			    	num[l]+=9;
			      /*string nafso;
					nafso=num[i];
                    istringstream nothing1(nafso);
                    int intstr1;
                    nothing1>> intstr1;
                     
					 intstr1=intstr+9;
			      // num[l]=(char) (num[l]-'9' -48);
		            ostringstream nothing2;
                      nothing2 << intstr1;
                      string some_string = nothing.str() ;  
					  num[i]=some_string;*/
			    }		
			  //	nextDigit =  (char) (num[i] - arg.num[i-diff] - 48);						
              //Borrow  = (nextDigit > '9'); 
		      result = nextDigit + result;
	      
	       
            }
            return BigInt (result);
        	   
      }    }
	   virtual  bool operator==(const  BigInt& arg)
	   {
	     BigInt argy=arg;
	     if(argy.size()!=num.size())
	     return false;
	     
	    else
	    {
	       for (int i=0;i<argy.size();i++)
		   {
		   	 if(argy.num[i]!=num[i])
		       return false;
		     
		   }
		   return true ;	 
	     }
    	};
       
	    friend ostream& operator<<(ostream& out,const BigInt & arg)
           {
           	 BigInt argy=arg;
              out<<"Number :"<<argy.num<<endl;
              return out;
            }
          
            
           friend istream& operator>>(istream& in,BigInt& arg)
          {
           in>>arg.num;
            return in;
          }
       

	   	 
      
       };
int main() 
{   

    string num1,num2;
    cin>>num1;
    cin>>num2;
	BigInt remider(num1),quotient(num2) ;
	 BigInt sum,sub;
	/* sum= remider+quotient;
	 sum.view();*/
	 sub= remider-quotient;
	  sum.view();
	  cout<<remider;
	// compare fun
	if(remider==quotient)
	 	cout<<" YES"<<endl;
	 else
	  cout<<" NO "<<endl;

	
	
	return 0;
	}



