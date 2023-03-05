//atm.cpp
#include "atm.h"
#include<iostream>

using std::cout; using std::cin;

void display_menu()
{
    cout<<"\n\nACC COSC Bank\n\n";
    cout<<"1-Deposit'\n";
    cout<<"2-Withdraw\n";
    cout<<:3-"Display Balance\n";
    cout<<"4-"Exit\n";

}

void run_menu(CheckingAccount& account)
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"Enter menu options";
        cin>>option;
        handle_menu_option(option, account);


    }
        while(option != 4);

void handle_menu_option(int option, CheckingAccount& account)
{
    auto amount = 0;

    switch (option)
    {
        case 1:
        cout<<"Enter deposit amount: :";
        cin>>amount;
        account.deoposit(amount);
        break;
        case 2:
        cout<<"Enter withdraw amount: ";
        cin>>amoun;
        account.withdraw(amount);
        break;
        case 3:
        count<<"Balance: ";
        break;
        case 4:
        cout<<"Exiting...\n";


    }
}
