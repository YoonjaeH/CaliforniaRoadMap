#include "Kruskal.h"

void Kruskal::makeDisjointSets(int num);
{
    this->n = num;
    parent = new int[n+1];
    max = new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        max[i] = 0;
        parent[i] = i;
    }
}
int Kruskal::find(int node)
{
    if (node != parent[node]) {
        parent[node] = find(parent[node]);
    }
    return parent[node];
}

void Kruskal::merge(int x, int y)
{
    x = find(x), y = find(y);
    
    if (max[x] > max[y]) {
        parent[y] = x;
    } else {
        parent[x] = y;
    }
    if (max[x] == max[y]) {
        max[y]++;
    }
}
  
double Kruskal::kruskalMST()
{
    int mst_wt = 0;
  
    // sort(data.begin(), data.end());

    makeDisjointSets(size);
  
    // vector< pair<int, data> >::iterator it;
    for (it=data.begin(); it!=data.end(); it++)
    {
        int nodeA = it->second.first;
        int nodeB = it->second.second;
  
        int pathA = find(nodeA);
        int pathB = find(nodeB);
  
        if (pathA != pathB)
        {
            mst_wt += it->first;
            merge(pathA, pathB);
        }
    }
  
    return mst_wt;
}