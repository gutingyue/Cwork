#include <stdio.h>
#include <Windows.h>
//1.ʵ��һ�����������������ַ����е�k���ַ��� 
void levorotation(char arr[], int key, int num){
	int i = 0;
	while (i<key){
		char *p = arr;
		char *q = arr + 1;
		while (1){
			if ((*q == '\0') || ((q - arr) >= num)){
				break;
			}
			else{
				*p = *p^*q;
				*q = *p^*q;
				*p = *p^*q;
				p++;
				q++;
			}
		}
		i++;
	}
}

int main(){
	char arr1[] = { "ABCDEF" };
	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	int num = sizeof(arr2) / sizeof(arr2[0]);
	int key = 0;
	int i = 0;
	printf("��������λ��key:");
	scanf_s("%d", &key);

	printf("\n������arr1��%s", arr1);
	levorotation(arr1, key, num);
	printf("\n������arr1��%s\n", arr1);
	
	printf("\n����ǰarr2��");
	for (i = 0; i < num; i++){
		printf("%c", arr2[i]);
	}
	levorotation(arr2, key, num);
	printf("\n������arr2��");
	for (i = 0; i < num; i++){
		printf("%c", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}