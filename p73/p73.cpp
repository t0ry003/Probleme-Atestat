#include "iostream"

using namespace std;

int main() {
    int u[101], v[101], n, pScal = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> u[i];

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        pScal += u[i] * v[i];

    cout << pScal;
}