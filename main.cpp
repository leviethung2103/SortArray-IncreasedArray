#include <iostream>
#define MAX 100
using namespace std;

void HoanVi(int &x,int &y);
void SapXepTangDan(int a[],int n);
void SapXepGiamDan(int a[],int n);
void NhapMang(int a[],int &n);
void XuatMang(int a[],int n);


int main(void)
{
    int n;
    int a[MAX];

    NhapMang(a,n);
    XuatMang(a,n);
    SapXepTangDan(a,n);
    cout << "\nMang sau khi sap xep tang dan";
    XuatMang(a,n);
    SapXepGiamDan(a,n);
    cout << "\nMang sau khi sap xep giam dan";
    XuatMang(a,n);

    return 0;
}

void HoanVi(int &x,int &y)
{

    int Temp=x;
    x=y;
    y=Temp;

}

void SapXepTangDan(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                HoanVi(a[i],a[j]);
        }
    }
}


void SapXepGiamDan(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
                HoanVi(a[i],a[j]);
        }
    }
}


void NhapMang(int a[],int &n)
{
    do
    {
       cout << "\nNhap so phan tu cua mang: " ;
       cin >> n;
       if (n<0 || n>MAX)
        cout << "\nMang khong hop le. Moi nhap lai" ;
    } while(n<0|| n> MAX);
    for (int i=0; i<n;i++)
    {
        cout << "\na["<<i <<"]= " ;
        cin  >> a[i];
    }
}
void XuatMang(int a[],int n)
{
    cout << "\n";
    for(int i=0; i<n;i++)
    {
        cout  << a[i] << "   ";
    }
}

