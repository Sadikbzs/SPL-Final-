#include<stdio.h>
int matches;
scanf("%d",&matches);
int n;
    printf("Enter How many player you want to Entry");
struct Player{
char name[50];
char country[50];
int run[matches];
int wic[matches];
int point[matches];
};
int calpoint(int run,int wic){
int point=0;
if(run<=25) point+=25;
else if (run<=50) point+=10;
else if (run<=75) point+=15;
else point+=20;
return point;
}
int main(){
    struct  Players[Player];
    for (int i=0;i<n;i++){
        printf("Enter info %d\n",i+1);
        printf("Name");
        scanf("%[^\n]",Player[i].name);
        printf("Country\n");
        scanf("%[^\n]",Player[i].country);
        for(int j=0;j<matches;j++){

        printf(" Match %d Run\n",j+1);
        scanf("%d",Player[i].run[j]);
        printf(" Match %d wickets\n",j+1);
        scanf("%d",Player[i].wic[j]);
        Player[i].point[j]=calpoint(Player[i].run[j],Player[i].wic[j])

        }


    }
    printf("\nMan Of The match\n;");
    for (int match=0;match<matches,match++)
{
    int maxPoints=-1;
    int momIndex=-1;

    for (int i=0;i<n;i++){
        if (Player[i].point[matches]>maxPoints){
            maxPoints=Player[i].point[matches];
            momIndex=i;
        }
    }

}
    }





