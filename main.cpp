//Rational number detector
//Evan Howell

#include<iostream>
#include "Rational.h"

using namespace std;

int main()
{
	cout << "Test Default Constructor " << endl;
	Rational Rd; //Test the default constructor then display x
	Rd.output();
	cout << "\n" ;
	cout << "Test parameterized constructor " << endl;
	Rational Rp(4, 5);
	Rp.output();
	cout << "\n";




    Rational R1(3,8);
    Rational R2(1,6);
    R1.output();
    cout << " + ";
    R2.output();
    Rational R3 = R1+R2;
    cout << " = ";
    R3.output();
    cout << endl;
    Rational R4(1,2);
    Rational R5 = R4-R2;
    R4.output();
    cout << " - ";
    R2.output();
    cout << " = ";
    R5.output();
    cout << endl;
    Rational R6(2,5);
    Rational R7 = R1*R2;
    R1.output();
    cout << " * ";
    R2.output();
    cout << " = ";
    R7.output();
    cout << endl;
    Rational R8 = R1/R2;
    R1.output();
    cout << " / ";
    R2.output();
    cout << " = ";
    R8.output();
    cout << endl;



    system("pause");
    return 0;
}
