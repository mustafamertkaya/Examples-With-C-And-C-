#include <stdio.h>
#include<conio.h>
int main()
{
	float average; 
	int counter, grade, total; 	
	
      /* Ba�lang�� De�i�kenleri ve de�erleri*/
   	total = 0;
   	counter = 0;

	/* ��lem S�reci*/
	printf( "Enter grade, -1 to end: " );
  	scanf( "%d", &grade );
  	while ( grade != -1 ) {
		total = total + grade;
		counter = counter + 1; 
		printf( "Enter grade, -1 to end: " );
		scanf( "%d", &grade );
	}

	/* Program�n son a�amas�*/
	if( counter != 0 ) {
		average = ( float ) total / counter;
		printf( "Class average is %.2f", average );
	} else
	   printf( "No grades were entered\n" );
    
    
    
    getch();
  	return 0;
	    }
