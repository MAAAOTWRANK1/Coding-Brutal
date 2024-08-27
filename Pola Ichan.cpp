#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;cin>>N;
  for(int i = 1; i <= (N+1)/2;i++){
    for(int j = 1; j<=N/2-i+N%2; j++){
    cout<<" ";
    }
    for(int k = N%2; k < i*2;k++ ){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i = 1; i <= N/2; i++){
    for(int j=1; j <= i*2 ; j++){
      cout<<" ";
    }
    for(int k = 1;k <= N-i*2;k++){
      cout<<"*";
    }
    cout<<endl;
  }
}