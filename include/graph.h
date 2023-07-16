#ifndef GRAPH_H
#define GRAPH_H
#include <string>

// function declaration from graph.cpp
class Graph {
  public:
    void loadEdges(const std::string& flePnts, const std::string& fleEdges);
    void loadWeights(const std::string& flePnts, const std::string& fleEdges);
    void isGenerate();
  private:
    double x;
    double y;
    int label;
};

#endif