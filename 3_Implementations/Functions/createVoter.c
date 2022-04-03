#include"election.h"

void createVoterFiles(){
    printf("\nCreating voter files...\n");
    FILE *fp;
	char filename[20];
    for(int i = 1;i <= numberOfVoters; i++){
        sprintf(filename,"voter%d.txt",i);
		fp=fopen(filename,"w");
        fprintf(
            fp,"0\n%s",
            voterArray[i-1].cname
        );
		fclose(fp);
    }
    printf("Created Files successfully\n");
}
