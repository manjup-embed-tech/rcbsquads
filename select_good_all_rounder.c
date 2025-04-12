#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cricket_board.h"

int show_good_all_rounder(struct RCB *squad,int size)
{
        float good_all_rounder=0;
        int i;
        char all_rounder[30];

        for(i=0;i<size;i++)
        {
                if(strcmp(squad[i].type, "allrounder")==0)
                {
                        if(squad[i].avrg > good_all_rounder)
                        {
                                good_all_rounder = squad[i].avrg;
                                strcpy(all_rounder,squad[i].players_name);
                        }
                }
        }
        printf("good all rounder is %s avrg is %.2f \n",all_rounder, good_all_rounder);
}

/*
int swap(struct RCB *test1, struct RCB *test2)
{
        struct RCB temp = *test1;
                   *test1 = *test2;
                   *test2 = temp;
}

int short_players(struct RCB *squad, int size)
{
        int i,j;

        for(i=0;i<size;i++)
        {
                for(j=i+1;j<size;j++)
                {
                        if(squad[i].avrg < squad[j].avrg)
                        {
                                swap(&squad[i], &squad[j]);
                        }
                }
        }
}
*/

