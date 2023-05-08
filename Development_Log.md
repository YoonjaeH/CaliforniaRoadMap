**Week 1 (Nov 8 ~ Nov 12)**

This week's goal was to finalized our papers, which are proposal and team contract. We made a mistake on algorithm section of our proposal; therefore, we fixed the problem and requested a regrade to our mentor. 

****Week 2 (Nov 15 ~ Nov 19)**

This week's goal was to determine if our dataset is appropriate for what we are aiming to achieve from this project. Our inital approach was to obtain a dataset that contains a road map with longtitude and latitude so that we can graphically visalize each node onto the real world map. However, our extent of knowledge about computer science was too shallow that we had to give up on visualization. Therefore, we decided to stick with the dataset we've chosen at the first place.

Another goal of this week was to finish implementing the BFS algorithm to find if path exists between two points. However, we faced a problem with creating environment for our implementation to work. Aside from BFS, we needed to create our own makefile, testscpp, and other extra folders that can execute the codes in our main.cpp. 

**Week 3 (Thanksgiving Break)**

Enjoyed Thanksgiving break!

**Week 4 (Nov 29 ~ Dec 3)**

Successfully built readfile in main.cpp. The problem with the data we had was that the coordinates of each node in the map were not known. Decided to randomly place each node within a rectangular terrain, assuming that those maps are in an arbitrary rectangular region. Then, we made a vector with a pair that contains the distance between each edge(road) in the data using the randomly assigned x y coordinates and the data read from the original roadmap file. Also, created a separate cpp and hpp file to implement lines of code that utilizes A* search algorithm. Created a class named “node” to handle x and y coordinates of all vertices together easily. Created a function named “getDistance” using the Euclidean distance formula to calculate the F/G/H score. Created a function named “IsValid” to check if our selected nodes exist within the dataset. If else, the function will return false and when it gets called in main.cpp, it will halt the execution. 