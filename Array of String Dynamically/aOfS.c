#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define MAX_PLAYER_NAME 100
char** createTeam(){
	char **team;
	team=(char**)malloc(2*sizeof(char*));		
	for(int i=0;i<2;i++){
		char temp[MAX_PLAYER_NAME];
		fflush(stdin);
		gets(temp);
		team[i]=calloc(strlen(temp)+1,sizeof(char));
		strcpy(team[i],temp);
	}
	for(int i=0;i<2;i++)
		printf("%d,%s\n",i,team[i]);
	return team;
}
void destroyTeam(char ** team){
	for(int i=0;i<2;i++)
		printf("%d,%s\n",i,team[i]);
	for (int i = 1; i >=0; i--) {
        free(team[i]);
    }
    for(int i=0;i<2;i++)
		printf("%d,%s\n",i,team[i]);
    free(team);
}
int main(){
	char **teamA;
	teamA=createTeam();
	destroyTeam(teamA);
	getch();
}