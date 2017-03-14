/*
Uneti 5 celih brojeva sa standardnog ulaza.
Koriscenjem STL algoritma sortirati brojeve u rastucem redosledu
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    // Unos 5 brojeva
    cout << "Unesite 5 brojeva: ";
    for (int i = 0; i < 5; i++) {
        int t;
        cin >> t;
        v.push_back(t); // Dodavanje u vektor
    }

    // Pozivanje sort algoritma
    sort(v.begin(), v.end());

    // Ispis
    cout << "Sortiran niz" << endl;
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
