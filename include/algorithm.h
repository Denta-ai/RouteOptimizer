#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <vector>

// function declaration from algorithm.cpp
class Short_Path {
    private:
        int numNodes = 25;
        int startNode = 0;
        int targetNode = 0;
    public:
        void acceptUserInput(int& targetNode);
        std::vector<std::vector<std::pair<int, int>>> createGraph();
        std::vector<int> dijkstra(const std::vector<std::vector<std::pair<int, int>>>& graph, int startNode, std::vector<int>& previousNodes);
        std::vector<int> traceShortestPath(const std::vector<int>& previousNodes, int targetNode);
        void isCalculate();
};

#endif