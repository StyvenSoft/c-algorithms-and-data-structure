# Basic types

Here's a table containing commonly used types in C programming for quick access.

|     Type     |      Size (bytes)     | Format Specifier |
|:------------:|:---------------------:|:----------------:|
|      int     | at least 2, usually 4 |      %d, %i      |
|     char     |           1           |        %c        |
|     float    |           4           |        %f        |
|    double    |           8           |        %lf       |
|   short int  |       2 usually       |        %hd       |
| unsigned int | at least 2, usually 4 |        %u        |
|   long int   | at least 4, usually 8 |     %ld, %li     |

Escape Sequences

| Escape Sequence |            Description           |
|:---------------:|:--------------------------------:|
| \n              | Represents a newline character   |
| \r              | Represents a carriage return     |
| \b              | Represents a backspace           |
| \f              | Represents a form-feed character |
| \t              | Represents a horizontal tab      |
| \v              | Represents a vertical tab        |
| \a              | Inserts a bell (alert) character |

## Integer Variable Types

Type Names for Integer Variable Types 

| Type Name     | Number of Bytes | Range of Values                                          |
|---------------|-----------------|----------------------------------------------------------|
| signed char   | 1               | 128 to \+127                                             |
| short int     | 2               | 32,768 to \+32,767                                       |
| int           | 4               | 2,147,438,648 to \+2,147,438,647                         |
| long int      | 4               | 2,147,438,648 to \+2,147,438,647                         |
| long long int | 8               | 9,223,372,036,854,775,808 to \+9,223,372,036,854,775,807 |


## Floating-Point Variable Types

There are three different types of floating-point variables, as shown in

| Keyword     | Number of Bytes | Range of Values                             |
|-------------|-----------------|---------------------------------------------|
| float       | 1               | ±3\.4E38 \(6 decimal digits precision\)     |
| double      | 8               | ±1\.7E308 \(15 decimal digits precision\)   |
| long double | 12              | ±1\.19E4932 \(18 decimal digits precision\) |
