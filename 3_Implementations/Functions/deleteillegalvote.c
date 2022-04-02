#include"election.h"

void deleteIllegalVote(char userID[15])
{
    FILE *fp,*fcp;
    char filename[20];
    char line[20];

    int location = extractRollNo(userID);
    sprintf(filename,"candidate%d.txt",candidateArray[studentVotes[location-1]-49].cid);
    candidateArray[studentVotes[location-1]-49].votes--;
    studentVotes[location-1]='0';
    if ((fp = fopen(filename,"r")) == NULL)    
    {    
        printf("\nFile cannot be opened...Operation Failed");
        return;
    }
    printf("\nDeleting in process...\n ");    
    if ((fcp = fopen("tmp.txt","w")) == NULL)    
    {    
        printf("\nFile cannot be opened...Operation Failed");
        return;
    }
    
    while (!feof(fp))
    {
        fscanf(fp,"%s",line);
        fprintf(fcp,"%s\n",line);
    }
    fclose(fp);
    fclose(fcp);
    if ((fp = fopen(filename,"w")) == NULL)    
    {    
        printf("\nFile cannot be opened...Operation Failed");
        return;
    }
