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
    int min = M[0][1];
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
    cout << n << " co trong mang, xuat hien " << dem;
}

return 0 ;
}