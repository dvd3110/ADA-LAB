#include<stdio.h>

int mergesort(int a[] , int low , int high )
{
    int mid;
     if(low<high)
        {
            mid = (low + high )/ 2;
            mergesort(a , low , mid );
            mergesort( a , mid+1 , high);
            merge(a, low , mid, high);

            return 0;
        }
}


int merge(int a[], int low , int mid , int high)
{
    int i , j , k , b[20];
    i=low;
    j=mid + 1;
    k=low;
    while( i<= mid && j <= high)
    {
      if(a[i] <  a[j])
      {
          b[k]=a[i];
          i++; k++;
      }
      else
      {
          b[k]=a[j];
          j++;k++;
      }
    }
      while(i<=mid)
      {
          b[k]=a[i];
          i++; k++;
      }
      while(j<=high)
      {
          b[k]=a[j];
          j++; k++;
      }
      for(int i=low; i<= high; i ++){
        a[i]=b[i];
        printf("\n");
      }
      return 0;
    }


void printarray(int a[],int n)
{
    for(int i=0; i< n ; i++)
    printf("%d\t",a[i]);
}

int main()
{
    int n ,i, a[20];
    printf("Enter the no of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements  : ");
    for (int i = 0; i < n ; i++)
        scanf("%d",&a[i]);
        printarray(a,n);
    mergesort( a , 0 , n-1);
    printarray(a,n);

    return 0;
}
