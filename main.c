#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    srand(time(NULL));

    int teamX;
    int teamY;

    int advX = (rand() % (10-1)) + 1;
    int advY = (rand() % (10-1)) + 1;

    printf("Enter the Y position of your boat (1 to 10) : ");
    scanf("%d", &teamX);
    printf("Enter the Y position of your boat (1 to 10) : ");
    scanf("%d", &teamY);

    int win = 0;

    printf("%d %d\n", advX, advY);

    do
    {
        int atkTeamX = -1;
        int atkTeamY = -1;

        int atkBotX = (rand() % (10-1)) + 1;
        int atkBotY = (rand() % (10-1)) + 1;

        printf("Enter the value X to attack (1 to 10) ! ");
        scanf("%d", &atkTeamX);
        printf("Enter the value Y to attack (1 to 10) ! ");
        scanf("%d", &atkTeamY);

        if (atkTeamX == advX && atkTeamY == advY)
        {
            win = 1;
        }
        else if (atkBotX == teamX && atkBotY == teamY)
        {
            win = 2;
        }
        
    } while (win == 0);

    if (win == 1)
    {
        printf("You won !");
    }
    else if (win == 2)
    {
        printf("The bot won !");
    }
    
    

    return 0;
}
