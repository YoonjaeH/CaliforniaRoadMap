#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <queue>

using namespace std;

class BFS {
    public:
        /**
        * Default construcor
        */
        BFS();

        struct Weight {
            unsigned int x;
            unsigned int y;
            
        };
        
        void build_map(vector<pair <int,int>> &data);
        bool can_i_go_from_a_to_b(int a, int b);
        

    private:
        bool visited;
        vector<pair <int,int>> data;
        // hashmap
        // key: from
        // value: vector of 'to's.
        map<int, vector<int>> m;
};