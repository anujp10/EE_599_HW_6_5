#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MazeShould, MazeReturn) {
  std::vector<std::vector <int>> input_maze = {{1, 1, 0, 0, 0}, {1, 1, 1, 1, 1}, {0, 1, 0, 0, 1}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 1}};
  Maze maze(input_maze);
  std::pair <int, int> source (0, 0);
  std::pair <int, int> destination (4, 4);
  bool actual = maze.SolveMaze(source, destination);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(MazeShould_1, MazeReturn_1) {
  std::vector<std::vector <int>> input_maze = {{1, 1, 0, 0, 0}, {1, 1, 1, 1, 1}, {0, 1, 0, 0, 1}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 1}};
  Maze maze(input_maze);
  std::pair <int, int> source (0, 1);
  std::pair <int, int> destination (2, 4);
  bool actual = maze.SolveMaze(source, destination);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(MazeShould_2, MazeReturn_2) {
  std::vector<std::vector <int>> input_maze = {{1, 1, 0, 0, 0}, {1, 1, 1, 1, 1}, {0, 1, 0, 0, 1}, {1, 0, 0, 0, 0}, {1, 1, 1, 1, 1}};
  Maze maze(input_maze);
  std::pair <int, int> source (10, 1);
  std::pair <int, int> destination (2, 4);
  bool actual = maze.SolveMaze(source, destination);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(MazeShould_3, MazeReturn_3) {
  std::vector<std::vector <int>> input_maze = {};
  Maze maze(input_maze);
  std::pair <int, int> source (0, 1);
  std::pair <int, int> destination (2, 4);
  bool actual = maze.SolveMaze(source, destination);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}