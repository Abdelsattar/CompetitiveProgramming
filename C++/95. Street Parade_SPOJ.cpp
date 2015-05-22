#include <iostream>
#include <vector>
using namespace std;

class stack
{
    private:
    int size;
    int arr[];

    public:
    stack()
    {
        size=0;
    };
    bool push(int elem)
    {
        if(this->isEmptyStack())
        { arr[size]=elem;
            size++;
           return 1;}
        else
        {
            if (this ->isFullStack())
            {
                cout<<" can't add the element the stack is full ";
                return 0;
            }
            arr[size]=elem;
            size++;

            return 1;
        }
    };
    void pop()
    {
        if(isEmptyStack())
        cout<<"Can't pop an empty stack \n";
        else
        size--;
    };
    int top()
    {
         if(isEmptyStack())
        {
            cout<<"Can't pop an empty stack \n";
            return 0;
        }
        else
         return arr[size-1];
    };
    bool isFullStack()
    {
        return (size==20) ;
    };
    bool isEmptyStack()
    {
        return (size==0);
    }
    void print ()
    {
        for(int i=0;i<size ; i++)
        cout<<i <<" "<< arr[i]<<" "<<endl;
    }
    int siz()
    {
        return size;
    }
};
 int main ()
 {
     stack st;
     int tests,topp;
    while(cin>>tests)
    {
        if (tests==0)
        return 0;
        
        vector <int > vec(tests);
        vector <int> vect;
        
        for (int i=0 ;i<tests ; i++)
            cin>>vec[i];
        for (int i =0 ; i<tests ; i++)
        {
        	if (i==tests-1)
        	vect.push_back(vec[i]);
            else if(vec[i]>vec[i+1])
            st.push(vec[i]);
            else 
            vect.push_back(vec[i]);
        }
        int sz=st.siz();
        for(int i=0 ; i<tests ;i++)
        {
            if(st.isEmptyStack())
                break;
            topp=st.top();
            vect.push_back(topp);
            st.pop();
            
        }        
        for(int i=0 ; i<tests ;i++)
        {
            if(vect[i]!=i+1)
             {
             	cout<<"no"<<endl;
             	return 0;
             }
        }
        cout<<"yes"<<endl;
    }
    return 0;
 }

