#include "undirected_graph.h"

/*
    one of test test case for edges
    number of vertex: 7
    number of edges : 7
    0 1
    0 2
    1 5
    2 3
    2 4
    3 5
    4 6
*/

UnDirectedGraph build_graph() {
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
    return ug;
}

void test_show() {
    UnDirectedGraph ug = build_graph();
    ug.show();
}

void test_bfs() {
    UnDirectedGraph ug = build_graph();
    ug.show();
    ug.bfs(0);
    ug.bfs(6);
}

void test_dfs() {
    UnDirectedGraph ug = build_graph();
    ug.show();
    ug.dfs(0);
    ug.dfs(6);
}

void test_bfs_dfs() {
    UnDirectedGraph ug = build_graph();
    ug.show();
    ug.bfs(0);
    ug.dfs(0);
}

int main() {
    test_show();
    test_bfs();
    test_dfs();
    test_bfs_dfs();

    return 0;
}