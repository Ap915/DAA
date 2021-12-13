/* Given a (directed/undirected) graph,design an algorithm& implement it using a program to find if a path exist b/w the 
two given vertices or not*/
#include<bits/stdc++.h>
using namespace std;
bool findpath(int src,int dest,vector<vector<int>> &graph)
{
    if(src==dest)
        return true;
    int n=graph.size();
    vector<bool>visited(n,false);
    visited[src]=true;
    stack<int> s;
    s.push(src);
    while(!s.empty()){
        int a=s.top();
        s.pop();
        for(int x:graph[a]){
            if(x==dest)
                return true;
            if(!visited[x]){
                visited[x]=true;
                s.push(x);
            }
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    if(findpath(s,d,graph)){
        cout<<"yes path exist";
    }
    else{
        cout<<"no such path exist";
    }
    return 0;
}
