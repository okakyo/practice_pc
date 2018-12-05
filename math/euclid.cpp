#include<cstdio>

using namespace std;

void extGcd(int a, int b, int &x,int &y){
	if(b){
		extGcd(b,a%b,x,y);
		int tx=x;ty=y;
		x=ty;
		y=tx-a/b*ty;
	}
	else{
	x=1;y=0;
	}
}

int main(){
	int a,b,x,y;
	scanf("%d%d",&a,&b);
	extGcd(a.b,x,y);
	printf("%d %d",x,y);
return 0;
}
