#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
class player{
	private:
		int num;			//������ 
		bool ired;			//�Ƿ�Ϊ�췽 
		bool ideath;		//�Ƿ񱻷��� 
		int sumvote;		//��Ʊ 
		bool imanager;		//�Ƿ�Ϊ�峤 
		bool iopen;			//�Ƿ����� 
	public:
		void setnum(int n){
			num=n;
		}
		void setired(int n){
			ired=n;
		}
		void offnum(){
			cout<<num;
		}
		int offired(){
			if(ired==1)	return 1;
			else		return 0;	
		}
}peo[100];
int main(){
	srand((int)time(0));		//�趨����� 
	int pnum;
	cout<<"���������������";
	cin>>pnum;
	int nblk=pnum/2, nred=pnum/2;
	if(pnum%2==1)	nred++;
	int nb=nblk, nr=nred;
	for(int i=0; i<pnum; i++){
		peo[i].setnum(i+1);
	}
	for(int i=0; i<pnum; i++){
		int sc=rand()%100;
		sc%=2;
		if(sc==1){
			if(nr>0){
				peo[i].setired(1);
				nr--;
			}
			else{
				peo[i].setired(0);
				nb--;
			}
		}
		else if(sc==0){
			if(nb>0){
				peo[i].setired(0);
				nb--;
			}
			else{
				peo[i].setired(1);
				nr--;
			}
		}
	}
	cout<<endl;
	for(int i=0; i<pnum; i++){
		peo[i].offnum();
		if(peo[i].offired()==1)	cout<<" ��"<<endl;
		else if(peo[i].offired()==0)	cout<<" ��"<<endl;
	}
	return 0;
}
