#ifndef __MY_CLASS_H__
#define __MY_CLASS_H__
#include <iostream>
#include <string>

class Node {
public:
  int data;
  Node *next;
  Node *previous;

  // Default contsructor
  Node() {
    data = 0;
    next = nullptr;
    previous = nullptr;
  }

  // Data contsructor
  Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->previous = nullptr;
  }
};

class myLinkedList {

private:
  // Parameters
  Node *head;
  Node *tail;

public:
  myLinkedList() { head = nullptr; }

  // Getter and Setter
  int getNumber(int offset);
  void setNumber(int offset, int data);

  // Linked List funcitons.
  void insertNode(int data);
  void printList();
  void printListBackwards();
  void deleteNode(int number);
};

#endif // !__MY_CLASS_H__
