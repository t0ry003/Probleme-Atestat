#include "fstream"
#include "iostream"

using namespace std;

int main() {
    int c_nrImpare = 0, x;
    bool endl = false;
    ifstream f("NUMERE.TXT");
    ofstream g("PARE.TXT");

    while (f >> x) {
        if (x % 2 == 0) {
            g << x << '\n';
            endl = true;
        } else
            c_nrImpare++;
    }

    if (endl == false)
        g << '\n' << c_nrImpare;
    else
        g << c_nrImpare;
}