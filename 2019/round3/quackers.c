// wanted to try it in c for extra speed

#include <stdio.h>
#include <math.h>
int main()
{
    int s, d, c, p;
    scanf("%d %d %d %d", &s, &d, &c, &p);
    printf("%i", (int)floor((double)(p - s) / (d - c)));
    return 0;
}
