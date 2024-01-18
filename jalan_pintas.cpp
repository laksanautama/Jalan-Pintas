#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<string, string> path;

void temukanKoneksiPenting(int n, const set<pair<char, char>>& jalur) {
    map<char, set<char>> graf;
//membuat graf dari jalur yang diberikan
    for(const auto& p : jalur){
    graf[p.first].insert(p.second);
    graf[p.second].insert(p.first);
}
// Menghitung derajat setiap node
    map<char, int> derajat;
    for (const auto& pair : graf) {
        derajat[pair.first] = pair.second.size();
}


}

int main(){

return 0;
}
