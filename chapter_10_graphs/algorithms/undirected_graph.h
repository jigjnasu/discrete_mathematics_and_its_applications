#include <iostream>
#include <vector>

class UnDirectedGraph {
public:
    UnDirectedGraph() {}
    ~UnDirectedGraph() {}
    UnDirectedGraph(int v) {
        G.resize(v, std::vector<int>(0));
    }

    void add_edge(const int u, const int v) {
        if (u < G.size() && v < G.size()) {
            G[u].emplace_back(v);
            G[v].emplace_back(u);

        } else {
            std::cout << "Vertex dont' exist, vertex size = " << G.size() << std::endl;
        }
    }

    void show() const {
        std::cout << "--------------------------------------------------" << std::endl;
        for (std::size_t r = 0; r < G.size(); ++r) {
            std::cout << r << " --> ";
            for (std::size_t c = 0; c < G[r].size(); ++c)
                std::cout << G[r][c] << " ";
            std::cout << std::endl;
        }
        std::cout << "--------------------------------------------------" << std::endl;
    }

private:
    std::vector<std::vector<int>> G;
};