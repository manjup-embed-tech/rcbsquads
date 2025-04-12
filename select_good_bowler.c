#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cricket_board.h"

int show_good_bowler(struct RCB *squad, int size)
{
        float good_bowler=0;
        int i;
        char name_bowler[30];

        for(i=0;i<size;i++)
        {
                if(strcmp(squad[i].type, "bowler")==0) {

                        if(squad[i].avrg > good_bowler)
                        {
                                good_bowler = squad[i].avrg;
                                strcpy(name_bowler,  squad[i].players_name);
                        }
                }
        }
        printf("good bolwer is %s avrg is %.2f \n",name_bowler, good_bowler);


}

