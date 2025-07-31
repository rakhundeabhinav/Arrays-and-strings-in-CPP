//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main() {
    string n1, n2 = "";
    int n;

    cout << "Enter 1st string:" << endl;
    cin >> n1;

    n = n1.length();
    for(int i = n - 1; i >= 0; i--) {
        n2 += n1[i];
    }
    if(n1 == n2) {
        cout << "String is Palindrome." << endl;
    } else {
        cout << "String is not a Palindrome." << endl;
    }

    return 0;
}
/* OUTPUT:
Abhinav
String is not a Palindrome.
*/
