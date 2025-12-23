#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
vector<int>a(n);
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
   cin>>a[i];
}
bool ok=true;
for(int i=0;i<a.size()-1;i++){
  if(a[i]>=a[i+1]){
  ok=false;
  break;
  }
}
cout<<(ok? "Yes\n":"No\n")<<endl;
return 0;
}
