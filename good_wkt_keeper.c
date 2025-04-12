#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cricket_board.h"


int show_good_wkt_keeper(struct RCB *squad, int size)
{
        float good_wkt_keeper=0;
        int i;
        char wkt_keeper[30];

        for(i=0;i<size;i++)
        {
                if(strcmp(squad[i].type, "wicket keeper")==0)
                {
                        if(squad[i].avrg > good_wkt_keeper)
                        {
                                good_wkt_keeper = squad[i].avrg;
                                strcpy(wkt_keeper,squad[i].players_name);
                        }
                }
        }
        printf("good wkt keeper is %s is avrg is %.2f \n",wkt_keeper, good_wkt_keeper);
}

