#include <iostream>
using namespace std;

void xepLoai(float diem) {
    if (diem >= 8.5) cout << "Gioi";
    else if (diem >= 7.0) cout << "Kha";
    else if (diem >= 5.0) cout << "Trung binh";
    else cout << "Yeu";
}

void inBangXepLoai(float diem[], int n) {
    int demGioi = 0;
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ": " << diem[i] << " - ";
        xepLoai(diem[i]);
        cout << endl;
        if (diem[i] >= 8.5) demGioi++;
    }
    cout << "So sinh vien Gioi: " << demGioi;
}

int main() {
    int n;
    cin >> n;
    float diem[100];
    for (int i = 0; i < n; i++) {
        cin >> diem[i];
    }
    inBangXepLoai(diem, n);
    return 0;
}