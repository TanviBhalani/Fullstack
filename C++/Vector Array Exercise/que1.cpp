#include<iostream>
using namespace std;
#include <string.h>
#include <vector>

int main(){
    vector <int> Arr;

    // g++ -std=c+11 file.cpp

    int choice;

    do{
        cout << "Welcome to Array Program!" << endl << endl ;

        cout << "Press 1 To Add an Element in array : " << endl;
        cout << "Press 2 To Print All Element of array : " << endl;
        cout << "Press 3 To Delete Element of array : " << endl;
        cout << "Press 4 To Update Element of array : " << endl;
        cout << "Press  To Exit The Program : " << endl << endl;

        cin >> choice;

        if (choice == 1)
        {
            int element;
            cout << "Enter the element : ";
            cin >> element;

            Arr.push_back(element);
            cout << "Element Added Successfully!" << endl << endl;

        }

        else if(choice == 2)
        {
            if(Arr.size() == 0){
                cout << "Array is empty!" << endl;
            }
            else{
                cout << "Here is the list of elements : " << endl;
               for (int a : Arr)
                {
                  cout << a << endl;
                }
            }
            
            cout << endl << endl;
        }

        else if(choice == 3)
        {
            int index;

            cout << "Enter the index to remove element : " ;
            cin >> index;

            if(index < Arr.size()){
                Arr.erase(Arr.begin()+index);
                cout << "Element deleted successfully !" << endl;
            }
            else{
                cout << "Your index is not Valid !" << endl;
            }
        }

        else if(choice == 4)
        {
            int index;
            int value;

            cout << "Enter the index : " << endl;
            cin >> index;

            cout << "Enter the value : " << endl;
            cin >> value;

            Arr[index] = value;
            cout << "Element updated Successfully ! " << endl;
        }

    }

    while(choice > 0);
    

    return 0;
}