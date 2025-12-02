#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char word[10];
    int freq;
}word_freq;


int main()
{
    char **words = (char**)malloc(sizeof(char*)*5);
    for(int i = 0;i<5;i++)
    {
        words[i] = (char*)malloc(sizeof(char)*10);
        scanf("%s",words[i]);
    }
    printf("\n");
    for(int i = 0;i<5;i++)
    {
        printf("%s\n",words[i]);
    }

    word_freq wf[5];

    int unique = 0;
    for(int i = 0;i<5;i++)
    {
        int found = 0;
        for(int j = 0;j<unique;j++)
        {
            if(strcmp(wf[j].word,words[i])==0)
            {
                found = 1;
                wf[j].freq++;
                break;
            }
        }
        if(!found)
        {
            strcpy(wf[unique].word,words[i]);
            wf[unique].freq = 1;
            unique++;
        }
    }
    for(int k = 0;k<unique;k++)
    {
        printf("%s : %d\n",wf[k].word,wf[k].freq);
    }
    for(int i = 0;i<5;i++)
    {
        free(words[i]);
    }
    free(words);

}