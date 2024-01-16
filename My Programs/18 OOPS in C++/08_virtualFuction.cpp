#include <iostream>
using namespace std;
class A{
    public:
        void print(){
            cout << "Printing in Parent" << endl;
        }
};
class B:public A{
    public:
        void print(){
            cout << "Printing in Child" << endl;
        }
};
int main(){
    B obj;
    obj.print();
    return 0;
}