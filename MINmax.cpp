#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int n1[100];  // n1 holds the array elements

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> n1[i];
    }

    int min = n1[0];
    int max = n1[0];

    // Loop to find min and max
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
