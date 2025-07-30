// EXP 7A : Take Array Input from User and Display it
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
    int arr[5];
   for (int i = 0; i<5; i++){
       cout << "Enter element " << (i+1) << " for array : ";
       cin >> arr[i];
   }
   for (int i=0; i<5; i++){
       cout << arr[i] << "\t";
   }
    return 0;
}

/* 
OUTPUT : 

Enter element 1 for array : 10
Enter element 2 for array : 20
Enter element 3 for array : 30
Enter element 4 for array : 40
Enter element 5 for array : 50
10	20	30	40	50

  */
