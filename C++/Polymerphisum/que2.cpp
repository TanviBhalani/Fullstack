#include<iostream>
using namespace std;

//Method Overriding

class Shape{

    public:

    void draw(){
        cout << "Drawing a Shape." <<endl;
    }
};

class Circle : public Shape{

    public:

    void draw(){
        cout << "Drawing a Circle." <<endl;
    }
};

int main(){

    Circle obj;

    obj.draw();

    return 0;
}

    