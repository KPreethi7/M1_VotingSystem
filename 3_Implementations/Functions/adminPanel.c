#include"election.h"

void adminPanel()
{
    while(1){
        
        if(authenticateAdmin()!=1){
            printf("\n Wrong Username or Password \n");            
            break;
        }

        printf("\n\nLOGGED IN SUCCESSFULLY (Press Enter)");
		getch();

        while(1)
        {
            char inputID[15];
            char input;char banInp;
            int WinnerCid, totalVotedNow=0;
            printf("\n1.New Election\n2.Continue Previous Election\n3.Delete Illegal Vote\n4.Ban User IDs\n5.Result\n6.Logout\nOption:");
			scanf(" %c",&input);

            switch(input)
            {
                case '1':
                    initiateNewElection();
                    saveElectionInfoInFile();
                    createVoterFiles();
                    break;
                case '2':
                    loadElectionInfoFromFile();
                    break;
                case '3':
                    printf("\nEnter user ID to delete its vote: ");
                    scanf("%s",inputID);
                    deleteIllegalVote(inputID);
                    break;
                case '4':
                    printf("Do you want to ban particular ID's?\nPress 1 if yes or any other key to continue...");
                    scanf(" %c",&banInp);
                    if(banInp=='1'){
                        banID();
                    }
                    break;
                case '5':
                    WinnerCid = getWinner();
                    if(WinnerCid != -1){
                        printf("\nWinner is %s with %d votes\n",voterArray[WinnerCid-1].cname,voterArray[WinnerCid-1].votes);
                    }
                    else{
                        printf("\nIts A TIE");
                    }
                    printf("\nFull Result\n");
                    for(int i=0;i<numberOfVoter;i++){
                        totalVotedNow+=voterArray[i].votes;
                        printf("%d. %s -> %d votes\n",voterArray[i].cid,voterArray[i].cname,voterArray[i].votes);
                    }
                    printf("\nVoting Percentage: %d %%\n\n",(totalVotedNow*100)/currentValidID.totalVoters);
                    break;
                case '6':
                    return;
                default:
                    printf("Invalid Option");
					getch();
            }
			
        }
    }

};