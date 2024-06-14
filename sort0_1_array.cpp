#include <iostream>
using namespace std;
int main()
{

    int arr[] = {0, 1, 0, 1, 0, 1};
    int size = 6;
    int start = 0;
    int end = size - 1;
    int i = 0;

    while (i < size)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        if (arr[i] == 1)
        { // swap from right
            swap(arr[i], arr[end]);
            end--;
            i++;
        }
    }
    // print
    for (auto value : arr)
    {
        cout << value << " " << endl;
    }
}