#include "sorting.h"


namespace alg
{
    int introTutorial(int V, std::vector<int> arr) {
        int pos = 0;
        for (int i = 0; i < 1000; i++)
        {
            if (arr[i] == V)
            {
                pos = i;
                break;
            }
        }
        return pos;
    }



}