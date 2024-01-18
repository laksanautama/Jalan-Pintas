#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<string, string> path;
int main() {
    int n = 5;
    map<char, set<char>>TemukanKoneksiPenting;

    char nodes[] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < n; ++i) {
        TemukanKoneksiPenting[nodes[i]] = set<char>();
    }

    // Input jalur
    cout << "Jumlah n = " << n << endl;
    cout << "Output nya adalah" << endl;

    char paths[][2] = {{'A', 'B'}, {'B', 'A'}, {'B', 'C'}, {'C', 'B'}, {'D', 'E'}};

    for (int i = 0; i < sizeof(paths) / sizeof(paths[0]); ++i) {
        char start = paths[i][0];
        char end = paths[i][1];
        TemukanKoneksiPenting[start].insert(end);

        // Output jalur
        cout << i + 1 << ". " << start << "," << end << endl;
    }
    // Mencari koneksi penting
    cout << "Jalur penting: ";
    for (auto it = TemukanKoneksiPenting.begin(); it != TemukanKoneksiPenting.end(); ++it){
        char node = it->first;
        set<char> neighbors = it->second;

        // Memeriksa koneksi penting
        if (neighbors.size() > 1) {
            cout << "[";
            cout << node;
            for (char neighbor : neighbors) {
                cout << ", " << neighbor;
            }
            cout << "] ";
        }
    }
    cout << "adalah koneksi penting" << endl;

return 0;
}


