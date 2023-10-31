#ifndef __MY_CLASS_H__
#define __MY_CLASS_H__
#include <iostream>
#include <string>

class Node {
public:
  int data;
  Node *next;

  // Default contsructor
  Node() {
    data = 0;
    next = nullptr;
  }

  // Data contsructor
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

class classList {

private:
  // Parameters
  Node *head;

public:
  classList() { head = nullptr; }

  // Getter and Setter
  int getNumber(int offset);
  void setNumber(int offset, int data);

  // Linked List funcitons.
  void insertNode(int data);
  void printList();
  void deleteNode(int number);
};

#endif // !__MY_CLASS_H__
