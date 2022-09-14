#include<bits/stdc++.h>
#define CYCLE 60
#include <stdlib.h>
#include <conio.h>

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
int main()
{
  int hour, minute, second;
  printf("Enter hour Minute Second:");
  scanf("%d%d%d", &hour, &minute, &second);
  // system("cls");
  // clrscr();

  int h = 0, m = 0, s = 0;
  while (1)
  {
    system("cls");
    printf("\n\n###### STOP WATCH ######\n\n\n");
    printf("        %.2d:%.2d:%.2d\n", h, m, s);
    printf("\n\n###### STOP WATCH ######\n\n\n");

    if (h == hour && m == minute && s == second)
    {
      break;
    }
    else
    {
    }

    sleep(1);
    s++;
    if (s == CYCLE)
    {
      m++;
      s = 0;
    }
    if (m == CYCLE)
    {
      h++;
      m = 0;
    }
    // sleep(1);
  }
  return 0;
}
