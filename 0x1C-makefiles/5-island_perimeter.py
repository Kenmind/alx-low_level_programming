#!/usr/bin/python3
"""
Defines island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island "grid"
    Args:
        @grid: the description of an island
    """
    p = 0
    h = len(grid)
    w = len(grid[0])

    grid.insert(0, [0 for i in range(w)])
    grid.append([0 for i in range(w)])

    for j in range(h + 2):
        grid[j].append(0)
        grid[j].insert(0, 0)

    for i in range(1, h + 1):
        for j in range(1, w + 1):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    p += 1
                if grid[i][j + 1] == 0:
                    p += 1
                if grid[i - 1][j] == 0:
                    p += 1
                if grid[i + 1][j] == 0:
                    p += 1
    return p
