#!/usr/bin/python3
"""Defines an island perimeter function."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.
    0 represents the water and 1 the land.
    Args:
        grid (list): A list of lists of integers representing the island.
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols =len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if i > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
