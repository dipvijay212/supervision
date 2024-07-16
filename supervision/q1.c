#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() 
{
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_file.txt","w");
    if(evenFile == NULL) 
	{
        printf("Can't open even_file.txt \n");
        return 1;
    }

    oddFile = fopen("odd_file.txt","w");
    if(oddFile == NULL) {
        printf("Can't open odd_file.txt \n");
        fclose(evenFile);
        return 1;
    }

    for(i=50;i<=70;i++) 
	{
        if(i%2==0) 
		{
            fprintf(evenFile, "%d ",i);
        } 
		else 
		{
            fprintf(oddFile, "%d ",i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    evenFile = fopen("even_file.txt","r");
    if(evenFile == NULL) 
	{
        printf("Could not open even_file.txt for reading\n");
        return 1;
    }

    oddFile = fopen("odd_file.txt","r");
    if(oddFile == NULL) 
	{
        printf("Could not open odd_file.txt for reading\n");
        fclose(evenFile);
        return 1;
    }

    printf("Even numbers from even_file.txt:\n");
    while(fscanf(evenFile,"%d", &i) != EOF) 
	{
        printf("%d ",i);
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt:\n");
    while(fscanf(oddFile,"%d", &i) != EOF) 
	{
        printf("%d ",i);
    }
    printf("\n");

    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
