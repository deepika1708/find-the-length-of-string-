#include<stdio.h>
#include<conio.h>

int strle(char a[100])
    { int m=0;
      for(int i=0;i<=100;i++)
       {
	 //char b;
	// b=a[i];
	 if(a[i]=='\n')
	  { m=i;
	  }
       }
       return m;
    }

  void main()
      { int z;
	char s[100];
	printf("\n\n\n\t\tenter any text  :");
	scanf("%ch",&s);
	z=strle(s);
	printf("text lenght = %d",&z);
	getch();
      }

