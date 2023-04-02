/*
//
// Created by cho on 23. 4. 2.
// MST. Kruskal 또는 Prim
#include <iostream>
#include <queue>

using namespace std;

int m, n, x, y, z;


int main(){
    cin >> m >> n;
    while (m != 0 && n != 0){
        int res = 0;
        vector<vector<pair<int, int>>> edges(200000);
        for (int i = 0; i < n; ++i) {
            cin >> x >> y >> z;
            edges[x].emplace_back(z, y);
            edges[y].emplace_back(z, x);
            res += z;
        }
        bool *visited = new bool[m];
        fill(visited, visited + m, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
        q.emplace(0, 0);
        while (!q.empty()){
            pair<int, int> cur = q.top();
            q.pop();
            if (visited[cur.second])
                continue;
            visited[cur.second] = true;
            res -= cur.first;

            for (pair<int, int> adv : edges[cur.second]) {
                if (!visited[adv.second])
                    q.emplace(adv);
            }
        }

        cout << res << "\n";
        
        cin >> m >> n;
    }

    return 0;
}
*/
