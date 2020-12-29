#ifndef _ADJACENCY_LIST_GRAPH_ 
#define _ADJACENCY_LIST_GRAPH_

#include "..\Graph.h"
#include <list>
class AdjListGraph : public Graph
{
	struct Edge
	{
		int end;
		int weight;
	};
	std::vector<std::list<Edge> > adj;
public:
	AdjListGraph(int n, bool oriented);

	int addVertex(); 

	void addEdge(int start, int end, int weight = 1);
	void removeEdge(int start, int end);

	void getSuccessors(int vertex, std::vector<std::pair<int, int>>& vertexAdj) const;
	void getPredeccessors(int vertex, std::vector<std::pair<int, int>>& vertexAdj) const;
	bool adjacent(int start, int end) const;

	bool isConnected() const;
	bool containsPath(int start, int end) const;
};

#endif