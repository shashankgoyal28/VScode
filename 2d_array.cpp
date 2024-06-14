#include <iostream>
using namespace std;
int main()
{
    // this code isnt working!
    int arr[4][3];
    int rows = 4;
    int cols = 3;
    // input
    // row wise input
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
            cout << arr[i][j];
        }
    }
    return 0;
}