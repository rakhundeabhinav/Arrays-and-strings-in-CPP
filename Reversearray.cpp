//Abhinav Rakhunde
//PRN:24070123001
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int n1[100], n2[100];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> n1[i];
    }
    for(int i = 0; i < n; i++) {
        n2[i] = n1[n - 1 - i];
    }
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << n2[i] << " ";
    }
    cout << endl;

    return 0;
}

/* OUTPUT:
Enter size of array: 6
Enter 6 elements:
1 2 3 4 5 6
Reversed array: 6 5 4 3 2 1 

*/
