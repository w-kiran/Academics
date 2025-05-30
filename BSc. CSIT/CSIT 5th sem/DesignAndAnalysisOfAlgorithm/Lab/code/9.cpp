//program for Dijkstra's single source shortest path

#include <iostream>
using namespace std;
#include <limits.h>

#define V 9
int count=0;

int minDistance(int dist[], bool sptSet[])
{


    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
        {
        min = dist[v], min_index = v;
        count = count+4;    
        }
    count = count+4;            

    return min_index;
}


void printSolution(int dist[])
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout << i << " \t\t\t\t" << dist[i] << endl;
}


void dijkstra(int graph[V][V], int src)
{
    int dist[V]; 

    bool sptSet[V]; 
    
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;    
        dist[src] = 0;
        count = count +3;
    
    for (int i = 0; i < V - 1; i++) {
    
        int u = minDistance(dist, sptSet);    
        sptSet[u] = true;
        count++;
    
        for (int v = 0; v < V; v++)        
            if (!sptSet[v] && graph[u][v]
                && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                {
                dist[v] = dist[u] + graph[u][v];
                count = count+6;    
                }
        count = count +5;        
    }


    printSolution(dist);
}


int main()
{

	cout<<"Kiran Joshi Sukubhattu\n";
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };


    dijkstra(graph, 0);
cout<<"No. of steps required :"<<count;
    return 0;
}
