#include<iostream>
using namespace std;

int everythingBehind(int,int);
int get(int,int);

int main() {	
	cout<<get(4,4);
}


int everythingBehind(int x,int y) {
 	if(x==1 || y==1){
 		return 1;
	 }
	return get(--x,y) + everythingBehind(--x,y);
} 

int get(int x,int y) {
	if(x==1|| y==1){
 		return 1;
	 }
	return get(x,--y) + everythingBehind(x,--y);
}
