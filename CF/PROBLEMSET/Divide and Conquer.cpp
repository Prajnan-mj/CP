#include<bits/stdc++.h>
#define fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define MOD 1000000007 ;
using namespace std;
void solve(){
    int i , n ; 
    int x,y,z;
    cin>>x>>y;
    if(x==y){
        cout<<"YES"<<endl;
    }
    else if(x<y){
        cout<<"NO"<<endl;
    }
    else {
        if(x%y==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    #endif 
    int tt ; 
    cin>>tt ; 
    while(tt--){
        solve() ;
    }
}