#include <iostream>
using namespace std;
double cong(double a, double b)
{
    return a + b;
}
double tru(double a, double b)
{
    return a - b;
}
double nhan(double a, double b)
{
    return a * b;
}
double chia(double a, double b)
{
    if (b == 0)
    {
        cout<<"Khong the chia cho 0";
        return 0;
    }
    else
    {
        return a / b;
    }
}
int main()
{
    int n;
    do
    {
        int a, b;
        cout << "Moi ban chon phep tinh: " << endl;
        cout << " 1. Phep cong " << endl;
        cout << " 2. Phep tru  " << endl;
        cout << " 3. Phep nhan " << endl;
        cout << " 4. Phep chia " << endl;
        cout << " 5. Thoat " << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "Moi ban nhap so: " ;
            cin >> a>> b;
            double kq1 = cong(a, b);
            cout << kq1<<endl;
            break;
        }
        case 2:
        {
            cout << "Moi ban nhap so: " << " ";
            cin >> a>> b;
            double kq2 = tru(a, b);
            cout << kq2<<endl;
            break;
        }
        case 3:
        {
            cout << "Moi ban nhap so: " << " ";
            cin >> a>> b;
            double kq3 = nhan(a, b);
            cout << kq3<<endl;
            break;
        }
        case 4:
        {
            cout << "Moi ban nhap so: " << " ";
            cin >> a>> b;
            double kq4 = chia(a, b);
            cout << kq4<<endl;
            break;
        }
        case 5:
        {
            cout << "Da thoat";
            return 0;
        }
        }
    } while (n > 0 && n < 6);
}