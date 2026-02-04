// inheritance with constructors
#include <iostream>
using namespace std;
class Base
{

    public : 
    
    Base()
    {
        cout << " hello programmer \n";
    }
};
class Derived : public Base
{
    public :
    Derived()
    {
        cout << "bye bye programmer ";
    }
};

    
int main() {
    Derived obj;
    return 0;

}