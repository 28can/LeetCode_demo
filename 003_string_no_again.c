//˫ָ��
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char * s){
    int index[127] = {0};//������������λ��
	int start=0, length=0, max=0;
	for(int i = 0;s[i] != '\0'; i++){//���������ַ���
		if(index[s[i]] > start){//�ַ����ֹ�
			length = i - start;//����start�仯ǰ�ĳ��ȣ�Ҳ������һ�����ַ����ĳ���
			start = index[s[i]];//�󴰿��ƶ�
			if(length > max){//ѡ������ַ���
				max = length;
			}
		}
		index[s[i]] = i + 1;//s�ַ���λ����index����
	}
	length = strlen(s);//�ַ�������
	if(length - start > max){//
		return length - start;
	}else{
		return max;
	}
}
int main(){
	char arr[6] = "abeda";
	printf("���ظ����ַ�������󳤶�Ϊ��%d",lengthOfLongestSubstring(arr));
	return 0;
}