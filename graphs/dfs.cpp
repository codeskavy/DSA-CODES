#include<iostream>
#include<stack>
using namespace std;
const MAX=6;

void dfs(int graph[MAX][MAX],int numnodes,int start){

    bool visited[MAX]={false};
    stack<int>st;
    st.push(startnode);
    visited[startnode]=true;
    

    while(!st.empty()){
        int currentnode=st.top();
        st.pop();

        cout<<currentnode<<" ";

        for(int neighbour=0;neighbour<numnodes;neighbour++){
            if (graph[currentNode][neighbor] && !visited[neighbor]) {
                st.push(neighbor);  
                visited[neighbor] = true;
        }
    }
    }
int main() {
   
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {1, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0}
    };

    int numNodes = MAX_NODES;

    cout << "DFS starting from node 0:" << endl;
    dfs(graph, numNodes, 0);

    return 0;
}