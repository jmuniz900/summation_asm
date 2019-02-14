/* Author name: Jose Muniz
* Program name: Summation of Input Numbers
* Names of files in this programming: summation_module.asm greetings.cpp run.sh
* Course number: CPSC 240
* Scheduled delivery date: February 18, 2019
* Program purpose: Compute summation of integers
* Status: Incomplete
* Date of last modification: Feb 15, 2019 
* Information about this module: Module was created to sum every integer 
inputted into the X86 assembly code and returned to the driver module to
be outputted.
* This module purpose: Driver for computing summation of integers.
* File name of this module: greetings.cpp
Compile this module: g++ -c -m64 -std=c++99 -o area.o area.cpp
Link this module with other objects:
g++ -m64 -std=c++99 -o triangle.out area.o compute.o */
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
	
