import sys
import heapq

input = sys.stdin.readline

def dijkstra(n, graph):
    dist = [float('inf')] * (n + 1)
    dist[1] = 0
    pq = [(0, 1)]  # (distance, node)

    while pq:
        current_dist, u = heapq.heappop(pq)

        if current_dist > dist[u]:
            continue

        for v, w in graph[u]:
            if dist[u] + w < dist[v]:
                dist[v] = dist[u] + w
                heapq.heappush(pq, (dist[v], v))

    return dist[n] if dist[n] != float('inf') else -1


n, m = map(int, input().split())
graph = {i: [] for i in range(1, n + 1)}

for _ in range(m):
    u, v, w = map(int, input().split())
    graph[u].append((v, w))
    graph[v].append((u, w))

ans = dijkstra(n, graph)
print(ans)