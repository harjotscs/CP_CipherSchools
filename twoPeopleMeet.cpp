#include <bits/stdc++.h> 
using namespace std; 

bool everMeet(int &x1, int &x2, int &v1, int &v2) 
{ 
	if (x1<x2 && v1<=v2) 
	return false; 
	if (x1>x2 && v1>=v2) 
	return false; 

	if (x1<x2) 
	{ 
		swap(x1,x2); 
		swap(v1,v2); 
	}	 
	return ((x1-2)%(v1-v2)==0); 
} 

int main() 
{ 
	int x1=11,v1=15,x2=9,v2=12; 
	if (everMeet(x1,x2,v1,v2)) 
		printf("Yes, they will meet");	 
	else
		printf("No, they will not meet"); 
	return 0; 
}
