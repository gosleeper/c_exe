#include<stdio.h>

typedef struct{
	int year;
	int month;
	int day;
}DATE; 

int getDate(DATE *d)
{
	scanf("%d %d %d", &d->year, &d->month, &d->day);
}

int putDate(DATE d)
{
	printf("%04d-%02d-%02d\n", d.year, d.month, d.day);
}

int main()
{
    DATE date;
    getDate(&date);
    putDate(date);
    return 0;
}
