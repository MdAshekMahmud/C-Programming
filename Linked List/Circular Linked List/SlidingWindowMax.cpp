#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ngi[n];
    ngi[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && arr[st.top() <= arr[i]])
        {
            st.pop();
        }
        if (st.size() == 0)
            ngi[i] = n;
        else
            ngi[i] = st.top();
        st.push(i);
    }
    vector<int> ans;
    int j = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        if (j < i)
            j = i;
        int mx = arr[j];
        while (j < i + k)
        {
            mx = arr[j];
            if (ngi[i] >= i + k)
                break;
            j = ngi[j];
        }
        ans.push_back(mx);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}