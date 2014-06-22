/* oez-P3
Student name:			Oscar Zavala
Student ID:				0198873
EGR-123-001				Spring 2014
Programing Exercise: Programming Exercise 3
Assigned:				3/4/2014
Due:						3/24/2014
Program Description:	Approximate value of pi using Gregory-Liebniz series
Developed on:			3/4/2014
Modified on:			3/24/2014
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int option = 1;
	const double piGiven = 3.141592654;
	int nTerms = 0;
	while (option !=0)
	{
		double piApprox = 0;
		cout << "How many terms would you like to use? ";
		cin >> nTerms;
		cout << "Terms\tAprox\t\t\tDiff" << endl;
		cout << fixed << setprecision(8);
		for( int counter = 1; counter <= nTerms ; ++counter)
		{
			piApprox += 4*pow(-1,counter+1)/(2*counter-1);
			cout << counter <<"\t"<< piApprox <<"\t\t"<< piGiven - piApprox << endl;
		}
		cout << "\n\nWould you like to terminate? Press "
			<< "0 to terminate, \nany other number to continue: ";
		cin >> option;
	}
}