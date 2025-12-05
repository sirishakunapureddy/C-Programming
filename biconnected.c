#include <stdio.h> 
#include <stdlib.h>  
#define MAX 100  
int adj[MAX][MAX];    
int disc[MAX], low[MAX], parent[MAX];  
int stack[MAX][2], top = -1;            
int time = 0;  
void pushEdge(int u, int v) { 
    stack[++top][0] = u; 
    stack[top][1] = v; 
} 
void popEdges(int u, int v) { 
    printf("Biconnected component: "); 
    while (top >= 0) { 
        int x = stack[top][0]; 
        int y = stack[top][1]; 
        top--; 
        printf("(%d, %d) ", x, y); 
        if (x == u && y == v) { 
            break; 
        } 
    } 
    printf("\n"); 
} 
void BiconnectedDFS(int u, int n) { 
    disc[u] = low[u] = ++time;   
    int children = 0,v;  
    for (v = 0; v < n; v++) { 
        if (adj[u][v] == 1) {  
            if (disc[v] == -1) {   
                children++; 
                parent[v] = u; 
                pushEdge(u, v);  
                 BiconnectedDFS(v, n); 
                 low[u] = (low[u] < low[v]) ? low[u] : low[v]; 
                if ((parent[u] == -1 && children > 1) || (parent[u] != -1 && low[v] >= disc[u])) { 
                    popEdges(u, v); 
                } 
            } 
            else if (v != parent[u] && disc[v] < low[u]) { 
                low[u] = (low[u] < disc[v]) ? low[u] : disc[v]; 
                pushEdge(u, v);  // Store the edge u-v 
            } 
        } 
    } 
} 
void findBiconnectedComponents(int n) { 
    int i;
    for (i = 0; i < n; i++) { 
        disc[i] = -1; 
        low[i] = -1; 
        parent[i] = -1; 
    } 
     for (i = 0; i < n; i++) { 
        if (disc[i] == -1) { 
            BiconnectedDFS(i, n); 
            if (top != -1) { 
                popEdges(stack[top][0], stack[top][1]); 
            } 
        } 
    } 
} 
int main() { 
    int n, edges, u, v,i,j; 
    printf("Enter the number of vertices: "); 
    scanf("%d", &n); 
    printf("Enter the number of edges: "); 
    scanf("%d", &edges); 
     for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) { 
            adj[i][j] = 0; 
        } 
    } 
     printf("Enter the edges (u v):\n"); 
    for (i = 0; i < edges; i++) { 
        scanf("%d %d", &u, &v); 
        adj[u][v] = 1; 
        adj[v][u] = 1;  
    } 
     printf("Biconnected Components:\n"); 
    findBiconnectedComponents(n); 
 
    return 0; 
}
