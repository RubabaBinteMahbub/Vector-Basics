/*Last occurrence position of a number
in a vector.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,num;
cout<<"Enter the size : ";
cin>>n;
cout<<"Enter the number : ";
cin>>num;
vector<int>a;
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
}
bool found=false;
for(int i=a.size()-1;i>=0;i--){
		if(a[i]==num){
		cout<<"Last occurrence of "<<num<<" is at index "<<i<<endl;
		found=true;
		break;
		}
}
if(!found) cout<<"Not found."<<endl;
return 0;
}
