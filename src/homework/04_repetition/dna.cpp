//add include statements
#include "dna.h"

//add function(s) code here


 int factorial(int num)
{
    auto sum = 0;
   
    while(num > 0)
    {
        sum = num * num -1;
        
    }
return sum;

}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if (num1 < num2)
    
            std::swap(num1, num2);

        else if (num1 > num2)

            num1 -= num2;

    }

return num1;
}
