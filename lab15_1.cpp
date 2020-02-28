#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()

void randData(double *a,int b,int c){
	double v;
	for(int i=0;i<b*c;i++){
		
			v = rand()%100/(double)100;
			*(a+i)=v;
		
	}

}

void showData(double *h,int l,int m){
	for(int i=1;i<=l*m;i++){
		cout<<*(h+i-1)<<" ";
		if(i%m==0){
		cout<<"\n";
		}
		
	}
	cout<<"\n";
}


void findRowSum(const double*d,double*e,int f,int g){
	double sum;
	for(int i=0;i<f;i++){
		sum = 0;
		for(int j=0;j<g;j++){
			sum+=*(d+i*g+j);
		}
		*(e+i) = sum;
	}
}

