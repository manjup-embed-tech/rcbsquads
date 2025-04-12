#include <stdio.h>
#include <stdlib.h>
#include "cricket_board.h"
#include <string.h>

int display_squad (struct RCB *squad, int size)
{

        int i;

        printf(" name,  player_type, player_exp, num_match_played, player_avrg, highest_score, num_man_of_match, total_runs_scored, num_wkts_taken, num_of_catches, num_hits, num_of_runs_conceded \n");
        for(i=0;i<size;i++)
        {
                printf("%s %s %d %d %.2f %d %d %d %d %d %d %d \n",squad[i].players_name,squad[i].type, squad[i].exp, squad[i].num_match, squad[i].avrg, squad[i].high_score, squad[i].mom, squad[i].tot_runs, squad[i].wkts, squad[i].catches,squad[i].hits,squad[i].runs_conc);
        }
}

 int add_player(struct RCB *squad,int size)
{
        int pos;
        int i;
        int len=3;


        printf("enter the add player position \n");
        scanf("%d",&pos);

        for(i=11;i>pos;i--)
        {
                squad[i]=squad[i-1];
        }
        if(pos > size) {
                printf("enter out the players limit and enter with 11 players \n");
        }

        strcpy(squad[i].players_name,"Tim David");
        strcpy(squad[i].type,"batsman");
        squad[i].exp=5;
        squad[i].num_match=50;
        squad[i].avrg = (float) squad[i].tot_runs / squad[i].hits;
        squad[i].high_score = 78;
        squad[i].mom = 12;
        squad[i].tot_runs = 2347;
        squad[i].wkts = 15;
        squad[i].catches = 44;
        squad[i].hits = 34;
        squad[i].runs_conc = 543;
        len--;

        for (i=0;i<size;i++){
                printf("name :%s type :%s exp :%d num of match :%d avrg: %.2f high score :%d man of match :%d total run :%d wickets :%d catches :%d hits :%d runs conceded :%d \n",squad[i].players_name,squad[i].type, squad[i].exp, squad[i].num_match, squad[i].avrg, squad[i].high_score, squad[i].mom, squad[i].tot_runs, squad[i].wkts, squad[i].catches,squad[i].hits,squad[i].runs_conc);
        }
}

