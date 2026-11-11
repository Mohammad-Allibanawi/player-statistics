#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[1000];
    int jersey;
    float rating;
    int count = 0;
    float average = 0;

    fp = fopen("players.txt", "r");
    if (fp == NULL){
        printf("could not open\n");
        return 1;
    }

    while (fscanf(fp, "%999s %d %f", name, &jersey, &rating) == 3)
    {
        printf("Player: %s | Number: %d | Rating: %.1f\n", name, jersey, rating);
        count++;
        average +=rating;
    }
    printf("Total Players: %d\n", count);
    
    if (count > 0)
    printf("Average: %.2f\n", average / count);
else
    printf("No players found.\n");
    
    
    fclose(fp);

 }