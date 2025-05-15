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

    
}