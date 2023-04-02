
#include <bits/stdc++.h>
using namespace std;
bool ArmstrongNo(int n)
{
    int num = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        n = n / 10;
    }
    int ans = 0;
    while (n != 0)
    {
        int last = n % 10;
        ans = ans + pow(count, last);
        n = n / 10;
    }
    return (ans == num);
}
int main()
{
    int n;
    cin >> n;
    if (ArmstrongNo(n))
    {
        cout << "Yes!!" << endl;
    }
    else
    {
        cout << "No!!" << endl;
    }
}