#include"election.h"

void saveElectionInfoInFile(){
    printf("Saving Election Info in File...\n");
    FILE *fp = fopen("ElectionInfo.txt", "w");
    if(fp==NULL)
    {
        printf("\nError in file creation\n");
        fclose(fp);
        return;
    }
    fprintf(
        fp,"%d\n%s\n%d\n%d",
        currentValidID.year,
        currentValidID.branch,
        currentValidID.totalVoters,
        numberOfCandidates
    );
    fclose(fp);
    printf("Saved Successfully : )");
}