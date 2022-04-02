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
    printf("Enter the no. of candidates:");
    scanf("%d",&numberOfCandidates);

   for (int i = 0; i < currentValidID.totalVoters; i++)
    {
        studentVotes[i] = '0';
    }

    for (int i = 0;i < numberOfCandidates; i++)
    {
        candidateArray[i].cid=i+1;
        printf("Enter name of candidate %d: ",i+1);
        scanf(" %s",candidateArray[i].cname);
        candidateArray[i].votes=0;
    }
    return;
}