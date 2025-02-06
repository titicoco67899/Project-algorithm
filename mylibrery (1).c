#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include"my headers.h"


int factorial(int A)
{
	int i,prod;
	prod=1;
	if(A<0)
	{
		return ERR_INVALID_INPUT;
	}
	else
	{
		if(A==0)
		{
			prod=1;
		}
		else
		{
			for(i=1;i<=A;i++)
			{
				prod=prod*i;
			}
		}
		return prod;
	}
	
}


int GCD(int A,int B)
{
	int i,temp;
	if(A<0)
	{
		A=A*-1;
	}
	if(B<0)
	{
		B=B*-1;
	}
	if(A==0)
	{
		return B;
	}
	if(B==0)
	{
		return A;
	}
	
	while(B!=0)
	{
		temp=B;
		B=A%B;
		A=temp;
	 } 
	 return A;
	}

int sumofdigits(int A)
{
	int sum;
	sum=0;
	if(A<0)
	{
		A=A*-1;
	}
	while(A>0)
	{
		sum=sum+(A%10);
		A=A/10;
	}
	return sum;
	}
	
int sumofdivisors(int A)
{
	int sum,i;
	sum=0;
	if(A<0)
	{
		A=A*-1;
	}
	
	
	if(A==0)
	{
		return ERR_OUT_OF_MEMORY;
	}
	else
	{
		for(i=1;i<=(A/2);i++)
		{
			if(A%i==0)
			{
				sum=sum+i;
			}
		}
		return sum;
	}
		
			
		}
	
		

bool isprime(int A)
{
	bool prime;
	int i;
	prime=true;
	if(A<0)
	{
		prime=false;//negatives are not prime//
	}
	else
	{
		
		switch (A)
	{
		case 0:prime=false;break;
		case 1:prime=false;break;
		case 2:prime=true;break;
		case 3:prime=true;break;
		default:
			{
				for(i=2;i<=sqrt(A);i++)
				{
					if(A%i==0)
					{
						prime=false;break;
					}
				}
				break;
			}
			
		}
		
	}
	
		return prime;	
		}

int reverseNumber(int A)
{
	int b,d,save;
	b=0;
	save=A;
	if(A<0)
	{
		A=A*-1;
	}
	while(A>0)
	{
		d=A%10;
		b=b*10+d;
		A=A/10;
	}
	if(save<0)
	{
		b=b*-1;
	}
	return b;
}

bool isPalindrome(int A)
{
	int reverse;
	bool palindrom;
	reverse=reverseNumber(A);
	if(A==reverse)
	{
		palindrom=true;
	}
	else
	{
		palindrom=false;
	}
	return palindrom;
}

bool isEven(int A)
{
	bool even;
	if(A<0)
	{
		A=A*-1;
	}
	if(A%2==0)
	{
		even=true;
	}
	else{
		even=false;
	}
	return even;
}

int Lcm(int A,int B)
{
	int lcm,gcd;
	if(A<0)
	{
		A=A*-1;
	}
	if(B<0)
	{
		B=B*-1;
	}
	gcd=GCD(A,B);
	lcm=(A*B)/gcd;
	return lcm;
}


				
void primefactors(int A)//as i understood this function should do prime factorization for an input parameter so here the power of each prime factor is required//
{
	
	int i,count,l,save;
	
	if(A<0)
	{
		A=A*-1;
	}
	save=A;//save is used inside the loop for instead of A(the value of A changes inside the loop for)//
	switch(A)
	{
		case 0:printf("undefined value\n");break;//primefactorization of 1 and 0 is undefined also they gonna cause problems durinf the etiration of loop for//
		case 1:printf("undefined value\n");break;
		default:{
			for(i=1;i<=save;i++)
	{
		count=0;
		if(A%i==0 && isprime(i)==true)
		{
			do{
				A=A/i;
				count=count+1;
				l=A%i;
			}while(l==0);
			
				printf("%d^%d\n",i,count);
			}
			
			
			if(A==1)//the process of for loop stop when reaching 1//
			{
				break;
			}
		}
	}
			break;
		}
	}
								

