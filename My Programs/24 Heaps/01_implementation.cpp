#include <iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size = 0;

        void insert(int val){
            size += 1;
            int child = size;
            arr[child] = val;

            while(child > 1){
                int parent = child/2;

                if(arr[parent] < arr[child]){
                    swap(arr[parent], arr[child]);
                    child = parent;
                }
                else
                    return;
            }
        }

        void print(){
            cout << endl << "Heap looks like: ";
            for(int i=1; i<=size; i++){
                cout << arr[i] << " ";
            }
        }
};
int main(){
    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.insert(60);

    h.print();
    return 0;
}