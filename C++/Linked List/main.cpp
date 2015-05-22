//
//                                                //»”„ «··Â «·—Õ„‰ «·—ÕÌ„
//                                                //   ÕÌ« „’— [[fakess31]]
//
//                        *****************************************************************************
//                        *    this is a free code u can reference to it when u want                  *
//                        *     this code is only for education u can learn from it but               *
//                        *     it isn't legal to copy this code and put it in ur assignment          *
//                        *     this code is about Data Structure specially Linked-List               *
//                        *       this code is written by me every char so                            *
//                        *                                   if u want to learn make ur own          *
//                        *                                   else read it                            *
//                        *                                                                           *
//                        *    if u have any question plz don't hesitate to contact me                *
//                        *          m.abdel_sattarahmed@yahoo.com                                    *
//                        *          FB account : https://www.facebook.com/m.abdelsattar0             *
//                        *          myblog : http://cs-in-eg.blogspot.com/                           *
//                        *                                                                           *
//                        *****************************************************************************

#include <iostream>
#include <windows.h>

using namespace std;

struct Node
{
    string Name;
    double GPA;
    Node *next;
};
class Linked_List
{
    private:
        Node *Head;
        Node *Tail;
        int size;
    public:
        Linked_List()
        {
            Head=Tail=NULL;
            size=0;
        }
        Linked_List(string name, int gpa)
        {
            Head->Name  = name;
            Head->GPA   = gpa;
            Head->next  = NULL;
            Tail =Head;
            cout<<"mo "<<Head->GPA;
            this->size=1;
        }
        void insertElemFront()
        {
            Node *newElement = new Node;
            cout<<"Enter your name : ";
            cin>>newElement->Name;
            cout<<"\nEnter your GPA : ";
            cin>>newElement->GPA;
            cout<<endl;
            newElement->next = Head;
            Head = newElement;
            size++;
        }
        void inserElemBack ()
        {
             if(isEmpty())
                insertElemFront();
            else
            {

                Node *newElement = new Node;
                cout<<"Enter your name : ";
                cin>>newElement->Name;
                cout<<"\nEnter your GPA : ";
                cin>>newElement->GPA;
                cout<<endl;
                newElement->next = NULL;

                Node *loop = Head;
                while(loop->next !=NULL)
                    loop = loop->next;

                 loop->next = newElement;
            }
               size++;
        }
        void print()
        {
            if(isEmpty())
                {
                    cout<<"\nthe list is empty \2 \2 \n\n";
                    return ;
                }
            int i=0;
            Node *count=Head;
            cout<<"   Name   GPA" <<size<<"  \n";
            while(count->next!=NULL)
            {
                cout<<++i<<"- "<<count->Name<<"  "<<count->GPA<<endl;
                count=count->next;
            }
            cout<<++i<<"- "<<count->Name<<"  "<<count->GPA<<endl;

        }
        bool isEmpty()
           {
               if(size>0)
                    return false;
                return true;
           }
        int lengthLink()
           {
                return size;
           }
        int SearchName()  // lw el esm mogod btrg3 el index
        {                           // lw m4 mogod htrg3 0
            Node *loop=Head;
            int count=1;
            if(isEmpty())
                    return 0;
                cout<<" \nEnter name of the Student u want to Search for him : ";
                string na;
                cin>>na;
            while(loop->next !=NULL)
            {
                if(loop->Name==na)
                   {
                       cout<<"\nThere exist :   "<<loop->Name<<"   with GPA   "<<loop->GPA<<endl<<endl;
                        return count;
                   }
                loop = loop->next;
                count++;
            }
            if(loop->Name==na)
                    {
                       cout<<"\n There exist :   "<<loop->Name<<"   with GPA  "<<loop->GPA<<endl<<endl;
                        return ++count;
                   }
            return 0;
        }
        void remove(string name)
        {
            if(isEmpty())
            {
                cout<<"\nThe Linkes List is already Empty \1\n\n";
                return;
            }
            if(Head->Name==name)
            {
                Head=Head->next;
                return;
            }

            Node *prev=Head;
            Node *loop=prev->next;

            while(loop->next !=NULL)
            {
                if(loop->Name==name)
                {
                    prev->next =loop->next;
                    return;
                }
                prev= prev->next;
                loop = prev->next;
            }
        }

     /*   void sort()
        {

             Node *pos= Head;
             if(min->GPA > loop->GPA)
                min=min->next;
            while(pos->next !=NULL)
            {
                Node *prev=Head;
                Node *loop=prev->next;
                Node *min= Head;

                while (loop->next!=NULL)
                {
                    if(min->GPA > loop->GPA)
                        min=loop;

                    prev= prev->next;
                    loop = prev->next;
                }

                if(loop->Name==name)
                {
                    prev->next =loop->next;
                    return;
                }

            }

        }
        */
};

int main()
{
    Linked_List m;

   int n ;
    char ch;
   do
   {
       system("cls");
        cout<<"1- insert form front \n";
        cout<<"2- insert from back \n";
        cout<<"3- search for Studen name \n";
        cout<<"4- remove Student \n";
        cout<<"5- Diplay the List of Students \n";
        cout <<"\n Enter what do u want to do : ";
        cin>>n;
        switch(n)
        {
            case 1:
            {
                m.insertElemFront();
                break;
            }
            case 2:
            {
                m.inserElemBack();
                break;
            }
            case 3:
            {
                if(m.SearchName());
                else
                    cout<<"\nSorry DB is empty or we haven't name like that in our Data Base or  \n \n";
                    break;
                }
            case 4:
            {
                cout<<" Enter name of the Student u want to remove him from DB ";
                string nm;
                cin>>nm;
                m.remove(nm);
                 break;

            }
            case 5:
            {
                m.print();
                break;
            }
            defult :
            {
                cout<<" Error \n";
                break;
            }
        }
        cout<<"Do u want to continue Y/N : ";
        cin>>ch;
        cout<<endl;
   }while(ch=='Y' || ch == 'y');

    return 0;
}
