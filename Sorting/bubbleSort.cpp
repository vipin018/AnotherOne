#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
        for (int i = n - 1; i >= 0; i--)
        {
            int doSwap = 0;
            for (int j = 0; j <= i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    doSwap = 1;
                }
            }
            if (doSwap == 0)
            {
                break;
            }
        }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "Sorted Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}