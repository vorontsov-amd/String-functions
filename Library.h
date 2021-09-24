///\file
///\brief Library for working with strings


char my_puts (const char* stroka)
{
    assert(stroka);

    for (int i = 0; stroka[i] != '\0'; ++i)
    {
        putchar (stroka[i]);
    }

    return (char) putchar('\n');
}


int* my_strchr (char* stroka, int symvol)
{
    assert(stroka);
    assert(isfinite(symvol));

    int i = 0;

    while (stroka[i] != '\0')
    {
        if (stroka[i] == symvol)
        {
            return (int*) &stroka[i];
        }
        i += 1;
    }

    return NULL;
}


int my_strlen (const char* stroka)
{
    assert(stroka);

    int len = 0;

    while (stroka[len] != '\0')
        len += 1;
    return len;
}

char* my_strcpy (char* stroka1, const char* stroka2)
{
    assert(stroka1);
    assert(stroka2);

    int i = 0;

    while (stroka2[i] != '\0')
    {
        stroka1[i] = stroka2[i];
        i++;
    }

    stroka1[i] = '\0';

    return stroka1;
}



char* my_strncpy (char* stroka1, const char* stroka2, int n_copy_items)
{
    assert(stroka1);
    assert(stroka2);

    int i = 0;

    while (i < n_copy_items)
    {
        if (my_strlen(stroka2) >= n_copy_items)
        {
            stroka1[i] = stroka2[i];
        }

        else
        {
            stroka1[i] = stroka2[i];

            if (n_copy_items + i <= my_strlen(stroka1) + 1)
                stroka1[n_copy_items + i] = '\0';
        }
        i++;
    }

    return stroka1;
}


char* my_strcat (char* stroka1, const char* stroka2)
{
    assert(stroka1);
    assert(stroka2);

    int i = 0;
    int length_of_stroka1 = my_strlen(stroka1);

    while (stroka2[i] != '\0')
    {
        stroka1[i + length_of_stroka1] = stroka2[i];
        i++;
    }

    return stroka1;
}

char* my_strncat (char* stroka1, const char* stroka2, int n_copy_items)
{
    assert(stroka1);
    assert(stroka2);

    int i = 0;
    int length_of_stroka1 = my_strlen(stroka1);

    while (i < n_copy_items)
    {
        if (my_strlen(stroka2) >= n_copy_items)
        {
            stroka1[i + length_of_stroka1] = stroka2[i];
        }

        else
        {
            stroka1[i + length_of_stroka1] = stroka2[i];

            if (n_copy_items + i + length_of_stroka1 <= my_strlen(stroka1) + 1)
                stroka1[n_copy_items + i + length_of_stroka1] = '\0';
        }
        i++;
    }

    return stroka1;
}


char* my_strdub (const char* stroka1)
{
    assert(stroka1);
    char* stroka2 = (char*) calloc(strlen(stroka1)+1, sizeof(char));
    strcpy(stroka2, stroka1);
    stroka2[strlen(stroka1)] = '\0';
    return (stroka2)? stroka2 : NULL;
}


char* my_fgets (char* output, int max_number, FILE* stream)
{
    assert(output);
    assert(stream);

    int i = 0;
    int ch = getc(stream);
    while ((i < max_number) && (ch != EOF) && (ch != '\n'))
    {
        output[i] = (char) ch;
        ch = getc(stream);
        i++;
    }
    output[max_number] = '\0';

    return output;
}
