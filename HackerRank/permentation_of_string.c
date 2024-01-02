#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int a = 0;

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    a++;
    if(n<2 || n>9 || a==n)
    {
        a=0;
        return 0;
    }
    
    
    
    int i=0;
    char **ss;
    ss = calloc(n, sizeof(char*));
    for (i = 0; i < n; i++)
    {
        ss[i] = calloc(11, sizeof(char));
        strcpy(ss[i],s[i]);
    }
 
    for(i=0; i<n-1; i++)
    {
        strcpy(s[i+1],ss[i]);
    }
    strcpy(s[0],ss[i]);

    for(i=0; i<n; i++)
    {
        free(ss[i]);
    }
    free(ss);
    
    
    return 1;
    
    
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
