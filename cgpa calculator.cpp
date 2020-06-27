#include <stdio.h>
#include <conio.h>
main()
{   
	int i,n;
	float credits[10], marks[10],sum,total,cgpa;
	printf("Grade to marks conversion:-\nGRADE O=10, A+=9, A=8, B+=7, B=6, etc.\n\n\n");
	printf("Enter total number of subjects: ");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++)
	 {
	  printf("enter marks of subject %d: ",i);
	  scanf("%f",&marks[i]);
	  printf("enter credits of subject %d: ",i);
	  scanf("%f",&credits[i]); 
	  printf("\n");
     }
    for(i=1;i<=n;i++) 
    {
    	sum = sum + credits[i]*marks[i];
	}
	for(i=1;i<=n;i++)
	{
		total = total + credits[i];
	}
	cgpa=(sum/total);
	if (cgpa>10||cgpa<0)
	printf("ERROR !");
	else 
	printf("cgpa=%.2f",cgpa);
	getch();
	getch();
	getch();
	getch();
	getch();
}
