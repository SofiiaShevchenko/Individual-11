// 11_1  4 завдання
// 8 варіант

#include<iostream>
#include<cmath>

using namespace std;

double function1(int x)
{
    double a;

    a = 3 * cos(x + 2.3) / sin(x + 3);

    return a;
}

double function2(int x)
{
    double b;

    b = 7 * cos(x) * sin(7 + 2 * x);
  
    return b;
}

int main()
{
    int i = 8, k;
    double a, b, Z;

    double sum1 = 0;
    double sum2 = 0;

    k = i;

    for (int k = i; k <= i + 5; k++)
    {
        a = function1(2);
        sum1 = sum1 + a;
    }

    for (int k = i; k <= i + 8; k++)
    {
        b = function2(2);
        sum2 = sum2 + b;
    }

    Z = pow(sum1, 2) + 3 * sum2;

    cout << "i = " << i << endl;
    cout << "a = " << sum1 << endl;
    cout << "b = " << sum2 << endl;
    cout << "Z = " << Z << endl;

}