class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int dist[n+1];
        for(int i =0;i<n+1;i++) {
            dist[i] = INT_MAX;
        }
        dist[k]=0;
        for(int i =0;i<n;i++) {
            for(int j=0;j<times.size();j++){
                int u = times[j][0];
                int v = times[j][1];
                int weight = times[j][2];
                if(dist[u]!=INT_MAX && dist[v]>dist[u]+weight) {
                    dist[v] = dist[u] + weight;
                }
            }
        }
        int res=INT_MIN;
        for(int i=1;i<n+1;i++) {
            // cout<<i<<":"<<dist[i]<<" ";
            if(i!=k) {
                if(dist[i] == INT_MAX) return -1;
                res=max(res,dist[i]);
            }
        }
        return res;
    }
};