#include <iostream>
using namespace std;

class Hero{
        int health;
    public:
        char level;

    void setHealth(int h){
        if(h>=0 && h<=100){
            this->health = h;
        }
        else{
            cout << "Invalid Health Provided" << endl;
        }
    }
    void getHealth(){
        cout << "Health is: " << this->health << endl;
    }
};

int main(){
    // static object instantiation
    Hero Deependra;

    // dynamic object instantiation 
    Hero *Sohan = new Hero;

    Deependra.setHealth(98);
    Deependra.level = 'A';

    Sohan -> setHealth(80);
    Sohan -> level = 'B';

    // cout << "Size of Deependra Object is: " << sizeof(Deependra) << endl;

    cout << "Level is: " << Deependra.level << endl;
    Deependra.getHealth();

    cout << endl << "Level is: " << Sohan->level << endl;
    Sohan->getHealth();

    delete Sohan;
    return 0;
}