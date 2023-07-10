#include <iostream>
#include <vector>
#include <limits>

const int INF = 1e9;

// Accept user input for the target node
void acceptUserInput(int& targetNode) {
    std::cout << "Input destination node: ";
    std::cin >> targetNode;
}

// Example graph represented as an adjacency list
std::vector<std::vector<std::pair<int, int>>> createGraph() {
    std::vector<std::vector<std::pair<int, int>>> graph(25);

    // Add edges and weights to the graph
    graph[0].push_back({1, 30});
    graph[0].push_back({2, 15});
    graph[0].push_back({3, 30});
    graph[0].push_back({4, 10});
    graph[0].push_back({5, 12});
    graph[0].push_back({6, 15});
    graph[0].push_back({7, 11});
    graph[0].push_back({8, 19});
    graph[1].push_back({11, 1});
    graph[1].push_back({12, 4});
    graph[1].push_back({6, 34});
    graph[1].push_back({8, 24});
    graph[2].push_back({15, 3});
    graph[2].push_back({16, 6});
    graph[2].push_back({7, 45});
    graph[2].push_back({8, 22});
    graph[3].push_back({9, 2});
    graph[3].push_back({10, 3});
    graph[3].push_back({5, 40});
    graph[3].push_back({7, 37});
    graph[4].push_back({13, 2});
    graph[4].push_back({14, 1});
    graph[4].push_back({5, 22});
    graph[4].push_back({6, 21});
    graph[5].push_back({17, 8});
    graph[5].push_back({18, 6});
    graph[6].push_back({19, 2});
    graph[6].push_back({20, 1});
    graph[7].push_back({21, 4});
    graph[7].push_back({22, 6});
    graph[8].push_back({23, 2});
    graph[8].push_back({24, 5});
    graph[9].push_back({21, 13});
    graph[10].push_back({17, 10});
    graph[11].push_back({24, 18});
    graph[12].push_back({20, 11});
    graph[13].push_back({18, 19});
    graph[14].push_back({19, 14});
    graph[15].push_back({22, 11});
    graph[16].push_back({23, 16});

    return graph;
}

// Dijkstra's algorithm to find the shortest path from startNode to all other nodes
std::vector<int> dijkstra(const std::vector<std::vector<std::pair<int, int>>>& graph, int startNode, std::vector<int>& previousNodes) {
    int numNodes = graph.size();
    std::vector<int> distances(numNodes, INF);
    distances[startNode] = 0;
    std::vector<bool> visited(numNodes, false);

    // Find the node with the minimum distance
    for (int i = 0; i < numNodes; ++i) {
        int minDist = INF;
        int minNode = -1;

        for (int j = 0; j < numNodes; ++j) {
            if (!visited[j] && distances[j] < minDist) {
                minDist = distances[j];
                minNode = j;
            }
        }
        visited[minNode] = true;

        // Update the distances of neighbors
        for (const auto& neighbor : graph[minNode]) {
            int neighborNode = neighbor.first;
            int neighborWeight = neighbor.second;
            int newDistance = distances[minNode] + neighborWeight;

            if (!visited[neighborNode] && newDistance < distances[neighborNode]) {
                distances[neighborNode] = newDistance;
                previousNodes[neighborNode] = minNode;
            }
        }
    }

    return distances;
}

// Trace the shortest path from the start node to the target node
std::vector<int> traceShortestPath(const std::vector<int>& previousNodes, int targetNode) {
    std::vector<int> path;
    while (targetNode != -1) {
        path.push_back(targetNode);
        targetNode = previousNodes[targetNode];
    }
    return path;
}

// call the result short path from acceptUserInput funtion and dijkstra function 
void callShortPath() {
    int numNodes = 25;
    int startNode = 0;
    int targetNode = 0;
    
    acceptUserInput(targetNode);

    // Create the graph
    std::vector<std::vector<std::pair<int, int>>> graph = createGraph();

     // Initialize the previousNodes vector with -1
    std::vector<int> previousNodes(numNodes, -1);

    // Perform Dijkstra's algorithm to find the shortest path
    std::vector<int> distances = dijkstra(graph, startNode, previousNodes);

    // Trace the shortest path from the start node to the target node
    std::vector<int> shortestPath = traceShortestPath(previousNodes, targetNode);

    // Print the shortest path and its distance
    std::cout << "Shortest path from node " << startNode << " to node " << targetNode << ": " << distances[targetNode] << std::endl << std::endl;
    std::cout << "Route :";
    for (int i = shortestPath.size() - 1; i >= 0; --i) {
        std::cout << shortestPath[i];
        if (i > 0) {
            std::cout << " -> ";
        }
    }
    std::cout << std::endl;

    return;
}
