#include <iostream>
using namespace std;
bool soChan(int n){
    if ( n % 2 == 0)
    {
        return true;
    }
    return false;
}

bool soNguyenTo(int n){
    if ( n <= 1)
    {
        return false;
    }
   for (int i = 2; i < n; i++)
   {
    if ( n % i == 0)
    {
        return false;
    }
    }
   return true; 
}

void nhapMang(int M[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "M [" << i << "] = ";
        cin >> M[i];
    }
}
void xuatMang(int M[], int n){
for (int i = 0; i < n; i++)
    {
        cout << M[i] << " ";
    }
}
int maxMang(int M[], int n){
    int max = M [0];
    for (int i = 0; i < n; i++)
    {
        
    }
    
}
int main(){
    int n;
    int M[100];
    cout <<"Nhap n = ";
    cin >> n;
    if (soChan(n))
    {
        cout << n << " so chan\n";
    } else {
        cout << n << " so le\n";
    }
   
    if (soNguyenTo(n))
    {
        cout << n << " la so nguyen to\n";
    }
    else
    {
        cout << n << " khong la so nguyen to\n";
    }
cout << "Nhap mang:\n";
nhapMang(M,n);
cout << "Mang da nhap: ";
xuatMang(M,n);
    return 0 ;
}