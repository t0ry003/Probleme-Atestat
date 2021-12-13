#include "iostream"

using namespace std;

int main() {
    int v[101], n;
    bool sem = true;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i < n; i++)
        if (v[i + 1] < v[i]) {
            sem = false;
            break;
        }

    if (sem == true)
        cout << "DA";
    else
        cout << "NU";
}