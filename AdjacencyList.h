#pragma once
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class AdjacencyList {
    private:
    map<string, vector<pair<string, float>>> adjacencyList;

    public:
    //Insertion function, creates a second key in the map if the page "to" has not been inserted yet.
    void insert(string from, string to) {
        adjacencyList[from].emplace_back(make_pair(to, 0));
        adjacencyList[to].emplace_back(make_pair("", 0));
    }

    void PageRank(int& p) {
        // Initial ranking, based on the logic for P = 1
        for(auto& page : adjacencyList) {
            page.second[0].second = (1.0 / adjacencyList.size());
        }

        // Iterative ranking, will not run if P = 1
        while(p != 1) {
            map<string, float> newRanks;

            //Iterate over all pages in adjacencyList
            for(auto& page : adjacencyList) {
                float rank = 0;
                //Receieve a vector of pages pointing to the current page
                vector<string> inDegrees = getIndegrees(page.first);

                //Iterates over all pages pointing to the current page
                for(string inDegree: inDegrees) {
                    // adds up the ranks of each page pointing to the main page, divided by the number of pages it points to.
                    rank += (adjacencyList.at(inDegree)[0].second / getOutdegree(inDegree));
                }
                //Add each new rank to a separate map to preserve the initial ranks for each iteration
                newRanks[page.first] = rank;
            }
            //Place the calculated ranks back in the adjacencyList
            for(auto& page : adjacencyList) {
                page.second[0].second = newRanks[page.first];
            }
            p--;
        }
    }

    vector<string> getIndegrees(string page) {
        vector<string> inDegrees;
        //Iterate over the entire adjacency list to find which pages point to the input page
        for(auto it = adjacencyList.begin(); it != adjacencyList.end(); ++it) {
            string otherPage = it->first;
            vector<pair<string, float>> outDegrees = it->second;

            //Add other page to vector if it points to input page
            for(auto& outDegree : outDegrees) {
                if (outDegree.first == page) {
                    inDegrees.push_back(otherPage);
                    break;
                }
            }
        }
        return inDegrees;
    }

    int getOutdegree(string page) {
        int outDegreeCount = 0;
        vector<pair<string, float>> outDegrees = adjacencyList.at(page);

        //Only adds to the outDegree count if the page is not an empty string
        for(auto& outDegree : outDegrees) {
            if (outDegree.first != "") {
                outDegreeCount++;
            }
        }


        return outDegreeCount;
    }

    void printRanks() {
        //Print all ranks and their respective pages
        for(auto& page : adjacencyList) {
            cout << page.first << " " << fixed <<
            setprecision(2) << page.second[0].second << endl;
        }
    }
    //Constructor
    AdjacencyList() : adjacencyList() {}
};
