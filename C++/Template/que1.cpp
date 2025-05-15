#include <iostream>
using namespace std;
#include <string.h>

template <typename T>
T sum (T a, T b){
    cout << a + b << endl;
};

int summ (int a, int b){
    cout << a + b << endl;
}

int main()
{
    sum(12.5,12.5);
    summ(12.5,12.5);

    return 0;
}