//checking_account.cpp
#include "checking_account.h"


void CheckingAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;//value between 1 and 100000

}

void CheckingAccount::deposit(int amount)


{
    if(balance > 0)
    (
        balance += amount;

    )
}
void CheckingAccount::withdraw(int amount)

{
    if(amount > 0 && amount <=balance)
    {
        
    }
}



