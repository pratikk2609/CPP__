#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i = 1, a;
    cout << "enter a number till fibonaaci series \n";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        cout << n1 << endl;
        n3 = n1;
        n1 = n2 + n3;
        n2 = n3;
    }
    return 0;
}