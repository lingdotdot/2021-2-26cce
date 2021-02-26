# 2021-2-26cce

## 第一題

```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	printf("%d=50*%d+5*%d+1*%d\n", a, a/50, a%50/5, (a%50%5)/1);

}
```
## 第二題

```C
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d", &a);
	
	for(int i=1; i<=a; i++){
		if(a%i==0){
			b++;
		}
	}
	printf("%d\n", b);
}
```
## 第三題
```C
#include <stdio.h>
int main()
{
	int ans=0;
	for(int i=1; i<=10; i++){
		int a;
		scanf("%d", &a);
		if(a%3==0){
			ans++;
		}
	}
	printf("%d\n", ans);
}
```
## 第四題
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	if(n>=90) printf("A\n");
	else if(n>=80) printf("B\n");
	else if(n>=60) printf("C\n");
	else printf("F\n");
}
```
## 第五題
```C
#include <stdio.h>
int main()
{
	int a,b,i, ans=1;
	scanf("%d%d", &a,&b);
	
	for(int i=1; i<=b; i++){
		if(a%i==0 && b%i==0){
			ans=i;
		}
	}
	printf("%d %d\n", a/ans, b/ans);
}
```

