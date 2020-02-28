#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()

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


void findColSum(const double*d,double*e,int f,int g){
	double sum;
	for(int i=0;i<g;i++){
		sum = 0;
		for(int j=0;j<f;j++){
			sum+=*(d+i+j*f);
		}
		*(e+i) = sum;
	}
}