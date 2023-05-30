#include <iostream>
#include <queue>
#include <stack>
#include <vector>

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

void depthFirstSearch(int graph[][MAX_SIZE], int size, int startVertex) {
    std::stack<int> stack;
    bool visited[MAX_SIZE] = { false };

    visited[startVertex] = true;
    stack.push(startVertex);

    while (!stack.empty()) {
        int currentVertex = stack.top();
        stack.pop();
        std::cout << currentVertex + 1 << " ";

        // Visit all the adjacent vertices of the current vertex
        for (int i = 0; i < size; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                stack.push(i);
            }
        }
    }
}

void breadthFirstSearch(int graph[][MAX_SIZE], int size, int startVertex) {
    std::queue<int> queue;
    bool visited[MAX_SIZE] = { false };

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty()) {
        int currentVertex = queue.front();
        queue.pop();
        std::cout << currentVertex + 1 << " ";

        // Visit all the adjacent vertices of the current vertex
        for (int i = 0; i < size; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue.push(i);
            }
        }
    }
}

void printAdjList(int graph[][MAX_SIZE], int size) {
    std::vector<std::vector<int>> adjList(size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (graph[i][j] == 1) {
                adjList[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Vertex " << i + 1 << ": ";
        for (int j = 0; j < adjList[i].size(); j++) {
            std::cout << adjList[i][j] + 1 << " "; // Adjust the indexing by adding 1
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
        addEdge(graph, source - 1, destination - 1); 
    }

    std::cout << "Adjacency Matrix:\n";
    printGraph(graph, size);

    std::cout << "Adjacency List:\n";
    printAdjList(graph, size);

    int startVertex;
    std::cout << "Enter the starting vertex for DFS: ";
    std::cin >> startVertex;
    startVertex--; 

    std::cout << "DFS Traversal: ";
    depthFirstSearch(graph, size, startVertex);

    std::cout << std::endl;

    std::cout << "Enter the starting vertex for BFS: ";
    std::cin >> startVertex;
    startVertex--; 

    std::cout << "BFS Traversal: ";
    breadthFirstSearch(graph, size, startVertex);

    return 0;
}