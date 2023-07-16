#include "D:/Github-Projects/RouteOptimizer/include/algorithm.h"
#include "D:/Github-Projects/RouteOptimizer/include/graph.h"
#include <iostream>

int main(){
  Graph Graph;
  Short_Path Short_Path; 

  // calling primary function from graph.cpp and algorithm.cpp file
  Graph.isGenerate();
  Short_Path.isCalculate();
  
  return 0;
}