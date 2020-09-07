#include<iostream>
using namespace std;
struct sss{
	int cop, hor, min, sed, num, rak;
}peo[140];
int main(){
	int N, G, S, C, M; 
	while(cin>>N>>G>>S>>C>>M){
		if(N==0&&G==0&&S==0&&C==0&&M==0)	break;
		char rub;
		for(int i=0; i<N; i++)	cin>>peo[i].cop>>peo[i].hor>>rub>>peo[i].min>>rub>>peo[i].sed;
		sss tmp;
		for(int i=0; i<N; i++)	peo[i].num=i+1;
		for(int i=0; i<N-1; i++)
			for(int j=i+1; j<N; j++)
				if(peo[i].cop<peo[j].cop){
					tmp=peo[i]; peo[i]=peo[j]; peo[j]=tmp;
				}
		for(int i=0; i<N-1; i++){
			for(int j=i+1; j<N; j++){
				if(peo[j].cop!=peo[i].cop)	break;
				if(peo[i].hor>peo[j].hor){
					tmp=peo[i]; peo[i]=peo[j]; peo[j]=tmp;
				}
				else if(peo[i].hor==peo[j].hor){
					if(peo[i].min>peo[j].min){
						tmp=peo[i]; peo[i]=peo[j]; peo[j]=tmp;
					}
					else if(peo[i].min==peo[j].min){
						if(peo[i].sed>peo[j].sed){
							tmp=peo[i]; peo[i]=peo[j]; peo[j]=tmp;
						}
					}
				}
			}
		}
		for(int i=0; i<N; i++)	peo[i].rak=i+1;
		int ns;
		for(int i=0; i<N; i++)
			if(peo[i].num==M)	ns=peo[i].rak;
		if(ns>0&&ns<=G)	cout<<"Accepted today? I've got a golden medal :)"<<endl;
		else if(ns>G&&ns<=G+S)	cout<<"Accepted today? I've got a silver medal :)"<<endl;
		else if(ns>G+S&&ns<=G+S+C)	cout<<"Accepted today? I've got a copper medal :)"<<endl;
		else	cout<<"Accepted today? I've got an honor mentioned :)"<<endl;
	}
	return 0;
} 
