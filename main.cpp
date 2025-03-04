#include <iostream>
#include "AdjacencyList.h"

using namespace std;

int main() {
    //Read input (provided)
    int no_of_lines, power_iterations;
    string from, to;
    cin >> no_of_lines;
    cin >> power_iterations;
    AdjacencyList Graph;
    for (int i = 0; i < no_of_lines; i++) {
        cin >> from;
        cin >> to;
        Graph.insert(from, to);
        from = "";
        to = "";
    }
    //Run pagerank function
    Graph.PageRank(power_iterations);
    //Print resulting ranks
    Graph.printRanks();
}
