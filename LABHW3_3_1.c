//���� 1���� �ۼ��� �ڵ� �ٽ� �ۼ��غ���

//#define SIZE 10
//#include <stdio.h>
//
//int main(void)
//{
//	int seatChoice;
//	char choice; //��� ����
//	int seats[SIZE] = {0};
//	int i;
//
//	printf("********�¼� ���� �ý���**********\n");
//
//	printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
//	scanf("%c", &choice);
//	while (choice == 'y')
//	{
//		//�¼�ǥ ���
//		printf("-------------------------\n");
//		printf(" 1 2 3 4 5 6 7 8 9 10\n");
//		printf("-------------------------\n");
//		for(i = 0; i < SIZE; i++)
//			printf("%2d", seats[i]);
//		printf("\n");
//
//		printf("\n���° �¼�? ");
//		scanf("%d", &seatChoice);
//
//		if (seats[seatChoice - 1] == 0) { //���� �����ϸ�
//			seats[seatChoice - 1] = 1;
//			printf("����Ǿ����ϴ�.\n");
//
//			//���೻�� �ݿ��� �¼�ǥ ���
//			printf("-------------------------\n");
//			printf(" 1 2 3 4 5 6 7 8 9 10\n");
//			printf("-------------------------\n");
//
//			for(i = 0; i < SIZE; i++)
//			printf("%2d", seats[i]);
//			printf("\n");
//		}
//		else //			�̹� ����Ǿ�������
//			printf("�̹� ����� �ڸ� �Դϴ�.\n");
//
//		while (getchar() != '\n');
//
//		printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
//		scanf("%c", &choice);
//	}
//}
//

#define SIZE 10
#include <stdio.h>

char askReservation();

void printSeats(int s[], int size);

void processReservation(int s[], int size, int seatNumber);


int main(void) // �������� ����

{
	int seatChoice;
	int seats[SIZE] = {0};

 	printf("******�¼� ���� �ý���******\n");

	while (askReservation() == 'y')
	 {
		printSeats(seats, SIZE);
		printf("���° �¼�? ");
		scanf("%d", &seatChoice);

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n'); // ���� ���
	 }
}

char askReservation()

{
	char answer;

	printf("\n�¼��� �����Ͻðڽ��ϱ�?");
	scanf("%c", &answer);

	return answer;
}

void processReservation(int s[], int size, int seatNumber)

{
	int i;

	for (i = 0; i < size; i++) {
		if (seatNumber == i-1) {
			s[seatNumber-1] = 1;
			break;
		}
		else if (s[seatNumber-1] == 1) {
			printf("**�̹� ����� �ڸ��Դϴ�.\n");
			break;
		}
	}
	printSeats(s, size);

	return;
}

void printSeats(int s[], int size)

{
	int i;

	printf("--------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("--------------------\n");

	for (i = 0; i < SIZE; i++) 
		printf("%2d", s[i]);
	printf("\n");
}