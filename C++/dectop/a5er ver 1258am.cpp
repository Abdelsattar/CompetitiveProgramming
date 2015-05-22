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
            res = nextDigit+ res;				
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
	   //**************************************************	
	   // subtract part 
	   BigInt operator-(const BigInt& arg)
	{
		BigInt argy=arg;
	     int min=size(),max=min,diff=0;
	     bool whMax=true;
	     char nextDigit;
	     string result="";
	     //check which num is max
	     //********************************
	     if(size()>argy.size())
	       {
	     	min=argy.size();
	     	max=size();
	       }
	     else if(size()<argy.size())
	       {
	     	whMax=false;
	     	max=argy.size();
	     	min=size();
	       //	swap(num,argy.num);
	       }
	     else if(size()==argy.size())
	     {
	     	for(int i=0;i<size();i++)
	     	{
	     		if(num[i]>argy.num[i])
	     		{
	     			max=size();
	     			min=argy.size();
	     		}
	     		else if(argy.num[i]>num[i])
	     		{
	     			whMax=false;
	     			max=argy.size();
	     			min=size();
	     		}
        	}
        }
        diff=max-min;
        //***********************************
        //in this case if
        if(whMax)
        {
        	for(int i=max-1;i>=diff;i--)
        	{
        		if(argy.num[i]==num[i])
               {
                	nextDigit='0';
                }
             	else if(num[i]<argy.num[i])
             	{
             		num[i]+=10;
             		nextDigit=num[i]-argy.num[i];
             		result=nextDigit+result;
					 for(int m=i-1;m>=0;m--)
             		{
             			if(num[m]=='0')
             			num[m]='9';
             			else
             			{
             				argy.num[m]-=1;
             				break;
             				
             			}
             		}
             		
             	}
              else
				{
				  nextDigit=num[i]-argy.num[i];
				  result=nextDigit+result;
                }
            }
        }
        else
         { 
		   for(int i=max-1;i>=diff;i--)
            {
          	  if(argy.num[i]==num[i])
			    nextDigit='0'; 
          	  else if(argy.num[i]>num[i])
          	 {
          	  nextDigit=(argy.num[i]-num[i]+'0');
          		result=nextDigit+result;
              }
              else
             {
                 argy.num[10]+=10;
             	nextDigit=argy.num[i]-num[i];
             	result=nextDigit+result;
		    	 for(int m=i-1;m>=0;m--)
             	{
                	if(argy.num[m]=='0')
             			argy.num[m]='9';
             		else
           			{
                 	 argy.num[m]-1;
             	    break;
             				
             		}
            		}
              }
             
             }
          }
           
          for (int m=diff-1;m>=0;m--)
          {
          	
          	nextDigit = (char)(whMax ? num[m] : arg.num[m]);
          	result = nextDigit + result;	
           }
            if(!whMax)
             result='-'+result;
             return BigInt(result);
          }   
        /*  void view()
         {
         	cout<<" NUm = " <<num <<endl;
         }
	   
	  /* virtual BigInt operator-(const BigInt& arg)
	  { 
	     BigInt argy=arg;
	     int min=size(),max=min,diff=0;
	     bool whMax=true;
	     string nextDigit;
	     string resul="";
	     
	     if(size()>argy.size())
	     {
	     	min=argy.size();
	     	max=size();
	     }
	     else if(size()<argy.size())
	     {
	     	whMax=false;
	     	max=argy.size();
	     	min=size();
	     //	swap(num,argy.num);
	     }
	     else if(size()==argy.size())
	     {
	     	for(int i=0;i<size();i++)
	     	{
	     		if(num[i]>argy.num[i])
	     		{
	     			max=size();
	     			min=argy.size();
	     		}
	     		else if(argy.num[i]>num[i])
	     		{
	     			whMax=false;
	     			max=argy.size();
	     			min=size();
	     		}
	     		
	     	}
	     }
	         
	     for (int i=max-1;i>=0;i--)
	     {
	     	if(num[i]>=argy.num[i])
	     	{
	     		nextDigit[i]=num[i]-argy.num[i-diff];
	     	}
	     	else
	     	for(int l=i-1;l>=0;i--)
	     	{
	     		if(num[l]=='0')
	     		{
	     			num[l]='9';
	     		}
	     		else
	     		{
	     			num[l]-=1;
                    num[i]+=10;
                    nextDigit[i]=num[i]-argy.num[i-diff];
	     		}
	     		//resul=nextDigit+resul;
	     	}
	     	for (int i = diff - 1; i >= 0; i--) 
			 {
		       nextDigit[i] = num[i];
			   			
            }
            if(!whMax)
            nextDigit+='-';
	    }
	     return BigInt(nextDigit);
	 }
	 //***********************************************************

     /*	  	
	  virtual  BigInt operator-(const  BigInt& arg)
       {
       	   BigInt argy=arg;
       	   int min = size(), max = min, diff=0;
           bool whMax = true;
	       char nextDigit;
	       string result = "";
     	// Check which integer is bigger	
			 min = argy.size(); 
	         max=size();}
	       if (size() > argy.size())
	  	   { 
		    whMax = false;
		    max = argy.size();
		    min=size();
	      }
		   else 
		  {}
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
					num[i]+=10;
					nextDigit= (char)(num[i]-argy.num[i]+'0');
					num[l]-=1;
					break ;
				}
			    else 
			    {
			    	num[l]+=9;			      
			    }			
		      result = nextDigit + result;
	      }
            return BigInt (result);
     //////************************************************************
      }    }*/
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
           	// BigInt argy=arg;
              out<<"Number :"<<arg.num<<endl;
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
	 sum= remider+quotient;
	 //sum.view();
	 cout << sum;
	 sub= remider-quotient;
	  //sum.view();
	  cout<<sub;
	// compare fun
	if(remider==quotient)
	 	cout<<" YES"<<endl;
	 else
	  cout<<" NO "<<endl;

	
	
	return 0;
	}



