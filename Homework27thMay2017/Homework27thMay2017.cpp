// Homework27thMay2017.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>


void square(int);

int main()
{
	void(*ptr)(int);
	ptr = square;
	ptr(2);      // same as square(2);
	
	system("pause");
	return 0;
}
void square(int i)
*A signature of a function is the specification of the number and type of input and output variable eg .
void square(int i) and
int add(int i, int j) have different signatures.
{
}
