#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source" << src << "Destination" << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "Pahuch gaya" << endl;
        return;
    }
    // processing - ek step aage badh jao
    src++;
    // recurssive call
    reachHome(src, dest);
}

int main()
{

    int src = 1;
    int dest = 10;
    cout << endl;
    reachHome(src, dest);
    return 0;
}