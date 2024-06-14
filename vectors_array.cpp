#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);
    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    // how do we print the element is this case!
    vector<int> brr(n, -101);
    // whenever you explicity mention that your arr has 10 elements then the size
    // and capacity both of them would be 10
    cout << "size of b" << brr.size() << endl;
    cout << "capacity of b" << brr.capacity() << endl;
    // print
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    // why have we changed the brackets here in this case!
    cout << "printing crr" << endl;
    // what is the error here ?
    vector<int> crr{10, 20, 30, 50};
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    vector<int> drr;
    cout << "vector drr is empty or not" << drr.empty() << endl;
    return 0;
}
