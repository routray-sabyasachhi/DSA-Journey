
// Find reminder without using modulus(%) operator by recursion

#include<stdio.h>

int reminder( int, int);

int main() {
  int num, div, rem;
  printf("Enter the number : ");
  scanf("%d",&num);
  printf("\n Enter the diviser :");
  scanf("%d",&div);
  rem = reminder(num, div);
  printf("%d",rem);
  return 0;
}

int reminder(int n, int d) {
  int t;
  if(n < d)
  return n;
  else
  {
    t = d * (n/d);
   return reminder(n-(t), d);
}
}