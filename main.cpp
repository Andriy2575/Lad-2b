
#include <iostream>
#include "conio.h"
#include "math.h"

long double fact(int m)
{
  if(m < 0) {
    return 0;
  } if (m == 0) {
    return 1;
  } else {
    return m * fact(m - 1);
  }
}

int main()
{

  double start, end, step, d, result;

  printf("start interval \n");
  scanf("%lf", &start);
  printf("end of interval \n");
  scanf("%lf", &end);
  printf("step \n");
  scanf("%lf", &step);
  printf("pohybka");
  scanf("%lf", &d);


  double x, sum;
  int n;
  for (x = start; x >= start && x <= end; x += step) {
    n = 1;
    sum = 0;

    do {
      result = (pow(x, 2 * n) - 1) / fact(2 * n - 1);
      sum += result;
      n++;

    } while (fabs(result) > d);
    printf("x = %lf sum = %lf result = %lf \n", x, sum, result);
  }

  _getch();
  return 0;
}
