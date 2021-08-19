class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool dfs(int node ,vector<int>adjs[],vector<int>&visit,vector<int>&dfsvisit)
	{
	    visit[node]=1;
	    dfsvisit[node]=1;
	    for(auto s:adjs[node])
	    {
	        if(visit[s]!=1)
	        {
	            if(dfs(s,adjs,visit,dfsvisit))return true;
	            
	        }
	        else if(dfsvisit[s]!=0) 
	        {
	            return true;
	        }
	    }
	    dfsvisit[node]=0;
	    return false;
	}
	bool isCyclic(int V, vector<int> adjs[]) 
	{
	    vector<int>visit(V,0);
	    vector<int>dfsvisit(V,0);
	  /*  vector<int>adjs[V];
	    for(int i=0;i<adj[].size();i++)
	    {
	        adjs[adj[i][0]].push_back(adj[i][0]);
	    }*/
	    for(int i=0;i<V;i++)
	    {
	        if(visit[i]!=1)
	        {
	            if(dfs(i,adjs,visit,dfsvisit))return true;
	        }
	    }
	   	// code here
	   	return false;
	}
};
