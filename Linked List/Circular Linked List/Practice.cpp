// Sliding Window Maximum
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> v;
    for (int i = 0; i <= n - k; i++)
    {
        int Max = INT_MIN;
        for (int j = i; j < i + k; j++)
        {
            Max = max(Max, arr[j]);
        }
        v.push_back(Max);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}