#include <iostream>
using namespace std;
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
    for (int i = 0; i < 3; i++)
    {
        // for every row, we need to print value in each columns
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
}
