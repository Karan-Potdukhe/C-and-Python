#include<stdio.h>
int main()
{
    int i,j,swapped,t;
    int arr[10] = {5, 3, 1, 9, 8, 2, 4, 7,6,10};
    int n =10;
     for (i = 0; i < n-1; i++)
     {
     swapped = 0;
     for (j = 0; j < n-i-1; j++)
      {
        if (arr[j] > arr[j+1])
        {
           t=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=t;
           swapped = 1;
        }
     }
     // IF no two elements were swapped
     // by inner loop, then break
     if (swapped == 0)
        break;
   }

    printf("Sorted array: \n");
     for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
    return 0;
}
