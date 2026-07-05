def dfs(node, graph, visited):
    if node in visited:
        return
    visited.add(node)
    for neighbor in graph[node]:
        dfs(neighbor, graph, visited)


#city to city dfs: 
visited = set()

def dfs(node, goal, graph):
    if node == goal:
        return True
    if node in visited:
        return False

    visited.add(node)

    for neighbor in graph[node]:
        if dfs(neighbor, goal, graph):
            return True
    return False

#the network in dfs:
def dfs(i, j):
    if (i, j) in visited or grid[i][j] == 0:
        return
    visited.add((i, j))
    
    for dx, dy in [(-1,0), (1,0), (0,-1), (0,1)]:
        ni, nj = i + dx, j + dy
        if 0 <= ni < n and 0 <= nj < m:
            dfs(ni, nj)