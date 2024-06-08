#include <iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;

        Heap(){
            arr[0] = -1;
            size = 0;
        }

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

        void deleteFromHeap(){
            if(size == 0){
                cout << endl << "Nothing to delete" << endl;
                return;
            } 

            arr[1] = arr[size]; // step 01: put last node to first;
            size--; // step 02: removing last node

            // step 03: take root to its correct position
            int i=1;
            while(i < size){
                int left = 2*i;
                int right = (2*i) + 1;

                if(left < size && arr[i] < arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }

                else if(right < size && arr[i] < arr[right]){
                    swap(arr[i], arr[right]);
                    i = right;
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

    h.deleteFromHeap();
    cout << endl << "After deleting, heap looks like:";
    h.print();

    return 0;
}