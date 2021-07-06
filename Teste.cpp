
#include <stdio.h>

#include <string.h>

int main()

{

   int i,j,k,l,n,m,T,a;

   char s[100],st[100],s2[100];

   scanf("%d",&T);

   for(a=1;a<=T;a++)

   {

       scanf("%s",s);

       scanf("%s",st);

       i = strlen(s);

       j = strlen(st);

       if(i>=j)

    {

       for(k=0,l=0;k<2*j;k++,l++)

       {

        s2[k] = s[l];

        k++;

        s2[k] = st[l];

       }

       for(k,n=j;n<i;k++,n++)

       {

           s2[k] = s[n];

       }

       s2[k] = '\0';

    }

       else

    {

       for(k=0,l=0;k<2*i;k++,l++)

       {

        s2[k] = s[l];

        k++;

        s2[k] = st[l];

       }

       for(k,n=i;n<j;k++,n++)

       {

           s2[k] = st[n];

       }

       s2[k] = '\0';

 

       }

       printf("%s\n",s2);

   }

 

 

}
