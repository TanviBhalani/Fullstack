#include <iostream>
using namespace std;
#include <string.h>

class Node{
    public : 
       int data;
       Node *next;

       Node(int element){
          this->data = element;
          this->next = NULL;
       }

};

class LinkedList{
    public:
      Node *head = NULL;
      int count = 0;

      LinkedList()
      {
        this->head = NULL;
        this->count = 0;
      }

      void insertAtBeginning (int data){
        Node *newNode = new Node(data);
        newNode ->next =this->head;
        this->head = newNode;
        this->count++;
        cout << "Data inserted Succesfully ! " << endl;
      }

       void insertAtEnding (int data){
        Node *newNode = new Node (data);
        if(this ->head == NULL){
            this->head = newNode;
        } 
        else{
            Node *ptr =this->head;
            while (ptr->next!=NULL)
            {
                ptr = ptr->next;
            }
            ptr->next=newNode;
            this->count++;
            cout << "Element inserted at the end successfully ! ";

        }
      }

      void insertAtPosition (int data,int position){
        Node *newNode = new Node (data);
        if(position == 0){
            newNode->next = this->head;
            this->head = newNode;
        }
        else{
           Node *ptr =this->head;
           for(int i=0; i<position-1; i++){
            ptr= ptr->next;
           }
           newNode->next = ptr->next;
           ptr->next =newNode;
           this->count++;

        }
      }
};

int main()
{
   
    LinkedList list;
    list.insertAtBeginning(25);
    list.insertAtEnding(50);

    cout << list.count << endl;
    return 0;
    
}