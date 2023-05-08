#include "BFS.h"

using namespace std;

void BFS::build_map(vector<pair <int,int>> &data) {

  for (auto edge : data) {
    int from = edge.first;
    int to = edge.second;
    m[from].push_back(to);
  }
}

bool BFS::can_i_go_from_a_to_b(int a, int b) {
  // bfs
  queue<int> togo;
  set<int> visited;
  togo.push(a);

  while (!togo.empty()) {
    int now = togo.front();
    togo.pop();
    // can go!
    if (now == b) {
      return true;
    }
    // add all posiible connecting points
    vector<int> neighbors = m[now];
    for (auto neighbor : neighbors) {
      // neighbor not visited yet
      if (visited.find(neighbor) == visited.end()) {
        togo.push(neighbor);
        visited.insert(neighbor);
      }
    }
  }
  return false;
}