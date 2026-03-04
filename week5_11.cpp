#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }
    void insertBeginning(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            cout << "Inserted at Beginning Successfully\n";
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        cout << "Inserted at Beginning Successfully\n";
    }
    void insertEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            cout << "List was empty.Node inserted as firt node.\n";
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
        newNode->prev = temp;
        cout << "Inserted at End SUccessfully\n";
    }
    void insertAtPosition(int value, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid Position! Position must be >= 1. \n";
            return;
        }
        if (pos == 1)
        {
            insertBeginning(value);
            return;
        }
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode = temp->next;
        newNode->prev = temp;
        cout << "Inserted at Position " << pos << " Successfully\n";
    }
    void deleteBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty!";
            return;
        }
        Node *temp = head;
        Node *nextNode = head->next;
        if (nextNode != NULL)
        {
            nextNode->prev = NULL;
        }
        head = nextNode;
        delete temp;
        cout << "Deleted from Beginning Successfully\n";
    }
    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty!";
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
        cout << "Deleted from End Beginning Suuccessfully\n";
    }
    void deleteAtPosition(int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty";
            return;
        }
        if (pos == 1)
        {
            deleteBeginning();
            return;
        }
        Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Position\n";
        }
        temp->prev->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        delete temp;
        cout << "Deleted from Position" << pos << "Successfully\n";
    }
    void traverseForward()
    {
        if (head == NULL)
        {
            cout << "List is empty!";
            return;
        }
        Node *temp = head;
        Node *last = NULL;
        cout << "Forward:NULL <-> ";
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << " <->";
            }
            last = temp;
            temp = temp->next;
        }
        cout << " <-> NULL\n";
    }
    void traverseBackward()
    {
        if (head == NULL)
        {
            cout << "List is empty!";
            return;
        }
        Node *temp = head;
        Node *last = NULL;
        while (temp != NULL)
        {
            last = temp;
            temp = temp->next;
        }
        cout << "Backward: NULL <-> ";
        while (last != NULL)
        {
            cout << last->data;
            if (last->prev != NULL)
            {
                cout << " <-> ";
            }
            last = last->prev;
        }
        cout << " <-> NULL\n";
    }
    void search(int key)
    {
        if (head == NULL)
        {
            cout << "List is empty!";
            return;
        }
        Node *temp = head;
        int pos = 1;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Element found at position: " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Element not found in the list\n";
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty!";
            return;
        }
        Node *temp = head;
        cout << "Linked List: NULL <-> ";
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << " <-> ";
            }
            temp = temp->next;
        }
        cout << "<-> NULL\n";
    }
    void clear()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};