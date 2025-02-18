#ifndef MY_LIBRERY_H_INCLUDED
#define MY_HEADERS_H_INCLUDED
#define ERR_INVALID_INPUT -1
#define ERR_OUT_OF_MEMORY -2
#include<stdbool.h>
#include <string.h>
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
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void quickSort(int arr[], int low, int high);
int findMissingNumber(int arr[], int size);
int stringLenght(char* str);
int stringLenghtconst(const char* str);
void stringCopy(char* dest, const char* src);
void stringCopyGeneral(char* dest, char* src);
void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value);
void printMatrix(int rows, int cols, int matrix[rows][cols]);
void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols],int result[rows][cols]);
void multiplyMatrices(int rows1, int cols1, int rows2, int cols2, int mat1[rows1][cols1], int mat2[rows2][cols2], int result[rows1][cols2]);
void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar);
bool isSquareMatrix(int rows, int cols);
bool isIdentityMatrix(int size, int matrix[size][size]);
bool isDiagonalMatrix(int size, int matrix[size][size]);
bool isSymmetricMatrix(int rows, int cols, int matrix[rows][cols]);
bool isUpperTriangular(int rows, int cols, int matrix[rows][cols]);
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);
void rotateMatrix90(int size, int matrix[size][size]);
int traceMatrix(int size, int matrix[size][size]);
#endif

