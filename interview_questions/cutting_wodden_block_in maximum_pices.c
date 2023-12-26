#include<stdio.h>
#include<stdlib.h>

void accept_x_y_z(int *a,int len)
{
	printf("Enter X len : ");
	scanf("%d",&a[0]);
	printf("Enter Y len : ");
	scanf("%d",&a[1]);
	printf("Enter Z len : ");
	scanf("%d",&a[2]);

	if(a[0]!=len && a[1]!=len && a[2]!=len)
	{
		printf("Length of Wood Should Equal to X/Y/Z !!\n");
		exit(0);
	}

	int temp;
	if(a[0]>a[1])
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
	if(a[1]>a[2])
	{
		temp = a[1];
		a[1] = a[2];
		a[2] = temp;	
	}
	if(a[0]>a[1])
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}

}

void part_of_cutting_wood(int *a,int len)
{
	int cnt=0;	
	int t_len;
	
	t_len = len;
	
	
	while(t_len)
	{
		t_len = t_len-a[0];
		if(t_len==1)
		{
			t_len = t_len+a[0];
			t_len = t_len-a[1];
			if(t_len==1)
			{
				if(a[2]==len)
				cnt=1;
				break;
			}
			else
			{
				cnt++;
			}
			
		}
		else
		{
			cnt++;
		}
		
	}
	
	printf("\nWodden Block Maximum Pices : %d\n",cnt);	
	
}

int get_len()
{
	int len;
	
	printf("Enter Wooden Block Length : ");
	scanf("%d",&len);
	
	return len;
	
}

int main()
{
	int len;
	int a[3];
	
	
	len = get_len(); 
	
	accept_x_y_z(a,len);
	
	part_of_cutting_wood(a,len);
	
	
	return 0;
}



















