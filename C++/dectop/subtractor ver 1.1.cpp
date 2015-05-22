#include<iostream>
#include <cstring>
#include<sstream>
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
BigInt(string m)
{
num=m;
}
int size() {return num.size();}
BigInt operator-(const BigInt& arg)
{
BigInt argy=arg;
int min=0,max=0,diff=0;
bool whMax=true,borrow=false;
char nextDigit;
string result="";
 
//check which num is max
//********************************
if(size()>argy.size())
{
max=size();
min=argy.size();
diff=max-min;
// nzoed zeros to the less one
for(int i=diff;i>=0;i--)
{
argy.num[i]='0';
}
 
}
else if(size()<argy.size())
{
whMax=false;
max=argy.size();
min=size();
diff=max-min;
for(int i=diff;i>=0;i--)
{
num[i]=0;
cout<<num[i];
}
}
else if(size()==argy.size())
{
// it is for loop to check for the bigger
//by checking every digit
for(int i=0;i<size();i++)
{
if(num[i]>argy.num[i])
{
max=size();
min=argy.size();
diff=max-min;
break ;
}
else if(argy.num[i]>num[i])
{
whMax=false;
max=argy.size();
min=size();
diff=max-min;
break;
}
}
}
diff=max-min;
//***********************************
//in this case if the num before the sign is bigger than the after
//y3ny elly fo2 fe el concel akber mn elly t7t
if(whMax)
{
for(int i=max-1;i>=diff;i--)
{
//han7wel kol digit to int
// to sub tract it b2a we el ba2y
 
string friststr,secondstr;
friststr=num[i];
secondstr=argy.num[i-diff];
int num1,num2,sub=0;
stringstream A;
A<<friststr;
A>>num1;
stringstream B;
B<<secondstr;
B>>num2;
 
//check for last operatin if it is
//true then the last one num1>num2
//false then the last one num2>num1
if(borrow)
{
if(num1==0)
{num1+=10;}
num1-=1;
}
 
if(num1<num2)
{
//fe mo4kla hena m4 3arefha ??
//lw da5et (300) we bad keda (299)
//el mafrod yed5ol hena lan el digit 0<digit 9
num1+=10;
sub=num1-num2;
 
//int to string
 
ostringstream buf;
buf <<sub;
string next= buf.str();
 
result=next+result;
borrow =true;
}
else if(num1>=num2)
{
sub=num1-num2;
//int to string
 
/* ostringstream buf;
  buf <<sub;
  string next= buf.str();
  */
string next;
stringstream A;
A<<sub;
A>>next;
 
result=next+result;
borrow =false;
}
}
}
//**************************************************************
//in this case if the rightside is bigger than leftside
else
{
for(int i=max-1;i>=diff;i--)
{
string friststr,secondstr;
friststr=num[i];
secondstr=argy.num[i];
int num1,num2,sub=0;
//string to int
stringstream A;
A<<friststr;
A>>num1;
 
stringstream B;
B<<secondstr;
B>>num2;
if(borrow)
{ num2-=1;
if(num2==0)
num2+=9;
 
}
 
if(num2>=num1)
{
sub=num2-num1;
 
//int to string
ostringstream buf;
buf <<sub;
string next= buf.str();
 
result=next+result;
borrow =false;
}
 
else
{
num2+=10;
sub=num2-num1;
 
//int to string
ostringstream buf;
buf <<sub;
string next= buf.str();
 
result=next+result;
borrow =true;
}
 
}
}
/*
  for (int m=diff-1;m>=0;m--)
  {
  if(whMax)
  nextDigit=num[m];
  else
  nextDigit=argy.num[m];
  //nextDigit = (char)(whMax ? num[m] : arg.num[m]);
  result = nextDigit + result;
  }*/
if(!whMax)
result='-'+result;
return BigInt(result);
}
void view()
{
cout<<" NUm = " <<num <<endl;
}
 
};
int main()
{
string m,o;
cout<<" Enter the Frist Big Number #1 : ";
cin>>m;
cout<<" Enter the Frist Big Number #2 : ";
cin>>o;
BigInt mido(m),omer(o),sub;
 
sub=mido-omer;
mido.view();
omer.view();
sub.view();
 
}
