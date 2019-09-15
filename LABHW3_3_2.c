#include <stdio.h>
int main(void)
{
	int seats[10] = {0};
	int people, i, fromhere;

	printf("**********좌석예약 시스템*********\n");
	printf("----------------------------------\n");
	for (i = 0; i < 10; i++) 
		printf("%3d", seats[i]);
	printf("\n");
	printf("----------------------------------\n\n");

	do{
		printf("좌석을 예매하시겠습니까?(몇 명) ");
		scanf("%d", &people);

		for (i = 0; i < 10; i++) //빈 좌석중 가장 앞쪽 파악하기
			if (seats[i] == 0) {
				fromhere = i;
				break;
			}
		for (i = 0; i < people; i++) {//한 명씩 앉히기
			seats[fromhere] = 1;
			fromhere++; 
		}
	
		printf("**********좌석예약 시스템*********\n\n");
		printf("----------------------------------\n");
		for (i = 0; i < 10; i++) 
			printf("%3d", seats[i]);
		printf("\n");
		printf("----------------------------------\n\n");

	}while ( fromhere < 10);  //정확한 인원을 입력한다는 전제
}