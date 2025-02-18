#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include"mylibrery.h"	
	
int main()
{
	int i,n,m,desire,t;
	int arr[20];
	char ch;
	char str[100], result[100], find[100], replace[100];  
        int vowels, consonants;  



 printf(" ╔════════════════════════════════════════════════════╗ \n");
    printf(" ║  ✨ welcome to library testing main algorithm ✨  ║ \n");
    printf(" ╚════════════════════════════════════════════════════╝ \n");
	printf("╭───[●] OPERATION ON NUMBERS [●]───╮\n\n➤  BASIC OPERATIONS\n\n1-sum of digits\n2-reverse number\n3-ispalindrom\n4-isprime\n5-gcd\n6-lcm\n-7factorial\n8-iseven\n\n➤  INTEERMEDIATE OPERATIONS\n\n9-prime factorization\n10-isarmstrong\n11-fibonacci sequence\n12-sum of divisors\n");
	printf("13-isperfect\n14-ismagic\n15-is automorphic\n\n ➤  ADVANCED OPERATIONS\n\n16-tobinary\n17-isNarceciste\n18-sqrt aproximiation\n19-exponential\n20-is happy\n21-isabundat\n22-isdeficient\n23-sum even fibonacci\n24-isharshad\n");
	printf("25-catalan number\n26-pascal triangle\n28-kaprekar number\n29-smith number\n30-sum of prime numbers\n");
	
	printf("\n\n╭───[●] OPERATION ON ARRAYS [●]───╮\n\n➤  BASIC OPERATIONS\n\n31-print array\n32-find maximum\n33-find minimum\n34-calculate sum\n35-calculate average\n36-chek if sorted\n37-reverse array\n\n ➤ INTERMEDIATE OPERATIONS\n\n38-count even and odd numbers\n");
	printf("39-find second largest\n40-find frequency of elements\n41-remove duplicates\n42-binary search\n43-Linear search\n44-left shift array\n45-right shift array\n46-find missing number\n47-bubble sort\n48-selection sort\n49-insertion sort\n50-quick sort\n");
	printf("\n╭───[●] OPERATION ON STRINGS [●]───╮\n\n51-String lenght\n52-string copied\n53-strings concat\n54-strings campare\n");
		printf("\n╭───[●] OPERATION ON MARTIX [●]───╮\n\n55-Initialise a matrix\n56-Print a matrix\n57-input matrix\n58-addition of two matrixes\n59-substraction of two matrix\n60-Multiplication of matrix\n61-scalar matrix\n62-Square Matrix\n63-Identity Matrix\n64-Diagonal Matrix\n65-Symmetric Matrix\n66-Upper Triangular\n67-MatrixtransposeMatrix\n68-rotateMatrix90\n69-Trace matrix");
	printf("\nchoose the number coresponding to the function that you want to try:\n");
	scanf("%d",&desire);
	switch(desire)
	{
		case 1:{
			
			do{
				printf("\ngive your number:");
				scanf("%d",&n);
				t=sumofdigits(n);
				printf("\nthe sum is:%d",t);
				printf("\ndo you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
				
				break;
			
			}
		case 2:{
			do
			{
			printf("\ngive your number:");
			scanf("%d",&n);
			t=reverseNumber(n);
			printf("\nthe reverse is:%d",t);
			printf("do you want to try for another number:y/N");
			scanf(" %c", &ch);
			}while(ch == 'y');
			
			
			
			break;	
			}
		case 3:
		{
			do{
				printf("give your number:");
				scanf("%d",&n);
				if(isPalindrome(n)==true)
				{
					printf("\n yes it is palindrome");
				}
				else
				{
					printf("\n no it is not palindrome");
				}
				printf("do you want to try for another number y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
			}	
		case 4:
		{
			do{
				printf("give your number:");
				scanf("%d",&n);
				if(isprime(n)==true)
				{
					printf("\nyes it is palindrome");
				}
				else
				{
					printf("\n no it not palindrome");
				}
				printf("do you want to try for another number:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
			}
		case 5:
		{
			int m;
			do
			{
				printf("give your numbers:");
				scanf("%d",&n);
				scanf("%d",&m);
				printf("the gcd is:%d",GCD(m,n));
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
		
				}
		case 7:
		{
			do{
				printf("give your number:");
			scanf("%d",&n);
			printf("the factorial is:%d",factorial(n));
			printf("do you want to try again:y/N");
			scanf(" %c", &ch);
			}while(ch=='y');
			break;
						}
		case 6:
		{
			do{
				printf("give your numbers: ");
				scanf("%d",&m);
				scanf("%d",&n);
				printf("the least common multiplier is:%d",Lcm(n,m));
				printf("/ndo you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
										}
		case 8:
		{
			do{
				printf("give your number:");
				scanf("%d",&n);
				if(isEven(n)==true)
				{
					printf("yes it is even");
				}
				else
				{
					printf("\n no it is not even");
				}
				printf("\ndo you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
																		}
		case 9:
		{
			do{
			printf("give your number:\n");
			scanf("%d",&n);
		
			printf("the prime factorization is:\n");
			primefactors(n);
			printf("do you want to try again:y/N\n");
			scanf(" %c", &ch);	
				
			}while(ch=='y');
			break;
			}
		case 10:
			{
				do
				{
					printf("give your number\n:");
					scanf("%d",&n);
					if(isArmstrong(n)==true)
					{
						printf("yes it is armstrong\n");
					}
					else
					{
						printf("no it is not armstrong\n");
						
					}
					printf("do you want to try again:y/N");
					scanf(" %c", &ch);
				}while(ch=='y');
				break;
			}
		case 11:
			{
				do{
					printf("we will generate the fibonacci sequence up to the nth term\n");
					printf("give your number:");
					scanf("%d",&n);
				    
					printf("\n the result is:");
					fibonacciSeries(n);
					printf("\n do you want to try again:y/N");
					scanf(" %c", &ch);
				}while(ch=='y');
				break;
				
			}
		case 12:
		{
			do{
				printf("give your number:\n");
				scanf("%d",&n);
				printf("the sum is:%d",sumofdivisors(n));
				printf("\ndo you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
			}	
		case 13:
		{
			do{
				printf("give your number:\n");
				scanf("%d",&n);
				if(isPerfect(n)==true)
				{
					printf("it is perfect\n");
				
				}
				else{
					printf("it is not perfect\n");
				}
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
																																		}	
		case 14:
			{
				do
				{
					printf("give your number:\n");
					scanf("%d",&n);
					if(isMagic(n)==true)
					{
						printf("it is magic\n");
					}
					else
					{
						printf("it is not magic\n");
					}
					printf("do you want to try again:y/N");
					scanf(" %c", &ch);
				}while(ch=='y');
				break;
			}
		case 15:
		{
			do
			{
				printf("give your number:\n");
				scanf("%d",&n);
				if(isAutomorphic(n)==true)
				{
					printf("it is automorphic\n");
					
				}
				else
				{
					printf("it is not automorphic\n");
				}
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
			}
		case 16:
		{
			int m;
			do{
				
				m=0;
				printf("give the number:\n");
				scanf("%d",&n);
				printf("the binary equivalente is:\n");toBinary(n,&m);printf("%d",m);
				printf("\ndo you want to try again:y/N\n");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
				}
		case 17:
		{
			do{
				printf("give the number:\n");
				scanf("%d",&n);
				if(isNarcessistic(n)==true)
				{
					printf("it is narcessistic\n");
				}
				else{
					printf("it is not narcessistic\n");
		
				}
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
				}
		case 18:
		{
			do
			{
				printf("give your number:\n");
				scanf("%d",&n);
				printf("the appriximiation is :%f\n",SqrtApprox(n));
				printf("do you want to try again:y/N\n");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
						}
		case 19:
			{
			int k;	
		do
		{
			
			printf("give the base:");
			scanf("%d",&n);
			printf("\ngive the power:\n");
			scanf("%d",&k);
			printf("the result is:%f\n",power(n,k));
			printf("do you want to try again:y/N");
			scanf(" %c", &ch);
										}while(ch=='y');
		break;								
			}
									
		case 20:
		{
			do
			{
				printf("give your number:\n");
				scanf("%d",&n);
				if(isHappy(n)==true)
				{
					printf("it is happy\n");
				}
				else
				{
					printf("it is not happy\n");
				}
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
						}				
		case 21:
			{
				do{
					printf("give the number:\n");
					scanf("%d",&n);
					if(isAbundant(n)==true)
					{
						printf("it is abundant\n");
					}
					else
					{
						printf("it is not abundant\n");
					}
					printf("do you want to try again:y/N");
					scanf(" %c", &ch);
				}while(ch=='y');
				break;
			}
		case 22:
		{
			do{
				printf("give the number:\n");
				scanf("%d",&n);
				if(isDeficient(n)==true)
				{
					printf("it is deficient\n");
				}
				else
				{
					printf("it is not deficient\n");
				}
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
			}
		case 23:
		{
			do{
				printf("give the number:\n");
				scanf("%d",&n);
				printf("the sum is:%d\n",sumEvenFibonacci(n));
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
			
			
				}
		case 24:
		{
			do{
				printf("give the number\n:");
				scanf("%d",&n);
				if(isHarchad(n)==true)
				{
					printf("it is harchad\n");
				}
				else
				{
					printf("it is not harchad\n");
				}
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
						}
		case 25:
		{
			do{
				printf("give the number:\n");
				scanf("%d",&n);
				printf("the result is:%lu\n",catalanNumber(n));
				printf("do you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			break;
										}								
		case 26:
		{
			do{
				printf("give a number:\n");
				scanf("%d",&n);
				printf("the result is:\n");
				pascalTriangle(n);
				printf("\ndo you want to try again:y/N");
				scanf(" %c", &ch);
			}while(ch=='y');
			
		
			
		break;
			
			
			
		 
		 }
	
	
		 
		 
	case 28:
	{
		do{
			printf("give the number:\n");
			scanf("%d",&n);
			if(isKaprekar(n)==true)
			{
				printf("it is kaprekar\n");
			}
			else
			{
				printf("it is not kaprekar\n");
			}
			printf("do you want to try again:y/N");
			scanf(" %c", &ch);
		}while(ch=='y');
		break;
		 }	 
		 
	case 29:
	{
		do
		{
			printf("give the number:\n");
			scanf("%d",&n);
			if(isSmith(n)==true)
			{
				printf("it is smith number\n");
			}
			else
			{
				printf("it is not smith\n");
			}
			printf("do you want to try again:y/N");
			scanf(" %c", &ch);
			
				
			
		}while(ch=='y');
		break;
		 }
		 
	case 30:
	{
		do
		{
			printf("give the number:\n");
			scanf("%d",&n);
			printf("the sum is:%d\n",sumofprimes(n));
			printf("do you want to try again:y/N");
			scanf(" %c", &ch);
		}while(ch=='y');
		break;
			  }	 	 
		 
		 
		 
		 
	case 31:
	{
		do{
			printf("how many elements you have:");
			scanf("%d",&n);
			printf("\ngive the elements:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			printArray(arr,n);
			printf("do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
		 }
	case 32:
	{
		int max;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			max=Findmax(arr,n);
			printf("the maximum is %d:",max);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
			  }
	case 33:
	{
		int min;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			min=Findmin(arr,n);
			printf("\nthe minimum :%d",min);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
						}		  	 	 
	case 34:
	{
		int sum;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			sum=SumArray(arr,n);
			printf("\nthe syum:%d",sum);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
		 }
	case 35:
	{
		int average;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			average=averageArray(arr,n);
			printf("the average is:%d",average);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
			
		}while(ch == 'y');
		break;
			  }
	case 36:
	{
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			if(isSorted(arr,n)==true)
			{
				printf("\nyes it is sorted\n");
			}
			else
			{
				printf("\n it is not sorted");
			}
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
			
		}while(ch == 'y');
		break;
						}
	case 37:
	{
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			reverseArray(arr,n);
			printArray(arr,n);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
			
		}while(ch == 'y');
		break;
											}
	case 38:
	{
		int evenc,oddc;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			countEvenOdd(arr,n,&evenc,&oddc);
			printf("the number of even numbers is:%d",evenc);
			printf("the number of odd number is:%d",oddc);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
			
		}while(ch == 'y');
		break;
											}
	case 39:
	{
		int max2;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			max2=SecondLargest(arr,n);
			printf("the second largest element is:%d\n",max2);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
																					}
																																									
	case 40:
	{   int i,n;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			int arr[n];
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			elementFrequency(arr,n);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
												}
												
	case 41:
		{
			int size;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			size=removeDuplicates(arr,n);
			printf("the new size is:%d",size);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
			
		}while(ch == 'y');
		break;
		}
		
		case 42:
	{
		int t,tar;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			printf("\nwhat is the target:\n");
			scanf("%d",&tar);
			t=binarysearch(arr,n,tar);
			if(t==-1)
			{
				printf("it does not exist\n");
			}
			else
			{
				printf("the index of the target is:%d\n",t);
			}
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
		 }
	case 43:
	{
		int t,tar;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			printf("\nwhat is the target:\n");
			scanf("%d",&tar);
			t=linearSearch(arr,n,tar);
			if(t==-1)
			{
				printf("it does not exist\n");
			}
			else
			{
				printf("the index of the target is:%d\n",t);
			}
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
			  }
			  
	case 44:
	{
		int k;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			printf("\ngive the number of positions:\n");
			scanf("%d",&k);
			leftshift(arr,n,k);
			printf("the result is:\n");
			printArray(arr,n);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
						}
	case 45:
	{
		int k;
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
			printf("give the elements\n:");
			for(i=0;i<n;i++)
			{
				scanf("%d", &arr[i]);
			}
			printf("\ngive the number of positions:\n");
			scanf("%d",&k);
			rightshift(arr,n,k);
			printf("the result is:\n");
			printArray(arr,n);
			printf("\n do you want to try again:y/n");
			scanf(" %c", &ch);
		}while(ch == 'y');
		break;
											}

		 case 46:
                            {
                                int arr[100], size;
                                printf("Enter array size : ");
                                scanf("%d", &size);
                                printf("Enter array elements : ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d", &arr[i]);
                                }
                                printf("The missing number is: %d\n",findMissingNumber(arr, size));
                                break;
                            }

 case 47:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                bubbleSort(arr,size);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }


 case 48:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                selectionSort(arr,size);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
 case 49:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                insertionSort(arr,size);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }

		 case 50:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for( i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                quickSort(arr,0,size- 1);
                                printf("Sorted array: ");
                                for(i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
	
case 51:{
    printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Length of string: %d\n", stringLength(str));  
                break;  
	
}
case 52:{
     
                printf("Enter source string: ");  
                scanf("%s", str);  
                char dest[100];       // ensure dest is large enough  
                stringCopy(dest, str);  
                printf("Copied string: %s\n", dest);  
                break;  
}
case 53:{
      
                printf("Enter first string: ");  
                scanf("%s", str);  
                char concatStr[100];  // ensure concatStr is initialized  
                printf("Enter string to concatenate: ");  
                scanf("%s", concatStr);  
                stringConcat(str, concatStr);  
                printf("Concatenated string: %s\n", str);  
                break; 
}
case 54:{
       
                printf("Enter first string: ");  
                scanf("%s", str);  
                char str2[100];  
                printf("Enter second string: ");  
                scanf("%s", str2);  
                printf("String comparison result: %d\n", stringCompare(str, str2));  
                break; 
}
case 55:{
    int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols];
                                initializeMatrix(rows,cols,matrix,value);
                                printf("Initialized Matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        printf("%d ",matrix[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
}
case 56:{
     int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols];
                                printf("Enter matrix elements:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                printf("The matrix is:\n");
                                printMatrix(rows,cols,matrix);
                                printf("\n");
                                break;
}
case 57:{
     int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols];
                                	inputMatrix(rows,cols,matrix);
                                break;
}
case 58:{
     int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols],mat2[rows][cols],result[rows][cols];
                                printf("Enter elements of the first matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat1[i][j]);
                                    }
                                }
                                printf("Enter elements of the second matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat2[i][j]);
                                    }
                                }
                                addMatrices(rows,cols,mat1,mat2,result);
                                printf("Resultant matrix after addition:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            
}


case 59:{
    int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols],mat2[rows][cols],result[rows][cols];
                                printf("Enter elements of the first matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat1[i][j]);
                                    }
                                }
                                printf("Enter elements of the second matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat2[i][j]);
                                    }
                                }
                                subtractMatrices(rows,cols,mat1,mat2,result);
                                printf("Resultant matrix after subtraction:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                
                                printf("\n");
                                break;
}

case 60:{
    int rows1,cols1,rows2,cols2;
                                printf("Enter number of rows1: ");
                                scanf("%d",&rows1);
                                printf("Enter number of columns1: ");
                                scanf("%d",&cols1);
                                printf("Enter number of rows2: ");
                                scanf("%d",&rows2);
                                printf("Enter number of columns2: ");
                                scanf("%d",&cols2);
                                int matrix1[rows1][cols1];
                                int matrix2[rows2][cols2];
                                int result[100][100];
                                printf("input matrix1: ");
                                	inputMatrix(rows1,cols1,matrix1);
                                printf("input matrix2: ");
									inputMatrix(rows2,cols2,matrix2);


    multiplyMatrices(rows1, cols1, rows2, cols2, matrix1, matrix2, result);

                                break;
}
case 61:{
    int rows1,cols1,scalar;
                                printf("Enter number of rows1: ");
                                scanf("%d",&rows1);
                                printf("Enter number of columns1: ");
                                scanf("%d",&cols1);
                                int matrix1[rows1][cols1];
                                printf("input matrix: ");
                                	inputMatrix(rows1,cols1,matrix1);
                                printf("Enter number: ");
                                scanf("%d",&scalar);
                            	
scalarMultiplyMatrix(rows1, cols1, matrix1,scalar);
                                break;
}
		case 62:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                if(isSquareMatrix(rows,cols))
                                {
                                    printf("The matrix is a square matrix.\n");
                                } 
                                else 
                                {
                                    printf("The matrix is not a square matrix.\n");
                                } 
                                break;
                            }
		 case 63:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for(int i=0;i<size;i++)
                                {
                                    for(int j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                if(isIdentityMatrix(size,matrix))
                                {
                                    printf("The matrix is an identity matrix.\n");
                                } 
                                else 
                                {
                                    printf("The matrix is not an identity matrix.\n");
                                }
                                break;
                            }
		 case 64:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for(int i=0;i<size;i++)
                                {
                                    for(int j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                if(isDiagonalMatrix(size,matrix))
                                {
                                    printf("The matrix is a diagonal matrix.\n");
                                } 
                                else
                                {
                                    printf("The matrix is not a diagonal matrix.\n");
                                }
                                break;
                            }
		case 65:
                            {
                             int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols];
                                initializeMatrix(rows,cols,matrix,value);

    if (isSymmetricMatrix(rows, cols, matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
                                break;
                            }
		 case 66:
                            {
  int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols]; 
                                initializeMatrix(rows,cols,matrix,value);

    if (isUpperTriangular(rows, cols, matrix)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }
                            }
	case 67:
{
    int rows, cols;

    // Step 1: Ask user for matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transposed[cols][rows];  // Declare matrices

    // Step 2: Input matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Call the function to compute the transpose
    transposeMatrix(rows, cols, matrix, transposed);

    // Step 4: Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
	 }	
		
		case 68: {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Rotate the matrix by 90 degrees
    rotateMatrix90(size, matrix);

    printf("\nMatrix after 90-degree rotation:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    break;
}
case 69: {
    int size;
   
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int trace = traceMatrix(size, matrix);
    printf("The trace of the matrix is: %d\n", trace);
    
    break;  
}

default:
		 {
		 	printf("------THE NUMBER YOU ENTERED IS NOT INCLUDED IN THE PROGRAM, PLEASE TRY ANOTHER NUMBER-------\n");
		 }

									}								
																																									}																						
			
