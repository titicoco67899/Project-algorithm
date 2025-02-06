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
	printf("welcom to library trsting main algorithm!\n");
	printf("OPERATIONS ON NUMBERS:\n\nBASIC OPERATIONS\n\n1-sum of digits\n2-reverse number\n3-ispalindrom\n4-isprime\n5-gcd\n6-lcm\n-7factorial\n8-iseven\n\nINTERMEDIATE OPERATIONS\n\n9-prime factorization\n10-isarmstrong\n11-fibonacci sequence\n12-sum of divisors\n");
	printf("13-isperfect\n14-ismagic\n15-is automorphic\n\nADVANCED OPERATIONS\n\n16-tobinary\n17-isNarceciste\n18-sqrt aproximiation\n19-exponential\n20-is happy\n21-isabundat\n22-isdeficient\n23-sum even fibonacci\n24-isharshad\n");
	printf("25-catalan number\n26-pascal triangle\n28-kaprekar number\n29-smith number\n30-sum of prime numbers\n");
	
	printf("\n\nOPERATIONS ON ARRAYS\n\n31-print array\n32-find maximum\n33-find minimum\n34-calculate sum\n35-calculate average\n36-chek if sorted\n37-reverse array\n\nINTERMEDIATE OPERATIONS\n\n38-count even and odd numbers\n");
	printf("39-find second largest\n40-find frequency of elements\n41-remove duplicates\n42-binary search\n43-Linear search\n44-left shift array\n45-right shift array\n46-find missing number\n47-bubble sort\n48-selection sort\n49-insertion sort\n50-quick sort\n");
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
			scanf("%d",n);
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
			printf("the prime factorization is:%d\n");primefactors(n);
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
					printf("\n the result is:%d");fibonacciSeries(n);
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
				printf("the appriximiation is :%d\n",SqrtApprox(n));
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
			printf("the result is:%d\n",power(n,k));
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
				printf("the sum is:%d\n");sumEvenFibonacci(n);
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
				printf("the result is:%d\n",catalanNumber(n));
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
			average=AverageArray(arr,n);
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
	{
		do{
			printf("how many elements you have:\n");
			scanf("%d",&n);
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
                                for(int i=0;i<size;i++)
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
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                bubbleSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
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
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                selectionSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
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
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                insertionSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
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
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                quickSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
		
	
default:
		 {
		 	printf("choose a number");
		 }

									}								
																																									}																																					  	 	 
		 	 
	 

	
																																										  	 	 
	
		
			
		
		
			
		
	

