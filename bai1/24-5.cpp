#include <iostream>
using namespace std;
void timMax(int M[], int n){
    int max = M[0];
    for (int i = 0; i < n; i++)
    {
        if (M[i] > max)
        {
            max = M[i];
        }
    }
    cout <<"So lon nhat: " << max;
}
void xuatMang(int M[], int n){
for (int i = 0; i < n; i++)
{
   cout << M[i] << " " ;
}
}
int timMin(int M[], int n){
    int min = M[0];
    for (int i = 0; i < n; i++)
    {
        if (M[i] < min)
        {
            M[i]=min;
        }
    }
    return min;
} 

int main(){
int n;
cout << "Nhap so phan tu trong mang: ";
cin >> n;
int M[100];
for (int i = 0; i < n; i++)
{
    cout << "M[" << i << "] = ";
    cin >> M[i];
}
 xuatMang(M,n);

for (int i = 0; i < n-1; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (M[i] > M[j])
        {
            int temp = M[i];
            M[i] = M[j] ;
            M[j] = temp;
        }
        }
    }
cout << endl;
int a; int dem = 0;
cout << "Nhap so a = ";
cin >> a;
bool found = false;
for (int i = 0; i < n; i++)
{
    if (M[i] == a)
    {
       found = true;
        cout << a << " xuat hien o vi tri " << i << endl;
        dem++;
    }  
}
if (found)
{
      cout << "True" << endl;
    cout << a << " xuat hien " << dem << " lan\n";
  
}
else
{
cout << "False" << endl;
    cout << a << " khong co trong mang\n";
    
}
cout << "Mang sau khi tang dan:\n";
for (int i = 0; i < n; i++)
{
   cout << M[i] << " ";
}
cout << endl;
timMax(M,n);
cout << "\nSo nho nhat: " << timMin(M,n);



return 0;
}