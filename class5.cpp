#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    void insert(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << id << "  " << name << "  " << salary << endl;
    }
};
int main(void)
{
    Employee e1;
    Employee e2;
    e1.insert(201, "Pratik", 99000);
    e2.insert(202, "rahul", 29000);
    e1.display();
    e2.display();
    return 0;
}