#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct currentValidID{
    int year;
    char branch[6];
    int totalVoters;
};
typedef struct candidate{
    int cid;
    char cname[20];
    int votes;
}