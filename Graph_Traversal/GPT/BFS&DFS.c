#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 100

// Queue data structure for BFS
struct Queue {
    int items[MAX_VERTICES];
    int front, rear;
};

// Graph data structure
struct Graph {
    int vertices;
    struct Queue* queue;
    int** adjacency_matrix;
    bool* visited;
};

// Function to create a new queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Function to enqueue a vertex into the queue
void enqueue(struct Queue* queue, int item) {
    if (queue->rear == MAX_VERTICES - 1) {
        printf("Queue is full.\n");
    } else {
        if (queue->front == -1) {
            queue->front = 0;
        }
        queue->rear++;
        queue->items[queue->rear] = item;
    }
}

// Function to dequeue a vertex from the queue
int dequeue(struct Queue* queue) {
    int item;
    if (queue->front == -1) {
        printf("Queue is empty.\n");
        item = -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}

// Function to create a new graph with a given number of vertices
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    graph->queue = createQueue();

    graph->adjacency_matrix = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++) {
        graph->adjacency_matrix[i] = (int*)malloc(vertices * sizeof(int));
    }

    graph->visited = (bool*)malloc(vertices * sizeof(bool));
    for (int i = 0; i < vertices; i++) {
        graph->visited[i] = false;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int start, int end) {
    graph->adjacency_matrix[start][end] = 1;
    graph->adjacency_matrix[end][start] = 1;
}

// Function to perform BFS
void bfs(struct Graph* graph, int start) {
    graph->visited[start] = true;
    printf("Visited %d\n", start);

    enqueue(graph->queue, start);

    while (graph->queue->front != -1) {
        int current_node = dequeue(graph->queue);

        for (int i = 0; i < graph->vertices; i++) {
            if (graph->adjacency_matrix[current_node][i] == 1 && !graph->visited[i]) {
                graph->visited[i] = true;
                printf("Visited %d\n", i);
                enqueue(graph->queue, i);
            }
        }
    }
}

int main() {
    struct Graph* graph = createGraph(6);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);

    printf("Breadth-First Traversal starting from vertex 0:\n");
    bfs(graph, 0);

    return 0;
}
