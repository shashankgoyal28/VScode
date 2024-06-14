#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 40, 60, 70};

    // print all pairs;
    // outer loop will transverse for each element;
    for (int i = 0; i < arr.size(); i++)
    {

        cout << "we are at element" << arr[i];
        int element = arr[i];
        // for every element,will transverse on aage wale elements.
        for (int j = i + 1; j < arr.size(); j++)

        {
            cout << "pair" << element << "with" << arr[j] << endl;
            // cout<<"("<< element <<","<<arr[j]<<")"<<endl;
        }
    }