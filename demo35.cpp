#include <iostream>
using namespace std;

int main()
{
     string cars[4] = {"BMW", "TATA", "AUDI", "MERCEDES"};
     cout << cars[0] << endl;

    string food = "Pizza";
    string &meal = food ;
    cout << meal << endl;
    cout << food << endl;
    cout << &food << endl;
    string* ptr = &food;
    cout << ptr << endl;    
    cout << *ptr << endl;
return 0;
}