#include <iostream>
using namespace std;

int main()
{ // in case we have odd no.
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int start = 0;
    int end = size - 1;
    while (true)
    {
        if (start > end)
            break;
        if (start == end)
        {
            cout << arr[start] << "";
        }
        else
        {
            cout << arr[start] << "";
            cout << arr[end] << "";
        }
        start++;
        end--;
    }
    return 0;
}
