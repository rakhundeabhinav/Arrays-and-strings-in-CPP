//Abhinav Rakhunde
//PRN:24070123001

#include<iostream>
using namespace std;

int main() {
    string n1;
    string n2;
    int n;

    cout<<"Enter string:"<<endl;
    cin>>n1;
    n=n1.length();

    for(int i=n;i>=0;i--) {
        cout<<n1[i];
    }
    return 0;
}
/*OUTPUT:
Enter string:
Abhinav
vanihbA
*/