//write include statements
#include<iostream>
#include"decisions.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	
	auto option = 0;
	auto grade = 0;
	string result;


	cout<<"\t""MAIN MENU""\n""\n";

	cout<<"1-Letter grade using if""\n";
	cout<<"2-Letter grade using switch""\n";
	cout<<"3-Exit""\n""\n";

	cout<<"Enter an option: ""\n";
	cin>>option;

	if(option == 1)
	{
		cout<<"Enter a grade: ""\n";
		cin>>grade;
		result = get_letter_grade_using_if(grade);
		cout<<"The letter grade is: "<<result<<"\n";
		}

	else if(option == 2)
	{
		cout<<"Enter a grade: ""\n";
		cin>>grade;
		result = get_letter_grade_using_switch(grade);
		cout<<result<<"\n";
	}

	return 0;
}