#include<iostream>
using namespace std;
int main(){
	int num; cin>>num;
	for(int g=0; g<num; g++){
		int len; char wor;
		cin>>wor>>len;
		int len1=(len-3)/2, len2;
		if(len%2==1)	len2=len1;
		else			len2=len1+1;
		int wid1=len/6+1, wid2=len/2-1;
		for(int i=0; i<wid1; i++)	cout<<" ";
		for(int i=0; i<wid2; i++)	cout<<wor;
		cout<<endl;
		for(int i=0; i<len1; i++){
			for(int i=0; i<wid1; i++)	cout<<wor;
			for(int i=0; i<wid2; i++)	cout<<" ";
			for(int i=0; i<wid1; i++)	cout<<wor;
			cout<<endl;
		}
		for(int i=0; i<wid1; i++)	cout<<" ";
		for(int i=0; i<wid2; i++)	cout<<wor;
		cout<<endl;
		for(int i=0; i<len2; i++){
			for(int i=0; i<wid1; i++)	cout<<wor;
			for(int i=0; i<wid2; i++)	cout<<" ";
			for(int i=0; i<wid1; i++)	cout<<wor;
			cout<<endl;
		}
		for(int i=0; i<wid1; i++)	cout<<" ";
		for(int i=0; i<wid2; i++)	cout<<wor;
		cout<<endl;
		if(g!=num-1)	cout<<endl;
	}
} 
