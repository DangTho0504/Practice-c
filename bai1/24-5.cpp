#include <iostream>
using namespace std;
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
cout << "Mang sau khi tang dan:\n";
for (int i = 0; i < n; i++)
{
   cout << M[i] << " ";

}
int a;
cout << "Nhap so a = ";
cin >> a;
for (int i = 0; i < n; i++)
{
    if (M[i] == a)
    {
        /* code */
    }
    
}


return 0;
}