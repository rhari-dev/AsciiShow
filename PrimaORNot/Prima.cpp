#include <iostream>
using namespace std;

int main() {
    int n;
    bool prm = true;

    cout << "Masukkan bilangan = ";
    cin >> n;

    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            prm = false;
            break;
        }
    }

    if (prm)
        cout << n << " adalah bilangan prima" << endl;
    else
        cout << n << " bukan bilangan prima" << endl;

    return 0;
}
