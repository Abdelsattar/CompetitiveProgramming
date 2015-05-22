#include <iostream>
#include <cstring>
#include <sstream>

using namespace std; 
class BigInt
{
	private:
		string num1;
	public:
   BigInt();
   BigInt(string m)
   {
   	num1=m;
   }
   BigInt operator -(const BigInt& arg)
   {string s1,s2,m,r;
    s1=num1;
    s2=arg.num1;
    int num1,num2;
    bool check_4_borrow=false,check_4_zero=false;
    string final_sub,resulr_sub ="";
    bool check_bigger=false;
    int sum,substract , carry=0,sum2=0,sum3=0;
     //loop starts from the last digit in the string ands at the first digit
    for(int i=s1.length()-1; i>=0 ; i--)
    {
        m=s1.at(i);
        istringstream convert1(m);
        convert1>>num1;

        r=s2.at(i);
        istringstream convert2(r);
        convert2>>num2;
      
        //// check cases will be used in subtract
        {
            if(num1==num2)
            {
                continue;
            }
            else
            if(num2>num1)
            {
                check_bigger=true;
            }
            else
            if(num1>num2)
            {
                check_bigger=false;
            }
        }        
       //case that the first number that user intered is bigger than the seconed
        if(check_bigger==false)
      {

        if(check_4_borrow==true)
        {
            if(num1==0 && num2!=0 )
            {
                check_4_zero=true;
            }
            else
            if(num1==0 && num2==0)
            {
                goto zero;
            }
            else
            if(num1>0 )
            {
                num1--;
            }
        }

         //to prevent the borrow from all numbers
         if(num1>=num2 )
            {
                check_4_borrow=false;
            }

        if(num1<num2  )
        {
            if(check_4_zero==true)
            {
                zero:
                { num1=9; }
                check_4_zero=false;
            }
            else
            {
               num1=num1+10;
            }
            check_4_borrow=true;
        }
        substract=num1-num2;
    }
    else
      ////case that the second number that user intered is bigger than the first
      if(check_bigger==true)
      {
        if(check_4_borrow==true)
        {
            if(num2==0 && num1!=0 )
            {
               check_4_zero=true;
            }
           else
             if(num1==0 && num2==0)
            {
                goto zero1;
            }
            else
            if(num2>0 )
            {
                num2--;
            }
        }
        if(num2>num1)
            {
                check_4_borrow=false;
            }
        if(num2<num1  )
        {
            if(check_4_zero==true)
            {
                zero1:
                { num2=9; }
                check_4_zero=false;
            }
            else
            {
               num2=num2+10;
            }
           check_4_borrow=true;
        }
        substract=num2-num1;
      }
        ostringstream convert4;
        convert4<<substract;
        resulr_sub=convert4.str();
        final_sub= resulr_sub + final_sub;
    }
    if(check_bigger==true)
    {
        cout<<"subtract = - "<<final_sub<<endl;
    }
    else
    cout<<"subtract = "<<final_sub<<endl;
	}
};
int main()
{
	string num1,num2;
	BigInt m,l;
	cin>>num1>>num2;
}

