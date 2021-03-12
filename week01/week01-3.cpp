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
