#include <iostream>
using namespace std;

int main()
{
    int arr_1[] = {2, 4, 6, 8};
    int size_1 = 4;
    int arr_2[] = {1, 3, 7};
    int size_2 = 3;
    vector<int> arr;
    for (int i = 0; i < size_1; i++)
    {
        arr.push_back(arr_1[i]);
    }
    for (int i = 0; i < size_2; i++)
    {
        arr.push_back(arr_2[i]);
    }
    // printing the answer
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "";
    }
}