/*
To sort a given array of strings into lexicographically increasing order or into an order in which the string with the lowest length appears first, a sorting function with a flag indicating the type of comparison strategy can be 
written. The disadvantage with doing so is having to rewrite the function for every new comparison strategy.

A better implementation would be to write a sorting function that accepts a pointer to the function that compares each pair of strings. Doing this will mean only passing a pointer to the sorting function with every new comparison 
strategy.

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Given an array of strings, you need to implement a "string_sort" function which sorts the strings according to a comparison function, i.e, you need to implement the function :

void string_sort(const char **arr,const int cnt, int (*cmp_func)(const char* a, const char* b)){
    
}

The arguments passed to this function are:

	an array of strings : arr
	length of string array: count
	pointer to the string comparison function: cmp_func
	

You also need to implement the following four string comparison functions:

"int lexicographic_sort(const char* a, const char* b)" to sort the strings in lexicographically non-decreasing order.

"int lexicographic_sort_reverse(const char* a, const char* b) " to sort the strings in lexicographically non-increasing order.

"int sort_by_number_of_distinct_characters(const char* a, const char* b) " to sort the strings in non-decreasing order of the number of distinct characters present in them. If two strings have the same number of distinct characters 
present in them, then the lexicographically smaller string should appear 
first.

"int sort_by_length(const char* a, const char* b)" to sort the strings in non-decreasing order of their lengths. If two strings have the same length, then the lexicographically smaller string should appear first.

---------------------------------------------------------

Input Format

You just need to complete the function string\_sort and implement the four string comparison functions.

Constraints

	1 <= No. of Strings <= 50 
	1 <= Total Length of all the strings <= 2500 
	You have to write your own sorting function and you cannot use the inbuilt qsort function
	The strings consists of lower-case English Alphabets only.
	Output Format

The locked code-stub will check the logic of your code. The output consists of the strings sorted according to the four comparsion functions in the order mentioned in the problem statement.

-----------------------------------------------------------------

Sample Input 0

4
wkue
qoi
sbv
fekls


Sample Output 0

fekls
qoi
sbv
wkue

wkue
sbv
qoi
fekls

qoi
sbv
wkue
fekls

qoi
sbv
wkue
fekls
	

====================================================================================================
========
ANSWER |
========


int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int freq_a[26] = {0};
    int freq_b[26] = {0};

    for (int i = 0; a[i] != '\0'; i++)
        freq_a[a[i] - 'a'] = 1;

    for (int i = 0; b[i] != '\0'; i++)
        freq_b[b[i] - 'a'] = 1;

    int count_a = 0, count_b = 0;

    for (int i = 0; i < 26; i++) {
        count_a += freq_a[i];
        count_b += freq_b[i];
    }

    if (count_a == count_b)
        return lexicographic_sort(a, b);

    return count_a - count_b;
}

int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a == len_b)
        return lexicographic_sort(a, b);

    return len_a - len_b;
}

void swap(const char** a, const char** b) {
    const char* temp = *a;
    *a = *b;
    *b = temp;
}

void string_sort(const char** arr, const int cnt, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

====================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//MY FUNCTION DECLARATION
void func_1(char**,int);
void func_2(char**,int);
void func_3(char**,int);
void func_4(char**,int);

int distinct_char(char *);





int lexicographic_sort(const char* a, const char* b) {
    int n;
    
    char temp[2501];
    
    n = strcmp(a,b);
    
    if(n>0)
    {
        strcpy(temp,a);
        strcpy(a,b);
        strcpy(b,temp);
    }
    return 0;
    
}

int lexicographic_sort_reverse(const char* a, const char* b) { 
    int n;
    
    char temp[2501];
    
    n = strcmp(a,b);
    
    if(n<0)
    {
       strcpy(temp,a);
        strcpy(a,b);
        strcpy(b,temp);
    }
    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    
    char temp[2501];
    
    int len_1 = distinct_char(a);
    int len_2 = distinct_char(b);
    
    if(len_1>len_2)
    {
       strcpy(temp,a);
        strcpy(a,b);
        strcpy(b,temp);
    }
    
    return 0;
}

int sort_by_length(const char* a, const char* b) {
    
    char temp[2501];
    
    int len_1 = strlen(a);
    int len_2 = strlen(b);
    
    if(len_1>len_2)
    {
        strcpy(temp,a);
        strcpy(a,b);
        strcpy(b,temp);
    }   
    
    return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    
    /*lexicographic_sort(const char *a, const char *b)*/
    if(cmp_func==lexicographic_sort)
    {
        func_1(arr,len);
    }
    
    /*lexicographic_sort_reverse(const char *a, const char *b)*/
    if(cmp_func==lexicographic_sort_reverse)
    {
        func_2(arr,len);
    }
    
    /*sort_by_length(const char* a, const char* b)*/
    if(cmp_func==sort_by_length)
    {
        func_3(arr,len);
    }
    
    /*sort_by_number_of_distinct_characters(const char* a, const char* b)*/
    if(cmp_func==sort_by_number_of_distinct_characters)
    {
        func_4(arr,len);
    }
    
}








//--------------------------------------------------------------------------------

/*lexicographic_sort(const char *a, const char *b)*/
void func_1(char** arr,int len)
{
    int n=len-1;
    int i,j;
    for(i=0; i<len; i++)
        {
            for(j=0; j<n; j++)
            {
                lexicographic_sort(arr[j],arr[j+1]);
            }
        }
}


/*lexicographic_sort_reverse(const char *a, const char *b)*/
void func_2(char** arr,int len)
{
    int n=len-1;
    int i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<n; j++)
        {
            lexicographic_sort_reverse(arr[j],arr[j+1]);
        }
    }
}


/*sort_by_length(const char* a, const char* b)*/
void func_3(char** arr,int len)
{
    func_1(arr,len);
    
    int n=len-1;
    int i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<n; j++)
        {
            sort_by_length(arr[j],arr[j+1]);
        }
    }

}


/*sort_by_number_of_distinct_characters(const char* a, const char* b)*/
void func_4(char** arr,int len)
{
    func_1(arr,len);
    
    int n=len-1;
    int i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<n; j++)
        {
            sort_by_number_of_distinct_characters(arr[j],arr[j+1]);
        }
    }
}
int distinct_char(char* str)
{
    int characters[256] = {0};
    int count=0;
    while (*str != '\0') {
        if (characters[(unsigned char)*str] == 0) {
            characters[(unsigned char)*str] = 1;
            count++;
        }
        str++;
    }

    return count;       
}


//--------------------------------------------------------------------------------



int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
