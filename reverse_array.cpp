#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    // these int start and int end indicate that our start is at index 0
    // and we end at index 7
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        // step1
        swap(arr[start], arr[end]);
        // start increment means moving onto the next extreme element
        start++;
        end--;
    }
    // printing array
    // this is the way we need to print the elements present in an array;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "";
    }

    return 0;
}