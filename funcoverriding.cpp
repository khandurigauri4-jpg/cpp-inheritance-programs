// function overriding with inheritance
#include <iostream>
using namespace std;
class Base
{
public : 
void show()
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