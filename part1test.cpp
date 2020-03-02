#include "part1.h"
#include <stdlib.h>     
#include <time.h>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

main()
{
    BinarySearchTree<int> test_tree;

    vector<int> numbers;

    for(int i=0; i<100; i++)       // add 0-99 to the vector
        numbers.push_back(i);

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(numbers.begin(), numbers.end(), default_random_engine(seed));

    for(int i = 0; i < 20; i++)
    {
        test_tree.insert(numbers[i]);
    }
    test_tree.printTree();
    cout << "Amount of leaves: " << test_tree.count_leaves();
    return 0;
}
