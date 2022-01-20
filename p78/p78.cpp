#include "iostream"

using namespace std;

int main() {
    int n, m, a[101][101], x, y;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    cin >> x >> y;

    for (int j = 1; j <= n; j++)
        swap(a[x][j], a[y][j]);

    for (int i = 1; i <= n; i++)
        swap(a[i][x], a[i][y]);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}