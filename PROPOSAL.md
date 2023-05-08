# Team Proposal

## Leading Question

Our team decided to use the open road network of California data sets excerpted from the Stanford data collection website since this data is particularly interesting and can be implemented to understand the linkage between different geographical locations of the various types of intersection of the roads in California. Our fundamental purpose of this project is to produce a search tool that searches for the shortest route between two input points, and for the top K number of frequently passed points. By the end of this project, our group is hoping to learn different types of graph algorithms that exist beyond the scope of this course and also develop critical thinking skills in data structure. 

## Dataset Acquisition and Processing

Here is the link to our dataset: [California road network](http://snap.stanford.edu/data/roadNet-CA.html)

To construct our code, our team will be using a single dataset that contains two different types(or columns) of inputs: FromNode(FN) and ToNode(TN). For instance, if FN  is ‘0’ and TN is ‘1’, 0 and 1 are connected with an undirected edge. We found that the graph is undirected where if FN = 0 and TN = 1 exist, then FN = 1 and TN = 0 also exist. 

There are a total of 1,965,206 distinct nodes in this dataset, whereas a total of 5,533,214 edges exist. When the total number of edges is divided by the total number of nodes, it is roughly 2.8. This calculation suggests that there are approximately 2 to 3(or occasionally 4) intersections on the roads of California. We excluded the possibility of duplicate nodes(or potential error) since we already compared the two columns of input nodes using the following code:
```C++
    sort(FN.begin(), FN.end());
    sort(TN.begin(), TN.end());
    for(int i = 0; i < FN.size(); i++) {
        if(FN[i] != TN[i]) {
            cout << "not the same" << endl;
            break;
        }
    }
```
Since the two columns of input nodes have the same size, this code simply checks whether our dataset is using the same node repeatedly even after the node reaches its maximum number of edges. For example, if a node called ‘0’ has three undirected edges, then both columns should have three zeros. 

One another potential error that we found using this dataset is that the compiler reads the data type as string because it’s a text file. This might cause a serious problem if we try to calculate the distance between two nodes since comparing a string typed variable to another string typed variable provides nothing useful to us. Therefore, we will try to handle this problem by converting string type to integer in order to manipulate the dataset more efficiently.

## Graph algorithm

### **BFS**

BFS will be used to verify whether a path from the given starting point to the given destination point exists. The target time complexity is O(Vertices + Edges). The inputs are (the starting node, the destination node), and the output is a boolean variable indicating whether a possible path exists (at least one path exists: true, no path exists: false).

### find shortest path algorithms (Kruskal algorithm && A(star) algorithm)

Kruskal algorithm and A(star) algorithm will be used to find the shortest path from a given starting node to a given destination node. Both perform the same task, the two algorithms may differ in runtime. Both algorithms will be implemented, and the performance will be compared to determine which algorithm is more efficient in a given circumstance.

### **Kruskal algorithm**

Kruskal algorithm will be used to find the shortest path from a given starting node to a given destination node. The expected time complexity is O(Edges * log(Vertices)). The inputs are (the starting node, the destination node), and the output is the distance of the shortest path in double data type.

### **A(star) algorithm**

A* algorithm will be used to find the shortest path from a given starting node to a given destination node. The expected time complexity is O(log h*(x)), where h* is the heuristic.The inputs are (the starting node, the destination node), and the output is the shortest path taken from the starting node to reach the destination node.

## Timeline

We are planning to collect and organize data sets from the Stanford Large Network Dataset Collection by November 13th. Following, in two weeks terms, our code will be completed and be pushed on the git server. Finally, we will review our code and prepare for the presentation by December 12th. Starting from November 6th to December 13th, our group will hold a weekly meeting on Saturday afternoon, going over our task completion. Further meetings will be arranged when necessary. 