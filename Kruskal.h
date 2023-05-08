#pragma once

#include<iostream>
using namespace std;

class Kruskal {
    public: 

    void makeDisjointSets(int num);
    int find(int node);
    void merge(int x, int y);
    double kruskalMST();

    private:

    int *parent, *max, n;
};