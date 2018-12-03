/*これは、フィボナッチ数列のメモ再帰化させたものである。*/

#include<cstdio>

iusing namespace std;

int memo[100];

int fib(int n){
	if (n<=1) return 1;
	if (memo[n]!=0) return memo[n];
	return memo[n]=fib(n-1)+fib(n-2);
	
}

int main(){
	int N,i=1,ans=fib(i);
	printf("Nを入力してください。：");
	scanf("%d",&N);
	do{
		i++;
		ans=fib(i);

	}while (N>fib(i));
	printf("n=%dで,f=%dである。",i,ans);
return 0;
}
