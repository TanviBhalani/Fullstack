#include <iostream>
#include <string>
using namespace std;
#include <vector>

template <typename T>
class MemoryCalculate {
    T id;           
    string name;  

public:
    MemoryCalculate(T id, string name) : id(id), name (name) {
    }

    void displayDetails(){
        cout << " Enter your ID : " << id << endl;
        cout << " Enter your Name : " << name << endl << endl;
    }

};


int main() {

    MemoryCalculate<int> student(5, "Tanvi Bhalani");
    student.displayDetails();

    vector<int> Arr;
    
    int choice;

    do{
        cout << "Here is Student Memory Calculation ! " << endl << endl;

        cout << "Press 1 to Add Students to a list. " << endl;
        cout << "Press 2 to Display the list of Students." << endl;
        cout << "Press 3 to Remove a Student from  the list by ID." << endl;
        cout << "Press 4 to Search for a Student by ID." << endl << endl;

        cin >> choice;

        if(choice = 1);
        {
            int student;
            cout << "Enter the number of Students : ";
            cin >> student;

            Arr.push_back(student);
            cout << "Students were added Successfully ! "  << endl << endl;
      
        }

        if(choice == 2)
        {
            if(Arr.size() == 0){
                cout << "No Students in the System!" << endl;
            }
            else{
                cout << "List of Student : " << endl;
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
    
            cout << "Enter the Student Id to remove : " ;
            cin >> index;
    
            if(index < Arr.size()){
                Arr.erase(Arr.begin()+index);
                cout << "Student with Id removed successfully !" << endl;
            }
            else{
                cout << "Student Id is not found !" << endl << endl;
            }
        }

        else if(choice == 4)
        {
            int index;
            int id;
    
            cout << "Enter the Student id to Search : " << endl;
            cin >> index;
    
            cout << "Enter the value : " << endl;
            cin >> id;
    
            Arr[index] = id;
            cout << "Student founded ! " << endl;
        }

    }

    while(choice > 0);

    return 0;
}