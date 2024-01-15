#include <iostream>
using namespace std;

class Animal{
    private: 
        string name;
        int age;
        string speak;

    public:
    Animal(string name, int age, string speak){
        this->name = name;
        this->age = age;
        this->speak = speak;
    }
    void introduceMyself(){
        cout << "My name is " << this->name << " , my age is " << this->age << " and I speak " << this->speak;
    }

};
int main(){
    Animal *dog = new Animal("Dogesh",6, "Bhu bhu");
    dog->introduceMyself();

    return 0;
}