#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a day in the calendar
struct Day {
    char *dayName;
    int date;
    char *activity;
};

int numDays=2;
int i;
struct Day *calendar;
// Function to initialize a day in the calendar
void read()
{
char *dn;
char *da;
int dd;
for ( i = 0; i < numDays; i++)
    {
    printf("Enter the day name:");
    scanf("%s",dn);
    (calendar+i)->dayName=strdup(dn);
    printf("Enter the date:");
    scanf("%d",&dd);
    (calendar+i)->date = dd;

    printf("Enter the activity:");
    scanf("%s",da);
    (calendar+i)->activity=strdup(da);
    //puts(da)

}
}
// Function to display a day in the calendar
void display()
{
for ( i = 0; i < numDays; i++)
    printf("Day %d (%s): %s\n", (calendar+i)->date, (calendar+i)->dayName, (calendar+i)->activity);
}
void create()
{
// Dynamically allocate an array of structures
    struct Day *calendar = (struct Day *)malloc(numDays * sizeof(struct Day));
    // Check if memory allocation is successful
    if (calendar == NULL)
    {
	printf("Memory allocation failed\n");
    }
}

void main()
{    create();
     read();
     display();

     for ( i = 0; i < numDays; ++i) {
      //	free(calendar[i].dayName);
       //	free(calendar[i].activity);
    }

    free(calendar);
    getch();

}
