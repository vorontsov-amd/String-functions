///\file
///\brief Header file of the program that checks the operability of the string processing library


#ifndef PUTS_H_INCLUDED
#define PUTS_H_INCLUDED

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>



//---------------------------------------------------------------------------
//! The function prints a string to the screen
//!
//! @param [in]   stroka    pointer to line
//!
//! @return symvol '\n' or EOF
//---------------------------------------------------------------------------
char my_puts (const char* stroka);


//---------------------------------------------------------------------------
//! The function finds the address of the first required character
//!
//! @param [in]   stroka    pointer to line
//! @param [in]   symvol    desired symbol
//!
//! @return The address of the character you are looking for
//---------------------------------------------------------------------------
int* my_strchr (char* str, int symvol);

//---------------------------------------------------------------------------
//! The function returns the length of the string, excluding the mule character
//!
//! @param [in]   stroka    pointer to line
//!
//! @return String length excluding mule character
//---------------------------------------------------------------------------
int my_strlen (const char* stroka);

//---------------------------------------------------------------------------
//! The function copies the contents of the second line to the first
//!
//! @param [in]   stroka1    pointer to 1st line
//! @param [in]   stroka2    pointer to 2st line
//!
//! @return pointer to 1st line
//---------------------------------------------------------------------------
char* my_strcpy (char* stroka1, const char* stroka2);

//---------------------------------------------------------------------------
//! The function copies the contents of the second line to the first up to the nth character
//!
//! @param [in]   stroka1         pointer to 1st line
//! @param [in]   stroka2         pointer to 2st line
//! @param [in]   n_copy_itams    maximum number of characters copied
//!
//! @return pointer to 1st line
//---------------------------------------------------------------------------
char* my_strncpy (char* stroka1, const char* stroka2, int n_copy_items);

//---------------------------------------------------------------------------
//! The function copies the contents of the second line to the end of the first
//!
//! @param [in]   stroka1         pointer to 1st line
//! @param [in]   stroka2         pointer to 2st line
//!
//! @return pointer to 1st line
//---------------------------------------------------------------------------
char* my_strcat (char* stroka1, const char* stroka2);

//---------------------------------------------------------------------------
//! The function copies the contents of the second line to the end of the first up to the nth character
//!
//! @param [in]   stroka1         pointer to 1st line
//! @param [in]   stroka2         pointer to 2st line
//! @param [in]   n_copy_itams    maximum number of characters copied
//!
//! @return pointer to 1st line
//---------------------------------------------------------------------------
char* my_strncat (char* stroka1, const char* stroka2, int n_copy_items);

//---------------------------------------------------------------------------
//! The function allocates space in memory and duplicates a string into it
//!
//! @param [in]   stroka1    pointer to line
//!
//! @return Address of the memory location where the duplicated string is stored
//---------------------------------------------------------------------------
char* my_strdub (const char* stroka1);

//---------------------------------------------------------------------------
//! The function takes n characters from the data stream and puts them in the given string
//!
//! @param [in]   stroka        pointer to line
//! @param [in]   max_number    Maximum number of characters
//! @param [in]   stream        Stream pointer
//!
//! @return pointer to line
//!
//! @note The function copies until it encounters EOF or a newline character
//---------------------------------------------------------------------------
char* my_fgets (char* output, int max_number, FILE* stream);


//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_puts
//---------------------------------------------------------------------------
void test_puts (void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_strchr
//---------------------------------------------------------------------------
void test_strchr(void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_strlen
//---------------------------------------------------------------------------
void test_strlen(void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_strcpy
//---------------------------------------------------------------------------
void test_strcpy(void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_strncpy
//---------------------------------------------------------------------------
void test_strncpy(void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function mu_strcat
//---------------------------------------------------------------------------
void test_strcat(void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_strncat
//---------------------------------------------------------------------------
void test_strncat(void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_strdub
//---------------------------------------------------------------------------
void test_strdub (void);

//---------------------------------------------------------------------------
//! The function checks the functionality of the function my_fgets
//---------------------------------------------------------------------------
void test_fgets (void);


//---------------------------------------------------------------------------
//! @brief Reads the line from file and puts it into given list
//! @note If given list have not enough memory to keep the line, function will
//!       allocate new memory for the line
//! @param[in] str - the pointer of the pointer of the list
//! @param[in] len - the length of the list
//! @param[in] fp - the pointer of file
//! @return the number of symbols in the line, or -1 if the line is empty
//---------------------------------------------------------------------------
int getline(char **str, int len, FILE *fp);

#endif // PUTS_H_INCLUDED
