// EXP 7B : Search element in Array
// Archisha Chatterjee 
// PRN : 24070123021


#include <iostream>
using namespace std;

int main() {
    int a;
    int flag = 0;
    int index;
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Enter element you want to find : ";
    cin >> a;
    for (int i = 0; i<5; i++){
        if (a == arr[i]){
           flag = 1;
           index = i + 1;
           break;
        }
    }
    if (flag == 1){
        cout << "Element found at index " << index << endl;
    }
    else{
        cout << "Element does not exist in array";
        }
 
    return 0;
}

/* 
OUTPUT : 

Enter element you want to find : 50
Element found at index 5

Enter element you want to find : 179283619823
Element does not exist in array

*/
