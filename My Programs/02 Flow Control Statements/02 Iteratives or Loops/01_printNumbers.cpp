#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value till to print numbers: ";
    cin >> n;
    cout << endl;

    // using for loop 
    cout << "Printing number using for loop" << endl;
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl << endl;

    // using while loop 
    cout << "Printing number using while loop" << endl;
    int j = 1;
    while(j<=n){
        cout << j++ << " ";
    }
    cout << endl << endl;

    // using do while loop 
    cout << "Printing number using do-while loop" << endl;
    int k = 1;
    do{
        cout << k++ << " ";
    }while(k<=n);
    cout << endl << endl;

    return 0;
}