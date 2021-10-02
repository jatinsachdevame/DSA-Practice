#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second

const ll mod = 1e9 + 7;

class dsu {

	int *par, *rank;
	int N;

public: 

	dsu(int N) {
		this -> N = N;
		par = new int[N];
		rank = new int[N];

		for(int i = 0; i < N; ++i) {
			par[i] = -1;
			rank[i] = 1;
		}
	}

	int find(int X) {
		if(par[X] == -1) {
			return X;
		}

		return par[X] = find(par[X]);
	}

	bool unite(int A, int B) {
		int s1 = find(A);
		int s2 = find(B);

		if(s1 != s2) {
			if(rank[s1] < rank[s2]) {
				rank[s2] += rank[s1];
				par[s1] = s2;
			} else {
				rank[s1] += rank[s2];
				par[s2] = s1;
			}
		} else {
			return 0;
		}
		return 1;
	}

	void output() {
		rep(i, 0, N) {
			printf("%d ", par[i]);
		}puts("");
		
		rep(i, 0, N) {
			printf("%d ", rank[i]);
		}puts("");
		return;
	}

};	

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int N, M;
	scanf("%d%d", &N, &M);

	vector<pair<int, int>> edges(M);

	rep(i, 0, M) {
		int X, Y;
		scanf("%d%d", &X, &Y);
		X--;Y--;
		edges[i] = mp(X, Y);
	}

	dsu D(N);	

	bool ok = 1;

	rep(i, 0, M) {
		if(D.unite(edges[i].ff, edges[i].ss)) {
			continue;
		} else {
			ok = 0;
			break;
		}
	}

	// printf("%d\n", D.find(3));

	D.output();

	if(ok) puts("No cycle!");
	else puts("Cycle is present!");

	return 0;
}