bool isArmstrong(int A)
{
	bool arm;
	int sum,save1,save2,count,d;
	sum=0;
	count=0;
	if(A<0)
	{
		arm=false;//negative numbers are not armstrong//
	}
	else
	{
		save1=A;
		save2=A;
		while(A>0)
		{
			A=A/10;
			count=count+1;
		}
		while(save1>0)
		{
			d=save1%10;
			sum=sum+pow(d,count);
			save1=save1/10;
		}
		if(save1==save2)
		{
			arm=true;
		}
		else
		{
			arm=false;
		}
		
	}
	return arm;
		}		

bool isPerfect(int A)
{
	int i,sum;
	bool perfecte;
	sum=0;
	if(A<=0)
	{
		perfecte=false;//mathematiclly negative numbers are not considered perfect,0is not perfect too//
	}
	else
	{
		if(A==1)
		{
			perfecte=true;//1will cause a probleme during the etiration of the loop for because (1>1/2)//
		}
		else
		{
			for(i=1;i<=(A/2);i++)
			{
				if(A%i==0)
				{
					sum=sum+i;
				}
			}
			if(sum==A)
			{
				perfecte=true;
			}
			else
			{
				perfecte=false;
			}
		}
		}
		return perfecte;
		
	}

bool isMagic(int A){
	int s;
	bool magic;
	s=sumofdigits(A);
	while(s>9)
	{
		s=sumofdigits(s);
	}
	if(s==1)
	{
		magic=true;
	}
	else
	{
		magic=false;
	}
	return magic;
}

bool isAutomorphic(int A)
{
	int newA,save,count;
	bool automor;
	if(A<0)
	{
		A=A*-1;//negative
	}
	save=A;
	count=0;
	newA=pow(A,2);
	
	
	
		while(A>0)
	{
		A=A/10;
		count=count+1;
	}
	
	
	
	if(save==((newA) % (int)pow(10,count)))
	{
		automor=true;
	}
	else
	{
		automor=false;
	}
	return automor;
	
}
void fibonacciSeries(int A)
{
	int g,F;
	if(A<0)
	{
		printf("undefined value");//it is better for a librrary to be non-interactive//
	}
	else
	{
		for(g=0;g<=(A);g++)//we considered n(A in my code) as the index (but if you considered n as number of outputs than loop for will etirate to (g<=A-1) and 0 will be treated as invalid input//
	{
		F=(1/sqrt(5))*(pow((1+sqrt(5))/2,g)-pow((1-sqrt(5))/2,g));//this is a mathimatical formula to compute F(n) it works for all terms of fibonacci sequence//
		printf("%d\n",F);
	}
	}

	
}
		
void toBinary(int A,int *b)
{
	int save,place;
	
	place=1;
	save=A;
	if(b!=0)
	{
		printf("initialize your second input to 0");
	}
	if(A<0)
	{
		A=A*-1;
	}
	while(A>0)
	{
		*b=*b+(A%2)*place;
		A=A/2;
		place=place*10;
	}
	
	if(save<0)
	{
		*b=*b * -1;
		
		
	}
	
	}	
	
bool isNarcessistic(int A)
{
	bool narc;
	int sum,save1,save2,count,d;
	sum=0;
	count=0;
	if(A<0)
	{
		narc=false;//negative numbers are not narcessite//
	}
	else
	{
		save1=A;
		save2=A;
		while(A>0)
		{
			A=A/10;
			count=count+1;
		}
		while(save1>0)
		{
			d=save1%10;
			sum=sum+pow(d,count);
			save1=save1/10;
		}
		if(save1==save2)
		{
			narc=true;
		}
		else
		{
			narc=false;
		}
		
	}
	return  narc;
		}			

