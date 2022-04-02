#include"election.h"

void banID(){
    printf("\nCreating Banned.txt...\n");
    FILE *fp=fopen("Banned.txt", "w");
    if(fp==NULL){
        printf("Error: Banned.txt not created.\n");
        fclose(fp);
        return;
    }
    printf("Just Enter last roll no to ban\nPress 0 to exit... ");
    int input;
    while(1){
        printf("\nEnter Number: ");
        scanf("%d",&input);
        if(input==0)
            break;
        studentVotes[input-1]='$';
        fprintf(fp,"%d\n",input);
    }
    fclose(fp);
    printf("Created Successfully\n");
}