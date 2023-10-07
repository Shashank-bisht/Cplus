// break and continue

// continue kai niche jo bhi hai use rok kar kai next loop mai jao

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 1)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}