// EXP 7C : Reversing Array
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
   int arr[5] = {10,20,30,40,50};
   for (int i=5; i>0; i--){
       cout << arr[i-1] << endl;
   }

    return 0;
}

/* 
OUTPUT : 

50
40
30
20
10

*/