bool isHappy(int A)
{
	int sum,s,save;
	bool happ;
	sum=0;
	
	if(A<0)
	{
		happ=false;//nagative numbers are not considered happy//
	}
	else
	{
		while(A>0)
		{
			sum=sum+pow(A%10,2);
			A=A/10;
		}
		while(sum>9)//suming the digits recursevly//
		{
			save=sum;//save is used as a variable that take each time the value of (sum) so we can sum its digits//
			s=0;
			while(save>0)
			{
				s=s+pow(save%10,2);
				save=save/10;
			}
			sum=s;
		}
		if(sum==1)
		{
			happ=true;
		}
		else
		{
			happ=false;
		}
	}
	return happ;
	}	
	
bool isAbundant(int A)
{
	int i,sum;
	bool abundant;
	sum=0;
	if(A<0)
	{
		abundant=false;//negative numbers are not considered abundant//
	}
	else
	{
		if(A==0 || A==1)
		{
			abundant=false;//0 and 1 will cause a probleme during the etiration of the loop for//
		}
		else
		{
			for(i=1;i<=(A/2);i++)
			{
				if(A%i==0)
				{
					sum=sum+i;
				}
			}
			if(sum>A)
			{
				abundant=true;
			}
			else
			{
				abundant=false;
			}
		
		}
		
	}
	return abundant;
}
bool isDeficient(int A)
{
	int sum,i;
	bool def;
	sum=0;
	if(A<0)
	{
		def=false;//sum of propre divisors of a nrgative number is always 0(greater than the number)//
	}
	else
	{
		if(A==0 || A==1)
		{
			def=false;//0 and 1 cause a probleme during the etiration of (for)//
		}
		else
		{
			for(i=1;i<=(A/2);i++)
			{
				if(A%i==0)
				{
					sum=sum+i;
				}
			}
			if(sum<A)
			{
				def=true;
			}
			else
			{
				def=false;
			}
			
		}
		
	}
	return def;
}
bool isHarchad(int A)
{
	int s;
	bool harch;
	s=sumofdigits(A);
	if(A==0)
	{
		harch=false;
	}
	else
	{
		if(A%s==0)
	{
		harch=true;
	}
	else
	{
		harch=false;
	}
	}
	
	return harch;
} 

unsigned long catalanNumber(int A)
{
	unsigned long C;
	
	if(A<0)
	{
		return ERR_INVALID_INPUT;//it is better for a librrary to be non-interactive//
	}
	else
	{
		if(A>18)
		{
			return ERR_OUT_OF_MEMORY;
		}
		else
		{
			C=factorial((A)*2)/(factorial(A+1)*factorial(A));//we considered n(A in my code) as the index of catalan number but if not then 0 will be an invalid input and and we add -1 to A to calculate C(first c number is C0)//
			return C;
		}
		
	}
	
}
 int sumofprimes(int A)
 {
 	int s,i;
 	
 	s=0;
 	
	for(i=0;i<=A;i++)
	{
		
		if(isprime(i)==true)
		{
			s=s+i;
		}
	 } 
	return s; 
 }

int sumEvenFibonacci(int A)
{	
	
	
	int g,F,sum;
	sum=0;
	if(A<0)
	{
		return ERR_INVALID_INPUT;
	}
	else
	{
		for(g=0;g<=(A);g++)//I considered n(Ain my code) as the index but if not than loop for will etirate to (g<=A-1) and 0 will be treated as invalid input//
	{
		F=(1/sqrt(5))*(pow((1+sqrt(5))/2,g)-pow((1-sqrt(5))/2,g));//this is a mathimatical formula to compute F(n) it works for all terms of fibonacci sequence//
		if(F%2==0)//easier for the program than using evenodd function//
		{
			sum=sum+F;
		}
	}
	return sum;

	}
	
}

int numberofdigits(int A)//this function is used to increase modularity in the code//
{
	int count;
	count=0;
	if(A<0)
	{
		A=A*-1;
	}
	while(A>0)
	{
		A=A/10;
		count=count+1;
	}
	return count;
}

