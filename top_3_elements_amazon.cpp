#include<iostream>
#include<queue>
using namespace std;
void print_heap(priority_queue<int,vector<int> ,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
}
int main(){
	priority_queue<int,vector<int> ,greater<int> > h;//min heap-->apne ap heapify ho jayega
	int count=0;
	int n;
	int top=3;
	while(1){
		cin>>n;
		if(n==-1){
			print_heap(h);//yaha humne heap ke print krwane ke liye aalag function likha hain because 
			// since original mein pop() hora tha which means ek point par heap empty ho jayegi
			// par humko heap ko empty nhi karna 
			// iss liye function mein aalag print kr wai hain ki ussi scope mein pop hoga original heap par fark nhi pdega aur as it is rahegi kyuki humko
			// aage ussko aur no se compare bhi krwana hain
		}
		else{
			if(count<top){
				h.push(n);
				count++;
			}
			else{
				if(h.top()<n){
					h.pop();
					h.push(n);
				}
			}
		}
	}
	return 0;
}