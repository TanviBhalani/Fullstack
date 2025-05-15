#include <iostream>
using namespace std;
#include <string.h>

class Node{
    public : 
       int data;
       Node *next;

};

int main()
{
    Node *n1 = NULL;

    n1 = new Node();
    n1->data = 25;
    n1->next = NULL;

    Node *n2 = NULL;


    n2 = new Node();
    n2->data = 45;
    n2->next = NULL;

    n1->next = n2;


    Node *n3 =NULL;

    n3 = new Node();
    n3->data = 65;
    n3->next = NULL;

    n2->next = n3;


    Node *n4 =NULL;

    n4 = new Node();
    n4->data = 85;
    n4->next = NULL;

    n3->next = n4;


    cout << n1->data << " " << n1->next << endl;
    cout << n2->data << " " << n2->next << endl;
    cout << n3->data << " " << n3->next << endl;
    cout << n4->data << " " << n4->next << endl;

    return 0;
    


}