bool isKaprekar(int A)
{
	int sum,s,Nd;
	bool kaprekar;
	Nd=numberofdigits(A);
	s=pow(A,2);
	sum=s%(int)pow(10,Nd)+s/(int)pow(10,Nd);
	if(sum==A)
	{
		kaprekar=true;
	}
	else
	{
		kaprekar=false;
	}
	return kaprekar;
	
}


	
bool isSmith(int A)
{
	int i,count,l,save,sum2,sum1;
	bool pri,smith;
	sum2=0;//sum of digits of the prime factors//
	sum1=sumofdigits(A);
	if(A<0)
	{
		smith=false;
	}
	else
	{
		save=A;//save is used inside the loop for instead of A(the value of A changes inside the loop for)//
		pri=isprime(A);
	switch(pri)
	{
		case true:smith=false;break;
		case false:{
			if(A==0 || A==1)
			{
				smith=false;
			}
			else
			{
				for(i=1;i<=save;i++)
	{
		
		if(A%i==0 && isprime(i)==true)
		{
			do{
				A=A/i;
				sum2=sum2+sumofdigits(i);
				l=A%i;
			}while(l==0);
			
				
			}
			
			
			if(A==1)//the process of for loop stop when reaching 1//
			{
				break;
			}
		}
		if(sum1==sum2)
		{
			smith=true;
		}
		else
		{
			
			smith=false;
		}
	}
			}
			
			break;
		}
		
			
			
		}
		return smith;
	

	}
	


double SqrtApprox(int A)
{
	double x,temp,d;
	x=A/2;
	if(A<0)
	{
		printf("undefined value");
		return ERR_INVALID_INPUT;//error code//
	}
	else
	{
		if(A==0)//avoid division by 0//
		{
			x=0;
		}
		else
		{
				do
	{
		temp=x;
		x=0.5*(x+A/x);
		d=x-temp;
		if(d<0)
		{
			d=d*-1;//we should take the absollute value of the diffrence//
		}
	}while(d>=0.000001);
		}
	
	return x;
	}
	
	
	}
	
double power(int base,int exp)
{
	int i;
	double prod,m;
	prod=1;
	m=1.0/base;
	if(exp<0)
	{
		if(base==0)
		{
			
			return ERR_INVALID_INPUT;
		}
		else
		{
			for(i=exp;i<=-1;i++)
		{
			prod=prod*m;
		
		}
		return prod;
		}
		
	}
	else
	{
			for(i=1;i<=exp;i++)
		{
			prod=prod*base;
		}
		return prod;
	}
	
		}		


	
void pascalTriangle(int A)
{
	int i,k,c;
	if(A<=0)//according to the explanation of this procedure 0 is invalid input(first 0 row does not make sense))
	{
		printf("invalid input");
	}
	else
	{
		for(i=0;i<=A-1;i++)
	{
		for(k=0;k<=(i);k++)
	{
		c=factorial(i)/(factorial(k)*factorial(i-k));//i is the number of the row starting from0 and k is the position in the row starting from0//
		 printf("%d",c);
	}
	printf("\n");
	}
	}
	
	
	}
	
void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<=(size-1);i++)
	{
		printf("%d\n",arr[i]);
	}
	}	

