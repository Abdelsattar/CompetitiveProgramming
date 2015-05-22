#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>


using namespace std;
bool B=1;
bool cmp (vector<int> &v1  , vector<int> &v2)
{
     if ( v1.size() > v2.size() )
     return 1;
     else if ( v1.size() < v2.size() )
     return 0;
     else
     {
           int i=0;
           while ( v1.size() )
           {
                 if( v1[i] > v2[i] )
                 {
                     return 1;
                     break;
                 }
                 else if ( v1[i] < v2[i] )
                 {
                       return 0;
                       break;
                 }
                 else
                 i++;
           }
     }
}
///////////////////////////////////
void check1 (vector<int> &v1,vector<int> &v2)
{
     
    if(v1.size() > v2.size())
    {
                 for(int i=v2.size() ;i<(v1.size());i++)
                 {
                         v2.insert(v2.begin(),0);
                 }
                 
    }
    else if (v1.size() < v2.size())
    {
                 for(int i=v1.size() ;i<(v2.size());i++)
                 {
                         v1.insert(v1.begin(),0);
                 }
                 
    }
    
}
////////////////////////////////////////////////////
class BigDecimalInt {
      private: 
              vector<int> Big1;
              vector<int> Big2;
              vector<int> Res;
              vector<int> Res2;
      public:
              BigDecimalInt () {} ;
              void copying (string x )
              {
                   int z=0;
                   
                   for(int i =0;i<x.size();i++)
                   {
                           z=int (x[i])-48;
                           Big1.push_back(z);
                   }
                   
              }
              vector<int> operator- (string y)
              {
                          
                   for (int i=0;i<y.size();i++)
                   {
                       int z=int (y[i])-48;
                       Big2.push_back(z);
                   }
                   int res,borrow=0;
                   B = cmp(Big1,Big2);
                   check1(Big1,Big2);
                   if (B == 1)
                   for(int i=Big1.size()-1; i >=0;i--)
                   {
                           res=Big1[i]-Big2[i]-borrow;
                           borrow=0;
                           if(res<0)
                           {
                                      res+=10;
                                      borrow=1;
                           }
                           Res2.push_back(res);
                           if (i==0 && borrow == 1)
                           Res2.push_back(1);
                                                      
                    }
                    else
                    {
                        for(int i=Big1.size()-1; i >=0;i--)
                        {
                           res=Big2[i]-Big1[i]-borrow;
                           borrow=0;
                           if(res<0)
                           {
                                      res+=10;
                                      borrow=1;
                           }
                           Res2.push_back(res);
                           if (i==0 && borrow == 1)
                           Res2.push_back(1);
                                                      
                        }
                    }    
                   return Res2;
              }
              vector<int> operator+ (string y)
              {
                          
                   for (int i=0;i<y.size();i++)
                   {
                       int z=int (y[i])-48;
                       Big2.push_back(z);
                   }
                   int res,carry=0;
                   for(int i=Big1.size()-1; i >=0;i--)
                   {
                           res=Big1[i]+Big2[i]+carry;
                           carry=0;
                           if(res>=10)
                           {
                                      res-=10;
                                      carry=1;
                           }
                           Res.push_back(res);
                           if (i==0 && carry == 1)
                           Res.push_back(1);
                                                      
                    }
                   return Res;
              }     
              
};

int main()
{
    bool neg=0;
    BigDecimalInt Num1;
    string x,y;
    cin>>x>>y;
    if(x[0]=='-')
    {
                 x.erase(x.begin());
                 neg=1;
    }
    if(y[0]=='-')
    {
                 y.erase(y.begin());
                 neg=1;
    }
    Num1.copying(x);
    vector<int>Big1=Num1-(y);
    vector<int>Big2=Num1+(y);
    cout<<"the sum is : ";
    if(neg==0)
    for(int i=Big2.size()-1; i >=0;i--)
    cout<<Big2[i];
    else
    for(int i=Big1.size()-1; i >=0;i--)
    cout<<Big1[i];
    cout<<endl;
    cout<<"the diff is : ";
    if(B ==0)
    cout<<"-";
    if(neg==0)
    for(int i=Big1.size()-1; i >=0;i--)
    {
            cout<<Big1[i];
    }
    else
    for(int i=Big2.size()-1; i >=0;i--)
    cout<<Big2[i];
    
    cout<<endl;
    system("PAUSE");
    return 0;
}
