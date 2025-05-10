#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        this->head = NULL;
        this->count = 0;
    }

    void insertInStart(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
        cout << "Data inserted at start successfully!" << endl;
    }


    void deleteFromStart()
    {
        if (this->head == NULL)
        {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }
        Node *temp = this->head;
        this->head = this->head->next;
        delete temp;
        temp = NULL;
        this->count--;
        cout << "First node deleted successfully!" << endl;
    }


    void updateData(int element, int position)
    {
        Node *ptr = this->head;
        for (int i = 1; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = element;
        cout << "Node updated successfully!" << endl;
    }

    void printList()
    {
        Node *ptr = this->head;
        cout << "Linked List: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    int choice, element, position;

    do
    {
        cout << "\n-----------------------------\n";
        cout << "Press 1 to Insert at Start" << endl;
        cout << "Press 2 to Print the List" << endl;
        cout << "Press 3 to Update Data at Position" << endl;
        cout << "Press 4 to Delete from Start" << endl;
        cout << "Press 0 to Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> element;
            list.insertInStart(element);
            break;
        case 2:
            list.printList();
            break;
        case 3:
            cout << "Enter new value: ";
            cin >> element;
            cout << "Enter position: ";
            cin >> position;
            list.updateData(element, position);
            break;
        case 4:
            list.deleteFromStart();
            break;

        case 0:
            cout << "Exiting program. Bye!" << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 0);
}