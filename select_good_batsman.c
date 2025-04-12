#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cricket_board.h"

int show_good_batsman(struct RCB *squad, int size)
{
        float good_batsman=0;
        char name[30];
        int i;

        for(i=0;i<size;i++)
        {
                if(strcmp(squad[i].type , "batsman")==0){

                        //printf("succuss fully compare %s \n",squad[i].players_name);

                        if(squad[i].avrg > good_batsman)
                        {
                                good_batsman = squad[i].avrg;
                                strcpy(name,squad[i].players_name);
                        }
                }
                /*else if(strcmp(squad[i].type ," bowler")==0) {
                        printf("success fully compare %s \n",squad[i].players_name);

                        if(squad[i].avrg > good_bowler)
                        {
                                good_bowler = squad[i].avrg;
                                strcpy(name,squad[i].players_name);
                        }
                }
                */
        }

        printf("good batsman avrg is  %.2f  name is  %s" ,good_batsman, name);
}

