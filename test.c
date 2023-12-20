#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char *s;
    int n;
    scanf("%d",&n);
    s = (char*) malloc(n * sizeof(char));
    if(s==NULL)
    {
        exit(0);
    }
    int cnt[10]={0};
    int i;
    int a;
    
    getchar();
    gets(s);
    
    for(i=0; s[i]; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            a =  s[i]-48;
            cnt[a]++;
        }
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",cnt[i]);
    }
    
    
   
    
    return 0;
}
