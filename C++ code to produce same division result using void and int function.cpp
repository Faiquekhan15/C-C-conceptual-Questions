#include<iostream>
using namespace std;
void sum1(double &sum, unsigned int N) {
	double i=1;
	double value;
	while(i<=N) {
		value=1/i;
		sum+=value;
		i++;
	}
	cout<<"Sum of function 1 is "<<sum<<endl;
}
double sum2(unsigned int N) {
	double sum=0;
	double i=1;
	double value;
	while(i<=N) {
		value=1/i;
		sum+=value;
		i++;
	}
	return sum;
}

int main() {
	double sum=0;
	double N=0;
	cout<<"Enter number"<<endl;
	cin>>N;
	sum1(sum, N);
	cout<<"Sum of function 2 is "<<sum2(N)<<endl;
	return 0;
}
