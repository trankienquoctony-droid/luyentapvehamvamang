#include <iostream>
#include <iomanip>
using namespace std;
int timMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "Gia tri lon nhat trong mang la: " << max<<endl;
    return max;
}
int timMin(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Gia tri nho nhat trong mang la: " << min<<endl;
    return min;
}
double trungB(int a[], int n)
{
    double kq, tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    kq = tong / n;
    cout << fixed << setprecision(2);
    cout << "Ket qua trung binh: " << kq<<endl;
    return kq;
}
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Moi nhap gia tri thu " << i + 1 << endl;
        cin >> a[i];
    }
}
int main()
{
    int n;
    int a[100];
    cout << "Moi nhap do dai mang: ";
    cin >> n;
    nhap(a, n);
    timMin(a, n);
    timMax(a, n);
    trungB(a, n);
}