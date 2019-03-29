#include<stdio.h>
#include<string.h>
void boy()
{
     printf("\t\t\t   / \\ \n\t\t\t  /   \\ \n\t\t\t[{ O O }] \n\t\t\t (  V  ) \n\t\t\t  \\ = / \n\t\t\t   | | \n");
}
void girl()
{
     printf("\t\t\t   / \\ \n\t\t\t /     \\\n\t\t\t[{ 0 0 }] \n\t\t\t (  v  ) \n\t\t\t %%\\ ~ /%%\n\t\t\t %%%%| |%%%% \n\t\t\t%%%%%%   %%%%%%\n");
}
void love()
{
	printf("     ___        ___\n    (*_*)\\    /(*_*) \n    \\     \\  /     / \n     \\     \\/     / \n      \\          / \n       \\        / \n        \\      / \n         \\    / \n          \\  / \n           \\/ \n"); 
}
void slower()
{   int j;
	for(j=0;j<1000000000;j++)
        {
        }
}
void slow()
{   int j;
	for(j=0;j<100000000;j++)
        {
        }
}
void line()
{  int s,j;
		for(s=0;s<120;s++)
	{
	    for(j=0;j<10000000;j++)
        {
        }
		printf("-");
	}
}

void clear()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
int main()
{
	FILE *f;
	f=fopen("D:\\Documents\\program files\\flame.txt","a");
  int o;
  for(o=1;o>0;o++)
  {
   printf("\n\t\t\tTHIS IS STRICTLY FOR CHECKING RELATIONSHIP BETWEEN MEN AND WOMEN\n");
   line();
   printf("\n");
  int i,j,k,l,m,n,p,q,a1,b1,c;
  char a[32],b[32],d[32],e[32],ch;
  printf("enter   your   short   name (eg : middle name) : ");
  gets(a);
  fprintf(f,"\n");
  fprintf(f,a);
  a1=strlen(a);
  for(m=0;m<a1;m++)
  {
      d[m]=a[m];
  }
  d[m]='\0';
  printf("\n \n");
  printf("enter your short bf/gf name (eg : middle name) : ");
  gets(b);
  fprintf(f,b);
  b1=strlen(b);
  for(m=0;m<b1;m++)
  {
      e[m]=b[m];
  }
  e[m]='\0';
  for(i=0;i<a1;i++)
  {
      for(j=0;j<b1;j++)
      {
          if(a[i]==b[j])
          {
              for(k=i;k<a1;k++)
              {
                  a[k]=a[k+1];
              }

              for(k=j;k<b1;k++)
              {
                  b[k]=b[k+1];
              }

          }
      }
  }
  a1=strlen(a);
  b1=strlen(b);
  c=a1+b1;
  clear();
  printf(" \n\n\n\n\n\n\n\n");
  if(c%6==1)
    {printf("\t\t\t\tcongratulations\n");line();slower();boy();slow();printf("\n \n");girl();slow();line();printf("\n\ n\t\t\t\t%s and %s are best friends",d,e);}
  if(c%6==2)
   { printf("\t\t\t\tcongratulations\n");line();slower();love();slow();printf("\n \n");slow();line();printf("\n \n\t\t\t\t%s and %s are great lovers",d,e);}
  if(c%6==3)
   { printf("\t\t\t\tcongratulations\n");line();slower();boy();slow();printf("\n \n");girl();slow();line();printf("\n \n\t\t\t\t%s is best affair of %s  ",d,e);}
  if(c%6==4)
    {printf("\t\t\t\tcongratulations\n");line();slower();boy();slow();printf("\n \n");girl();slow();line();printf("\n \n\t\t\t\t%s and %s will get married or already married",d,e);}
  if(c%6==5)
    {printf("\t\t\t\tcongratulations\n");line();slower();boy();slow();printf("\n \n");girl();slow();line();printf("\n \n\t\t\t\t%s and %s are great enemies",d,e);}
  if(c%6==0)
    {printf("\t\t\t\tcongratulations\n");line();slower();boy();slow();printf("\n \n");girl();slow();line();printf("\n \n\t\t\t\t%s and %s are bro/sis or vice versa",d,e);}
    printf("\n \n \n \n \t\t\t\t\t\t\t\t\t press ESC to exit | To continue press any key");
    ch=getch();
    if(ch==27)
    {
	  fclose(f);
	  break;
	}
    clear();
  }
}
