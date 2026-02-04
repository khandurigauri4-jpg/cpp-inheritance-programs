// multi-level inheritance
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
class Child : public Derived
{
    public :
    void kid()
    {
        cout << "end of the program ";
    }
};
    
int main() {
    Child obj;
    obj.input();
    obj.output();
    obj.bye();
    obj.kid();
    return 0;

}