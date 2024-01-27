/*





Output Format

Print exactly  lines. On each line print 3 space-separated integers a,b,c  and  of the corresponding triangle.

Sample Input 0

3
7 24 25
5 12 13
3 4 5
Sample Output 0

3 4 5
5 12 13
7 24 25
Explanation 0

The square of the first triangle is 84 The square of the second triangle is 30 The square of the third triangle is 6. So the
sorted order is the reverse one.
*/




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

#define P ((tr[i].a + tr[i].b + tr[i].c)/2.0)

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int i;
    double *a;
    a = (double*) malloc(n * sizeof(double));
    
    for(i=0; i<n; i++)
    {
        a[i] = sqrt( (P) * (P-(tr[i].a)) * (P-(tr[i].b)) * (P-(tr[i].c)) );
    }

    triangle *temp;
    temp = (triangle *) malloc(n * sizeof(triangle));
    for(i=0; i<n; i++)
    {
            temp[i].a = tr[i].a;
            temp[i].b = tr[i].b;
            temp[i].c = tr[i].c;
    }

    double min;
    int j,k;
    for(k=0; k<n; k++)
    {
        min = a[0];
        j=0;
        for(i=0; i<n; i++)
        {
            
                if(a[i] < min )
                {
                    min = a[i];
                    j = i;
                }
            
        }a[j] = 999999999999999;
        
        tr[k].a = temp[j].a;
        tr[k].b = temp[j].b;
        tr[k].c = temp[j].c;
    }
  
    free(a);
    free(temp);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
