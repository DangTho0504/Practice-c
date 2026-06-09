#include <iostream>
using namespace std;
int findIndexFibonacci(int value)
{
    if (value == 0)
        return 0;
    if (value == 1)
        return 1;
    int a = 0;
    int b = 1;
    for (int i = 2; i < 120; i++)
    {
        int c = a + b;
        if (c == value)
        {
            return i;
        }
        if (c > value)
        {
            return -1;
        }
        a = b;
        b = c;
    }
    return -1;
}
bool isFibonacciNumber(int number)
{
    return findIndexFibonacci(number) != -1;
}
int fibonacciAt(int index)
{
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    int a = 0;
    int b = 1;
    for (int i = 2; i < 1000; i++)
    {
        int c = a + b;
        return c;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int vt = findIndexFibonacci(n);
    if (vt != -1)
    {
        cout << n << " o vi tri thu " << vt << endl;
        ;
    }
    else
    {
        cout << n << " khong phai so Fibonacci\n";
    }
    if (isFibonacciNumber(n))
    {
        cout << n << " la so Fibonacci\n";
    }
    else
    {
        cout << n << " khong phia so Fibonacci\n";
    }
    int 
    return 0;
}