#include<stdio.h>
#include<string.h>

struct student
{
	char sid[10];
	int score;
}studen[10];

int main()
{
	int y,i;
	char x[10];
	printf("Enter number:");
	int n;
	scanf("%d" , &n);
	getchar();

	for(i=0 ; i<n ; i++)
	{
		printf("Enter student id:\n");
		fgets(x , sizeof(x) , stdin);
		x[strcspn(x , "\n")] = '\0';
		printf("Enter score : \n");
		scanf("%d" , &y);
		getchar();
		int found = 0;
		int avg = 0;
		
		for(int j=0 ; j<i ; j++)
		{
			if( strcmp(studen[j].sid , x) == 0)
			{
				studen[j].score = (studen[j].score + y) / 2;
                		found = 1; // Set found flag
               			 break;
			}
		}	
		if(!found)
		{
			strcpy(	studen[i].sid , x);
			studen[i].score = y;
		}
	}

	for (int i = 0; i < n; i++) {
            printf("%s %d\n", studen[i].sid, studen[i].score);
    }

	return 0;
}


