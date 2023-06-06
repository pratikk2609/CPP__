#include <iostream>
using namespace std;
class student
{
public:
    int RN, PRN;
    long int num;
    char n[20], e[100];
    void getdata()
    {
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter Roll NO: ";
        cin >> RN;
        cout << "Enter PRN: ";
        cin >> PRN;
        cout << "Enter email: ";
        cin >> e;
        cout << "Enter number: ";
        cin >> num;
    }
    void printdata()
    {
        cout << n << endl
             << RN << endl
             << PRN << endl
             << e << endl
             << num << endl;
    }
};

int main()
{
    student obj;
    obj.getdata();
    obj.printdata();
    return 0;
}