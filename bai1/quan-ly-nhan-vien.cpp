#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct NhanVien
{
    int id;
    string ten;
    int tuoi;
    string phongBan;
    float luong;

};
void nhapNhanVien(NhanVien &nv){
    cout << "Nhap ID nhan vien: ";
    cin >> nv.id;
    cin.ignore();

    cout << "Nhap ho va ten: ";
    getline(cin, nv.ten);

    cout << "Nhap tuoi: ";
    cin >> nv.tuoi;
    cin.ignore();

    cout << "Nhap phong ban: ";
    getline(cin, nv.phongBan);

    cout << "Nhap luong: ";
    cin >> nv.luong;
}
void xuatNhanVien(NhanVien nv){
    cout << left
         << setw(10) << nv.id
         << setw(25) << nv.ten
         << setw(10) << nv.tuoi
         << setw(20) << nv.phongBan
         << setw(15) << nv.luong
         << endl;
}
void nhapDanhSach(NhanVien ds[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Nhan vien thu: " << i+1 <<"\n" ;
        nhapNhanVien(ds[i]);
    }
}
void xuatDanhSach(NhanVien ds[], int n){
     cout << left
     << setw(10) << "ID"
     << setw(25) << "Ten"
     << setw(10) << "Tuoi"
     << setw(20) << "Phong Ban"
     << setw(15) << "Luong"
     << endl;
    for (int i = 0; i < n; i++)
    {
        xuatNhanVien(ds[i]);
    }
    
}
int timViTriNhanVienTheoID(NhanVien ds[], int n, int maID){
    for (int i = 0; i < n; i++)
    {
         if(ds[i].id == maID)
        {
            return i;
    }
    return -1;
}




int main(){
cout << "==== QUAN LY NHAN VIEN ====\n";
int n;
NhanVien ds[1000];
cout << "Nhap so luong nhan vien: ";
cin >> n;
nhapDanhSach(ds,n);
 cout << "\n===== DANH SACH NHAN VIEN =====\n";
xuatDanhSach(ds,n);

return 0;
}