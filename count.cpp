#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 2, 3, 4};
    int size = 7;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            count++;
        }
    }
    cout << "the total no. of 2's" << count << endl;
    return 0;
}