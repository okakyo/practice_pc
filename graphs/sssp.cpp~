#include<cstdio>
#include<vector>
#include<queue>
#include<cmath>
#include<utility>
#include<algorithm>

using namespace std;
const int INF=1000000;
const int N=10;

int main(){
	int n;
	while (true){
	scanf("%d",&n);
	if (!n) break;
	int dp[N][N];
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
		dp[i][j]=INF;	
	}
	int a,b,c;
	while (n--){
	scanf("%d%d%d",&a,&b,&c);
	dp[a][b]=c;
	dp[b][a]=c;
	}
	for(int k=0;k<N;k++)
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	if(dp[i][j]>dp[i][k]+dp[k][j])
	dp[i][j]=dp[i][k]+dp[k][j];

	int ans_i=0;
	for(int i=1;i<N;i++)
		if(sum[i]<sum[ans_i]&&sum[i]!=0)
			ans_i=i;

	printf("%d %d",ans_i,sum[ans_i]);
return 0;
}
