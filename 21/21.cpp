#include <iostream>
#include <math.h>
#include <map>
using namespace std;

/*
Sum of amicable numbers
*/

int sumFactors(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if ((n / i) != i)
            {
                sum += (n / i);
            }
        }
    }
    return sum;
}

bool isAmicable(int n)
{

    return false;
}

int main()
{
    int sum_factor = 0;
    int sum_amicable = 0;
    map<int, int> factorSumDict;

    for (int i = 0; i <= 10000; i++)
    {
        sum_factor = sumFactors(i);
        factorSumDict[i] = sum_factor;
        if (sum_factor < i)
        {
            if (factorSumDict[sum_factor] == i)
            {
                // amicable number
                cout << "Amicable: " << i << " , " << sum_factor << "\n";
                sum_amicable += i;
                sum_amicable += sum_factor;
            }
        }
    }

    cout << "Sum of Amicable Numbers :: " << sum_amicable << "\n";

    return 1;
}