//COTB38_Pawar Sumit Vikas
// Assignment No.2 
#include<stdio.h> 
int check(int x,int y) 
{ 
int a,b,c; 
if(x%y==0) 
return 0; 
a=x/y; 
b=y*(a+1); 
c=b-x; return 
c; 
} 
int main() 
{ 
 int l1,i,depth,j; printf("\nEnter the length of the key: "); 
 scanf("%d",&l1); 
    int sequence[l1]; printf("\nEnter the sequence key: "); 
 for(i=0;i<l1;++i) 
 { 
 scanf("%d",&sequence[i]); 
 } 
 int order[l1]; 
for(i=1;i<=l1;++i) 
 { 
 for(j=0;j<l1;++j) 
 { 
 if(sequence[j]==i) 
order[i-1]=j; 
 } 
 } 
    printf("\nEnter the depth: "); 
    scanf("%d",&depth); 
    int l2; 
    printf("\nEnter the length of String without spaces: "); 
    scanf("%d",&l2); int temp1=check(l2,l1); 
    int r=(l2+temp1)/l1; char p[l2+temp1]; 
    char p1[r][l1]; 
    //char p2[r][l1]; 
if(temp1>0) 
 { 
 printf("\nYou need to enter %d bogus characters.So enter total %d characters: ",temp1,(l2+temp1)); 
 } 
 else 
 { 
 printf("\nEnter the string: "); 
 } 
 for(i=-1;i<(l2+temp1);++i) 
 { 
 scanf("%c",&p[i]); 
 } 
 int count=0; 
while(depth>0) 
 { 
 count=0; 
for(i=0;i<r;++i) 
 { 
 for(j=0;j<l1;++j) 
 { 
 p1[i][j]=p[count]; 
count=count+1; 
 } 
 } 
 printf("\n\n\n"); 
for(i=0;i<r;++i) 
 { 
 for(j=0;j<l1;++j) 
 { 
 printf("%c ",p1[i][j]); 
 } 
 printf("\n"); 
 } 
 count=0; 
for(i=0;i<l1;++i) 
 { 
 for(j=0;j<r;++j) 
 { 
 p[count]=p1[j][order[i]]; 
count=count+1; 
 } 
 } 
 for(i=0;i<(l2+temp1);++i) 
printf("%c ",p[i]); 
 depth=depth-1; 
 } 
 return 0; 
} 

/*
PS F:\SAOE\A_SEM6\ISL\c> .\a.exe

Enter the length of the key: 3

Enter the sequence key: 2 1 3

Enter the depth: 2

Enter the length of String without spaces: 10

You need to enter 2 bogus characters.So enter total 12 characters: SUMITPAWARzz



S U M
I T P
A W A
R z z
U T W z S I A R M P A z


U T W
z S I
A R M
P A z
T S R A U z A P W I M z
PS F:\SAOE\A_SEM6\ISL\c>
*/