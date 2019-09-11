/*

Gustavo Nomura
C++ Fall 2019
Due: September 12
Lab 2
Week Schedule

Write a program that prints out your course schedule for a single week. 
Use named string constants wherever possible to avoid retyping any words or
numbers. 

*/

#include <iostream>
using namespace std; 

// Standard data that set a collection of character values (const string).

const string M = "Monday";
const string Tu = "Tuesday";
const string W = "Wendsday";
const string T = "Thuerday";
const string F = "Friday";
const string E = " 8:00";
const string TW = " 12:45";
const string O = " 01:50";
const string C = " Calculus I 210";
const string CO = " C++ 162";
const string P = " Classical Physics";

int main() 
{
	//function call
	cout << M << E << C << endl;
	cout << M << TW << CO << endl;
	cout << M << O << P << endl;
	cout << "\n";
	cout << "\n";
	cout << Tu << E << C << endl;
	cout << Tu << TW << CO << endl;
	cout << Tu << O << P << endl;
	cout << "\n";
	cout << "\n";
	cout << W << E << C << endl;
	cout << W << TW << CO << endl;
	cout << W << O << P << endl;
	cout << "\n";
	cout << "\n";
	cout << T << E << C << endl;
	cout << T << TW << CO << endl;
	cout << T << O << P << endl;
	cout << "\n";
	cout << "\n";
	cout << F << E << C << endl;
	cout << F << O << P << endl;
	cout << "\n";
	cout << "\n";

	return 0;
}

