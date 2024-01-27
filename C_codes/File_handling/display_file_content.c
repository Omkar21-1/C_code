#include<stdio.h>
#include<stdlib.h>

FILE* check_existance(FILE*,char*);
void count_of_characters_words_lines(FILE*);
void count_of_UppercaseLowercase_Alpchabet_digits_symbol(FILE*);
void count_of_vovels(FILE*);


int main()
{
	char fname[12];
	
	printf("Enter File Name : ");
	scanf("%s",fname);
	FILE *fp;
	
	/* DISPLAYING COUNT OF CHARACTERS, WORDS AND LINES */
	fp = check_existance(fp,fname);
	count_of_characters_words_lines(fp);
	fclose(fp);	
	/**/
	
	/* DISPLAYING COUNT OF CAPITAL UPPERCASE,LOWERCASE ALPHABETS, DIGITS AND SYMBOLS */
	fp = check_existance(fp,fname);
	count_of_UppercaseLowercase_Alpchabet_digits_symbol(fp);
	fclose(fp);
	/**/

	/* DISPLAYING COUNT OF VOVELS */
	fp = check_existance(fp,fname);
	count_of_vovels(fp);
	fclose(fp);
	/**/
	
	return 0;
}







/* checking is entered file is in the database or not */
FILE* check_existance(FILE* files,char* file_name)
{
	files = fopen(file_name,"r");
	if(files==NULL)
	{
		printf("PROBLEM : file \"%s\" not found\n",file_name);
		exit(0);
	}
	return files;
}

/* displaying count of characters, words and lines */
void count_of_characters_words_lines(FILE* file_pointer)
{
	char ch;
	int c_cnt=0;
	int w_cnt=0;
	int l_cnt=0;
	
	printf("\n");
	
	while(1)
	{
		ch = fgetc(file_pointer);
		if(ch==EOF)
		{
			break;
		}
		
		++c_cnt;
		
		if(ch==' ' || ch == '\t')
		{
			++w_cnt;
		}
		else if(ch=='\n')
		{
			++w_cnt;
			++l_cnt;
		}
	}
	printf("Count of CHARACTER : %d\n",c_cnt);
	printf("Count of WORDS     : %d\n",w_cnt);
	printf("Count of LINES     : %d\n",l_cnt);	
}

/* displaying count of capital uppercase,lowercase alphabets, digits and symbols */
void count_of_UppercaseLowercase_Alpchabet_digits_symbol(FILE* file_pointer)
{
	char ch;
	int capital_cnt=0;
	int small_cnt=0;
	int digit_cnt=0;
	int symbol_cnt=0;
	
	printf("\n");
	
	while(1)
	{
		ch = fgetc(file_pointer);
		if(ch==EOF)
		{
			break;
		}
		
		if(ch>='A' && ch<='Z')
		{
			++capital_cnt;
		}
		else if(ch>='a' && ch<='z')
		{
			++small_cnt;
		}
		else if(ch>='0' && ch<='9')
		{
			++digit_cnt;
		}
		else
		{
			++symbol_cnt;
		}
	} 
	printf("Count of UPPERCASE ALPHABET : %d\n",capital_cnt);
	printf("Count of LOWERCASE ALPHABET : %d\n",small_cnt);
	printf("Count of DIGIT		    : %d\n",digit_cnt);
	printf("Count of SYMBOL		    : %d\n",symbol_cnt);	
}

/* displaying count of vovels */
void count_of_vovels(FILE* file_pointer)
{
	char ch;
	int vovel_cnt=0;
	
	printf("\n");
	
	while(1)
	{
		ch = fgetc(file_pointer);
		if(ch==EOF)
		{
			break;
		}
		
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			++vovel_cnt;
		}
	}
	printf("Counts of VOVEL : %d\n",vovel_cnt);
}




























