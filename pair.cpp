#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, pair<int, int>> p = {1, {1, 2}};

    cout << "The first element = " << p.first << endl;
    cout << "The first of second element = " << p.second.first << endl; // Fix
    cout << "The second of second element = " << p.second.second << endl;

    return 0;
}
