#include <bits/stdc++.h>

typedef std::list<int> vi;

using std::cin, std::cout, std::string;
int main()
{
    std::map<int, vi> graph;

    int nodes, passages, start, end;
    cin >> nodes >> passages >> start >> end;

    for (int i = 0; i < passages; i++)
    {
        int node, passage;
        cin >> node >> passage;

        if (graph.find(node) == graph.end())
        {
            graph[node] = vi();
        }
        graph[node].push_back(passage);

        if (graph.find(passage) == graph.end())
        {
            graph[passage] = vi();
        }
        graph[passage].push_back(node);
    }

    // had help from this vid https://www.youtube.com/watch?v=oDqjPvD54Ss
    std::queue<int> queue;
    std::vector<bool> visited_nodes(nodes, false);
    std::vector<int> prev(nodes, -1);

    visited_nodes[start] = true;
    queue.push(start);

    while (!queue.empty())
    {
        int n = queue.front();
        queue.pop();

        auto neighbours = graph[n];
        for (auto neighbour : neighbours)
        {
            if (!visited_nodes[neighbour])
            {

                queue.push(neighbour);
                visited_nodes[neighbour] = true;
                prev[neighbour] = n;
            }
        }
    }

    int steps = 0;
    for (int i = end; i != -1; i = prev[i])
        steps++;

    cout << steps - 1 << "\n";

    return 0;
}