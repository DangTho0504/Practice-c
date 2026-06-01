#include <iostream>
#include <algorithm>
using namespace std;
int main(){

//     int M9[] = {10,20,30,40,50,60,70,80,90,99};
//     int arraysize = size(M9);
//     cout <<"Chieu dai mang = " << arraysize << endl;
//     for (int i = 0; i < size(M9); i++)
// {
//     cout << M9[i] << " ";
// }
// NHập mảng
int M[4];
for (int i = 0; i < size(M); i++)
{
    cout << "M[" << i << "] = ";
    cin >> M[i];
}
// Xuất mảng
for (int i = 0; i < size(M); i++)
{
    cout << M[i] << " ";
}
cout << endl;
// Sắp xếp mảng tăng dần (sort) , giảm dần (reserve)
sort( M, M + size(M) );
cout << "Mang tang dan: ";
for (int i = 0; i < size(M); i++)
{
    cout << M[i] << " ";
}
cout << endl;
reverse( M, M + size(M) );
cout << "Mang giam dan: ";
for (int i = 0; i < size(M); i++)
{
    cout << M[i] << " ";
}

// Tính tổng phần tử trong mảng
cout << endl;
int tong = 0;
for (int i = 0; i < size(M); i++)
{
    tong += M[i];
}
cout << "Sum = " << tong << endl; 
// Nhập một số bất kì, kiểm tra số đó có trong mảng hay không và nếu có thì có bao nhiêu số 
int n, dem = 0;
cout << "Nhap n: ";
cin >> n;
for (int i = 0; i < size(M); i++)
{
    if (n == M[i]){  
        dem++;
    }  
 }
if (dem == 0)
{
   cout << n << " khong co trong mang";
}
else{
    cout<< n << " xuat hien " << dem << " trong mang";
}



return 0;
}