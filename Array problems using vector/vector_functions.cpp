#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={1,2,3,4,5};
  
//vector<int>a; or vector<int>a(5);
  
cout<<"Size of vector a:"<<a.size()<<endl; //5
a.resize(7);
cout<<"Updated size of vector a:"<<a.size()<<endl;//7

a.push_back(6);//1 2 3 4 5 6
a.insert(a.begin()+2,10);//1 2 10 3 4 5 6
												
a.pop_back();//1 2 10 3 4 5 (erases exact last element.)
a.erase(a.begin()+2);//1 2 3 4 5

a.clear(); //All elements will be erased.
return 0;
}
