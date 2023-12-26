/*#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *fpr;
	FILE *fpw;
	
	//fpw = fopen("b.txt","w");

	fpr = fopen("a.txt","r");
	if(fpr==NULL)
	{
		printf("exit\n");
		exit(0);
	}
	
	fclose(fpr);

	printf("Done\n");
	
	return 0;
}*/

#include <stdio.h>
#include <errno.h>

int main() {




    FILE *file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening the file");
        fprintf(stderr, "Error code: %d\n", errno);
    }

    return 0;
}

