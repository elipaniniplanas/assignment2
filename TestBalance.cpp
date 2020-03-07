#include "AvlTreeB.h"
#include <stdlib.h>     
#include <time.h>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

main()
{
    // Tree used for testing insert and remove
    cout << "Testing insertion" << endl;
    AvlTree<int> test_tree1;
    test_tree1.insert(9);
    test_tree1.insert(4);
    test_tree1.insert(20);
    test_tree1.insert(3);
    test_tree1.insert(7);
    test_tree1.insert(11);
    test_tree1.insert(26);
    test_tree1.insert(2);
    test_tree1.insert(21);
    test_tree1.insert(30);
    // Test insert by inserting 8
    test_tree1.insert(8);
    test_tree1.printTree();
    // Test deletion by deleting 11
    cout << "Testing deletion (deleting 11)" << endl;
    test_tree1.remove(11);
    test_tree1.printTree();

    return 0;
}
