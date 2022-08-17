#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Welcome to Nagna Awastha Strip club"<<endl;
    cout << "Kripya apni umar bataiye" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "Ghar pe baith ke pogo dekh bhootnike" << endl;
    }
    else if (age > 50)
    {
        cout << "Chicha bhagwan ka naam lo kaha galat jaga aa rahe ho" << endl;
    }
    else
    {
        cout << "Aaiye padhariye" << endl;
    }

    return 0;
}