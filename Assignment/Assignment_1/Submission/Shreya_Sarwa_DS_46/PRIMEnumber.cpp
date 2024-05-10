#include <iostream>
using namespace std;

class PrimeNumbers
{
public:
    bool IsPrime(int a)
    {
        if (a <= 1)
            return false;

        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
                return false;
        }
        return true;
    }
};

int main()
{
    PrimeNumbers Checker;
    int a;
    int LowerLimit = 50;
    int UpperLimit = 100;
    for (a = LowerLimit; a <= UpperLimit; a++)
    {
        if (Checker.IsPrime(a))
        {
            cout << a << " is a prime number." << endl;
        }
        else
        {
            cout << a << " is not a prime number." << endl;
        }
    }

    return 0;
}
