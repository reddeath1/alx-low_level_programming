#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""
@author: Frank Galos
"""


def island_perimeter(grid):
    """
    Calculate the Island's perimeter

    Parameter:
        grid (array): A 0's and 1's array that represent an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
    """
    row = len(grid)
    col = len(grid[0])
    perimeter = 0
    for i in range(1, row - 1):
        for j in range(1, col - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
