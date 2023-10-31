#include "ClassList.hpp"
#include <iostream>
#include <string>

void classList::insertNode(int data) {

  Node *newNode = new Node(data);

  if (this->head == nullptr) {
    head = newNode;
    return;
  }

  // Temp node
  Node *temp = head;

  // Traverse to the end of the list.
  while (temp->next != nullptr) {
    temp = temp->next;
  }

  // Append the new node to the end of the list.
  temp->next = newNode;
}

void classList::printList() {

  Node *temp = head;

  int i = 0;
  while (temp != nullptr) {
    std::cout << "Index: " << i++ << " Data: " << temp->data << std::endl;
    temp = temp->next;
  }
}

void classList::deleteNode(int index) {

  Node *temp = NULL;

  int listSize = 0;

  // Check if the list is already empty.
  temp = this->head;
  if (head == nullptr) {
    std::cout << "List Empty" << std::endl;
  }

  // Find the length of the linked list.
  while (temp != nullptr) {
    temp = temp->next;
    listSize++;
  }

  // Check if the nodeOffset is greater than the list size.
  if (index > listSize) {
    std::cout << "Invalid index for delete node function. Index: "<< index << std::endl;
    return;
  }

  // Delete the head if chosen.
  if (index == 0) {
    // Assigning the new head.
    temp = this->head;

    // Assigning the new head.
    this->head = this->head->next;

    // Delete the node
    delete temp;

    // Exit the function
    return;
  }

  // Traverse the list to find the node to be deleted.
  Node* temp2 = nullptr;
  for(int i = 0; i < index; i++)
  {
    temp2 = temp;
    temp = temp->next;
    
  }

  // Set the Set temp1 and temp2 to be the nodes
  temp2->next = temp;

  // Delete the node.
}
