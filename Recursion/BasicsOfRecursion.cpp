/* RECURSION: When a function calls itself, until a specific condn is met. */
// This is an example of recursive code !

#include <bits/stdc++.h>
using namespace std;
void print()
{
    cout << "hello" << endl;
    print();
}
int main()
{
    print();
}

// Example of Recursive code with base condn
// Base Condn: Specific condition at which the recursion breaks!
