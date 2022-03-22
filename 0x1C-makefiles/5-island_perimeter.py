#!/usr/bin/python3

"""Create a function def island_perimeter"""


def island_perimeter(grid):
    """returns in grid"""
    perimeter = 0
    for j in range(0, len(grid), 1):
        for k in range(0, len(grid[0]), 1):
            if grid[j][k] == 1:
                perimeter = perimeter + 4
                if k - 1 >= 0 and grid[j][k - 1] == 1:
                    perimeter = perimeter - 2
                if j - 1 >= 0 and grid[j - 1][k] == 1:
                    perimeter = perimeter - 2
    return (perimeter)
