#include<iostream>

typedef long long ll;

ll fastPow(ll x,ll n){
	if(n==0)
		return 1;
	ll res=fastPow(x*x,n/2);
	if(n&1)
		res=res*x;
	return res;

}
