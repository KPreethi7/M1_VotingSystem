#include"election.h"

void initiateNewElection()
{
    printf("\nNew Election Initiation:\n");
    
    printf("\nElections for which Year: ");
    scanf("%d",&currentValidID.year);
    printf("Enter branch code:");
    scanf("%s",currentValidID.branch);
    printf("Enter max roll no.:");
    scanf("%d",&currentValidID.totalVoters);
    printf("Enter the no. of Voters:");
    scanf("%d",&numberOfVoters);

   for (int i = 0; i < currentValidID.totalVoters; i++)
    {
        studentVotes[i] = '0';
    }

    for (int i = 0;i < numberOfVoters; i++)
    {
        voterArray[i].cid=i+1;
        printf("Enter name of voter %d: ",i+1);
        scanf(" %s",voterArray[i].cname);
        voterArray[i].votes=0;
    }
    return;
}