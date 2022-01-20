#include "iostream"

using namespace std;

int main() {
    int a[101][101], n, p = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (j > n - i + 1)
                p *= a[i][j];

    cout << p;
}