#include<iostream>
using namespace std;
#include <string.h>
#include <vector>

//empty is used here and 1 for true and 0 for false

int main(){
    vector <int> Arr;

    // g++ -std=c+11 file.cpp

    vector<int> Arrrr{12,23,12,54,23,54};

    Arrrr.insert(Arrrr.begin()+2,66);
    Arrrr.erase(Arrrr.begin()+2);

    for(int i=0; i<Arrrr.size(); i++){
        cout << Arrrr[i] << endl;
    }

    cout << Arr.empty() << endl;
    cout << Arrrr.at(1) << endl;
    

    return 0;
}