// My libraries
#include "DoublyLinkedList.hpp"

// Default Libraries
#include <iostream>
#include <ostream>
#include <string>

// If parameter is not true, test fails
// This check function would be provided by the test framework
/*
  #define IS_TRUE(x) \
  { \
    if (!(x)) \
      std::cout << __FUNCTION__ << " failed on line " << __LINE__ \
                << std::endl; \
  }
  */

// Testing strings tests.

int main(void) {

  // Initialize class.
  myLinkedList classes;

  // Add nodes
  for (int i = 0; i < 10; i++) {
    classes.insertNode(i);
  }


  int nodeIndex = 4;
  std::cout << "Deleting Nodes: " << nodeIndex << std::endl;

  for (int i = 0; i < nodeIndex; i++) {
    classes.deleteNode(i);
  }

  std::cout << "Deleted Nodes: " << nodeIndex << std::endl;

  // Print list
  classes.printList();


  return 0;
}
