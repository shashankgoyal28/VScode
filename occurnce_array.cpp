#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 0, 0, 0, 2, 2, 2, 3, 4, 4, 4, 4};
    int size = 12;
    cout << "enter the no. whose occurnce we need to find" << endl;
    int key;
    cin >> key;

    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            numOne++;
            cout << i << endl;
            break;
        }
    }
    cout << "key has occured" << numOne << "times" << endl;
}
