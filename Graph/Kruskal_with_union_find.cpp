#define N 100005

int n,m,p[N],rank[N];
vector<pair<int,pair<int,int> > > v;

void create_set() {
    for(int i = 1; i <= n; i++) {
        p[i] = i,rank[i] = 0;
    }
}

int find_set(int u) {
    int x = p[u];
    if(x != u)
        x = find_set(x);
    return x;
}
void merge_set(int u,int v) {
    int s1 = find_set(u);
    int s2 = find_set(v);
    if(rank[s1] > rank[s2])
        p[s2] = s1;
    else 
        p[s1] = s2;
    if(rank[s1] == rank[s2])
        rank[s2] += 1;
}
int kruskal() {
    create_set();
    int res = 0;
    for(int  i = 0; i < v.size(); i++) {
        int v1 = v[i].second.first;
        int v2 = v[i].second.second;
        if(find_set(v1) != find_set(v2)) {
            res += v[i].first;
            merge_set(v1,v2);
        }
    }
    return res;
}


int Solution::solve(int A, vector<vector<int> > &B) {
	n = A;
	m = (int)B.size();
	v.clear();
	for (int i = 0; i < m; i++) {
		int x,y, cost;
		x = B[i][0];
		y = B[i][1];
		cost = B[i][2];
		v.push_back(make_pair(cost,make_pair(x,y)));
	}
	sort(v.begin(),v.end());
	return kruskal();
}
