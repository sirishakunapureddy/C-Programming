#include <stdio.h>
#include <stdbool.h>
#define MAX 5

int adjMatrix[MAX][MAX] = {0};  
bool visited[MAX];               
void addEdge(int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;  
}
void BFT_matrix(int start) {
    bool visited[MAX] = {false};
    int queue[MAX], front = 0, rear = 0;

    printf("BFT (Adjacency Matrix): ");
    queue[rear++] = start;
    visited[start] = true;

    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);
        int i;
        for (i = 0; i < MAX; i++) {
            if (adjMatrix[node][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = true;
            }
        }
    }
    printf("\n");
}

// DFT function using adjacency matrix
void DFT_matrix(int node) {
    if (!visited[node]) {
        visited[node] = true;
        printf("%d ", node);
         int i;
        for (i = 0; i < MAX; i++) {
            if (adjMatrix[node][i] == 1 && !visited[i]) {
                DFT_matrix(i);
            }
        }
    }
}

int main() {
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 4);
    BFT_matrix(0);
    printf("DFT (Adjacency Matrix): ");
    int i;
    for (i = 0; i < MAX; i++) visited[i] = false; 
    DFT_matrix(0);
    printf("\n");

    return 0;
}
