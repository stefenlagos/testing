

//by: Stefen Lagos, 5-21-19
//Chapter 2 Homework

//**********************************************************
//Question 2.1
//this program will take user input to compile a sample run
//**********************************************************
#include <iostream>
using namespace std;

int main()
{
	double x; //for variable x, input is 0.5
	int q; //for variable q, input is -4

	cout << "Enter a decimal fraction => ";
	cin >> x;
	cout << "Enter an integer=> ";
	cin >> q;

	double sum = x + q;   

	cout << "Sum of " << x << endl << " and " << q
		<< " is " << sum << endl; //sum output should be -3.5

	system("pause"); //pause line added for user ease
					 //and to hold debug window open
	return 0;
}


/*
Question 2.2

	The code should output "9 is less than 20"
*/

/* //
//*************************************************************
//Question 2.3
//this program will take user input for temperature and volume
//*************************************************************
#include <iostream>
using namespace std;

int main()
{
	int temp; //variable input is 300
	double vol;	//variable input is 9.4

	//prompt user for inputs of both variables
	cout << "Enter temperature (kelvin) => ";
	cin >> temp;
	cout << "Enter volume (liters) => ";
	cin >> vol;

	system("pause"); //"pause" used to hold debug window open
	return 0;
}

*/ //
/*
Question 2.4

	.45			legal, double
	‘7’			legal, char
	+15.5		legal, double
	1550		legal, int
	&			illegal, bool
	'\n'		legal, char
	16			legal, int
	10E-3		illegal, float
	false		legal, bool
	‘K'			legal, char
*/


/*
Question 2.5

	//Heat Transfer
	q = k * A * (temp2 - temp1) / L;

	//Cylinder Volume
	#include <cmath>
	const pi = 3.14159;
	V = pi * pow(r, 2) * h;

	or

	V = pi * r * r * h

	//Relative Error
	e = (y - x) / y;
*/

/* //
//*******************************************************
//Question 2.6
//this program will evaluate a combustion engine formula
//*******************************************************
#include <iostream>
#include <cmath> //cmath library used to access power function
using namespace std;

int main()
{
	double e, R = 3.50;
	
	//equation for e
	e = 100 * (1 - 1 / pow(R, .3));
	cout << e << endl;

	system("pause"); //"pause" used to hold debug window open
	return 0;
}
*/ //