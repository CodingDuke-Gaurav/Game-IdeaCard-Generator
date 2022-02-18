#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
int p,pl;
    printf("\n\t***************************************\n\n");
    printf("\tWelcome to the Game IdeaCard Generator \n\n");
    printf("\t***************************************\n");
    printf("\n\tEvery Time this Generator run ...\n");
    printf("\tProgram Would choose Three genres on which you can Create your New Game\n\n");
    system("pause");
    printf("\n\tIdea Card Generated\n\n");
    int x = 0; 
    char list[40][22]={"Action","Pirates","Adventure","Aiien","Medival","Basketball","card","crazy","Cats","Cricket","Space","Panda","Dog","Driving & Parking","Extreme Sports","Fantasy","2D Game","Fighting","Flying","Halloween","3D Game","Monster","MultiPlayer","Platform","FPS Shooting","Puzzle","Racing","Robot","Shooting","Horror","Sports","Strategy","Sniper","Killing","Tower Defense","Winter","Winter Sports","Open World","Explore","Zombie"};
    srand(time(NULL));
    for(int i=0;i<3;i++){
        printf("\t\t%s",list[rand()%40]);
    }
    printf("\n\n");
    system("pause");
}
