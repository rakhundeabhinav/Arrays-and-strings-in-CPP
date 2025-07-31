//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key;
    bool found = false;

    cout << "Enter the element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            break;
        }
        else{
            cout << "Element not found" <<endl;

        }
   
    return 0;
}
}
/* OUTPUT:
Enter the element to search: 3
Element not found
*/