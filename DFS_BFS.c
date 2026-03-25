#include <stdio.h>

#define N 5

int graph[N][N] = {
    {0,1,0,1,0},
    {1,0,1,1,1},
    {0,1,0,0,0},
    {1,1,0,0,1},
    {0,1,0,1,0}
};

int visited[N];

void dfs(int node) {
    printf("%d ", node);
    visited[node] = 1;

    for (int i = 0; i < N; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int queue[N];
int front = 0, rear = 0;

void bfs(int start) {
    queue[rear++] = start;
    visited[start] = 1;

    while (front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (int i = 0; i < N; i++) {
            if (graph[node][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

void reset_visited() {
    for (int i = 0; i < N; i++) {
        visited[i] = 0;
    }
}

int main() {
    dfs(0);
    printf("\n");
    reset_visited();
    bfs(0);
    return 0;
}