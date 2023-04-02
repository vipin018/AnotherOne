/*   Multiple Recursion call : Calling more than one function in a  function  is k/a Multiple Recursion Call
 Fibonacci Number :  FN is f(n)= f(n-1)+f(n-2)
 */
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);
    return last + slast;
}
int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci Number at " << n << "is " << fibonacci(n) << endl;
}