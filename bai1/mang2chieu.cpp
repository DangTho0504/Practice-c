#include <iostream>
using namespace std;
int main () {
// nhập mảng
const int row = 3;
const int col = 3;
int M[row][col];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
       cout << "M[" << i << "][" << j <<"]" << " ";
       cin >> M[i][j] ;
    }
    cout << endl;
}
// xuất mảng
cout << "ket qua:" << endl;
 for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout << M[i][j] << "\t"; // "\t" cách nhau 1 tab
    }
    cout << endl;
}
//tìm số lớn nhất, xuất số đó 
    int max = M[0][0];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {   if (M[i][j] >= max)
    {
       max = M[i][j];
    }
    }  
}
cout << "so lon nhat: " << max << endl;
// tinh tong
int sum = 0;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
            sum += M[i][j];
    }
}
cout << "Sum = " << sum;
// Kiểm tra số có trong mảng không
cout << endl;
int n;
cout << "nhap n: ";
cin >> n;
int dem = 0;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {   if (n == M[i][j])
    {
        dem++;
    }
    }
}
if (dem == 0)
{
    cout << n << " khong co trong mang";
}
else {
    cout << n << " co trong mang, xuat hien " << dem << " lan";
}
// tính tổng từng hàng
cout << endl;
for (int i = 0; i < row; i++)
{
    int tong = 0;
    for (int j = 0; j < col; j++)
    {
            tong += M[i][j];
    }
    cout << "Tong hang " << i + 1 << " = " << tong << endl;
}
 // tính tổng cột
 cout << endl;
for (int j = 0; j < col; j++)
{
    int tong = 0;
    for (int i = 0; i < col; i++)
    {
            tong += M[i][j];
    }
    cout << "Tong cot " << j + 1 << " = " << tong << endl;
}
// ĐẾM SỐ NGUYÊN TỐ CÓ TRONG MA TRẬN
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
{   int p = M[i][j];
    bool isprime = true ;
    if (M[i][j] < 2)
{
    isprime = false;
    } else {
        for (int k = 2; k < M[i][j] ; k++)
        {
           if (p % k == 0)
           {
            isprime = false ;
            break;
           }  
        }
    } 
    if (isprime)
    {
        dem++;
    } 
 }
}
if (dem == 0)
{
    cout << "khong co so nguyen to";
} else{
    cout << "co " << dem << " so nguyen to";
}


return 0 ;
}