#include <iostream>
#include <cmath>
using namespace std;
bool laSNT(int n)
{
    if(n<=1)
    {
        return false;
    }
    bool ketQua = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            ketQua = false;
            break;
        }
    }
    return ketQua;
}
void inSNT(int a[], int n)
{
    cout << "Cac so trong day la so nguyen to: " ;
    for (int i = 0; i < n; i++)
    {
        if (laSNT(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Moi nhap do dai mang: ";
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Moi nhap thu tu thu " << i + 1 << ":";
        cin >> a[i];
    }
    inSNT(a, n);
}