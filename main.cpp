#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "BFS.h"

using namespace std;

vector<pair <int,int>> data;
map<int, vector<int>> m;

double random_double(double min, double max)
{
  double a = 1.0 * rand() / (1.0 * RAND_MAX);
  return min + a * (max - min);
}

double distance(double a_x, double a_y, double b_x, double b_y) {
  return sqrt((b_x - a_x)*(b_x - a_x) + (b_y - a_y) * (b_y - a_y));
}

/*
void print_function(int a, int b) {
  if (can_i_go_from_a_to_b(a,b)) {
    cout << "Valid path from " << a << " to " << b << endl;
  } else {
    cout << "Invalid path from " << a << " to " << b << endl;
  }
}
*/
void build_map(vector<pair <int,int>> &data) {
  for (auto edge : data) {
      int from = edge.first;
      int to = edge.second;
      m[from].push_back(to);
    }
}

// magic hole
// key = node number, value = cordinate pair
map<int, pair <double,double>> cord;


int main() {
  ifstream file("Data/roadNet-CA.txt");
  // ifstream file("Data/sample.txt");

  string str;
  int a, b;
  // 
  while (getline(file, str,'\t')) {
    file >> a >> b;
    data.push_back(make_pair(a,b));
    // not made yet
    if (cord.find(a) == cord.end()) {
      pair <double,double> toAdd(random_double(0, 500), random_double(0, 500));
      cord[a] = toAdd;
    }
    if (cord.find(b) == cord.end()) {
      pair <double,double> toAdd(random_double(0, 500), random_double(0, 500));
      cord[b] = toAdd;
    }
  }
  

 

  build_map(data);

  // print_function(0,4);
  // print_function(0,8);
  // print_function(0,3);
  // print_function(743,198225);
  pair<double, double> return_value = cord[1]; 

  /*
  typedef  pair<node, node> graphwithNoWeight;
  distance
  vector< pair<distance, data> > dataWithWeight;
  */

 // I want distance from 0 to 1
 for(int i = 0; i < 10; i++) {
  double ans = distance(cord[i].first, cord[i].second, cord[i+1].first, cord[i+1].second);
  cout << i << " to " << i+1 << ": " << ans << endl; 
 }

  //cout << cord[1].first << " " << cord[1].second << endl;
  //cout << ans << endl;
}