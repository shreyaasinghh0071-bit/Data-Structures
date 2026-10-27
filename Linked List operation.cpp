#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;


void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    cout << value << " inserted successfully." << endl;
}


void displayLinkedList() {
    Node* temp = head;

    if (temp == NULL) {
        cout << "Linked List is empty." << endl;
        return;
    }

    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert at Beginning" << endl;
        cout << "2. Display Linked List" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;

            case 2:
                displayLinkedList();
                break;

            case 3:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 3);

    return 0;
}
