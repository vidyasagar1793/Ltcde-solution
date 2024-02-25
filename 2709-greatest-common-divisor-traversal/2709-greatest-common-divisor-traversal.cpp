class DisjointSet 
{
public:
    vector<int> parent, size;
    DisjointSet(int n) 
    {
        parent.resize(n);
        size.resize(n);
        for(int x=0; x<n; x++) 
        {
            parent[x]=x;
            size[x]=1;
        }
    }

    int findPar(int node) 
    {
        if(node==parent[node]) return node;
        return parent[node]=findPar(parent[node]);
    }

    void unionn(int u, int v) 
    {
        int upar=findPar(u);
        int vpar=findPar(v);
        if(upar==vpar) return;
        if(size[upar]<size[vpar]) 
        {
            parent[upar]=vpar;
            size[vpar]+=size[upar];
        }
        else 
        {
            parent[vpar]=upar;
            size[upar]+=size[vpar];
        }
    }
};
class Solution 
{
public:
    map<int,vector<int>> m;
    void primeFactors(int n, int i) 
    {
        if(n%2==0) m[2].push_back(i);
        while(n%2==0) n/=2;
        for(int x=3; x<=sqrt(n); x+=2) 
        { 
            if(n%x==0) m[x].push_back(i);
            while(n%x==0) n/=x; 
        }
        if(n>2) m[n].push_back(i);
    } 

    bool canTraverseAllPairs(vector<int>& nums) 
    {
        int n=nums.size();
        DisjointSet ds(n);
        for(int x=0; x<n; x++) primeFactors(nums[x],x);
        for(auto it: m)
        {
            auto indices=it.second;
            for(int x=1; x<indices.size(); x++)
            {
                ds.unionn(indices[0],indices[x]);
            }
        }
        set<int> parents;
        for(int x=0; x<n; x++)
        {
            parents.insert(ds.findPar(x));
        }
        return parents.size()==1;
    }
};