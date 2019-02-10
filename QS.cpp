#include<iostream>
using namespace std;
int Part(int A[],int l,int h)// partition function
{
	int i,j=0; // loop control variables
	int pivot=A[h];
	for(i=l;i<=h;i++)
	{
		if(A[i]<pivot) //checking whether the elemnrts in array is smaller
		{
			int temp=A[j] //if it is smaller than the pivot
			A[j]=A[i]; //then swap
			A[i]=temp;
			j++;
		}
		int temp=A[j];// storing pivot after all the smaller elements
		A[j]=A[h];
		A[h]=temp;
		return j;
	}
}
void QS(int AR[], int L, int H)//sort function
{
	int Np; // location of the next pivot
	if(L==H) //condition marking the end of recursion
	{
		cout<<"\n \t!!!!quick sort complete!!!!";
	}
	else
	{
		Np=Part(AR[],L,H) //petrieving the position of partition
		if(Np>0)
		QS(AR[],L,Np-1);
		QS(AR[],Np+1,H);
	}
	
}
