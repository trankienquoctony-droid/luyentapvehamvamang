#include <iostream>
using namespace std;

void banDau(int n, int a[])
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int them(int n, int pos, int value, int a[])
{
    if (pos < 0 || pos > n)
    {
        return n;
    }
    else
    {
        for (int i = n; i >= pos + 1; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = value;
        return n + 1;
    }
}
int xoa(int n, int vt, int a[])
{
    if (vt < 0 || vt > n)
    {
        return n;
    }
    else
    {
        for (int i = vt; i < n - 1; i++)
        {
            a[i] = a[i+1];
        }
        return n - 1;
    }
}

int main()
{
    int n;
    int a[100];
    cout << "Moi nhap so luong day: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Moi nhap so thu " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Day la day ban dau: "<<endl;
    banDau(n, a);
    ////////////////////////////////////////////////////////
    int pos;
    cout << "Nhap vi tri ma ban muon them, vi tri thu: "<<endl;
    cin >> pos;
    int value;
    cout << "Nhap gia tri ma ban muon them: "<<endl;
    cin >> value;
    cout << "Gia tri day sau khi doi: "<<endl;
    n = them(n, pos - 1, value, a);
    banDau(n, a);
    ///////////////////////////////////////////////////////
    int vt;
    int temp;
    cout << "Nhap vi tri ma ban muon xoa: "<<endl;
    cin >> vt;
    cout << "Day so sau khi xoa: ";
    n = xoa(n, vt - 1, a);
    banDau(n, a);
}
