#include <stdio.h>
#include <assert.h>

//��ʽ1
int my_strlen01(const char *str){
	int count = 0;
	while (*str){
		str++;
		count++;
	}
	return count;
}

//��ʽ2
int my_strlen02(const char* str){
	char * p = str;
	while (*p){
		p++;
	}
	return p - str;
}

//��ʽ3
int my_strlen03(const char* str){
	if (*str == '\0'){
		return 0;
	}

	return 1 + my_strlen02(str + 1);
}

void TestStrlen(){
	char * str = "hello!";

	int l1 = my_strlen01(str);
	int l2 = my_strlen02(str);
	int l3 = my_strlen03(str);

	printf("l1:%d ,l2:%d ,l3:%d ", l1, l2, l3);
}

//ģ��ʵ��strcpy
char* my_strcpy(char* dest, const char* src){ //Դ�ַ�����const���α���
	//��֤�����ַ�������Ϊ��
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;//����ԭ�ַ����׵�ַ
	while ((*dest++ = *src++) != '\0');

	return ret;
}

void TestStrcpy(){
	char s1[] = "abcdefg";
	char* s2 = "1234";
	my_strcpy(s1, s2);

	printf("s1:%s", s1);
}

//ģ��ʵ��strcat
char* my_strcat(char* dest, const char* src){
	assert(dest != NULL);
	assert(src!= NULL);

	char * ret = dest;
	while (*++dest); //����ʹ��ǰ��++������Ŀ���ַ����Ľ�����־
	while ((*dest++ = *src++));

	return ret;
}

void TestStrcat(){
	char s1[10] = "abc";//����Ҫ�㹻��
	char* s2 = "-def";
	my_strcat(s1, s2);
}

//ģ��ʵ��strcmp
int my_strcmp(const char* str1, const char* str2){
	assert(str1 != NULL);
	assert(str2 != NULL);

	int ret = 0;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str1){ 
		   //str1ָ���ַ���str2ָ���ַ��Ĳ�ֵΪ0 , ����str1û�ߵ�ĩβ
		str1++;
		str2++;
	}

	if (ret < 0){
		return -1;
	}
	else if (ret > 0){
		return 1;
	}
	return ret;
}

void TestStrcmp(){
	char* s1 = "abc";
	char* s2 = "abc";
	char* s3 = "123";
	int a = my_strcmp(s1, s2);
	int b = my_strcmp(s1, s3);

	printf("a:%d  b:%d", a, b);
}


int main(){
	//TestStrlen();
	//TestStrcpy();
	//TestStrcat();
	TestStrcmp();

	return 0;
}