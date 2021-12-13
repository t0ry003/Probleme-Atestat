#include "cmath"
#include "iostream"

using namespace std;

float med_arit(int a[], int n) {
    float s = 0;
    for (int i = 1; i <= n; i++)
        s += a[i];
    return s / n;
}

int main() {
    int v[101], n, s;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    float ma = med_arit(v, n);

    n++;
    for (int i = n; i >= n / 2; i--)
        v[i + 1] = v[i];

    v[n / 2] = ma;

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}