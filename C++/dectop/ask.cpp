#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;
	//*************************************
    // this is fn to transform any data type
    // from the 1st data type to the 2nd data type

	template<class T1 , class T2>
 	  	void TransForm(T1 a , T2 &b)
	   {
	       stringstream ss;
 		   ss<<a;
	       ss>>b;
 	  }
	//********************************************************************************************
	// get the time and the date from the system
    string GetTime()
    {
   	    string date,FullTime="";
    	time_t t = time(0);   // get time now
        struct tm * now = localtime( & t );

    //int Year =(now->tm_year + 1900), Month=(now->tm_mon + 1) , Day=now->tm_mday ,
	    int Hour= now->tm_hour, Mint = now-> tm_min , Secnd =now->tm_sec ;

	 // transform the Time  to strig to assmeginment it to arr of char
      TransForm(Hour,date);
     FullTime+=date+':';

	 TransForm(Mint,date);
     FullTime+=date+':';

     TransForm(Secnd,date);
     FullTime+=date+' ';

     return FullTime;
    }

    string GetDate()
    {
     //  get time current time
     string date,FullDate="";
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );

    int Year =(now->tm_year + 1900), Month=(now->tm_mon + 1) , Day=now->tm_mday ;

	 // transform the Date to strig to assmeginment it to arr of char
     TransForm(Day,date);
     FullDate+=date+'-';

	 TransForm(Month,date);
     FullDate+=date+'-';

	 TransForm(Year,date);
     FullDate+=date+' ';

     return FullDate;
    }

    //*******************************************************************


