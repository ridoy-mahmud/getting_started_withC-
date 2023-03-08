#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number of array elements - ";
    cin >> num;
    int arr[num];
    cout << "Enter the values for as array elements - ";
    for (int i = 0; i <= num; i++)
    {
        cin >> arr[i];
        cout << arr[i];
        cout << "  ";
    }

    return 0;
}
