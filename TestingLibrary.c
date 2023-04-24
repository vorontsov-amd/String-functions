///\file
///\brief Main file of the program that checks the operability of the string processing library


/*! \mainpage Square equation solver
* My string library implementation
* Author: Amadeus Vorontsov
*/

#include "lib/Library.h"


int main()
{
    test_puts();

    test_strchr();

    test_strlen();

    test_strcpy();

    test_strncpy();

    test_strcat();

    test_strncat();

    test_strdub();

    // You can create file 'file.txt' and uncomment this line
    // test_fgets();

    return 0;
}


void test_puts (void)
{
    char str_puts[] = "��!��!��!";

    printf ("������ str_puts �������� ����� \"��!��!��!\"\n������� my_puts ������ � ������� �� �����\n");

    my_puts (str_puts);

    printf ("---------------------\n");
}

void test_strchr(void)
{
    char str_strchr[] = "01234565";

    int symvol = '5';

    printf ("������ str_strchr �������� ������� \"01234565\"\n������� ������ 5\n������� my_strchr ����������\
 ����� ������� ������� 5 � ������ str_strchr. ����� ����� �������:\n");

    int* adress_symvol = my_strchr(str_strchr, symvol);

    printf ("%p\n", adress_symvol);

    printf ("---------------------\n");
}

void test_strlen(void)
{

    char str_strlen[] = "123456789";

    printf ("������ str_strlen �������� ����� \"123456789\"\n������� my_strlen ���������� � �����.\
 Ÿ ����� �����: ");

    printf ("%d\n", my_strlen(str_strlen));

    printf ("---------------------\n");

}

void test_strcpy(void)
{
    char str_strcpy1[100] = "123";
    char str_strcpy2[100] = "First\nSecond";

    printf("C����� str_strcpy1 �������� ����� \"123\"\nC����� str_strcpy2 �������� �����\
 \"First\nSecond\".\n������� my_strcpy �������� ����� �� ������ ������ � ������.\n������ ������ str_strcpy1 ��������\
 �����: ");
    my_strcpy (str_strcpy1, str_strcpy2);

    my_puts (str_strcpy1);

    printf ("---------------------\n");
}

void test_strncpy(void)
{
    char str_strncpy1[100] = "123";
    char str_strncpy2[100] = "First\nSecond";

    printf("C����� str_strncpy1 �������� ����� \"123\"\nC����� str_strncpy2 �������� �����\
 \"First\nSecond\".\n������� my_strncpy �������� ����� �� ������� �2 �� ������ ������ � ������.\n������ ������ str_strncpy1 ��������\
 �����: ");
    my_strncpy (str_strncpy1, str_strncpy2, 2);

    my_puts (str_strncpy1);

    printf ("---------------------\n");
}

void test_strcat(void)
{
    char str_strcat1[100] = "123";
    char str_strcat2[100] = "First\nSecond";

    printf("C����� str_strcat1 �������� ����� \"123\"\nC����� str_strcat2 �������� �����\
 \"First\nSecond\".\n������� my_strcat �������� ����� � ����� ������ �� ������ ������ � ������.\n������ ������ str_strcat1 ��������\
 �����: ");

    my_strcat (str_strcat1, str_strcat2);
    my_puts (str_strcat1);

    printf ("---------------------\n");
}

void test_strncat(void)
{
    char str_strncat1[100] = "123";
    char str_strncat2[100] = "First\nSecond";

    printf("C����� str_strncat1 �������� ����� \"123\"\nC����� str_strncat2 �������� �����\
 \"First\nSecond\".\n������� my_strncat �������� ����� � ����� ������ �� ������� �2 �� ������ ������ � ������.\n������ ������ str_strncat1 ��������\
 �����: ");
    my_strncat (str_strncat1, str_strncat2, 2);

    my_puts (str_strncat1);

    printf ("---------------------\n");
}


void test_strdub (void)
{
    char stroka1[] = "� ������";
    char* stroka2 = my_strdub(stroka1);
    printf ("������� my_strdub ������� ������ � ������ stroka2 � ��������� ������ stroka1. stroka2 ������ �������� �����:\n");
    my_puts (stroka2);
    printf ("---------------------\n");
}


void test_fgets (void)
{
    FILE* textfile = fopen("file.txt", "r");
    char stroka[100] = {'\0'};
    my_fgets (stroka, sizeof(stroka) - 1, textfile);
    printf ("������� my_fgets ��������� �� ����� ������ ������� � ���������� � � ������ stroka. Ÿ ����������:\n");
    puts (stroka);

}
