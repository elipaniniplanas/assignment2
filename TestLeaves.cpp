#include "BinarySearchTree1.h"
#include <stdlib.h>     
#include <time.h>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

main()
{
    BinarySearchTree<int> test_tree1;
    // Base case
    test_tree1.insert(5);
    test_tree1.insert(1);
    test_tree1.insert(7);
    cout << "Result from base case: " << test_tree1.count_leaves() << endl;

    // Edge cases
    //Empty tree
    BinarySearchTree<int> test_tree2;
    cout << "Result from empty case: " << test_tree2.count_leaves() << endl;
    //Root tree
    BinarySearchTree<int> test_tree3;
    test_tree3.insert(5);
    cout << "Result from root case: " << test_tree3.count_leaves() << endl;
    //Large tree
    BinarySearchTree<int> test_tree4;
    //This is a random number generator without recurring numbers
    vector<int> numbers;
    for(int i=0; i<1000000; i++)      
        numbers.push_back(i);
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(numbers.begin(), numbers.end(), default_random_engine(seed));
    /////////////////////////////////////////////////////////////
    for(int i = 0; i < 999999; i++)
    {
        test_tree4.insert(numbers[i]);
    }
    cout << "Result from large case: " << test_tree4.count_leaves() << endl;
    return 0;
}
