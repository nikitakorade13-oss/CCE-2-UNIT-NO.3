\# UNIT NO.5 - GRAPH

1\) Problem statement :-

&#x20;To implement an adjacency list data structure in C++ to represent electrical substations and the transmission lines connecting them. The program should allow the user to add substations, establish transmission line connections, display the complete power grid network, and display all substations directly connected to a selected substation.





2\)  Introduction :-

An electrical power grid consists of several substations connected through transmission lines. Substations help transform voltage levels and distribute electrical power between different parts of the network.



A graph is a suitable data structure for representing this network. In a graph, each electrical substation is represented as a vertex (node), and each transmission line is represented as an edge connecting two vertices.



An adjacency list is a graph representation in which every vertex stores a list of its neighboring vertices. It is memory efficient for sparse networks, where each substation is connected to only a few other substations.



In this project, a C++ program uses an adjacency list to represent the electrical power grid. It displays all connections and allows the user to select a substation to view its directly connected substations. The transmission lines are assumed to be bidirectional.





3\)  Objectives :-

The main objectives of this project are:



1\. To understand graph data structures: Learn how graphs can represent real world networks, particularly electrical power transmission systems.



2\. To represent electrical substations: Model each substation as a vertex in a graph, allowing individual substations to be identified and managed.



3\. To represent transmission lines: Model the transmission lines connecting substations as edges in the graph. In this project, the connections are considered bidirectional.



4\. To implement an adjacency list: Use suitable C++ data structures, such as maps and vectors, to store the connections of each substation.



5\. To construct the power grid: Accept user input for transmission lines and automatically build the corresponding adjacency list.



6\. To display network connectivity: Print the complete adjacency list to show how the substations are interconnected.



7\. To identify direct connections: Allow the user to select a particular substation and display all its directly connected neighboring substations.





4\)  Algorithm :-



1. Start the program.



2\. Create an adjacency list to store substations and their connections.



3\. Read the number of transmission lines from the user.



&#x20;  For each transmission line:



* Read the names of the two connected substations.



* Add both substations to the graph if they do not already exist.



* Add each substation to the other's adjacency list.



4\. Display the complete adjacency list of the power grid.



5\. Ask the user to enter the name of a substation.



6\. Search for the selected substation in the adjacency list.



7\. If the substation exists, display all directly connected substations.



8\. Otherwise, display a message indicating that the substation was not found.



9\. Stop the program.





5\)  conclusion :-



The project successfully demonstrates the use of an adjacency list to represent electrical substations and transmission lines using C++. Each substation is stored as a vertex, while each transmission line is represented by a bidirectional edge.



The program can display the complete network and retrieve the direct connections of any existing substation. The adjacency list representation provides efficient storage for sparse power grid networks and can be extended to include transmission line voltage, capacity, impedance, and operational status.

