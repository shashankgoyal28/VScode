#include <iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    // else
    return false;
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "printing row wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cin >> key;
    if (findKey(arr, 3, 3, key))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}