
#include <stdio.h>

bool twoStrCompr(char *str1[], char *str2[]){

    int v = strcmp(str1, str2);
    if(v < 0){
        return true;
    } else {
        return false;
    }
}

int main() {
    
    bool result = twoStrCompr("fgbc","fdfd");

    if(result){
        printf("True");
    } else{
        printf("false");
    }
    
    
    

    int n1 = 3;
    int n2 = 4;

    printf("n1 = %d \n", n1);
    printf("n2 = %d \n", n2);

    int *p1 = &n1;

    printf("location of n1: %p", &n1);
    printf("location of n2: %p", &n2);
    printf("location stored in p1 is: %p", p1);
    printf("value of location stored in p1 is: %d\n", *p1);

    printf("Moving the pointer p1 to the next location in memory");

    p1 = p1 + 1;

    printf("Size of an int: ", sizeof(n1));

    p1 = --p1;

    *p = 777;


    return 0;
}


int main() {
    int c = 79;
    printf("location of c is %p \n",&c);
    printf("value of c is %d \n", *&c);
    //在变量前面加 & 取到变量的地址
    //在地址前面加 * 取到值


    //定义一个指针变量
    int *pointer;
    pointer = &c; //指针变量pointer指向了变量c
    //pointer 中存的是 变量c， 而不是数字79

    printf("the value of c is %d\n",*pointer);


    int a = 0, b = 0, temp;
    int *p1 = NULL, *p2 = NULL;

    printf("input a:");
    scanf("%d",&a);

    printf("input b:");
    scanf("%d",&b);

    p1 = &a;
    p2 = &b;

    if(*p1 < * p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }//交换的是值，*p1依然指向a，*p2指向b

    printf("max is %d\n", *p1);
    printf("min is %d", *p2);


    return 0;
}

int main() {

    int a = 0, b = 0;
    int *p1 = NULL, *p2 = NULL;
    int *temp = NULL;

    printf("input a:");
    scanf("%d",&a);

    printf("input b:");
    scanf("%d",&b);

    p1 = &a;
    p2 = &b;

    if(*p1 < * p2)
    {
        temp = p1;
        p1 = p2;
        p2 = temp;
    }//交换的是指针，*p1指向b，*p2指向a

    printf("max is %d\n", *p1);
    printf("min is %d", *p2);


    return 0;
}


int main() {

    int a[5] = {10,11,12,13,14};
    int *pointer = NULL;
    printf("%pointer\n",a);

    pointer = a; //相当于 pointer = &a[0];

    printf("%pointer\n",pointer);
    printf("%d\n",*pointer);
    printf("%d\n",*pointer++); //打印a[0];虽然从右往左执行，++等级更高，但后置++的含义是先使用前面的变量，然后再++
    printf("%d\n",*pointer++); //打印a[1]; 打印完后，指针指向了a[2];

    //pointer + i 等价于 a+i，等价于&a[i]
    //*(pointer + i) 等价于 *(a+i) 等价于 a[i]
    //pointer[i] 等价于 *(pointer + i)

    return 0;
}


int main() {

    int a[3], i, *p = a;
    for (i = 0; i < 3; ++i) {
        printf("input a[");
        printf("%d",i);
        puts("]");

        scanf("%d",p++);
    }

    for (p--; p >=a ;) {
        printf("%d\n",*p--);
    }
    return 0;
}


int main() {
//reverse an array by pointer
    int a[5], *p = NULL, *q = NULL, temp;

    for(p = a; p < a + 5; p++){
        scanf("%d",p);
    }

    for (p = a, q = a + 4; p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }

    for(p = a; p < a + 5; p++){
        printf("%d\n",*p);
    }

    return 0;
}


int main() {
//print 2D array
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int *p;

    for(p = a; p < &a[0][0] + 12; p++){
        printf("%d\n",*p);
    }
    return 0;
}

int main() {

    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4], i, j; //p指向4个int型元素的一维数组 的指针变量
    p = a;
    scanf("%d",&i);
    scanf("%d",&j);


    printf("%d\n",*(*(p+i)+j));
    printf("%d\n",p[i][j]); //same as above

    return 0;
}
