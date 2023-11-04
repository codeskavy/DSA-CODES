//in transpose matrix the direction of the vertexes are just reversed, everything else is same
#include<bits/stdc++.h>
using namespace std;


//function to add vertex from vertex source to destination
void addegde(vector<int> adj[],int src,int des){

    adj[src].push_back(des);//adding destination vertex to the list of neighbours

}

void display(vector<int> adj[],int v){

    for(int i=0;i<v;i++){
        cout<<i<<"-->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        cout<<'\n';
        }
    }
}

void transposeG(vector <int> adj[],vector <int> transpose[],int v){
    for(int i=0;i<v;i++)
        for(int j=0;j<adj[i].size();j++)
            addegde(transpose,adj[i][j],i);
}

int main(){

    int v=5;
    vector <int> adj[v];
    addegde(adj, 0, 1);
    addegde(adj, 0, 4);
    addegde(adj, 0, 3);
    addegde(adj, 2, 0);
    addegde(adj, 3, 2);
    addegde(adj, 4, 1);
    addegde(adj, 4, 3);

    vector <int> transpose[v];
    transposeG(adj,transpose,v);
    display(transpose,v);
    return 0;
}

// The time complexity of the addegde function is O(1), as it simply appends an element to the vector.

// The time complexity of the displayGraph function is O(V + E), where V is the number of vertices and E is the number of edges, as it needs to traverse the adjacency list of each vertex and print out the adjacent vertices.
