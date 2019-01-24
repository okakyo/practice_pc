#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool cmp_x(const P& p,const P& q){
	if(p.x!=q.x)return p.x<q.x;
	return p.y<q.y;
}

//�ȉ��́A�O���n���X�L�����@�ɂ���@�F

vector<P> convex_hull(P* ps,int n){
	sort(ps,ps+n,cmp_x);
	int k=0;
	vector<P> qs(n*2);
	
	//�����̓ʕ�̍쐬
	
	for(int i=0;i<n;i++){
		while(k>1&&(qs[k-1]-qs[k-2]).det(ps[i]-qs[k-1])<=0) k--;
		qs[k++]=ps[i];
	}
	//�㑤�̓ʕ�̍쐬
	for(int i=n-2,t=k;i>=0;i--){
		while(k>t&&(qs[k-1]-qs[k-2]).det(ps[i]-qs[k-1])<=0) k--;
		qs[k++]=ps[i];
	}
	qs.resize(k-1);
	return qs;
}

//�����̂Q��
double dist(P p,P q){
	return (p-q).dot(p-q) 
}

int N;
P ps[MAX_N];

int main(){
	vector<P> qs=convert_hull(ps,N);
	double res=0;
	for(int i=0;i<qs.size();i++)
	for(int j=0;j<i;j++)
		res=max(res,dist(qs[i],qs[j]));
	printf("%.0f\n",res);

return 0;
}
