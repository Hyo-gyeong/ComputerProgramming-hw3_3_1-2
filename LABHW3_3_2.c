#include <stdio.h>
int main(void)
{
	int seats[10] = {0};
	int people, i, fromhere;

	printf("**********�¼����� �ý���*********\n");
	printf("----------------------------------\n");
	for (i = 0; i < 10; i++) 
		printf("%3d", seats[i]);
	printf("\n");
	printf("----------------------------------\n\n");

	do{
		printf("�¼��� �����Ͻðڽ��ϱ�?(�� ��) ");
		scanf("%d", &people);

		for (i = 0; i < 10; i++) //�� �¼��� ���� ���� �ľ��ϱ�
			if (seats[i] == 0) {
				fromhere = i;
				break;
			}
		for (i = 0; i < people; i++) {//�� �� ������
			seats[fromhere] = 1;
			fromhere++; 
		}
	
		printf("**********�¼����� �ý���*********\n\n");
		printf("----------------------------------\n");
		for (i = 0; i < 10; i++) 
			printf("%3d", seats[i]);
		printf("\n");
		printf("----------------------------------\n\n");

	}while ( fromhere < 10);  //��Ȯ�� �ο��� �Է��Ѵٴ� ����
}