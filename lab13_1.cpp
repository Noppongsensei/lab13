#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[]){
    double sum=0;
    double X=0;
    double Y=1;
    double F=0;
    double Max=A[0];
    double Min=A[0];
    for(int i=0;i<N;i++){
        sum+=A[i];
        B[0]=sum/N;
    }
    for(int i=0;i<N;i++){
        X+=pow((A[i]-B[0]),2);
        B[1]=sqrt(X/N);
    }
    for(int i=0;i<N;i++){
        Y*=A[i];
        B[2]=pow(Y,1.0/N);
    }
    for(int i=0;i<N;i++){
        F+=(1/A[i]);
        B[3]=N/F;
    }
    for(int i=0;i<N;i++){
        if(Max<A[i])Max=A[i];
        B[4]=Max;
    }
     for(int i=0;i<N;i++){
        if(Min>A[i])Min=A[i];
        B[5]=Min;
    }
}