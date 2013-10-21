#include <iostream>

void printData(int a[],int count);
void quick_sort(int a[],int left,int right);

int main(int argc,char **argv)
{
	int a[] = {123,3,2,456,34,4,323,45,56,323};
	int count = sizeof(a)/sizeof(a[0]);
	printData(a,count);
	quick_sort(a,0,count - 1);
	std::cout<<"after sort:"<<std::endl;
	printData(a,count);
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void quick_sort(int a[],int left,int right)
{
	int i = left + 1,j = right;
	int key = a[left];
	if(left >= right)
		return;
	while(1)
	{
		while(a[j] > key) j--;
		while(a[i] < key && i < j) i++;
		if(i >= j) break;
		swap(&a[i],&a[j]);
		if(a[i] == key) 
			j--;
		else 
			i++;	
	}
	swap(&a[left],&a[j]);
	if(left < i - 1) quick_sort(a,left,i - 1);
	if(j + 1 < right) quick_sort(a,j+1,right);
}

void printData(int a[],int count)
{
	for(int i = 0;i < count;++i)
	{
		std::cout<<a[i]<<" ";
	}
	std::cout<<std::endl;
}