#include <bits/stdc++.h>
using namespace std;
void printNum(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << "  ";
        printNum(i + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    printNum(1, n);
}

// Using Backtracking

#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        print(i - 1, n);
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    print(n, n);
}