#include <bits/stdc++.h>
using namespace std;
 
 class graph{
    int v;//no. of vertices
    vector<list<int>> adj;//pointer to array containing adjacency list

    public:
    //constructor
    graph(int v);
    //function to add edge
    void addegde(int v,int w);
    //prints bfs traversal for source s
    void bfs(int s);
 };

graph::graph(int v){
    this->v=v;
    adj.resize(v);
}

void graph::addegde(int v,int w){
    adj[v].push_back(w);
}

void graph::bfs(int s){
    //marks all the vertices as not visited
    vector <bool> visited;
    visited.resize(v,false);

    //creates a queue for bfs
    list<int> queue;

    visited[s]=true;
    queue.push_back(s);

    while(!queue.empty()){
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();

        for(auto adjacent: adj[s]){
            if(!visited[adjacent]){
                visited[adjacent]=true;
                queue.push_back(adjacent);            }
        }
    }
}

int main()
{
    // Create a graph given in the above diagram
    graph g(4);
    g.addegde(0, 1);
    g.addegde(0, 2);
    g.addegde(1, 2);
    g.addegde(2, 0);
    g.addegde(2, 3);
    g.addegde(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);
 
    return 0;
}