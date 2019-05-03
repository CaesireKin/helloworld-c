# include <stdio.h>

int main (int argc, char const* argv[]) {
    printf("This is a type test writen by Jon\n");
    printf("sizeof(char): %lu\n", sizeof(char));
    // printf("sizeof(bool): %lu\n", sizeof(bool)); // C doesn't have bool ?
    printf("sizeof(short): %lu\n", sizeof(short));
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("sizeof(long): %lu\n", sizeof(long));
    printf("sizeof(float): %lu\n", sizeof(float));
    printf("sizeof(double): %lu\n", sizeof(double));
    printf("\n");
    printf("sizeof(char*): %lu\n", sizeof(char*));
    // printf("sizeof(bool*): %lu\n", sizeof(bool*)); // C doesn't have bool ?
    printf("sizeof(short*): %lu\n", sizeof(short*));
    printf("sizeof(int*): %lu\n", sizeof(int*));
    printf("sizeof(long*): %lu\n", sizeof(long*));
    printf("sizeof(float*): %lu\n", sizeof(float*));
    printf("sizeof(double*): %lu\n", sizeof(double*));
}