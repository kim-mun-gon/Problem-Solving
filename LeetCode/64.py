grid = [[1,3,1], [1,5,1], [4,2,1]]

H, W = 3, 3
for c in range(1, W):            
    grid[0][c] += grid[0][c-1]

for r in range(1, H):            
    grid[r][0] += grid[r-1][0]

for r in range(1, H):            
    for c in range(1, W):               
        grid[r][c] += min(grid[r][c-1], grid[r-1][c])
print(grid)
