#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    ifstream fd("krituliai.txt");
    ofstream fr("krituliaiviso.txt");
    int n, k;
    double p, vkd, kv;
    double total = 0.0;

    for(int i = 0; i < n; i++){
        if(!(fd >> k)) break;
        kv = 0.0;
        for(int j = 0; j < k; j++){
            if(!(fd >> p)) p = 0.0;
            kv += p;
        }
        vkd = kv / k;
        fr << fixed << setprecision(2) << vkd << endl;
        total += kv;
    }

    fr << "Viso " << fixed << setprecision(2) << total << endl;

    fd.close();
    fr.close();

    return 0;
}