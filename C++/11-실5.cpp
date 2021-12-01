#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb){
    T* Array = new T[sizea + sizeb];
    for (int i = 0; i < sizea + sizeb; i++) {
        if (i < sizea) {
            Array[i] = a[i];
       
        }
        else {
            Array[i] = b[i-sizea];
        }
    }
    return Array;
}
int main() {
    int x[] = { 1,32,2,4,5 };
    int y[] = {3,2,2,3 };
    int* a = concat(x, 5, y, 4);
    for (int i = 0; i < 9; i++)
        cout << a[i] << ' ';
};

