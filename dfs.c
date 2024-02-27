// Check connectivity of a given graph using DFS method

#include <stdio.h>

#define MAX 100

void dfs(int graph[][MAX], int v, int visited[])
{
    int i;
    visited[v] = 1;
    for (i = 0; i < MAX; i++)
    {
        if (graph[v][i] && !visited[i])
            dfs(graph, i, visited);
    }
}

int isConnected(int graph[][MAX], int n)
{
    int visited[MAX] = {0};
    dfs(graph, 0, visited);
    for (int i = 0; i < n; i++)
        if (!visited[i])
            return 0;
    return 1;
}

int main()
{
    int graph[MAX][MAX] = {{0, 1, 1, 0}, {1, 0, 1, 0}, {1, 1, 0, 1}, {0, 0, 1, 0}};
    int n = 4;
    if (isConnected(graph, n))
        printf("\nThe graph is connected");
    else
        printf("\nThe graph is not connected");
}

