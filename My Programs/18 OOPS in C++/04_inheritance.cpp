#include <iostream>
using namespace std;

class Human{
    public:
        string name;
        int height;
        int weight;
        int age;
    
    Human(){}
    Human(string n, int h, int w, int a){
        this->name = n;
        this->height = h;
        this->weight = w;
        this->age = a;
    }

    void printDetails(){
        cout << "Hello, my name is " << this->name << ". My height and weight are " << this->height << " and " << this->weight << " and my age is " << this->age << endl << endl;
    }
};

class Male : public Human{
    public:
        Male(string n, int h, int w, int a)
        {
            this->name = n;
            this->height = h;
            this->weight = w;
            this->age = a;
        }
        void eat(){
            cout << "Male is eating" << endl;
        }
        void sleep(){
            cout << "Male is sleeping" << endl;
        }
        void speak(){
            cout << "Male is speaking" << endl;
        }
};
class Female : public Human{
    public: 
        void eat(){
            cout << "Female is eating" << endl;
        }
        void sleep(){
            cout << "Female is sleeping" << endl;
        }
        void speak(){
            cout << "Female is speaking" << endl;
        }
};
int main(){
    Male male1("Deependra Parmar", 6, 55, 20);
    male1.printDetails();
    male1.eat();
    male1.sleep();
    male1.speak();
    return 0;
}