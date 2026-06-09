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
int fibonacciAt(long index)
{
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= index; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    if (isFibonacciNumber(n))
    {
        cout << "TRUE\n";
    }
    else
    {
        cout <<"FALSE\n";
    }
    int vt = findIndexFibonacci(n);
    if (vt != -1)
    {
        cout << n << " o vi tri thu " << vt << endl;
    }
    else
    {
        cout << n << " khong phai so Fibonacci\n";
    }
    
    long index;
    cout << "Nhap index = ";
    cin >> index;
    cout << "Vi tri thu " << index << " la " <<fibonacciAt(index);
    return 0;
}