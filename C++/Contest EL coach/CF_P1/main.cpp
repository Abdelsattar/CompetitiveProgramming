#include <bits/stdc++.h>
using namespace std;

long long sz(long long num){
    stringstream ss;
    ss<<num;
    string s;
    ss>>s;
    return s.size();
}
long long toLong(string num){
    stringstream ss;
    ss<<num;
    long long s;
    ss>>s;
    return s;
}

int main()
{
    long long min,max;
    cin>>min>>max;
    map <string , int> mp;
    map <string , int> :: iterator iter;
    long long four,seven;
    string _4="4",_7="7";
        for(long long m=1 ; m<sz(min) ; m++){
            if(m%2==1){
                _4+="7";
                _7+="4";
            }else {
                _4+="4";
                _7+="7";
            }

        }
    for(long long i =sz(min) ; i<sz(max) ; i++){

        if(i==sz(min) ){
            if(toLong(_4)>=min){
                 mp[_4]++;
                 mp[_7]++;
            }
            else if(toLong(_7)>=min)
                mp[_7]++;
        }
        else if(i==sz(max)){

            if(toLong(_7)<=max){
                 mp[_4]++;
                 mp[_7]++;
            }
            else if(toLong(_4)<=max)
                mp[_4]++;

        }

        if(_4.size()%2==0 &&_7.size()%2==0){
            _4+="4";
            _7+="7";
            mp[_4]++;
            mp[_7]++;
        }else {
            _7+="4";
            _4+="7";
            mp[_4]++;
            mp[_7]++;
        }
        //
        // 4  *10 +4   +3
        // 7
        // 4  7    44 47 74 77   444 447 474  477 744 747 777
        // 4747  7474   74747 47474
        // 2       4                  8

    }
     for(iter = mp.begin(); iter!= mp.end(); iter++){
        cout<<iter->first<<endl;
        }
    cout<<mp.size()<<endl;
       return 0;
}
