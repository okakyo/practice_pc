#include<window.c>
#define n 65

void triangle(int i, int j){
	gr_wline(i,j+1,i-1,j,Black);
	gr_wline(i-1,j,i+1,j,Black);
	gr_wline(i+,j,i,j+1,Black);
}


int main(){

	static char a[2*N+1],b[2*N+1];
	for(int i=0;i<=2;i++)
		a[i]=0;
	a[N]=1;

	for(int i=1;i<N;i++){
		for(int j=N-i;j<=N+i;j++)
			if(a[j]) triangle(j,N-i);
		for(int j=N-i;j<=N+i;j++)
			b[j]=(a[j-1]!=a[j+1]);
		for(int j=N-i;j<=N+i;j++)
			a[j]=b[j];

	}
	gr_BMP("gasket.bmp");
return 0;
}
