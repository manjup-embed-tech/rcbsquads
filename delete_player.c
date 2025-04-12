#include <stdio.h>
#include <stdlib.h>
#include "cricket_board.h"
#include <string.h>

int delete_player(struct RCB *squad,int size)
{
        int delete_player;
        int len=size;
        int i;

        printf("enter the player to delete in list \n");
        scanf("%d",&delete_player);

        for(i=delete_player;i<len-1;i++)
        {
                strcpy(squad[i].players_name , squad[i+1].players_name);
                strcpy(squad[i].type , squad[i+1].type);
                squad[i].exp = squad[i+1].exp;
                squad[i].num_match = squad[i+1].num_match;
                squad[i].avrg = squad[i+1].avrg;
                squad[i].mom = squad[i+1].mom;
                squad[i].tot_runs = squad[i+1].tot_runs;
                squad[i].wkts = squad[i+1].wkts;
                squad[i].catches = squad[i+1].catches;
                squad[i].hits = squad[i+1].hits;
                squad[i].runs_conc = squad[i+1].runs_conc;

                len--;
        }

        printf(" name,  player_type, player_exp, num_match_played, player_avrg, highest_score, num_man_of_match, total_runs_scored, num_wkts_taken, num_of_catches, num_hits, num_of_runs_conceded \n");
        for (i=0;i<size;i++){
                printf(" %s %s %d %d %.2f %d %d %d %d %d %d %d \n",squad[i].players_name,squad[i].type, squad[i].exp, squad[i].num_match, squad[i].avrg, squad[i].high_score, squad[i].mom, squad[i].tot_runs, squad[i].wkts, squad[i].catches,squad[i].hits,squad[i].runs_conc);
        }

}

