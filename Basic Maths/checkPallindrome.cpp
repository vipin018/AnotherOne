#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int last = n % 10;
        revNum = (revNum * 10) + last;
        n = n / 10;
    }
    return revNum;
}
int main()
{
    int n;
    cin >> n;
    if (reverseNumber(n) == n)
    {
        cout << n << " is Pallindrome" << endl;
    }
    else
    {
        cout << n << " is not pallindrome" << endl;
    }
}