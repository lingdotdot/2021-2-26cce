# week03

# 1
```C
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```

# 2
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p; =&a[2];
    *p=222;
            printAll();
    p=p+2;
    *p=666;
            printAll();
    p--;
    *p=555;
            printAll();
}
```

# 3
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ", a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p=&a[2];
    *p=222;
            printAll();
            printf("p心裡小紙條記的值是:%d\n",p);
    p=p+2;
    *p=666;
            printAll();
            printf("p心裡小紙條記的值是:%d\n",p);
    p--;
    *p=555;
            printAll();
            printf("p心裡小紙條記的值是:%d\n",p);
}
```

# 4
```C



