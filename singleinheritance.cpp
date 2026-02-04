// single inheritance
#include <iostream>
using namespace std;
class Base
{
    string s;
    int age ;
    public : 
    void input()
    {
        cout << "enter name \n";
        getline(cin , s);
        cin.ignore();
        cout << "enter age \n";
        cin >> age;
        
    }
    void output()
    {
        cout << "name and age are = " << s << "  " << age << endl;
    }
};
class Derived : public Base
{
    public :
    void bye()
    {
        cout << "bye bye programmer ";
    }
};
    
int main() {
    Derived obj;
    obj.input();
    obj.output();
    obj.bye();

    return 0;
}