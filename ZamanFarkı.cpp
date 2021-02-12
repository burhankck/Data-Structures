#include <stdio.h>
#include <time.h>
#define CYP  (2)
#define TR (3)
int main()
{time_t t;
struct tm *a;
time (&t);
a = localtime(&t);
printf("Time in CYPRUS: %02d:%02d:%02d\n", a->tm_hour + CYP, a->tm_min,a->tm_sec);
printf("Hour in CYPRUS: %02d\n", a->tm_hour + CYP);
printf("Minute in CYPRUS: %02d\n", a->tm_min);
printf("Second in CYPRUS: %02d\n\n", a->tm_sec);
printf("Time inTURKEY: %02d:%02d:%02d\n", a->tm_hour + TR, a->tm_min,a->tm_sec);printf("Hour in TURKEY: %02d\n", a->tm_hour + TR);
printf("Minute in TURKEY: %02d\n", a->tm_min);
printf("Second in TURKEY: %02d\n", a->tm_sec);
return 0;
}
