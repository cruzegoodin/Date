/**************************************************
 *
 *      program name:       Date09
 *      Author:             Cruze Goodin
 *      date due:           Apr 28 2014
 *      remarks:            Exceptions (9)
 *
 ***************************************************/

/******************************************
 *     library includes
 ******************************************/
#include <iostream>                // needed for I/O

/******************************************
 *     pre-processor
 ******************************************/
#define PI 3.14159
using namespace std;
/****************************************
 *         Class definitions
 ****************************************/
class Date
{
    
private:
    
    int month;                           // holds month
    int day;                             // holds day
    int year;                            // holds year
    
public:
    
    //constructors
    Date();
    Date(int, int, int);
    
    
    //setters
    void setMonth(int x)       {month = x;}
    void setDay(int x)         {day = x;}
    void setYear(int x)        {year = x;}
    
    //getters
    int getMonth()const         {return month;}
    int getDay()const           {return day;}
    int getYear()const          {return year;}
    
    void display();                    //display member function
    bool calcLeapYear(int);            //bool member function
    void validateDate();               //date validation for try&catch errors
};
/****************************************
 *         member functions
 ****************************************/
Date :: Date ()
{
  
    
}

Date :: Date (int month, int day,int year)
{
    setMonth(month);
    setDay(day);
    setYear(year);
    try
    {
        validateDate();
    }
    catch (string exceptionString)
    {
        cout << "____________________________________________\n";
        cout << exceptionString;
        display();
     }

}

bool Date :: calcLeapYear(int year)
{
    bool isLeapYear;        // Leap year or not
    
    // LOGIC
    if (year % 400 == 0)    // Test for 400 years (true)
    {
        isLeapYear = true;
    }
    else if (year % 100 == 0)// Test for 100 years (false)
    {
        isLeapYear = false;
    }
    else if (year % 4 == 0) // Test for 4 years (true)
    {
        isLeapYear = true;
    }
    else                    // All other cases (false)
    {
        isLeapYear = false;
    }
    
    return isLeapYear;
    
}
/*******
 *Date09
 ********/
void Date :: validateDate() //validate member function
{
    if (getYear() <=0)  //if year is < 0 print error
    {
            string exceptionString = "Error years must be greater than 0\n";
            throw exceptionString;
        

    }
    else
    {
        switch(getMonth()) //if month is 31 day month
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: if (getDay() > 31 || getDay() < 0)
            {
             
                    string exceptionString = "Error too many days! \n"; //error message
                    throw exceptionString;                              //throw
       
                break;
            }
            else
            {
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11: if (getDay() > 30 || getDay() < 0) //if month is 30 day month
            {
                    string exceptionString = "Error too many days \n";
                    throw exceptionString;
                

                    break;
                    
                
            }
            else
            {
                break;
            }
                
            case 2: if (calcLeapYear(year) == true)
            {
                if (getDay() > 29 || getDay() < 0)  //if leap year and
                {

                        string exceptionString = "Error too many days! \n";
                        
                        throw exceptionString;
                    

                }
                else
                {
                    if (getDay() > 28 || getDay() < 0)
                    {

                            string exceptionString = "Error too many days! \n";
                            
                            throw exceptionString;

                        
                        break;
                    }
                    
                    else
                    {
                        break;
                    }
                    
                default:
                    {
                        string exceptionString = "Error too many months! \n";
                        throw exceptionString;
                    

                    break;
                }
            
        
    

            }
        }
    }
}
}
void Date :: display()         //display member
{
    

    cout << "\n";
    cout << "day is           " << getDay() << endl;             // output day getter
    cout << "month is         " << getMonth() << endl;           // output month getter
    cout << "year is          " << getYear() << endl;            // output year getter
    
    if (calcLeapYear(year) == true)                  //decides which output
    {
        cout << "\nyear " << getYear() << " is a leap year \n\n";
    }
    else
    {
        cout << "\nyear " << getYear() << " is not a leap year \n\n";
    }
    }


    

    

/****************************************
 *          function prototypes
 ****************************************/
bool calcLeapYear(int);
void testDate02();
void display();
void testDate09();
void testDate();

/*****************************************
 *   main() - the function that executes
 *****************************************/
int main()
{
    
    testDate();
    
    //testDate09();
    
    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main

/*******************************
 *     functions
 ******************************/

void testDate09 ()
{
    Date d1(13, 1, 1990);                //abstract class variable
    Date d2(1, 32, 1990);   //2nd one
    Date d3(1, 1, 0);
    Date d4(3, 29, 2004);
    Date d5(2, 29, 2003);
    


    
}

void testDate ()
{
    int day;
    int month;
    int year;
    
    cout << "What is the Day??! ";
    cin >> day;
    cout << "What is the Month??! ";
    cin >> month;
    cout << "What is the Year??! ";
    cin >> year;
   
    Date d1(day, month, year);
    
}














