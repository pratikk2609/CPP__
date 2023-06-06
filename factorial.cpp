#include <iostream>
using namespace std;
int fac(int x);
int fac(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int a;
    cout << "enter no to find factorial : ";
    cin >> a;
    int fact = fac(a);
    cout << "Factorial of " << a << " is " << fact << endl;
    return 0;
}