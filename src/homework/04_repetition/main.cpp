//write include statements
#include "dna.h"

//write using statements
using std::cout; using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto option = 0;
	auto result = 0;
	auto num = 0;
	auto num1 = 0;
	auto num2 = 0;
	auto choice = 'n';

	do 
	{
		cout<<"Choose an option""\n";
		cout<<"1. Factorial""\n";
		cout<<"2. Greatest Common Divisor""\n";
		cout<<"3. Exit""\n";
		cin>>option;

		if(option == 1)

		{
			cout<<"Enter a number: ""\n";
			cin>>num;
			result = factorial(num);
			cout<<"The factorial is: "<<result<<"\n";
			
		}


		else if(option == 2)

		{
			cout<<"Enter the first number: ""\n";
			cin>>num1;
			cout<<"Enter the second number: ""\n";
			cin>>num2;
			result =  gcd(num1, num2);
			cout<<"The greatest common divisor is: "<<result<<"\n";
			
		}
	

		else if(option == 3)

		{
			cout<<"Are you sure you want to exit? ""\n";
			cout<<"Enter 'y' for yes: ";
			cin>>choice;
		}
	}
	while(choice == 'n');

		
return result;

}
