#include <iostream>
#include <vector>
#include <list>
using namespace std;

// int comb4(vector <int> cand, int target     )

//If the node is reachable or not
vector <vector <int>> paths;

class Graph{
    int val;
    list <int> *adj;
    public:
    Graph(int v);
    void addNode(int v, int w);
    bool pathExist(int source, int destination);
    void getPath(int v, int w, vector <int> l, bool visit[]);
    
};

Graph :: Graph(int v)
{
    this->val = v;
    adj = new list<int>[val];
    
}

void Graph::addNode(int v, int w)
{
    adj[v].push_back(w);
}

bool Graph::pathExist(int source, int dest)
{
    //1. We need a queue to store all the nodes that we need to visit
    //2. We need an array to record which node we have visited
    bool *visited = new bool[val];
    for (int i =0; i<val;i++)
    {
        visited[i] = false;
    }
    
    list <int> queue;
    visited[source] = true;
    queue.push_back(source);
    list <int>::iterator i;
    
    while(!queue.empty())
    {
        source = queue.front();
        queue.pop_front();
        
        for (i = adj[source].begin(); i != adj[source].end(); i++)
        {
            if (dest == *i)
                return true;
            
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    
    return false;
}

void Graph::getPath(int s, int d, vector <int> v, bool visit[])
{
    // vector <int> v;
    list <int>::iterator i;
    v.push_back(s);
    for (i = adj[s].begin(); i!= adj[s].end(); i++)
    {
        v.push_back(*i);
        // visited[*i] = true;
        if (d == *i)
        {
            paths.push_back(v);
            return ;
        }
            
        
        if (!visit[*i])
        {
            visit[*i] = true;
            getPath(*i, d, v, visit);
        }
    }
    paths.push_back(v);
}

int main() {
    int n =10;
    // vector <int> v(n,1);
    vector <int> l;
    Graph g(4);
    g.addNode(0, 1);
    g.addNode(0, 2);
    g.addNode(1, 2);
    g.addNode(2, 0);
    g.addNode(2, 3);
    g.addNode(3, 3);
    
    
    int u = 1, v = 3;
    if(g.pathExist(u, v))
        cout<< "\n There is a path from " << u << " to " << v<<endl;
    else
        cout<< "\n There is no path from " << u << " to " << v;
    
    bool *visit = new bool[n];
    
    for (int i = 0;i<n;i++)
    {
        visit[i] = false;
    }
    
    g.getPath(u,v,l,visit);
    
    for(auto i:paths)
    {
        for(auto z:i)
        {
            cout<<z<<endl;
        }
    }
	cout<<"GfG!";
	return 0;
}
