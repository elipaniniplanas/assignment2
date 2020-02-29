#include "part1.h"
#include <stdlib.h>     
#include <time.h>

using namespace std;

main()
{
    BinarySearchTree<int> test_tree;
    int rando = rand() % 100 + 1;
    for(int i = 0; i < 10; i++)
    {
        cout << rando;
    }
    return 0;
}
