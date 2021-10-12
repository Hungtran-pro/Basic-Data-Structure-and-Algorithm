#include<bits/stdc++.h>
using namespace std;

 static int idpre=0;

void printpost(int in[],int pre[],int begin,int end,map<int,int >m){
   
	if(begin>end) return;
	int index=m[pre[idpre++]];
	printpost(in,pre,begin,index-1,m);//cay con trai
	printpost(in,pre,index+1,end,m);//cau con phai
	cout<<in[index]<<" ";
}
void solve(int in[],int pre[],int n){
	map<int,int> m;
	for(int i=0;i<n;i++) m[in[i]]=i;
	printpost(in,pre,0,n-1,m);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int in[1005],pre[1005];
	
		for(int i=0;i<n;i++) {
		cin>>pre[i];
		in[i]=pre[i];
		}
		sort(in,in+n);
		solve(in,pre,n);
		cout<<endl;
		idpre=0;
	
}
}
