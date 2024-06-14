#include <iostream>
using namespace std;
// sum and average of elements in a array
// why didnt we use void sum in this case
void sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    cout << sum;
}
int main()
{
    int arr[] = {34, 35, 36, 37, 38};
    // which sum is used here ?
    sum(arr, 5);
}
