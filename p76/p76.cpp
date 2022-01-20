#include "iostream"

using namespace std;

int verifMultime(int V[], int n, int x, int pos) {
    for (int i = 1; i <= n; i++)
        if (x == V[i] && i != pos)
            return 0;
    return 1;
}

int main() {
    int n, V[101] = {0}, cM, M[101] = {0};
    bool multime = true;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> V[i];

    for (int i = 1; i <= n; i++)
        if (verifMultime(V, n, V[i], i) == 0) {
            multime = false;
            break;
        }

    if (multime = true)
        cout << "DA";
    else
        cout << "NU";
}