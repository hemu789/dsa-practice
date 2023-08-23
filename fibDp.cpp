#include <bits/stdc++.h>
using namespace std;

int fib(int n, int *arr)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (arr[n] != 0)
    {
        // already stores
        return arr[n];
    }

    int output = fib(n - 1, arr) + fib(n - 2, arr);

    arr[n] = output;
    return output;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int(n + 1);

    for (int i = 0; i <= n; i++)
    {
        arr[i] = 0;
    }
    cout << fib(n, arr) << endl;
}