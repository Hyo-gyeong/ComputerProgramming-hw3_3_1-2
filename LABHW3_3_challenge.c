#include <stdio.h>
int main(void)
{
	int seats[10] = {0};
	int people, i, fromhere;
	int rest = 10;

	printf("**********�¼����� �ý���*********\n");
	printf("----------------------------------\n");
	for (i = 0; i < 10; i++) 
		printf("%3d", seats[i]);
	printf("\n");
	printf("----------------------------------\n\n");

	while (rest > 0) {

		printf("�¼��� �����Ͻðڽ��ϱ�?(�� ��) ");
		scanf("%d", &people);

		rest = rest - people;

		if (rest >= 0 ) {
			for (i = 0; i < 10; i++) //�� �¼��� ���� ���� �ľ��ϱ�
				if (seats[i] == 0) {
					fromhere = i;
					break;
				}
			for (i = 0; i < people; i++) {//�� �� ������
				seats[fromhere] = 1;
				fromhere++; 
			}
		}
	
		else if (rest < 0) {
			for (i = 0; i < 10; i++)
				seats[i] = 1;
			printf(">>>%d���� ���� �ȵ�.\n", -rest);
		}

		printf("**********�¼����� �ý���*********\n\n");
		printf("----------------------------------\n");
		for (i = 0; i < 10; i++) 
			printf("%3d", seats[i]);
		printf("\n");
		printf("----------------------------------\n\n");

	}
}