#include<iostream>
#include "checking_account.h"
#include "time.h"
#include "atm.h"

using std::cout;


int main()


{

	
	char c = 0;

	srand(time(NULL));//generate true randoms on each main run execution
	
	CheckingAccount acount;//cust 1
	//cout<<account;
	cout<<account.get_balance()<<"\n";
	show_balance(account);//use the friend function

	run_menu(account);///encapsulation

	cout<<account.get_balance()<<"\n";
	



	return 0;
}