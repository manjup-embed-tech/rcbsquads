#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct RCB{
	char players_name[20]; /* name of the player */
	char type[20]; /* type of player batsman , bowler, wicket keeper, allrounder */
	int exp;	/* how many years experience of the player */
	int num_match;  /* number of match played by player */
	float avrg;	/* average of player if either ball or bat or wkt keeping- catch*/
	int high_score; /* highest score of the player */
	int mom;	/* hom many man of match taken by player */
	int tot_runs;	/* total runs scored by player */
	int wkts;	/* how many wickets taken by player */
	int catches;	/* how many catches taken by player */
	int hits;	/* how many times player got out */
	int runs_conc;	/* how many runs conceded by bowler */	

};


/*
 *
 * int create_playing_11_squad(struct RCB *squad, int size)
{
	int i,j;
	int bats=0, bowl=0, wktkpr=0, allrndr=0;
	struct RCB batsman[15], bowlers[15], wkt_keeper[15], all_rounders[15];
	for(i=0;i<size;i++)
	{
		if(strcmp(squad[i].type, "batsman")==0)
		{
			batsman[bats++] = squad[i];
		}
		else if(strcmp(squad[i].type, "bowler")==0)
		{
			bowlers[bowl++] = squad[i];
		}
		else if(strcmp(squad[i].type,"wicket keeper")==0)
		{
			wkt_keeper[wktkpr++] = squad[i];
		}
		else if(strcmp(squad[i].type, "allrounder")==0)
		{
			all_rounders[allrndr++] = squad[i];
		}
	}
	printf("batsman are : %d bowlers %d allrounder %d wkt keeper %d \n",bats, bowl, allrndr, wktkpr);
	short_players(batsman, bats);
	short_players(bowlers,bowl);
	
	printf("batsmans are in playing 11\n");
	for(i=0;i<4 && i < bats; i++)
	{
		printf(" avrg of good batsman in team %s %.2f \n",squad[i].players_name, batsman[i].avrg);
	}
	printf("bowlers are in playing 11 \n");

	for(i=0;i<4 && i < bowl; i++)
        {
                printf(" avrg of good bowler in team %s %.2f \n",squad[i].players_name, bowlers[i].avrg);
        }

}	
*
* 
*
*
*
*/

