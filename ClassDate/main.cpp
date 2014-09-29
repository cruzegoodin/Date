/**************************************************
 *
 *      program name:       Date01
 *      Author:             Cruze Goodin
 *      date due:           Feb 5 2014
 *      remarks:            Using classes to determine leap years
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
    
    int month;
    int day;
    int year;

public:
    
    //setters
    void setMonth(int x)       {month = x;}
    void setDay(int x)         {day = x;}
    void setYear(int x)        {year = x;}
    
    //getters
    int getMonth()const         {return month;}
    int getDay()const           {return day;}
    int getYear()const          {return year;}
    
    void display();
    bool calcLeapYear(int);
    
};
/****************************************
 *         member functions
 ****************************************/
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

void Date :: display()
{
    cout << "\n";
    cout << "month is         " << getMonth() << endl;
    cout << "day is           " << getDay() << endl;
    cout << "year is          " << getYear() << endl;
    
    if (calcLeapYear(year) == true)
        {
            cout << "\nThe year " << getYear() << " is indeed a leap year \n\n";
        }
        else
        {
            cout << "\nThe year " << getYear() << " is not a leap year \n\n";
        }
}
/****************************************
 *          function prototypes
 ****************************************/
void display();
bool calcLeapYear(int);


/*****************************************
 *   main() - the function that executes
 *****************************************/
int main()
{
    /*******************************
     *     local variables
     ******************************/
    int day;    //day integer
    int month;  //month integer
    int year;   //year integer
    Date d1;    //abstract class variable
    
    //input
    cout << "Enter day ";
    cin >> day;
    cout << "Enter month ";
    cin >> month;
    cout << "Enter year ";
    cin >> year;
    
    //setting ints to classes
    d1.setDay(day);
    d1.setMonth(month);
    d1.setYear(year);
    
    //output
    d1.display();
    
    
    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main

















