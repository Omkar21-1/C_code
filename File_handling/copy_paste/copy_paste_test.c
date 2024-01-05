#include<stdio.h>
#include<stdlib.h>

typedef char BUFFER;


//FUNCTION DECLARATION or FUNCTION PROTOTYPE
FILE* open_file_for_read(char*);						/* Open File For Read And Return Address Of File If File Not Found Terminates The Program With Error Messege */

FILE* open_file_for_write(char*);						/* Open File For Write And Return Address Of File If File Not Created its Terminates The Program With Error Messege */

int copy_paste(FILE*,FILE*);							/* Copies First File Into Second File */



//FUNCTION DEFINATION or FUNCTION CODE or FUNCTION BODY
FILE* open_file_for_read(char *file_name)					/* Open File For Read And Return Address Of File If File Not Found Terminates The Program With Error Messege */
{
	FILE *fpr;								/* FILE Pointer to Read Binaray File Data */
	fpr = fopen(file_name,"rb");						/* Opening The FIle For Read */
	if(fpr==NULL)								/* if File Not Found Program Will Terminates */
	{
		printf("PROBLEM : File \"file_name\" Not Found To Open!!\n");
		exit(0);
	}
	return fpr;								/* If File Open Succesfully Then Its Return The Address Of File */
}


FILE* open_file_for_write(char *file_name)					/* Open File For Write And Return Address Of File If File Not Created its Terminates The Program With Error Messege */
{
	FILE *fpw;								/* FILE Pointer to Write Binaray File Data */
	fpw = fopen(file_name,"wb");						/* Opening The FIle For Write */
	if(fpw==NULL)								/* if File Insufficient Storage Program Will Terminates */
	{
		printf("PROBLEM : Insufficient Storage to Create \"file_name\" !!\n");
		exit(0);
	}
	return fpw;								/* If File Open Succesfully Then Its Return The Address Of File */
}


int copy_paste(FILE *fpr,FILE *fpw)						/* Copies First File Into Second File */
{
	BUFFER b;								/* BUFFER Memory to Store The Binaray Data 'BUFFER Data type is typedef of char data type' */
	int n; 									/* Stores Count Of Copied Binary Byte */
	
	
	while(1)
	{
		n = fread(&b, sizeof(b), 1, fpr);
		if(n==0)
		{
			break;
		}
		fwrite(&b, sizeof(b), 1, fpw);
	}

	return 1;
}


//ENTRY POINT FUNCTION
int main(int argc, char *argv[])
{
	
	if(argc<3)								/* Checking The Count of Arguiments From CMD prompt */
	{
		printf("PROBLEM : Insufficient Arguiments !!!\n");		/* If it is Less Than '3' Terminating the code */
		exit(0);
	}
	
	
	FILE *fpr = NULL;							/* FILE Pointer to Read Binaray File Data */		
	FILE *fpw = NULL;							/* FILE Pointer to Write Binaray File Data */
	
	
	
	fpr = open_file_for_read(argv[1]);					/* Open File For Read And Give Address of File If File Not Found Terminates The Program With Error Messege */
	
	fpw = open_file_for_write(argv[2]);					/* Open File For Write And Return Address Of File If File Not Created its Terminates The Program With Error Messege */
	
	
	copy_paste(fpr,fpw);							/* Copies First File Into Second File */
	
	
	fclose(fpr);								/* Closing File which is opened For Read */
	fclose(fpw);								/* Closing File which is opened For Write */


	return 0;
}

