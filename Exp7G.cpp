// EXP 7G : Reverse a string
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    string a;
    cout << "Enter string : ";
    cin >> a;
    string b;
    for (int i = a.length()-1; i >=0; i--){
        cout << a[i];
        
    }
cout << endl;

    return 0;
}

/* 
OUTPUT :

Enter string : dattebayo
oyabettad

*/
