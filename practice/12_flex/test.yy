/**
 * File Name:   test.yy
 * Description: A simple Fast Lexical Analysis (flex) program that replaces every occurrence of '42' with the given text string.
 * Author:      Francis O'Hara
 * Date:        3/4/25
 */
%%

42   printf("The meaning of life, the universe and everything");

%%

int main() {
    yylex();
    return 0;
}