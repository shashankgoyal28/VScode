#include <iostream>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // we using the XOR operation here!
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size of arr (n)" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    // where findUnique is a function that we created
    int unique_element = findUnique(arr);
    cout << "unique_element is " << unique_element << endl;
    return 0;
}