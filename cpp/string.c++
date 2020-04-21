#include<iostream>
#include<string.h>
using namespace std;
void print(char *c)
{
int i=0;
while(c[i] !='\0')
{
printf("%c",c[i]);
i++;
}
printf("\n");
}

int main()
{
char c[10]="hello";
char *p;
p=c;
print(c);

return 0;
}


