#include<stdio.h>
#include<time.h>

long double DAYS = 86400.0f;
long double HOURS = 3600.0f;
long double MINUTES = 60.0f;

struct Czas
{
	long double seconds;
	long double minutes;
	long double hours;
	long double days;
};

int main()
{
	time_t s;
	struct Czas czas1;
		s=time(NULL);
		long double t=(long double)s;

		czas1.days = t/DAYS;
		czas1.days = czas1.days - (int)czas1.days;
		czas1.hours = czas1.days * DAYS;
		czas1.hours = czas1.hours/HOURS;
		czas1.minutes = czas1.hours - (int)czas1.hours;
		czas1.minutes = (czas1.minutes * HOURS)/MINUTES;
		czas1.seconds = czas1.minutes - (int)czas1.minutes;
		czas1.seconds = czas1.seconds * MINUTES;
		printf("%02d:%02d:%02d\n",(int)czas1.hours +1,(int)czas1.minutes,(int)czas1.seconds);

	return 0;
}
