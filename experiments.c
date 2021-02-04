#include <stdio.h>
#include "array_util.h"
#include "sorts.h"

int main(void)
{
  printf("Test Number\tTime Taken\tComparisons\t\n");
  long fore, aft;
  for(int i = 1; i<11; i++){
    int test[5000];
    random_array(test, 5000);
    fore = get_time_millis();
    int a = bubbleSort(test, 5000);
    aft = get_time_millis();
    long total = aft - fore;
    printf("%d\t\t%ld\t\t%d\t\n", i, total, a);
  }
}
