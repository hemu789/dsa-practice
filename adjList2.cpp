#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int V)
{

    for (int i = 0; i < V; i++)
    {
        for (auto x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void bfs(vector<int> adj[], int V, int s){
    vector<bool> visited(V+1, false); // bool array
    queue<int>q;
    visited[s] = true;
    q.push(s);
    // source work as a index for pushing 
    while(!q.empty()){
        int u = q.front(); // u is vertex
        q.pop();
        cout<<u<<" ";

        // adj of u vertex

        for(int V : adj[u]){
            if(visited[V] == false){
                visited[V] = true;
                q.push(V);
            }
        }

    }


}
int main()
{
    int V = 4;
    vector<int> adj[V]; // array of vector
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    print(adj,V);
    cout<<endl;

    cout<<"BFS TRAVRESAL "<<endl;
    int s=0; // source vertex
    bfs(adj,V,s);
}