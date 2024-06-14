#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    arr[1] = arr[1] + 10;
    printArray(arr, size);
}
int main()
{
    int arr[] = {5, 6};
    int size = 2;
    inc(arr, size);

    printArray(arr, size);
}
// the print array function is written two times so as to represent the
// changes in both
// the array values.