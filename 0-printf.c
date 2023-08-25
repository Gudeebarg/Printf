#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++; // Move past '%'

            // Handle conversion specifier
            switch (*format)
            {
                case 'c':
                    // Handle character
                    break;
                case 's':
                    // Handle string
                    break;
                case '%':
                    // Handle '%' literal
                    break;
                default:
                    // Handle unknown specifier
                    break;
            }
        }
        else
        {
            // Output non-format characters
            putchar(*format);
            printed_chars++;
        }

        format++; // Move to next character
    }

    va_end(args);

    return printed_chars;
}
