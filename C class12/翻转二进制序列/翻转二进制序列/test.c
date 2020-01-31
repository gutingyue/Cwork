#include <stdio.h>
#include <Windows.h>

unsigned int reverse_bit(unsigned int value){
	unsigned int ret = 0;
	int num = sizeof(value)* 8;
	int i = 0;
	for (; i < num; i++){
		if (value & (1<<i)){
			ret |= (1<<(num-1-i));
		}
	}
	return ret;
}


int main(){
	unsigned int value = 0;
	printf("ÇëÊäÈëvalue:");
	scanf_s("%u", &value);

	unsigned int ret = reverse_bit(value);
	printf("reverse bit:%u\n", ret);

	system("pause");
	return 0;
}