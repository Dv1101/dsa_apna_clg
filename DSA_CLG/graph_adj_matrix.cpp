#include <iostream>

const int MAX_SIZE = 10; // Maximum number of vertices in the graph

void initializeGraph(int graph[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            graph[i][j] = 0; // Initialize all elements to 0 (no edges)
        }
    }
}

void addEdge(int graph[][MAX_SIZE], int source, int destination) {
    // Assuming the graph is undirected, we set both source -> destination and destination -> source as 1 (indicating an edge)
    graph[source][destination] = 1;
    graph[destination][source] = 1;
}

void printGraph(int graph[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << graph[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int graph[MAX_SIZE][MAX_SIZE];
    int size; // Number of vertices in the graph

    std::cout << "Enter the number of vertices in the graph: ";
    std::cin >> size;

    initializeGraph(graph, size);

    int edges;
    std::cout << "Enter the number of edges: ";
    std::cin >> edges;

    for (int i = 0; i < edges; i++) {
        int source, destination;
        std::cout << "Enter edge " << i + 1 << " (source destination): ";
        std::cin >> source >> destination;
        addEdge(graph, source, destination);
    }

    std::cout << "Adjacency Matrix:\n";
    printGraph(graph, size);

    return 0;
}