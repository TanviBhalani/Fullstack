#include <iostream>
using namespace std;

int main(){
    // selection sort

    int n;

    cout << "Enter the number of element in array : ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter the Element : ";
        cin >> arr[i];
        cout << endl;
    }

    int pass = 1;

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        int j=i-1;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for(int a : arr){
        cout << a << "-";
    }

    return 0;
}