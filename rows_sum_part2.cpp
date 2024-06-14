#include <iostream>
using namespace std;
// this is a default thing that while we declare a 2d array
// in the
// case
//  of functions we always need to provide the coloumn value.
// void printRowWise(int arr[][3], int rows, int cols)
//{
// cout << "print-ing row wise sum" << endl;
// for (int i = 0; i < rows; i++)
// {
// int sum = 0;
// for (int j = 0; j < cols; j++)
//   {
//    sum = sum + arr[i][j];
//}
//  cout << sum << endl;
//  }
//}
void printcolsWise(int arr[][3], int rows, int cols)
{
    cout << "print-ing cols wise sum" << endl;
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    // row wise input
    // for (int i = 0; i < rows; i++)
    // {
    //   for (int j = 0; j < cols; j++)
    //   {
    //     cin >> arr[i][j];
    // }
    // }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> arr[i][j];
        }
    }
    // cout << "printing row wise " << endl;
    //  for (int i = 0; i < rows; i++)
    //{
    //  for (int j = 0; j < cols; j++)
    //  {
    //      cout << arr[i][j] << " ";
    // }
    //  cout << endl;
    // }
    cout << "printing cols wise " << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // creating a function in it
    // printRowWise(arr, rows, cols);
    printcolsWise(arr, rows, cols);
}