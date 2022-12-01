#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main (int argc, char* argv[])
{
int ch; // ����� ��� �������� ������� ������� �� ���� ������
FILE *fp; // "��������� �����"
unsigned long count = 0;
printf("1\r\n");
if (argc != 2)
{
printf("Usage: %s filename\n", argv[0]);
exit(EXIT_FAILURE);
}
if ( ( fp = fopen (argv [ 1 ] , "r")) == NULL)
{
printf("Can't open %s\n", argv[1]);
getchar();
exit(EXIT_FAILURE);
}
while ((ch = getc(fp)) != EOF)
{
putc (ch, stdout) ; // �� ��, ��� � putchar (ch) ;
count++;
}
printf("\r\n");
fclose ( fp);
printf("The file %s contains %lu characters\n", argv[1], count);
return 0;

}




