#include <iostream>
#include <string>

using namespace std;

void nameFunction(string name,int id)
{
    cout << name;
    cout << endl;
    cout << id;
}

int main()
{
    int id;
    string name;
    getline(cin ,name);
    cin >> id;
    nameFunction(name,id);
    return 0;
}
