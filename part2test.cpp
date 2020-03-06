#include "part2.h"
#include <stdlib.h>     
#include <time.h>
#include <chrono>
#include <random>
#include <vector>

using namespace std;

main()
{
    BinarySearchTree<int> test_tree;

    //This is a random number generator without recurring numbers
    vector<int> numbers;
    for(int i=0; i<100; i++)      
        numbers.push_back(i);
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(numbers.begin(), numbers.end(), default_random_engine(seed));
    /////////////////////////////////////////////////////////////

    for(int i = 0; i < 3; i++)
    {
        test_tree.insert(numbers[i]);
    }
    test_tree.printTree();
    cout << "Amount of nodes in the tree at depth greater than 0 : " << test_tree.countDeep( 0 );

    return 0;
}//i like dick in my ass
