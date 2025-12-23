#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>a(n);

for(int i=0;i<n;i++){
cin>>a[i]; 
}
//অ্যারের মতো এভাবে direct করতে হলে সাইজ বলে দিতে হবে আগে অ্যারের মতোই।

for(int i=0;i<a.size();i++){
cout<<a[i]<<" ";
}
return 0;
}
