#include<stdio.h>
int main() {
	int addrcode, year, month, day, seqno;
	char checkcode;
	printf("请输入身份证号码:");
	scanf_s("%6d%4d%2d%2d%3d%1c", &addrcode, &year, &month, &day, &seqno, &checkcode);
	printf("地址码：%d\n", addrcode);
	printf("出生日期：%d年%d月%d日\n", year, month, day);
	printf("顺序码：%03d\n", seqno);
	printf("校验码：%c", checkcode);
	return 0;
}