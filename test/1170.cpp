#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int god=0; god<n; god++){
		char s; int A, B;
		cin>>s>>A>>B;
		if(s=='+'){
			int C; C=A+B; cout<<C<<endl;
		}
		else if(s=='-'){
			int C; C=A-B; cout<<C<<endl;
		}
		else if(s=='*'){
			int C; C=A*B; cout<<C<<endl;
		}
		else if(s=='/'){
			int charge=A%B;
			if(charge==0){
				int C; C=A/B; cout<<C<<endl;
			}
			else{
				float C;	C=A*1.0/B;
				printf("%.2lf\n", C);
			}
		}
	}
	return 0;
}
