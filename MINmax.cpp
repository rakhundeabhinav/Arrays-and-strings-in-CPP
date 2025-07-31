//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int n1[100];  

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> n1[i];
    }

    int min = n1[0];
    int max = n1[0];
    for(int i = 1; i < n; i++) {
        if(n1[i] < min)
            min = n1[i];
        if(n1[i] > max)
            max = n1[i];
    }

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}

/* OUTPUT:
Enter size of array: 6
Enter 6 elements:
1 2 3 4 5 6
Minimum value: 1
Maximum value: 6
*/

