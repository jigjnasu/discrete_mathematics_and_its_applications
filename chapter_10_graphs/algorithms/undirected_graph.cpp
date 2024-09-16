#include "undirected_graph.h"

int main() {
    int v = 0;
    std::cout << "Please enter number vertices " << std::endl;
    std::cin >> v;
    UnDirectedGraph ug(v);
    int e = 0;
    std::cout << "Please enter number of edges" << std::endl;
    std::cin >> e;
    while (e--) {
        int u = 0, v = 0;
        std::cin >> u >> v;
        ug.add_edge(u, v);
    }
    ug.show();
    ug.bfs(3);
    ug.bfs(0);

    return 0;
}