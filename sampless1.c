#include <stdio.h>
#include <conio.h>
 int main() {
    int first, diff, terms, value, sum=0, i;
 printf("Enter the number of terms, first term, common difference in AP series\n");
    scanf("%d %d %d", &terms,&first, &diff);
    value = first;
    printf("AP SERIES\n");
    for(i = 0; i < terms; i++) {
        printf("%d ", value);
        sum += value;
        value = value + diff;
        }
  printf("\nSum of the AP series till %d terms is %d\n", terms, sum);
 return 0;
}
