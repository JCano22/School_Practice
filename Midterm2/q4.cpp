#include <iostream>
using namespace std;

int min2(int a, int b);
int min3(int a, int b, int c);

/*Write a function Min2 that returns the minimum of the two numbers passed as arguments. Then, write a function Min3 that returns the minimum of the three numbers passed as arguments. Do not use comparison operations in the Min3 function; instead, call the Min2 function. You may not call other functions from the Min3 function except Min2.*/
int main()
{
    int a = 11, b =3, c =14;

    cout << "minimum of a and b: " << min2(a, b) << '\n';

    cout << "minimum of a, b, and c: " << min3(a, b, c) << '\n';

    return 0;
}

int min2(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int min3(int a, int b, int c)
{
    int min = min2(min2(a, b), c);

    return min;
}