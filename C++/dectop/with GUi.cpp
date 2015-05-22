#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <cstdlib>
#include<ctime>
#include <windows.h>
#include <conio.h>
#include <vector>

using namespace std;
void goTo(int x, int y);
//**************************************************
// fet7a part 
/////////////////////////////////////////////////// DELEtE FUN //////////////////////////////////////////////////
int deleteLine (string filename, int start, int end){
	ifstream D;

	D.open(filename.c_str());
	
	vector<string>take_element;
	
	string str;
	
	if(D.fail()){
		cout << "error to open the file " << endl;
		return 0;
	}
	D.unsetf(ios::skipws);
	while(!D.eof()){                 ///////for put data in the vector//////
		getline(D,str);
		take_element.push_back(str);
	}
	D.close();
	
	ofstream D1;
	if (start < 0||start > take_element.size()){
		return 0;
	}
	else if(start==0||start==1){
		start=1;
	}
	if(end>take_element.size()){
		start=1;
		end=take_element.size();
	}
	else if(end<start||end==start){
		end=start;
	}
	
	take_element.erase(take_element.begin()+(start-1),take_element.begin()+(end)); /////for delete ////////
	int x=0;
	for(int i=start;i<=end;i++){  ///////for computing how many lines deleted//////////
		x++;
	}
	cout << "the # of lines has been deleted =" << x << endl;
	
	D1.open(filename.c_str());
	
	for(int i=0;i<take_element.size();i++){  /////for put the data into file after delete///////
		D1 << take_element[i]<<endl;
	}
	
	D1.close();
}

///////////////////////////////////////////////////////// INSERT FUN //////////////////////////////////////////////////////
void insert (string filename, int position){
	ifstream D;
	string str,Ouda;
	vector <string> vec;
	int MD;
	D.open(filename.c_str());
	if(D.fail()){
		cout << "error to open the file " << endl;
		exit(1);
	}
	D.unsetf(ios::skipws) ;
	while(!D.eof()){           ///////for put data in the vector//////
		getline(D,str);
		vec.push_back(str);
	}
	
	D.close();
	if(position<0){
		position=0;
	}
	else if(position>vec.size()){
		position=vec.size()-1;
	}
	else
		position-1;
		system("cls");
		goTo(23,9);
	cout << "what you want to do ? " ;
	goTo(28,14);
	cout << "1-insert in a new line.";
	goTo(28,15);
	cout<<"2-insert in the same line at the begining";
	goTo(25,16);
	cout<<"3-insert in the same line at the end.";
	cin >>MD;
	
	cout << "enter what you want to insert " << endl;
	cin.ignore();
	getline(cin,Ouda);
	if(MD==1){
		if(position==0){
			vec.insert(vec.begin()+(position),Ouda);
		}
		else if(position==vec.size()-1){
			vec.insert(vec.begin()+(position+1),Ouda);
		}
		else
			vec.insert(vec.begin()+(position-1),Ouda);
	}
	else if(MD==2){
		
		if(position==vec.size()-1){	
		vec[position]=Ouda+vec[position];
		}
		else if(position==0)
		vec[position]=Ouda+vec[position];
		else if((position!=vec.size()-1)||(position!=0))
		vec[position-1]=Ouda+vec[position-1];
	}
	else if(MD==3){
		
		if(position==vec.size()-1){	
		vec[position]+=Ouda;
		}
		else if(position==0)
		vec[position]+=Ouda;
		else if((position!=vec.size()-1)||(position!=0))
		vec[position-1]+=Ouda;
	}
	
	
	ofstream mm;
	mm.open(filename.c_str());
	for(int i=0;i<vec.size();i++){      /////for put the data into file after insert///////
		mm << vec[i]<<endl;
	}
	
	
	mm.close();
}

///*************************************************
/////////////////////////////////Graphic**********************
void goTo(int x, int y)
{
    COORD Place;
    Place.X = x;
    Place.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Place);
}
void color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return;
}
void Print1st ()
{
	goTo(27,16);
	cout<<"Q --> Quit";
	goTo(25,12);
	cout<<"Enter a vaild File Name : ";
	
}

void PrintScreen ()
{
    system("cls");
	goTo(27,10);
	cout<<"I --> Insert";
	goTo(27,11);
	cout<<"D --> Delete";
	goTo(27,12);
	cout<<"V --> View";
	goTo(27,13);
	cout<<"F --> Find";
	goTo(27,14);
	cout<<"R --> Replace";
	goTo(27,15);
	cout<<"S --> Statistics";
	goTo(27,16);
	cout<<"Q --> Quit";
	goTo(20,9);
	cout<<"choose what you want  :";
	
	//(Insert, Delete, View, Find, Replace, Statistics, Quit)
}
///****************************************************



//***************************************************
// Count nums of  chars, words , and lines 
// part of 3abd el sattar 
//***************************************************

void fileCount (string filename, int& chars, int& words, int& lines)
{
	fstream File;
	string  HoleLine;
	chars=words=lines=0;
	File.open(filename.c_str());
	if(File)
	while (!File.eof())
	{
		getline(File,HoleLine);
		lines++;
		chars+=HoleLine.size();
		HoleLine=HoleLine+" ";
		
		for( int i = 0 ; i < HoleLine.size()-1 ; i++ )
		{
			if(HoleLine[i]!=' ' && HoleLine[i+1]==' ')
			words++;
		}
	}
	if(chars==0)
	{
		lines=0; words=0;
	}
}

