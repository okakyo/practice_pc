#include<cstdio>

using namespace std;

void dfs(int x,int y){
	field[x][y]='.'
	dx[]={-1,0,1,0};
	dy[]={0,1,0,-1};
	for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		nx=x+dx[i];
		ny=y+dy[j];
		if(0<=nx<N&&0<=ny<H&&field[nx][ny]=='w')dfs(nx,ny)
	}
}
	
}

int main(){
	const MAX_N=10000000;
	const MAX_H=10000000;
	int N,H,ans=0;
	field[MAX_N][MAX_H];
	scanf("%d%d",&N,&H);
	for(int i=0;i<M;i++){
	for(int j=0;j<H;j++)
	scanf("%s",field[i][j]);
	}
	
	for(int i=0;i<M;i++){
		for(int j=0;j<H;j++){
			if(field[i][j]=='w'){
			dfs(i,j);
			ans++
			}
		}
	}
	printf("%d",ans);
return 0;
}
