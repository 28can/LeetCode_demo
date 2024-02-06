//双指针
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char * s){
    int index[127] = {0};//类似用来存贮位置
	int start=0, length=0, max=0;
	for(int i = 0;s[i] != '\0'; i++){//遍历整个字符串
		if(index[s[i]] > start){//字符出现过
			length = i - start;//计算start变化前的长度，也就是上一个子字符串的长度
			start = index[s[i]];//左窗口移动
			if(length > max){//选择最大字符串
				max = length;
			}
		}
		index[s[i]] = i + 1;//s字符的位置用index存贮
	}
	length = strlen(s);//字符串长度
	if(length - start > max){//
		return length - start;
	}else{
		return max;
	}
}
int main(){
	char arr[6] = "abeda";
	printf("无重复子字符串的最大长度为：%d",lengthOfLongestSubstring(arr));
	return 0;
}