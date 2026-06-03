#include <iostream>
using namespace std;
int main()
{
    int n;
    // 1. Vòng lặp bắt nhập lại nếu n <= 0
    do
    {
        cout << "Nhap n: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Vui long nhap lai vì n < 0.\n";
        }
    } while (n <= 0);
    // 2. Kiểm tra số nguyên tố ( n > 1, n chia hết cho chính nó)
    bool soNguyenTo = true;
    if (n == 1)
    {
        soNguyenTo = false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            soNguyenTo = false;
        }
    }
    if (soNguyenTo)
    {
        cout << n << " la so nguyen to";
    } else {
        cout << n << " khong phai so nguyen to";
    }
// 3. Tìm ước chung lớn nhất của a , b
int a, b;
cout << "nhap a : ";
cin >> a;
cout << "nhap b : ";
cin >> b;
    for (int i = 0; i < a; i++)
    {
       if (a % i == 0)
       {
        
       }
       
    }
    
}