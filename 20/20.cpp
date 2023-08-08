#include <iostream>

using namespace std;

/*
Sum of digits in 100!
*/

int main()
{

    int product[200];

    // initialize
    for (int i = 0; i < 200; i++)
    {
        product[i] = 0;
    }
    product[0] = 1;
    int carry = 0;
    int prod;
    int sum = 0;

    // now run multiplication on the array
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            prod = product[j] * i;
            product[j] = (prod + carry) % 10;
            carry = (prod + carry) / 10;
        }
    }

    for (int j = 199; j >= 0; j--)
    {
        sum += product[j];
    }
    cout << "Sum :: " << sum << "\n";
    return 1;
}