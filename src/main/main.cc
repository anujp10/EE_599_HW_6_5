#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::vector<std::vector <int>> input_maze = {{1, 1, 0, 0, 0}, {1, 0, 1, 1, 1}, {1, 1, 0, 0, 1}, {1, 1, 0, 0, 1}, {1, 1, 1, 1, 1}};

    Maze maze(input_maze);
    std::pair <int, int> source (0, 0);
    std::pair <int, int> destination (4, 4);

    if (maze.SolveMaze(source, destination))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    return EXIT_SUCCESS;
}