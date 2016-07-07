// 8.16 Checks Multiple Words Anagrams.cpp : Defines the entry point for the console application.
//
#include "stdio.h"
#include "ctype.h"
#define ALPHA 26

void main()
{
	while(true)
	{
		int time=1;
		int word[ALPHA]={0},ch;
		int word1[ALPHA]={0};
		bool is_anagram=true;
		printf("Enter a word: ");
		ch=getchar();
		while(ch!='0')
		{
			while(ch!='\n' && ch!='0')
			{
				ch=toupper(ch);
				if(time==1)
					word[ch-'A']++;
				else
					word1[ch-'A']++;
				ch=getchar();
			}
			time++;		
			for(int i=0; i<ALPHA && time>2; i++)
			{
				if(word[i]!=word1[i])
				{
					is_anagram=false;
					break;
				}
			}
			if(ch=='0')
				break;
			for(int x=0;x<ALPHA && time>2;x++)
				word1[x]=0;
			printf("Enter a word: ");
			ch=getchar();
		}
		if(is_anagram)
			printf("These words are anagrams\n\n");
		else
			printf("These words are not anagrams\n\n");
	    ch=getchar();
	}
}