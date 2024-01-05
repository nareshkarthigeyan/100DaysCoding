/*
    A string is a sequence of characters that are treated as a single data item
    String is a null terinated character array. The last character is always '\0'
    if char str[] = "Hello", then it is an array that has five characters H e l l o.
    To store it as a sixth, there is a sixth and final character '\0'
    The name of the character array (or string) is a pointer to the beginning of the string.
    for example,
        char strName[] = "hello"
        here, strName is a pointer to the first character 'h'.
    
    String Declaration:
        char string_name[size]
        or
        char *string_name = "string"
    
    The compiler assigns \0 automatically. You dont need to add it yourself. However, the array size should be max size of string + 1.
        
*/

/*
    Reading Strings:
    using scanf():
        scanf("%s", string_name);
        scanf terminates its input on the first white space it finds. :(
        & not required because the name itself is a pointer.

        To read whitespaces, we use the %[..] that can read vareity of characters including whitespace
        exampe:
            char line[80];
            scanf("%[^\n], line");
            printf("%s", line);


    using gets():
        using get(str);
        str is a string variable declared properly. It reads characters into str from keyboard until a new-line chara is encountered then appends a null chara to the string.
        gets() does not skip whitespaces.


    using getchar(), getch(), or getshe().
        getchar is used to read a single character.
        exampe:
            char ch;
            ch = getchar();
        we can use a for loop to read every character and place it in an array;
    
*/

#include <stdio.h>

int main(void){
    char line[80], character;
    int i = 0;
    do 
    {
        character = getchar();
        line[i] = character;
        i++;
    } while (character!= '\n');

    line[i] = '\0';
    printf("\n%s\n", line);    
}