#include <iostream>
using namespace std;
// THE following function is doing the work of printing
// hence we use void
void printRowWisesum(int arr[][3], int rows, int cols)
{
    // row_sumwise traversal
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    // declare 2d array
    int arr[3][3];
    // initialisation
    int brr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {2, 4, 8}};
    // row wise print
    // outer loop
    for (int i = 0; i < 3; i++)
    // for every row we need to print value in each columns
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    // columnprint
    // for (int i = 0; i < 3; i++)
    //{
    // for every row, we need to print value in each columns
    // for (int j = 0; j < 3; j++)
    //{
    //     cout << brr[j][i] << " ";
    //}
    // cout << endl;
    // }
    printRowWisesum(arr, row, cols);
}