// it get the file inFo
string fileInfo(string filename)
{
	filename="dir " +filename+" > temp.txt";
	 system(filename.c_str());
	 
	string lin,date,time,size;
	string Da=" Last Upadate was at : ", sz=" The size of this file is : " ;
	fstream file;
	stringstream ss;
	int count=0;
	file.open("temp.txt");
	while (!file.eof())
	{
	 getline(file,lin);
	 if(count==5)
	  {
	  	date=lin.substr(0,10);
	  	time=lin.substr(13,8);
	  }
	  else if(count==6)
	  size=lin.substr(37,8);
	  count ++;
     }
     ss<<Da<<date<<endl<<" Time  "<<time<<endl<<sz<<size<<endl;
     
	 return ss.str();	
}

bool CheckFile(string FileName)
{
	ifstream file;
	bool check;
	file.open(FileName.c_str());
	if(file.fail())
		check=false;
	else 
	check=true;
	
	return check ; 
}
void view (string FileName)
{
	fstream file;
	string s;
	file.open(FileName.c_str());
	while(!file.eof())
	{
		getline(file,s);
		cout<<s;
	}
	
}
//****************************************

// Search  part Of Mazen  

string searCh (string file_name, string word)
{

   char FileName[file_name.size()];
   char SearchWord[word.size()];

    for (int i=0;i<file_name.length()+1;i++)
  {
    FileName[i]=file_name[i];
  }
    if (word[word.length()-1]=='*')
    {
      word.erase(word.length()-1,1);
      
       for (int i=0;i<=word.length();i++)
       SearchWord[i]=word[i];
      
      cout<<endl<<endl;
      size_t pos;
      int line =1;
      ifstream FileSearch(FileName);
      string temp;
     while(!FileSearch.eof())
      {
       getline(FileSearch,temp);
       pos = temp.find(word);
         if (pos != string::npos)
         cout<<" i found '"<<word<<"' in \" "<<temp<<" \" at line ("<<line<<")"<<endl;
       line ++;
      }


    }
    else
    {

      for (int i=0;i<=word.length();i++)
        SearchWord[i]=word[i];
       cout << endl<<endl;
       
       int i=0,line=1;
     string temp;
     ifstream FileSearch(FileName);
      bool found=false ;
       FileSearch >> temp;
       while(!FileSearch.eof())
      {
        getline(FileSearch,temp);
        for (int j = 0; temp[j]!='\0'; j++)
	    {
         if (temp[j] == SearchWord[i])
           i++;
         else
           i = 0;
 
         if (i >= word.size())
		  {
           cout << " i found the word " <<SearchWord<<"    at line "<< line <<"   :  "<< temp<<endl;
           found = true;

          }

        }
       line ++;

      }
      if (!found)
        cout << "not found" << endl;

     }
     return file_name;
}

// Replace 
string replaCe (string file_name, string word,string new_word)
{

    vector <string> vec ;
    ifstream FileSearch(file_name.c_str());
    if(FileSearch.fail())
    {
        cout<<"file does not exist. " <<endl;
        return 0;
    }
    ofstream output ;
    string temp;
    while (getline(FileSearch,temp))
    {
        while (temp.find(word)!=string::npos)
            temp.replace(temp.find(word),word.length(),new_word);
        vec.push_back(temp);
    }

    FileSearch.close();


    output.open(file_name.c_str());

    for (int i=0; i<vec.size(); i++)
        output<<vec[i]<<endl;
    output.close();


    return word;
}
   
    int main()
    {    	
    	system("color 71");
    	string FileName,word1,word2;
    	fstream file;
    	bool check1;
    	int chars,words,lines;
     do
	 {
			system("cls");
    	    Print1st();
    	   // cin.ignore();
		    getline(cin,FileName);
		   // view(FileName);
		   check1=CheckFile(FileName);
    	    
    	    if(FileName=="q" || FileName == "Q")
    	    return 0;
         }while(!check1);
    	PrintScreen();
    	char ch;
    	cin>>ch;
    	
    	switch(ch){
		case 'D':
		case 'd':	
			{
					system("cls");
			int start_line,end_line;
			cout << "Enter the start line for delet" << endl;
			cin >> start_line;
			cout << "Enter the end line for delet" << endl;
			cin >> end_line;
			deleteLine (FileName,start_line,end_line);	
			break;	
			}
		case 'I':
		case 'i':
			{
					system("cls");
				int D;
				goTo(13,9);
				cout<< "Enter the position that u want to insert in : "  ;
				cin >> D;
				insert (FileName,D);
				break;
			}
			
	     //(Insert, Delete, View, Find, Replace, Statistics, Quit)
		  case 'V':
		  case 'v':
			{
					system("cls");
					view(FileName);
					break;
			}
	
		  case 'F':
		  case 'f':
		  {
		  		system("cls");
		  		goTo(16,9);
				cout<< " Enter the word  : ";
				cin>>word1;
		  		searCh (FileName,word2);
		  		break;
		  }
		  case 'R':
		  case 'r':
		   {
		   		system("cls");
		   		goTo(16,9);
				cout<< " Enter the word to replace it : ";
				cin>>word1;
				cout<< " Enter the 2nd word : ";
				cin>>word2; 
				
				replaCe (FileName , word1 , word2);
				break;
		   		
		   }
		  case 'S':
	      case 's':
		  {
		  	system("cls");
		  	fileCount (FileName , chars , words , lines);
		  	 goTo(16,9);
		  	 cout <<" There Exist in this File : ";
		  	 goTo(22,12);
		  	   cout<<" ( " <<lines <<" ) "<<"lines"; 
		  	 goTo(22,14);
			   cout<<" ( " <<words <<" ) "<<"words";
		  	 goTo(22,16);
			   cout<<" ( " <<chars <<" ) "<<"chars";
		  		
		  		break;
		   }	
		  case 'Q':
		  case 'q':
		  {
		  	system("cls");
		  	return 0;
		  }
			
		}
    	
    	
    }
