#include <iostream>
using namespace std;

class Hero{
    public:
        int health;
        char level;

    // Parameterized Custom Constructor
    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }
    // Custom Copy Constructor 
    Hero(Hero& temp){
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main(){
    Hero h1(90,'A');
    Hero h2(h1);

    cout << "Level of h1: "<< h1.level << endl;
    cout << "Health of h1: " << h1.health << endl;
    cout << endl;
    cout << "Level of h2: " << h2.level << endl;
    cout << "Health of h2: " << h2.health << endl;

    return 0;
}