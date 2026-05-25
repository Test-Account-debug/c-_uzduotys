#include <bits/stdc++.h>

using namespace std;

int main() {
    int dienos [] = {10, 20, 0, 0, 0, 45, 25, 30, 50, 25};
    int suma = 0;
    int nelyjusiu_dienu = 0;
    for (int i = 0; i < 10; i++) {
        suma += dienos[i];
        if (dienos[i] == 0) {
            nelyjusiu_dienu++;
        }
    }
    cout << "Is viso iskrito krituliu (mm): " << suma << endl;
    cout << "Nelyjo (dienas): " << nelyjusiu_dienu << endl;
    cout << "Vidutiniskai kiekviena lietinga diena iskrito krituliu (mm): " << suma / (10 - nelyjusiu_dienu) << endl;
    
    return 0;
}