#include<stdio.h>
#include<string.h>

void lcs (char s1[],char s2[]){

int m=strlen(s1),n=strlen(s2),lcs[m+1][n+1],i,j;

//building lcs table
for(i=0;i<m;i++)
for(j=0;j<n;j++)
  lcs[i][j]=(!i || !j)?:
      (s1[i-1]==s2[j-1])? lcs [i-1][j-1]+1:
        lcs[i-1][j]> lcs[i][j-1]? lcs[i-1][j]: lcs[i][j-1];


//lcs sequ
char lcs_seq [lcs[m][n]];
lcs_seq[lcs[m][n]]='\0';
int len=lcs[m][n];


//back tracking
while (m&&n)
    (s1[m-1]==s2[n-1])?(lcs_seq[--len]=s1[--m],n--):
        (lcs [m-1][n]> lcs [m][n-1]) ? m--: n--;

printf("lcs:%s\n", lcs_seq);




}

int main(){
int s1[100],s2[100];
printf("Enter first string: ");scanf("%s",s1);
printf("Enter second string: ");scanf("%s",s2);

lcs(s1,s2);
return 0;


}
