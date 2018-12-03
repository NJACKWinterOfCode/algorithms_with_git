import queue
from collections import namedtuple

Edge = namedtuple('Edge', ['vertex', 'weight'])


class Graph():
    def __init__(self, vertexCount):
        self.vertexCount = vertexCount
        self.adjacencyList = [[] for _ in range(vertexCount)]

    def addEdge(self, source, dest, weight):
        assert source < self.vertexCount
        assert dest < self.vertexCount
        self.adjacencyList[source].append(Edge(dest, weight))
        self.adjacencyList[dest].append(Edge(source, weight))

    def getEdge(self, vertex):
        for e in self.adjacencyList[vertex]:
            yield e

    def getVertex(self):
        for v in range(self.vertexCount):
            yield v


def dijkstra(graph, source, dest):
    q = queue.PriorityQueue()
    parents = []
    distances = []
    startWeight = float("inf")

    for i in graph.getVertex():
        weight = startWeight
        if source == i:
            weight = 0
        distances.append(weight)
        parents.append(None)

    q.put(([0, source]))

    while not q.empty():
        v_tuple = q.get()
        v = v_tuple[1]

        for e in graph.getEdge(v):
            tempDistance = distances[v] + e.weight
            if distances[e.vertex] > tempDistance:
                distances[e.vertex] = tempDistance
                parents[e.vertex] = v
                q.put(([distances[e.vertex], e.vertex]))

    path = []
    end = dest
    while end is not None:
        path.append(end)
        end = parents[end]

    path.reverse()

    return path, distances[dest]

def main():
    count = int(input("Enter no of vertices = "))
    g = Graph(count)

    edgeCount = int(input("Enter no of edges = "))
    for i in range(0, edgeCount):
        src, dest, weight = map(int, input().split())
        g.addEdge(src, dest, weight)

    src = int(input("Enter source node = "))
    dest = int(input("Enter destination node = "))
    shortest_path, distance = dijkstra(g, src, dest)
    print("Shortest Path : ")
    print(shortest_path)
    print(f"Shortest Distance = {distance}")


if __name__ == "__main__":
    main()
