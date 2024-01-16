#include <iostream>
using namespace std;
class A{
    public:
        void abc(){
            cout << "I am abc of A" << endl;
        }
};

class B{
    public:
        void abc(){
            cout << "I am abc of B" << endl;
        }
};

class C : public A, public B{

};
int main(){
    C obj;
    // obj.abc() --> gives ambiguity as it exists in more than one parent classes

    obj.A::abc();
    obj.B::abc();
    
    return 0;
}