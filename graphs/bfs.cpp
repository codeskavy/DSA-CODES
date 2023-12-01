#include<iostream>
#include<queue>
using namespace std;

const int MAX= 5;//Number of vertices;

//function for bfs
void bfs(int graph[MAX][MAX],int vertices,int start){
    bool visited[MAX]={false};

    queue<int>bfsqueue;
    visited[start]=true;
    bfsqueue.push(start);
    int i=0;
    while(!bfsqueue.empty()){
        int currentvertex=bfsqueue.front();
        cout<<currentvertex<<endl;
        bfsqueue.pop();

        if(graph[currentvertex][i]==1 && !visited[i]){
            visited[i]=true;
            bfsqueue.push(i);
        }
    }
}


int main() {

    int graph[MAX][MAX]={
         {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 1, 0},
        {0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0}
    };

    int vertices=MAX;
    int start=0;
    bfs(graph, vertices, start);
    return 0;
}