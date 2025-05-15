#include<iostream>
using namespace std;
#include <string.h>
#include <vector>

//erase the value

int main(){
    vector <int> Arr;
    vector <int> Arrr(5,2);
    // g++ -std=c+11 file.cpp
    vector<int> Arrrr{12,23,12,54,23,54};

    Arrrr.insert(Arrrr.begin()+2,66);
    Arrrr.erase(Arrrr.begin()+2);

    for(int i=0; i<Arrrr.size(); i++){
        cout << Arrrr[i] << endl;
    }
    

    return 0;
}