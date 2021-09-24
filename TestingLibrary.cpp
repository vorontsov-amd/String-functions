///\file
///\brief Main file of the program that checks the operability of the string processing library


/*! \mainpage Square equation solver
* My string library implementation
* Author: Amadeus Vorontsov
*/

#include "HeaderLibrary.h"
#include "Library.h"


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

    test_fgets();

    return 0;
}


void test_puts (void)
{
    char str_puts[] = "РТ!РТ!РТ!";

    printf ("Строка str_puts содержит фразу \"РТ!РТ!РТ!\"\nФункция my_puts сейчас её выведет на экран\n");

    my_puts (str_puts);

    printf ("---------------------\n");
}

void test_strchr(void)
{
    char str_strchr[] = "01234565";

    int symvol = '5';

    printf ("Строка str_strchr содержит символы \"01234565\"\nИскомый символ 5\nФункция my_strchr возвращает\
 адрес первого символа 5 в строке str_strchr. Адрес этого символа:\n");

    int* adress_symvol = my_strchr(str_strchr, symvol);

    printf ("%p\n", adress_symvol);

    printf ("---------------------\n");
}

void test_strlen(void)
{

    char str_strlen[] = "123456789";

    printf ("Строка str_strlen содержит фразу \"123456789\"\nФункция my_strlen возвращает её длину.\
 Её длина равна: ");

    printf ("%d\n", my_strlen(str_strlen));

    printf ("---------------------\n");

}

void test_strcpy(void)
{
    char str_strcpy1[100] = "123";
    char str_strcpy2[100] = "First\nSecond";

    printf("Cтрока str_strcpy1 содержит фразу \"123\"\nCтрока str_strcpy2 содержит фразу\
 \"First\nSecond\".\nФункция my_strcpy копирует фразу из второй строки в первую.\nТеперь строка str_strcpy1 содержит\
 фразу: ");
    my_strcpy (str_strcpy1, str_strcpy2);

    my_puts (str_strcpy1);

    printf ("---------------------\n");
}

void test_strncpy(void)
{
    char str_strncpy1[100] = "123";
    char str_strncpy2[100] = "First\nSecond";

    printf("Cтрока str_strncpy1 содержит фразу \"123\"\nCтрока str_strncpy2 содержит фразу\
 \"First\nSecond\".\nФункция my_strncpy копирует фразу до символа №2 из второй строки в первую.\nТеперь строка str_strncpy1 содержит\
 фразу: ");
    my_strncpy (str_strncpy1, str_strncpy2, 2);

    my_puts (str_strncpy1);

    printf ("---------------------\n");
}

void test_strcat(void)
{
    char str_strcat1[100] = "123";
    char str_strcat2[100] = "First\nSecond";

    printf("Cтрока str_strcat1 содержит фразу \"123\"\nCтрока str_strcat2 содержит фразу\
 \"First\nSecond\".\nФункция my_strcat копирует фразу в конец строки из второй строки в первую.\nТеперь строка str_strcat1 содержит\
 фразу: ");

    my_strcat (str_strcat1, str_strcat2);
    my_puts (str_strcat1);

    printf ("---------------------\n");
}

void test_strncat(void)
{
    char str_strncat1[100] = "123";
    char str_strncat2[100] = "First\nSecond";

    printf("Cтрока str_strncat1 содержит фразу \"123\"\nCтрока str_strncat2 содержит фразу\
 \"First\nSecond\".\nФункция my_strncat копирует фразу в конец строки до символа №2 из второй строки в первую.\nТеперь строка str_strncat1 содержит\
 фразу: ");
    my_strncat (str_strncat1, str_strncat2, 2);

    my_puts (str_strncat1);

    printf ("---------------------\n");
}


void test_strdub (void)
{
    char stroka1[] = "Я строка";
    char* stroka2 = my_strdub(stroka1);
    printf ("Функция my_strdub выдялет память в строке stroka2 и дублирует строку stroka1. stroka2 теперь содержит фразу:\n");
    my_puts (stroka2);
    printf ("---------------------\n");
}


void test_fgets (void)
{
    FILE* textfile = fopen("file.txt", "r");
    char stroka[100] = {'\0'};
    my_fgets (stroka, sizeof(stroka) - 1, textfile);
    printf ("Функция my_fgets считывает из файла первую строчку и записывает её в строку stroka. Её содержимое:\n");
    puts (stroka);

}
