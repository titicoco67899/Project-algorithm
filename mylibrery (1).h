#ifndef MY_LIBRERY_H_INCLUDED
#define MY_HEADERS_H_INCLUDED
#define ERR_INVALID_INPUT -1
#define ERR_OUT_OF_MEMORY -2
#include<stdbool.h>
int GCD(int A,int B);
int LCM(int A,int B);
int factorial(int A);
int sumofdigits(int A);
bool isprime(int A);
int reverseNumber(int A);
bool isPalindrome(int A);
bool isEven(int A);
int Lcm(int A,int B);
void primefactors(int A);
bool isArmstrong(int A); 
bool isPerfect(int A);
void toBinary(int A,int *b);
bool isAutomorphic(int A);
bool isMagic(int A);
void fibonacciSeries(int A);
int sumofdivisors(int A);
bool isNarcessistic(int A);
bool isHappy(int A);
bool isAbundant(int A);
bool isDeficient(int A);
bool isHarchad(int A);
unsigned long catalanNumber(int A);
int sumofprimes(int A);
int sumEvenFibonacci(int A);
int numberofdigits(int A);
bool isKaprekar(int A);
bool isSmith(int A);
double SqrtApprox(int A);
double power(int base,int exp);
void pascalTriangle(int A);
void printArray(int arr[],int size);
int Findmax(int arr[],int size);
int Findmin(int arr[],int size);
int SumArray(int arr[],int size);
int AverageArray(int arr[],int size);
bool isSorted(int arr[],int size);
void reverseArray(int arr[],int size);
void countEvenOdd(int arr[],int size,int *envencount,int *oddcount);
int SecondLargest(int arr[],int size);
void elementFrequency(int arr[],int size);
int removeDuplicates(int arr[],int size);
int binarysearch(int arr[],int size,int target);
int linearSearch(int arr[],int size,int target);
void leftshift(int arr[],int size,int k);
void rightshift(int arr[],int size,int k);

#endif
