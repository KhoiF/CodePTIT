#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("D:\\linh tinh\\bai1.txt.txt", "w");
    char s[100] = "28tech.com.vn";
    fprintf(f,"%d %.2lf %.c %s\n", 100, 3.14, '@', s);
    fclose(f);
    return 0;
}