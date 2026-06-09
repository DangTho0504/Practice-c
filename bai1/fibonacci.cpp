#include <iostream>
using namespace std;

int findIndexFibonacci(int value) {
    int a = 0;
    int b = 1;
    if (value == 0) return 0;
    
    if (value == 1) return 1;
    
    for (int i = 0; i < 1000; i++)
    {
        int c = a+b;
        if (value == c )
        {
          return i;
        }
        a = b;
        b = c;
    }
    return -1;
}
// 
bool isFibonacciNumber(int number){

}
void inDayFibonacci(int x){
    int a = 0;
    int b = 1;
    for (int i = 0; i < x; i++)
    {
        cout << a << " ";
        int c = a+b;
        a = b;
        b = c;
    }
}
int main()
{
    int x;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Day Fibonacci: ";
    inDayFibonacci(x);
    cout << endl;
    int value;
    cout << "Nhap gia tri = ";
    cin >> value;
    bool fibonacci = false;
    cout << boolalpha;
    if (fibonacci)
    {
        cout << fibonacci << "\n";
        cout << value << " co trong day Fibonacci";
    }
    else
    {
        cout << fibonacci << "\n";
        cout << "Trong day Fibonacci khong co " << n;
    }

    return 0; // 0, False, -1 ,
}

// find Index 
// hàm trả int, 

/// int findIndexFibonacci() {}





