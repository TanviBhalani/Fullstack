#include <iostream>
using namespace std;
#include <string.h>

class DMA{
    public:
    int size;
    int *arr = new int [size];
    
    DMA(int size){
        this->size =size;
        if (arr == NULL){
            cout << "Memory allocation failed for array" << endl;
        }
        else {
            cout << "Array is Created!" << endl;
        }
    }

    void InsertElement(int element, int index){
        arr[index] = element;
        cout << "Element added successfully on index : " << index << endl;
    }

    void getElement(int index){
        cout << "Element on index " << index << " is " << arr[index] << endl;
    }

    ~DMA(){
        delete []arr;
        arr = NULL;
        if(arr == NULL){
            cout << "Memory deallocation successfull !" << endl;
        }
        else{
            cout << "Memory deallocation unsuccessfull !" << endl;
        }
    
    }

};


int main(){

    DMA obj(5);
    obj.InsertElement(25,0);
    obj.getElement(0);

    
}