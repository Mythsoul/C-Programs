#include<stdio.h>
int main() {
    


//Example 1
int a = 0;
while (a < 10) {
    printf("%d\n", a);
    a++;
}

//Example 2
int b = 10;
while (b > 0) {
    printf("%d\n", b);
    b--;
}

//Example 3
int c = 0;
while (c <= 10) {
    if (c % 2 == 0) {
        printf("%d\n", c);
    }
    c++;
}

//Example 4
int d = 1;
while (d <= 10) {
    printf("%d\n", d*d);
    d++;
}

//Example 5
int e = 10;
while (e >= 0) {
    if (e % 2 != 0) {
        printf("%d\n", e);
    }
    e--;
}

//Example 6
int f = 0;
while (f < 10) {
    printf("%d\n", f*2);
    f++;
}

//Example 7
int g = 10;
while (g > 0) {
    printf("%d\n", g*g);
    g--;
}

//Example 8
int h = 0;
while (h <= 10) {
    printf("%d\n", h*2+1);
    h++;
}

//Example 9
int i = 10;
while (i >= 0) {
    printf("%d\n", i*i*i);
    i--;
}

//Example 10
int j = 0;
while (j < 10) {
    printf("%d\n", j*j*j);
    j++;
}
}