int main() {
	struct 	RCB squad[15];
	
	
	strcpy(squad[0].players_name,"Virat Kohli");
	strcpy(squad[0].type,"batsman");
	squad[0].exp=18;
	squad[0].num_match=252;
	squad[0].avrg = 55.98;//(float) squad[0].tot_runs / squad[0].hits;
	squad[0].mom=25;
	squad[0].tot_runs=8432;
	squad[0].wkts=18;
	squad[0].catches=65;
	squad[0].hits=45;
	squad[0].runs_conc=78;

	
	strcpy(squad[1].players_name,"Ab De villiers");
        strcpy(squad[1].type,"batsman");
        squad[1].exp=15;
        squad[1].num_match=179;
        squad[1].avrg = 57.87;//(float) squad[1].tot_runs / squad[1].hits;
        squad[1].mom=28;
        squad[1].tot_runs=6096;
        squad[1].wkts=0;
        squad[1].catches=43;
        squad[1].hits=23;
        squad[1].runs_conc=0;

	strcpy(squad[2].players_name,"Chris gayle");
        strcpy(squad[2].type,"batsman");
        squad[2].exp=14;
        squad[2].num_match=180;
        squad[2].avrg= 54.09; //(float) squad[2].tot_runs / squad[2].hits;
        squad[2].mom=30;
        squad[2].tot_runs=5678;
        squad[2].wkts=23;
        squad[2].catches=44;
        squad[2].hits=56;
        squad[2].runs_conc=90;


	strcpy(squad[3].players_name,"liam livingstone");
        strcpy(squad[3].type,"allrounder");
        squad[3].exp=10;
        squad[3].num_match=140;
        squad[3].avrg=43;
        squad[3].mom=15;
        squad[3].tot_runs=3456;
        squad[3].wkts=45;
        squad[3].catches=46;
        squad[3].hits=66;
        squad[3].runs_conc=340;

	strcpy(squad[4].players_name,"krunal panday");
        strcpy(squad[4].type,"allrounder");
        squad[4].exp=8;
        squad[4].num_match=134;
        squad[4].avrg=33;
        squad[4].mom=28;
        squad[4].tot_runs=3451;
        squad[4].wkts=66;
        squad[4].catches=56;
        squad[4].hits=67;
        squad[4].runs_conc=456;

	strcpy(squad[5].players_name,"KL Rahul");
        strcpy(squad[5].type,"wicket keeper");
        squad[5].exp=14;
        squad[5].num_match=189;
        squad[5].avrg=48;
        squad[5].mom=17;
        squad[5].tot_runs=5689;
        squad[5].wkts=0;
        squad[5].catches=289;
        squad[5].hits=78;
        squad[5].runs_conc=0;

        strcpy(squad[6].players_name,"Jithesh Sharma");
        strcpy(squad[6].type,"wicket keeper");
        squad[6].exp=6;
        squad[6].num_match=100;
        squad[6].avrg=35;
        squad[6].mom=17;
        squad[6].tot_runs=1994;
        squad[6].wkts=0;
        squad[6].catches=134;
        squad[6].hits=34;
        squad[6].runs_conc=0;

	strcpy(squad[7].players_name,"Jaspith bumra");
        strcpy(squad[7].type,"bowler");
        squad[7].exp=13;
        squad[7].num_match=140;
        squad[7].avrg = 34.09;//(float) squad[7].runs_conc / squad[7].wkts;      
      	squad[7].mom=17;
        squad[7].tot_runs=1994;
        squad[7].wkts=189;
        squad[7].catches=45;
        squad[7].hits=12;
        squad[7].runs_conc=1234;
	
	strcpy(squad[8].players_name,"Josh Hezlewood");
        strcpy(squad[8].type,"bowler");
        squad[8].exp=11;
        squad[8].num_match=120;
        squad[8].avrg = 36.87;//(float) squad[8].runs_conc / squad[8].wkts;
        squad[8].mom=15;
        squad[8].tot_runs=1998;
        squad[8].wkts=176;
        squad[8].catches=54;
        squad[8].hits=18;
        squad[8].runs_conc=2456;

	strcpy(squad[9].players_name,"Yuzuvendra chahal");
        strcpy(squad[9].type,"bowler");
        squad[9].exp=11;
        squad[9].num_match=120;
        squad[9].avrg = 38.87;//(float) squad[8].runs_conc / squad[8].wkts;
        squad[9].mom=15;
        squad[9].tot_runs=3678;
        squad[9].wkts=250;
        squad[9].catches=98;
        squad[9].hits=2;
        squad[9].runs_conc=4098;

	strcpy(squad[10].players_name,"Bhuvaneshwar kumar");
        strcpy(squad[10].type,"bowler");
        squad[10].exp=14;
        squad[10].num_match=189;
        squad[10].avrg = 43.08;//(float) squad[8].runs_conc / squad[8].wkts;
        squad[10].mom=35;
        squad[10].tot_runs=4567;
        squad[10].wkts=289;
        squad[10].catches=76;
        squad[10].hits=6;
        squad[10].runs_conc=5674;

	strcpy(squad[11].players_name,"Zaheer Khan");
        strcpy(squad[11].type,"bowler");
        squad[11].exp=12;
        squad[11].num_match=167;
        squad[11].avrg = 34.09;//(float) squad[8].runs_conc / squad[8].wkts;
        squad[11].mom=26;
        squad[11].tot_runs=2135;
        squad[11].wkts=345;
        squad[11].catches=76;
        squad[11].hits=6;
        squad[11].runs_conc=5674;
	
	strcpy(squad[12].players_name,"Rachin Ravindra");
        strcpy(squad[12].type,"batsman");
        squad[12].exp=3;
        squad[12].num_match=52;
        squad[12].avrg = 45.76;//(float) squad[0].tot_runs / squad[0].hits;
        squad[12].mom=5;
        squad[12].tot_runs=1234;
        squad[12].wkts=3;
        squad[12].catches=6;
        squad[12].hits=8;
        squad[12].runs_conc=17;

	strcpy(squad[13].players_name,"marcus stonis");
        strcpy(squad[13].type,"allrounder");
        squad[13].exp=6;
        squad[13].num_match=89;
        squad[13].avrg=34.56;
        squad[13].mom=8;
        squad[13].tot_runs=1567;
        squad[13].wkts=67;
        squad[13].catches=34;
        squad[13].hits=23;
        squad[13].runs_conc=854;

	strcpy(squad[14].players_name,"");
        strcpy(squad[14].type," ");
        squad[14].exp=0;
        squad[14].num_match=0;
        squad[14].avrg=0;
        squad[14].mom=0;
        squad[14].tot_runs=0;
        squad[14].wkts=0;
        squad[14].catches=0;
        squad[14].hits=0;
        squad[14].runs_conc=0;






	printf(" 1: display full squad \n 2: add player to team \n 3: delete player from team \n 4: show good batsman in squad \n 5: show good bowler \n 6: show good wkt keeper \n 7: show good all rounder \n 8: team of playing 11");
	int option;
	printf("enter the options \n" );
	scanf("%d",&option);

	switch(option)
	{
		case 1: display_squad(squad,15); 
			break;
		case 2: add_player(squad,11);
			break;
		case 3: delete_player(squad,11);
			break;
		case 4: show_good_batsman(squad,11);
			break;	
		case 5: show_good_bowler(squad,11);
			break;
		case 6: show_good_wkt_keeper(squad,11);
			break;
		case 7: show_good_all_rounder(squad,11);
			break;
		/*
		 *
		 * case 8: create_playing_11_squad(squad,15);
			break;
		*	
		*/


	}

	return 0;
}
