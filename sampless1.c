#include <stdio.h>
 int main void() {
    int first, diff, terms, value, sum=0, i;
 printf("Enter the number of terms, first term, common difference in AP series\n");
    scanf("%d %d %d", &terms,&first, &diff);
    value = first;
   for(i = 0; i < terms; i++) {
        sum += value;
        value = value + diff;
        }
  printf("\nSum of the AP series till %d terms is %d\n", terms, sum);
 return 0;
}
