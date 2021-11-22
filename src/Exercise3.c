/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void Ex3(char *str){
	//Your codes here
	char words[1000][1000],min[1000],max[1000];
	int i=0,j=0,k,leng;
	for(k=0;str[k]!='\0';k++)
	{
		if(str[k]!= ' '&& str[k]!='\0')
		{
			words[i][j++]=str[k];
		}
		else
		words[i][j]='\0';
		i++;
		j=0;
	}
	leng=i+1;
	strcpy(min,words[0]);
	strcpy(max,words[0]);
	for (k=0;k<leng;k++)
	{
		if(strlen(min)>strlen(words[k]))
		strcpy(min,words[k]);
		if(strlen(max)<strlen(words[k]))
		strcpy(max,words[k]);
	}
	printf("Shortest word: %s\n",min);
	printf("Longest word: %s",max);
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	Ex3(testcase);
	return 0;
}
