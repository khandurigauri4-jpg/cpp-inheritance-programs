// Use of virtual keyword in function overriding
#include <iostream>
using namespace std;
class Base
{
public : 
virtual void show()
    {
        cout << " hello programmer \n";
    }
};
class Derived : public Base
{
    public :
void show()
    {
        cout << " bye bye programmer ";
    }
};

    
int main() {
    Base *p;
    Derived d;
    p = &d; 
    p -> show();
    return 0;

}