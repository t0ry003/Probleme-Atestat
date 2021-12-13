#include "iostream"

using namespace std;

int main() {
    int v[101], n, contor = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i < n; i++)
        if (v[i] == v[i + 1])
            contor++;

    cout << contor;
}