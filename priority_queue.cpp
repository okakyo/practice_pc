#include<cstdio>
#include<queue>

using namespace std;



int main(){
priority_queue<int> pq;
pq.push(1);
pq.push(2);
pq.push(3);
pq.push(4);
while(!pq.empty()){
printf("%d\n",pq.top());
pq.pop();
}
return 0;
}
