#include <bits/stdc++.h>
using namespace std;
int arr[5]; // --> [0, 0, 0, 0, 0]
int main()
{
    int n;
    int arr[5]; //-->   [ Any garbage value  will be stored here]
    // To take input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // To take output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}