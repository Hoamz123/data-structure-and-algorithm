#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[101];
vector<int> used(101,0);
void bfs(int u){
    used[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int u = q.front();q.pop();
        cout << u << " ";
        for(int v:adj[u]){
            if(!used[v]){
                used[v] = 1;
                q.push(v);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0;i<m;i++){
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
}
/*
10 9
1 2
1 3
1 4
2 5
2 7
3 6
4 8
5 9
7 10*/