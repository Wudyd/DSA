/* 	
	Prime Factorization
	2019-2-28
	
	QUESTIONS:
	1. forget to verify that is i a prime? or needn't? (line:22)
		A:	Brute force attack
	2. optimal condition to end loop timely.(line:22)
	3. what are the best case and the worst case?
		A:	b: n=2^k.			T(n)= k =	O(logn)
			w: n is a prime.	T(n)=n-1=	O(n)
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long long int N,i;
	scanf("%lld",&N);	// input positive integer
	
	if(N==1)			// output expression
		printf("1=1\n");
	else{
		cout<<N<<"=";
		for( i=2;i<=N && N;i++){
//		for(int i=2;i<N;i++){
			long long int pi=0,ki=0;
			
			while(N%i==0){	// getPi, getKi
				pi=i;
				N/=i;
				ki++;
			}
			if(pi){	// pi exists? print : continue;
				printf("%lld",pi);
				if(ki>1)
					printf("^%lld",ki);
				if(N>1)
					printf("*");
			}
		}
	}
	cout<<"\nThe for-loop ends when i="<<i<<"."<<endl;
	
	return 0;
} 
