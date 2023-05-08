#pragma once

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

class Node {
    private:
        pair<double, double> nodePosition;
        int costG;
        int costH;
        Node * nodeParent;

    public:
        Node();

        /*
        * Constructor to initialize the position, parent, cost of G, and destination point for cost H. 
        */
        Node(map<int, pair <double,double>> pos, 
                                            Node * parent, 
                                            int g, 
                                            pair<double, double> dest);

        /*
        * 
        */
        int getCostF();
        int getCostG();
        int getCostH();

        pair<double, double> getPosition();
        int getPositionX();
        int getPositionY();

        Node * getParent();

        void setCostG(int G);
        void setCostH(pair<double, double> destinationNode);
};

// typedef pair<int, int> dot;
// typedef pair<double, pair<int, int>> dot_pair;

// struct node {
//     int parentX, parentY;
//     float f, g, h;
// };

// const double maxX = 500;
// const double maxY = 500;
// double grid[maxX][maxY];

// double getDistance(double x1, double y1, double x2, double y2) {
//     return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))
// }

// bool IsValid(double x, double y) {
//     if(x < 0 || y < 0 || x >= maxX || y >= maxY) {
//         return false;
//     }
//     return true;
// }


