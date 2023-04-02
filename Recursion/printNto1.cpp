#include <bits/stdc++.h>
using namespace std;
void printNum(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        cout << i << "  ";
        printNum(i - 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    printNum(n, n);
}

// Using Bachtracking

#include <bits/stdc++.h>
using namespace std;
void printNum(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << "  ";
        printNum(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    printNum(n);
}