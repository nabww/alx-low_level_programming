#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of an island described by the grid.

    Args:
        grid (list[list[int]]): A rectangular grid of integers, where 0 represents a water zone
            and 1 represents a land zone.

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0

    # Iterate over each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):

            # If the cell is land, add its perimeter
            if grid[i][j] == 1:

                # Check if the cell has water to its left, right, top or bottom
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter

