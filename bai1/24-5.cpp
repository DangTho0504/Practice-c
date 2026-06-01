#include <iostream>
using namespace std;
int main(){
int M[6];
for (int i = 0; i < 6; i++)
{
    cout << "M[" << i << "] = ";
    cin >> M[i];
}
// Tăng dần mảng không dùng thư viện
for (int i = 0; i < 6; i++)
{
    cout << M[i] << " ";
}

return 0;
}