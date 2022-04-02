#include"election.h"

void createCandidateFiles(){
    printf("\nCreating candidate files...\n");
    FILE *fp;
	char filename[20];
    for(int i = 1;i <= numberOfCandidates; i++){
        sprintf(filename,"candidate%d.txt",i);
		fp=fopen(filename,"w");
        fprintf(
            fp,"0\n%s",
            candidateArray[i-1].cname
        );
		fclose(fp);
    }
    printf("Created Files successfully\n");
}