int Findmax(int arr[],int size)
{
	int max,i;
	max=arr[0];
	for(i=1;i<=(size-1);i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
	}

int Findmin(int arr[],int size)
{
	int i,min;
	min=arr[0];
	for(i=1;i<=(size-1);i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
	}

int SumArray(int arr[],int size)
{
	int i,sum;
	sum=0;
	for(i=0;i<=size-1;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
		}	
		
double averageArray(int arr[],int size)
{
	int sume;
	double average;
	sume=SumArray(arr,size);
	average=sume/size;
	
	return average;
			}
			
bool isSorted(int arr[],int size)
{
	int i,k;
	bool sort;
	sort=true;
	for(i=0;i<=(size-1);i++)
	{
		k=i+1;
		if(arr[i]>arr[k])
		{
			sort=false;
			break;
		}
	}
	return sort;
						}
						
void reverseArray(int arr[],int size)
{
	int i,k,temp[20];
	
	
	i=size-1;
	for(k=0;k<size;k++)
	{
	
		temp[k]=arr[i];
		i--;
			
		}
	for(i=0;i<size;i++)
	{
		arr[i]=temp[i];
	}
	
	
	
												}
												
void countEvenOdd(int arr[],int size,int *evencount,int *oddcount)
{
	int i;
	*evencount=0;
	*oddcount=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			evencount=evencount+1;
		}
		else{
			oddcount=oddcount+1;
		}
	}
}

int SecondLargest(int arr[],int size)
{
	int i,k,max2,max,min,d;
	bool find;
	find=false;
	max=Findmax(arr,size);
	min=Findmin(arr,size);
	d=max-min;
	max2=max;
	for(i=1;i<=d;i++)
	{
		for(k=0;k<size;k++)
		{
			if(arr[k]==(max-i))
			{
				max2=arr[k];
				find=true;
				break;
			}
			
		}
		if(find==true)
		{
			break;
			
		
			}
	}
	return max2;
}


void elementFrequency(int arr[],int size)

{
	int g,i,k,count;
	bool find;
	for(i=0;i<size;i++)
	{
		count=0;
		find=false;
		for(g=0;g<i;g++)
		{
			if(arr[g]==arr[i])
			{
				find=true;
			}
		}
		for(k=i+1;k<size;k++)
		{
			if(find==true)
			{
				break;
			}
			if(arr[k]==arr[i])
			{
				count=count+1;
			}
		}
		if(find==false)
		{
			count=count+1;
		printf("the frequency of %d is:%d",arr[i],count);
		}
		
	}
	
}


int removeDuplicates(int arr[],int size)
{
	int temp[size],i,k,j;
	bool find;
	
	j=0;
	for(i=0;i<size;i++)
	{
		find=false;
		for(k=0;k<j;k++)
		{
			if(arr[i]==temp[k])
			{
				find=true;
				break;
			}
			
		}
		
		if(find==false)
			{
				temp[k]=arr[i];
				j++;
			}
	}
	return (j);
	
}

int binarysearch(int arr[],int size,int target)
{
	int mid,hight,low,i;
	bool find;
	low=0;
	hight=size-1;
	find=false;
	while(low<=hight)//to ensure that the loop goes through all elements in the array//
	{
		mid=(low+hight)/2;
		if(arr[mid]==target)
		{
			find=true;
			return mid;
			
		}
		else
		{
			if(arr[mid]<target)
			{
				hight=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	if(find==false)
	{
		return -1;
	}
}

int linearSearch(int arr[],int size,int target)
{
	int i;
	bool find;
	find=false;
	for(i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			find=true;
			return i;
			
		}
	}
	if(find==false)
	{
		return -1;
	}
}
void leftshift(int arr[],int size,int k)
{
	int i,temp[20];
	
	
	k=k%size;
	for(i=0;i<k;i++)
	{
		temp[i]=arr[i];
	}
	for(i=0;i<size-k;i++)
	{
		arr[i]=arr[i+k];
	}
	for(i=0;i<k;i++)
	{
		arr[size-k+i]=temp[i];
	}
	
	
}

void rightshift(int arr[],int size,int k)
{
	int i,temp[20];
	k=k%size;
	
	for(i=0;i<k;i++)
	{
		temp[i]=arr[size-k+i];
	}
	for(i=size-1;i>=k;i--)
	{
		arr[i]=arr[i-k];
	}
	for(i=0;i<k;i++)
	{
		arr[i]=temp[i];
	}	
}

int findMissingNumber(int arr[],int size){
	int missnum,i;
	for(i=0;i<size-1;i++){
		if(arr[i+1]-arr[i]!=1){
		missnum=arr[i+1]-1;	
		}
	}
	return missnum;
}	

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minind = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minind]) {
                minind = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minind];
        arr[minind] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int insrt = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > insrt) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = insrt;
    }
}

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Function to partition the array around the pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 
 for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1; 
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
   }
}
