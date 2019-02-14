/* Author name: Jose Muniz
Program name: Summation of Input Numbers
Names of files in this programming: summation_module.asm greetings.cpp run.sh
Course number: CPSC 240
Scheduled delivery date: February 18, 2019
Program purpose: Compute area of triangle
Status: Fully finished with known bug: wrong value returned to Main
Date of last modification: Feb 15, 2019 */
#include <iostream>

using namespace std;

extern "C" double summation_start();

int main(){
	
	double return_code = 0.00;
	
	cout << "Welcome to summing a sequence of integers." << endl;
	cout << "This program is brought to you by Jose Muniz." << endl;
	
	return_code = summation_start();
	
	cout << "The main prgoram recieve this number: " << return_code << endl;
	cout << "Main will return 0 to the operating system. Have a nice day." << endl;
	
	return 0;
}
	
