#include <bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int count = 0;
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        count = count + 1;
        n = n / 10;
    //    sum = sum + n;
        product = product * n;
    }
    return product;
}
int subtractProductAndSum(int n)
{
    return countDigits(n);
}
int main()
{
    int n;
    cin >> n;
    cout << subtractProductAndSum(n) << endl;
}