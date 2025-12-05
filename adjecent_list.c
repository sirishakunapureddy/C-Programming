#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5
struct Node {
    int vertex;
    struct Node* next;
};

struct Node* adjList[MAX]; 
bool visited[MAX];         
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}
void addEdge(int u, int v) {
    struct Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;

    newNode = createNode(u);  
    newNode->next = adjList[v];
    adjList[v] = newNode;
}
void BFT_list(int start) {
    bool visited[MAX] = {false};
    int queue[MAX], front = 0, rear = 0;

    printf("BFT (Adjacency List): ");
    queue[rear++] = start;
    visited[start] = true;

    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        struct Node* temp = adjList[node];
        while (temp) {
            if (!visited[temp->vertex]) {
                queue[rear++] = temp->vertex;
                visited[temp->vertex] = true;
            }
            temp = temp->next;
        }
    }
    printf("\n");
}
void DFT_list(int node) {
    if (!visited[node]) {
        visited[node] = true;
        printf("%d ", node);

        struct Node* temp = adjList[node];
        while (temp) {
            if (!visited[temp->vertex]) {
                DFT_list(temp->vertex);
            }
            temp = temp->next;
        }
    }
}

int main() {
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 4);
    BFT_list(0);
    printf("DFT (Adjacency List): ");
    int i;
    for (i = 0; i < MAX; i++) visited[i] = false; 
    DFT_list(0);
    printf("\n");

    return 0;
}
