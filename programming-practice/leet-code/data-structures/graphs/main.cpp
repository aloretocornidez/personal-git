// My libraries
#include "graph.hpp"

// Default Libraries
#include <iostream>
#include <ostream>

int main(void) {

  // Initialize class.
  myGraph classes;

  // Add nodes
  for (int i = 0; i < 10; i++) {
    classes.insertNode(i);
  }

  // int nodeIndex = 4;
  // std::cout << "Deleting Nodes: " << nodeIndex << std::endl;

  for (int i = 0; i < nodeIndex; i++) {
    classes.deleteNode(i);
  }

  std::cout << "Deleted Nodes: " << nodeIndex << std::endl;

  // Print list
  classes.printList();

  return 0;
}
