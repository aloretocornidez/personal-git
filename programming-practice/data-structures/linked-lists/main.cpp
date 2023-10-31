// My libraries
#include "ClassList.hpp"
#include "test.hpp"

// Default Libraries
#include <iostream>
#include <ostream>
#include <string>

// If parameter is not true, test fails
// This check function would be provided by the test framework
// #define IS_TRUE(x) \
//   { \
//     if (!(x)) \
//       std::cout << __FUNCTION__ << " failed on line " << __LINE__ \
//                 << std::endl; \
//   }

void testClass(classList myClass) {

  // Testing strings tests.
}

int main(void) {

  // Initialize class.
  classList classes;

  // Add nodes
  classes.insertNode(0);
  classes.insertNode(1);
  classes.insertNode(2);
  classes.insertNode(3);
  classes.insertNode(4);

  // Print out class parameters.
  classes.printList();

  classes.deleteNode(1);

  std::cout << "Deleted Node 1" << std::endl;
  classes.printList();

  // Run Tests on class.

  return 0;
}
