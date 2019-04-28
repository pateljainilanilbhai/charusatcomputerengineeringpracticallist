#include<stdio.h>
int count=0, swap=0, comp=0;
void main()
{
   int *a, i, j, n, start ,end;
   printf("Enter The Range:");
   scanf("%d",&n);

   a = (int *) malloc(sizeof(int)*n);

   printf("\nEnter The Elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d", (a + i));
   }
   start=0;
   end=n-1;
   printf("\n Sublists: \n");
   quicksort(a, start, end);

   printf("\nNo. of Counts: %d", count);
   printf("\nNo. of Swaps: %d", swap);
   printf("\nNo. of Comparisons: %d", comp);
   printf("\n\nSorted Array:");
   for(i=0;i<n;i++)
   {
       printf(" %d",*(a + i));
   }
}
void quicksort(int *a, int start, int end)
{
   int flag=0, i, j, pivot, temp, m;
   pivot = *(a + start);
   i=start+1;
   j=end;

   count+=5;
   if(start<end)
   {
   count++;
   while(flag==0)
   {
   count++;
   while(pivot>*(a + i)) { i++;count++; }
   count++;
   while(pivot<*(a + j)) { j--;count++; }
   count++;
   comp++;
   if(i<j)
   {
       temp=*(a + i);
       *(a + i)=*(a + j);
       *(a + j)=temp;
       count+=3;
       swap++;
   }
                else { flag=1;count+=2; }
                }
   swap++;
   temp=*(a + start);
   *(a + start)=*(a + j);
   *(a + j)=temp;
   count+=3;

   printf("Pivot: %d\n", pivot);
   printf("List 1: [ ");
   for(m=start; m<=j-1; m++) { printf("%d ",*(a + m)); }
   printf("]\n");
   printf("List 2: [ ");
   for(m=j+1; m<=end; m++) { printf("%d ",*(a + m)); }
   printf("]\n\n");
   quicksort(a,start,j-1);
   quicksort(a,j+1,end);
   count+=2;
   }
}

