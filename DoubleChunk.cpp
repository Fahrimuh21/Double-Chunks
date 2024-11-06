#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<long long, int> v;
	fill(v.begin(), v.end(), 0);
	int kacang[n];
	for(int i=0; i<n; i++){
		cin>>kacang[i];
	}
	int max_kacang=0;
	for(int i=0; i<n-1; i++){
		long long sum=kacang[i]+kacang[i+1];
		if(kacang[i]+kacang[i+1]==kacang[i+1]+kacang[i+2]){
			v[sum]+=1;
			i++;
		}else{
			v[sum]+=1;
		}
		max_kacang = max(v[sum], max_kacang);
	}
	cout<<max_kacang<<endl;
}
