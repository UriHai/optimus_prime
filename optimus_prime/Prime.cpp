#include <iostream>

using std::cout;
using std::endl;

/**
 * Check wether a number is prime
 *
 * @param num	[IN]	The number to check
 * @return true if num is prime, false otherwise
 */
bool isPrime(int num)
{
    int divisor = 2;
    if (num <= 1)
    {
        return false;
    }

    for (divisor = 2; divisor < num / 2 + 1; divisor++)
    {
        if (num % divisor == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int i = 0;
    bool isIPrime = false;
    cout << "Running isPrime numbers 0 - 10" << endl;
    for (i = 0; i < 11; i++)
    {
        isIPrime = isPrime(i);
        cout << i << ": ";
        if (isIPrime)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Composite" << endl;
        }
    }

    return 0;
}