#include <stdio.h>
#include <Windows.h>
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
// A A B C D E F
// A B C D E F A
int verify(char *arr1, char *arr2){
	char *q1 = arr1+1;
	char *p2 = arr2;
	char *q2 = p2+1;
	while (*p2!='\0'){
		while (p2!=q2){
			if (q1 == q2){
				if (*++q2 != '\0'){
					q1 = arr1;
					q2 = arr2;
				}
				else{
					q1++;
					q2++;
				}
			}
			else{
				break;
			}
			return q2 - arr2;
		}
		p2++;
	}
	return 0;
}

int main(){
	char arr1 = { "AABCDEF" };
	char arr2 = { "ABCDEFA" };
	char arr3 = { "AAABCDE" };
	int ret = verify(arr1, arr2);
	if (ret == 0){
		printf("arr1��arr2���������õ�\n");
	}else{
		printf("arr1��arr2����%d���õ�\n",ret);
	}
	
	system("pause");
	return 0;
}