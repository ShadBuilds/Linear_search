#include<stdio.h>

void linear_search(int a[],int search,int range)
{
    int found =0;
    for (int i=0;i<range;i++)
    {
        if (a[i]==search)
        {
            found =1;
            printf("number found at %d position\n" ,i+1);
        }
    }

      if (!found) {
        printf("Number not found in the array.\n");
      }
}
void main()
{
    int a[100];
    int i,range;
    printf("Enter range of number to be entered - ");
    scanf("%d",&range);
    for (i=0;i<range;i++)
    {
        printf("Enter %dth number ", i+1);
        scanf("%d", &a[i]);
    }

    int search,found=0;

    printf("Enter the number to search - \n");
    scanf("%d", &search);
    linear_search(a,search,range);

    getchar();
}
