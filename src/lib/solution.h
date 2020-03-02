#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

#define size_vector 5

class Maze {
public:
  std::vector <std::vector <int>> maze;
  Maze(std::vector <std::vector <int>> &input) : maze(input) {}

  bool IsValidPosition(const std::pair<int, int> &position);
  bool SolveMaze(std::pair<int, int> source, std::pair<int, int> destination);
  bool SolveMazeHelper(std::vector <std::vector <int>> &visited, std::pair<int, int> source, std::pair<int, int> destination);
};

#endif