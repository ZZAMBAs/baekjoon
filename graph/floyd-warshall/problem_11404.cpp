/*
//
// Created by cho on 23. 5. 24.
//
#include <iostream>

using namespace std;

int n, m;
int cities[100][100];

int main(){
    fill(cities[0], cities[0] + 100 * 100, 100000 * 100 + 1);
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cities[i][i] = 0;

    for (int i = 0; i < m; ++i) {
        int s, e, w;
        cin >> s >> e >> w;
        cities[s - 1][e - 1] = min(cities[s - 1][e - 1], w);
    }

    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cities[i][j] = min(cities[i][j], cities[i][k] + cities[k][j]);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (cities[i][j] <= 100000 * 100)
                cout << cities[i][j] << " ";
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }
    return 0;
}*/
