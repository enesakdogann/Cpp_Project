#include<iostream>
using namespace std;


int  main()
{
	static int number; // static variable
	cout << "Enter an integer: ";	
	cin >> number;
	cout << "You entered: " << number << endl;
	return 0;

}	
