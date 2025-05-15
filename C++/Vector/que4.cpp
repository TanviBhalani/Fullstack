#include<iostream>
using namespace std;
#include <string.h>
#include <vector>

//to change index number first write insert and it didn't accept it directly so for that write begin

int main(){
    vector <int> Arr;
    vector <int> Arrr(5,2);
    // g++ -std=c+11 file.cpp
    vector<int> Arrrr{12,23,12,54,23,54};

    Arrrr.push_back(33);
    Arrrr.insert(Arrrr.begin()+2,66);

    for(int i=0; i<Arrrr.size(); i++){
        cout << Arrrr[i] << endl;
    }
    

    return 0;
}