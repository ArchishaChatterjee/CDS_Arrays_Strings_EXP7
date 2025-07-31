// EXP 7H : Palindrome of a string checking
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
    for (int i = 0; i <a.length()/2; i++){
        if (a[i] != a[a.length()-1-i]){
            cout << "Not a palindrome";
        }
        else{
            cout << "Is a palindrome";
        }

cout << endl;

    return 0;
}
}

/*
OUTPUT :
Enter string : hello
Not a palindrome

Enter string : racecar
Is a palindrome
*/
