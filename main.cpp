#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int t,i,j,k;
	char x[1000];
	stack<char> ph;
	cin>>t;
	cin.ignore();
	for(i=0;i<t;i++){
		k=0;
		gets(x);
		
		for(j=0;j<strlen(x);j++){
			if(x[j]=='<' || (x[j]=='>' && !ph.empty())){
				if(x[j]=='>' && ph.top()=='<'){
					ph.pop();
					k++;
				}
				else{
					ph.push(x[j]);
				}
			}
		}
		cout<<k<<endl;
		while(!ph.empty()) ph.pop();
	}

	system("pause");
	return 0;
}

