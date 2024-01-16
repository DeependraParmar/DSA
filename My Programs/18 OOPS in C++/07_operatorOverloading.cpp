#include <iostream>
using namespace std;
class A{
    public:
        int a,b;

    int add(){
        return a+b;
    }

    void operator+ (A &obj){
        int value1 = this->a;
        int value2 = obj.a;

        cout << "Output of Operator Overloading is: " << value1 - value2;
    }
};
int main(){
    A obj1, obj2;
    obj1.a = 20;
    obj2.a = 10;

    obj1 + obj2;

    return 0;
}