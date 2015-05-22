// Mido_Fci
// 6-8-2014
// 3:28 am
// EL 3arei4
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
   int max=-1,min=103,posn,posx;
   string choice;
   vector <int> vec(4);
   bool checkmax=false, checkmin=false,check1=true;
   bool check2=true;

   for(int i=0 ; i<4 ; i++)
   {
       cin>>choice;
       vec[i]=(choice.size()-2);
       if(vec[i]>max)
       {
           max=vec[i];
           posx=i;
           checkmax=true;
       }
       if(vec[i]<min)
       {
            min=vec[i];
            posn=i;
            checkmin=true;
       }
   }
   if(checkmax)
   {
       for(int i=0 ;i<4 ;i++)
       {

        if(vec[i]*2 > vec[posx] && i!=posx)
            {
                check1=false;
                break;

            }
       }
   }

   if(checkmin)
   {
       for(int i=0 ;i<4 ;i++)
       {

        if(vec[i] <vec[posn]*2 && i!=posn)
            {
                check2=false;
                break;

            }
       }
   }
    char arr[]={'A','B','C','D'};
   if( (check1 && check2) || (!check1 && !check2))
        cout<<"C"<<endl;
    else if(check1)
        cout<<arr[posx]<<endl;
    else if (check2)
        cout<<arr[posn]<<endl;

    return 0;
}
