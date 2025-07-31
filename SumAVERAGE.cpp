//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int n1[100];  // Array to hold elements
    int sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> n1[i];
        sum += n1[i];  // Add each element to sum
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
/* OUTPUT:
Enter size of array: 6
Enter 6 elements:
1 2 3 4 5 6
Sum = 21
Average = 3.5
*/
