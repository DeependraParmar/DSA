#include <iostream>
using namespace std;

int main(){
    // using for loop 
    cout << "Printing number using for loop" << endl;
    for(int i=1; i<=10; i++){
        cout << i << " ";
    }
    cout << endl << endl;

    // using while loop 
    cout << "Printing number using while loop" << endl;
    int j = 1;
    while(j<=10){
        cout << j++ << " ";
    }
    cout << endl << endl;

    // using do while loop 
    cout << "Printing number using do-while loop" << endl;
    int k = 1;
    do{
        cout << k++ << " ";
    }while(k<=10);
    cout << endl << endl;

    return 0;
}