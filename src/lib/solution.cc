#include "solution.h"

bool Maze::IsValidPosition(const std::pair<int, int> &position) {
  if ((position.first >= 0 && position.first < size_vector) && (position.second >= 0 && position.second < size_vector) && (maze[position.first][position.second] == 1))
    return true;
  else
    return false;
}

bool Maze::SolveMaze(std::pair<int, int> source, std::pair<int, int> destination) {
  std::vector<std::vector <int>> visited (size_vector, std::vector<int> (size_vector, 0));
  bool result = false;

  if (maze.size() == 0)
    return false;

  for (unsigned int i = 0; i < size_vector; i++) {
    for (unsigned int j = 0; j < size_vector; j++) {
      if(SolveMazeHelper(visited, source, destination)) {
        result = true;
        break;
      }
    }
  }
  
  return result;
}

bool Maze::SolveMazeHelper(std::vector <std::vector <int>> &visited, std::pair<int, int> source, std::pair<int, int> destination) {
  if (IsValidPosition(source) && (!visited[source.first][source.second])) {
    visited[source.first][source.second] = 1;
    if (source == destination)
      return true;

    std::pair <int, int> source_up ((source.first - 1), source.second); 
    if (SolveMazeHelper(visited, source_up, destination))
      return true;

    std::pair <int, int> source_left (source.first, (source.second - 1));
    if (SolveMazeHelper(visited, source_left, destination))
      return true;

    std::pair <int, int> source_down ((source.first + 1), source.second); 
    if (SolveMazeHelper(visited, source_down, destination))
      return true;

    std::pair <int, int> source_right (source.first, (source.second + 1));
    if (SolveMazeHelper(visited, source_right, destination))
      return true;
  }

  return false;
}