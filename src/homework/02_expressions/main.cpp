//write include statements
#include<iostream>
#include "expressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	double get_sales_tax_amount(double meal_amount);

	cout<<"Enter the meal amount: ";
	
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	double get_tip_amount(double meal_amount, double tip_rate);

	cout<<"Enter tip percentage: ";

	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal Amount: ""\t"<<meal_amount<<"\n";
	cout<<"Sales Tax: ""\t"<<tax_amount<<"\n";
	cout<<"Tip Amount: ""\t"<<tip_amount<<"\n";
	cout<<"Total: ""\t\t"<<total<<"\n";
	
	return 0;
}
