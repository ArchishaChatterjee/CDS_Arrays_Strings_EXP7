// EXP 7D : Sum and Average of an Array
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
    int sum=0;
   int arr[5] = {10,20,30,40,50};
   for (int i=0; i<5; i++){
       cout << arr[i] << endl;
       sum = arr[i]+sum;
   }
   cout << "Sum of the array is : " << sum << endl;
   cout << "Average of the array is : " << sum/5;

    return 0;
}

/*
OUTPUT :

10
20
30
40
50
Sum of the array is : 150
Average of the array is : 30

*/
