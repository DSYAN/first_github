#include<stdio.h>
int main() {
	int addrcode, year, month, day, seqno;
	char checkcode;
	printf("���������֤����:");
	scanf_s("%6d%4d%2d%2d%3d%1c", &addrcode, &year, &month, &day, &seqno, &checkcode);
	printf("��ַ�룺%d\n", addrcode);
	printf("�������ڣ�%d��%d��%d��\n", year, month, day);
	printf("˳���룺%03d\n", seqno);
	printf("У���룺%c", checkcode);
	return 0;
}