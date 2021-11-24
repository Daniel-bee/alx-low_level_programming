#!/usr/bin/python3

def island_perimeter(grid):
    """
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    """
    x, y = 0, 0
    for row in range(1, len(grid) - 1):
            for col in range(1, len(grid[row]) - 1):
                if grid[row][col] == 1:
                    if grid[row][col - 1] == 0:
                        y += 1
                    if grid[row][col + 1] == 0:
                        y += 1
                    if grid[row - 1][col] == 0:
                        x += 1
                    if grid[row + 1][col] == 0:
                        x += 1
    return x + y
