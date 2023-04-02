#include <bits/stdc++.h>
using namespace std;
void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << "Vipin" << endl;
        printName(i+1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    printName(1, n);
}