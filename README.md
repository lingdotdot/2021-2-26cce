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
