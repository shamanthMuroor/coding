import sys

class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [[0 for col in range(vertices)] for row in range(vertices)]
    
    def printSolution(self, dist):
        print("Vertex \tDistance from source")
        for node in range(self.V):
            print("node \t", dist[node])

    def minDistance(self, dist, sptSet):
        min_dist = sys.maxsize
        min_index = 0
        for i in range(self.V):
            if dist[i] < min_dist and sptSet[i] == False:
                print("min index: ", i)
                min_dist = dist[i]
                min_index = i
        
        return min_index

    def dijsktra(self, src):
        dist = [sys.maxsize] * self.V
        sptSet = [False] * self.V

        dist[src] = 0
        for cout in range(self.V):
            u = self.minDistance(dist, sptSet)
            sptSet[u] = True
            for v in range(self.V):
                if self.graph[u][v] > 0 and sptSet[v] == False and dist[v] > dist[u] + self.graph[u][v]:
                    dist[v] = dist[u] + self.graph[u][v]
        self.printSolution(dist)
                


g = Graph(9)
g.graph = [[0, 4, 0, 0, 0, 0, 0, 8, 0], 
        [4, 0, 8, 0, 0, 0, 0, 11, 0], 
        [0, 8, 0, 7, 0, 4, 0, 0, 2], 
        [0, 0, 7, 0, 9, 14, 0, 0, 0], 
        [0, 0, 0, 9, 0, 10, 0, 0, 0], 
        [0, 0, 4, 14, 10, 0, 2, 0, 0], 
        [0, 0, 0, 0, 0, 2, 0, 1, 6], 
        [8, 11, 0, 0, 0, 0, 1, 0, 7], 
        [0, 0, 2, 0, 0, 0, 6, 7, 0] 
        ]
g.dijsktra(0)