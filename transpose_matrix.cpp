#include <iostream>
using namespace std;
// we need to take an empty matrix int transpose [][3] so that we can have a transpose
void transpose(int arr[][3], int rows, int cols, int transposeArr[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // swap(arr[i][j], arr[j][i]);
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void printArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;
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
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "printing the array" << endl;
    printArray(arr, rows, cols);
    cout << "starting transpose" << endl;
    int transposeArr[3][3];
    transpose(arr, rows, cols, transposeArr);
    cout << "printing the array 2" << endl;
    printArray(transposeArr, rows, cols);

    return 0;
}
