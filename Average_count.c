#include<stdio.h>
 
int main()
{
  int i, number, Sum = 0,counted_number,Ave;
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  printf("\n Even Numbers between 0 and %d are :%d \n", number,number);
  for(i = 1; i <= number; i++)
  {
    if ( i%2== 0 ) //Check whether remainder is 0 or not
    {
  	printf("this is the sum of number :%d \n ", i);
        Sum = Sum + i;
    }
  }
    counted_number=i/2;
    printf(" this is count of total number : %d \n ",counted_number);
    Ave=Sum/counted_number;
    printf("this is a total average number is:%d\n",Ave);
    printf("\n The Sum of All Even Numbers upto %d  = %d", number, Sum);
    return 0;
}