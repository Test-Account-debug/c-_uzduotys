#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fd("temperatura.txt");
    ofstream fr("vidutine.txt");

    int temperatros[24];
    int suma = 0;
    for (int i = 0; i < 24; ++i) {
        if (!(fd >> temperatros[i])) {
            cerr << "Klaida: nepakanka duomenu temperatura.txt" << endl;
            return 1;
        }
        suma += temperatros[i];
        if (fd.peek() == ',') {
            fd.get();
        }
    }

    double vidutine = (double)suma / 24;
    fr << "Vidutine temperatura: " << fixed << setprecision(2) << vidutine << endl;
    fr << "Valandos kai buvo zemesne: ";

    bool first = true;
    for (int i = 0; i < 24; i++) {
        if (temperatros[i] < vidutine) {
            if (!first) {
                fr << ", ";
            }
            fr << (i + 1);
            first = false;
        }
    }
    fr << endl;

    fd.close();
    fr.close();
    
    return 0;
}