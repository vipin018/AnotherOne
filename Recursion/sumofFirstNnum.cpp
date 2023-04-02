// Parametric Way

#include <bits/stdc++.h>
using namespace std;
void printSum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << " ";
        return;
    }
    else
    {
        printSum(i - 1, sum + i);
    }
}
int main()
{
    int n;
    cin >> n;
    printSum(n, 0);
}

// Functional Way

#include <bits/stdc++.h>
using namespace std;
int printSum(int n)
{
    if (n != 0)
    {
        return (n + printSum(n - 1));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << printSum(n) << " ";
}