#include<cstdio>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

typedef pair<int int> P;
typedef vector<int> vi;

const int INF=1000000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
	vector<Vi> field(5,Vi(5));
	vector<Vi>dist(5,VI(5,INF));
	vector<Vi> prev(5,Vi(5,-1));
	vector<P> ans;
	for(int i=0;i<5;i++){
		for(int i=0;i<5;i++){
			scanf("%d",&field[i][j]);
		}
	}
	
	queue<P> que;
	que.push(P(0,0));
	dist[0][0]=0;

	while(!que.empty()){
		p=que.front();que.pop();
		if(p.first==4&&p.second==4){
			for(;;){
				ans.push_back(p);
				if(p.second==0&&p.first==0) break;
				int i=prev[p.first][p.second];
				int nx=p.second-dx[i];
				int ny=p.first-dy[i];
				p=P(ny,nx);
			}
		break;
		}
		for(int i=0;i<4;i++){
			int nx~
		
		}
	}
return 0;
}

