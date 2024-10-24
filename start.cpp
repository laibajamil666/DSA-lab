#include <iostream>
using namespace std;

int main() {
    const int fixedSize = 5;
    int a[fixedSize];
    int size;
    int newElement;

    cout<<"Enter the size of the array : ";
    cin>>size;

    if (size>fixedSize || size <= 0) {
        cout << "Invalid size. "<<endl;
        return 1;
    }

    cout<<"Enter "<<size<< " elements: ";
    for(int i = 0; i<size; i++) {
        cin>>a[i];
    }

   
    cout<< "Enter the element you want to insert at the beginning: ";
    cin>> newElement;

    
    for(int i = size; i>0; i--) {
        a[i] = a[i-1];
    }

    a[0] = newElement;

    cout<<"Updated array: ";
    for(int i = 0; i< size + 1; i++) {
        cout << a[i] << " ";
    }
    cout<<endl;

    return 0;
}
