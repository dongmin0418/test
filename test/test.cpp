#include <stdio.h>

#include <windows.h> //�����쿡�� ����ϴ� ���̺귯��;Ŀ����ġ�� �ٲٱ����� windows.h�� ���;
//

//Ư�� ��ǥ�� Ŀ���� �ű���

void gotoXY(int x, int y) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(hConsole, coord);

}
//0 : ����
//1 : ����
//2 : �ʷ�
//3 : ���
//4 : �Ķ�
//5 : ����
//6 : û��
//7 : ���
// ...  
// \033 : ASCII escape
//38: �� �ڵ�� �ؽ�Ʈ�� ����(����) ������ �����ϰڴٴ� �ǹ��Դϴ�. �ؽ�Ʈ�� ������ �����Ϸ��� 48�� ����մϴ�.
//5: �� �ڵ��� 5�� 256�� ��带 ����ϴ� ���� �ǹ��մϴ�.�� ���� 256���� ������ ����� �� �ִ� Ȯ��� ���� ������ �����մϴ�.
//%d : �� �ڸ��� ���� �ڵ带 ��Ÿ���� ���ڰ� �� �ڸ��Դϴ�.���� �ڵ�� 0���� 255������ ���� ���� �� �ֽ��ϴ�.
void setColor(int colorCode) {

    printf("\033[38;5;%dm", colorCode); // 38;5;%dm�� 256�� ���

}


int turtle() {
    printf("���α�\n");

        gotoXY(50, 5);  // (x, y) ��ǥ�� ����
    setColor(7);
    printf("####");

    gotoXY(49, 6);
    setColor(7);
    printf("#");

    gotoXY(50, 6);
    setColor(72);
    printf("#");

    gotoXY(51, 6);
    setColor(6);
    printf("###");

    gotoXY(54, 6);
    setColor(7);
    printf("##");

    gotoXY(63, 5);
    setColor(7);
    printf("###");

    gotoXY(62, 6);
    setColor(7);
    printf("#");

    gotoXY(63, 6);
    setColor(6);
    printf("###");

    gotoXY(66, 6);
    setColor(7);
    printf("#");

    gotoXY(48, 7);
    setColor(7);
    printf("#");

    gotoXY(49, 7);
    setColor(6);
    printf("######");

    gotoXY(55, 7);
    setColor(72);
    printf("#");

    gotoXY(56, 7);
    setColor(7);
    printf("##");

    gotoXY(61, 7);
    setColor(7);
    printf("#");

    gotoXY(62, 7);
    setColor(6);
    printf("###");

    gotoXY(65, 7);
    setColor(72);
    printf("##");

    gotoXY(67, 7);
    setColor(7);
    printf("#");

    gotoXY(48, 8);
    setColor(7);
    printf("#");

    gotoXY(49, 8);
    setColor(6);
    printf("#######");

    gotoXY(56, 8);
    setColor(240);
    printf("#");

    gotoXY(57, 8);
    setColor(130);
    printf("#");

    gotoXY(58, 8);
    setColor(7);
    printf("## #");

    gotoXY(62, 8);
    setColor(6);
    printf("##");

    gotoXY(64, 8);
    setColor(72);
    printf("#");

    gotoXY(65, 8);
    setColor(240);
    printf("#");

    gotoXY(66, 8);
    setColor(66);
    printf("#");

    gotoXY(67, 8);
    setColor(7);
    printf("#");

    gotoXY(47, 9);
    setColor(7);
    printf("#");

    gotoXY(48, 9);
    setColor(6);
    printf("####");

    gotoXY(52, 9);
    setColor(72);
    printf("#");

    gotoXY(53, 9);
    setColor(6);
    printf("###");

    gotoXY(56, 9);
    setColor(72);
    printf("#");

    gotoXY(57, 9);
    setColor(240);
    printf("#");

    gotoXY(58, 9);
    setColor(131);
    printf("#");

    gotoXY(59, 9);
    setColor(130);
    printf("#");

    gotoXY(60, 9);
    setColor(7);
    printf("#");

    gotoXY(61, 9);
    setColor(72);
    printf("#");

    gotoXY(62, 9);
    setColor(6);
    printf("#");

    gotoXY(63, 9);
    setColor(72);
    printf("#");

    gotoXY(64, 9);
    setColor(240);
    printf("#");

    gotoXY(65, 9);
    setColor(72);
    printf("##");

    gotoXY(67, 9);
    setColor(7);
    printf("#");

    gotoXY(47, 10);
    setColor(7);
    printf("#");

    gotoXY(48, 10);
    setColor(6);
    printf("###");

    gotoXY(51, 10);
    setColor(66);
    printf("#");

    gotoXY(52, 10);
    setColor(7);
    printf("#");

    gotoXY(53, 10);
    setColor(0);
    printf("#");

    gotoXY(54, 10);
    setColor(6);
    printf("##");

    gotoXY(56, 10);
    setColor(72);
    printf("#");

    gotoXY(57, 10);
    setColor(240);
    printf("#");

    gotoXY(58, 10);
    setColor(94);
    printf("#");

    gotoXY(59, 10);
    setColor(131);
    printf("#");

    gotoXY(60, 10);
    setColor(130);
    printf("#");

    gotoXY(61, 10);
    setColor(240);
    printf("#");

    gotoXY(62, 10);
    setColor(72);
    printf("##");

    gotoXY(64, 10);
    setColor(240);
    printf("#");

    gotoXY(65, 10);
    setColor(72);
    printf("#");

    gotoXY(66, 10);
    setColor(7);
    printf("#");

    gotoXY(47, 11);
    setColor(7);
    printf("#");

    gotoXY(48, 11);
    setColor(6);
    printf("###");

    gotoXY(51, 11);
    setColor(72);
    printf("#");

    gotoXY(52, 11);
    setColor(0);
    printf("##");

    gotoXY(54, 11);
    setColor(6);
    printf("#");

    gotoXY(55, 11);
    setColor(72);
    printf("##");

    gotoXY(57, 11);
    setColor(240);
    printf("#");

    gotoXY(58, 11);
    setColor(7);
    printf("#");

    gotoXY(59, 11);
    setColor(94);
    printf("#");

    gotoXY(60, 11);
    setColor(131);
    printf("#");

    gotoXY(61, 11);
    setColor(240);
    printf("#");

    gotoXY(62, 11);
    setColor(72);
    printf("##");

    gotoXY(64, 11);
    setColor(240);
    printf("#");

    gotoXY(65, 11);
    setColor(7);
    printf("#");

    gotoXY(48, 12);
    setColor(7);
    printf("#");

    gotoXY(49, 12);
    setColor(6);
    printf("###");

    gotoXY(52, 12);
    setColor(0);
    printf("#");

    gotoXY(53, 12);
    setColor(94);
    printf("#");

    gotoXY(54, 12);
    setColor(72);
    printf("##");

    gotoXY(56, 12);
    setColor(240);
    printf("#");

    gotoXY(57, 12);
    setColor(250);
    printf("#");

    gotoXY(58, 12);
    setColor(7);
    printf("#");

    gotoXY(59, 12);
    setColor(94);
    printf("#");

    gotoXY(60, 12);
    setColor(131);
    printf("#");

    gotoXY(61, 12);
    setColor(130);
    printf("#");

    gotoXY(62, 12);
    setColor(240);
    printf("#");

    gotoXY(63, 12);
    setColor(72);
    printf("#");

    gotoXY(64, 12);
    setColor(7);
    printf("#");

    gotoXY(49, 13);
    setColor(7);
    printf("#");

    gotoXY(50, 13);
    setColor(240);
    printf("#");

    gotoXY(51, 13);
    setColor(72);
    printf("####");

    gotoXY(55, 13);
    setColor(240);
    printf("#");

    gotoXY(56, 13);
    setColor(72);
    printf("#");

    gotoXY(57, 13);
    setColor(240);
    printf("#");

    gotoXY(58, 13);
    setColor(250);
    printf("#");

    gotoXY(59, 13);
    setColor(7);
    printf("#");

    gotoXY(60, 13);
    setColor(94);
    printf("#");

    gotoXY(61, 13);
    setColor(130);
    printf("#");

    gotoXY(62, 13);
    setColor(240);
    printf("#");

    gotoXY(63, 13);
    setColor(72);
    printf("#");

    gotoXY(64, 13);
    setColor(7);
    printf("#");

    gotoXY(49, 14);
    setColor(7);
    printf("#");

    gotoXY(50, 14);
    setColor(72);
    printf("#");

    gotoXY(51, 14);
    setColor(240);
    printf("###");

    gotoXY(54, 14);
    setColor(179);
    printf("#");

    gotoXY(55, 14);
    setColor(228);
    printf("#");

    gotoXY(56, 14);
    setColor(240);
    printf("#");

    gotoXY(57, 14);
    setColor(6);
    printf("#");

    gotoXY(58, 14);
    setColor(240);
    printf("#");

    gotoXY(59, 14);
    setColor(7);
    printf("#");

    gotoXY(60, 14);
    setColor(94);
    printf("##");

    gotoXY(62, 14);
    setColor(240);
    printf("#");

    gotoXY(63, 14);
    setColor(7);
    printf("#");

    gotoXY(50, 15);
    setColor(7);
    printf("##");

    gotoXY(52, 15);
    setColor(228);
    printf("###");

    gotoXY(55, 15);
    setColor(240);
    printf("#");

    gotoXY(56, 15);
    setColor(6);
    printf("###");

    gotoXY(59, 15);
    setColor(240);
    printf("#");

    gotoXY(60, 15);
    setColor(94);
    printf("#");

    gotoXY(61, 15);
    setColor(130);
    printf("#");

    gotoXY(62, 15);
    setColor(7);
    printf("#");

    gotoXY(52, 16);
    setColor(7);
    printf("#");

    gotoXY(53, 16);
    setColor(179);
    printf("##");

    gotoXY(55, 16);
    setColor(240);
    printf("#");

    gotoXY(56, 16);
    setColor(6);
    printf("##");

    gotoXY(58, 16);
    setColor(72);
    printf("#");

    gotoXY(59, 16);
    setColor(240);
    printf("#");

    gotoXY(60, 16);
    setColor(94);
    printf("#");

    gotoXY(61, 16);
    setColor(130);
    printf("#");

    gotoXY(62, 16);
    setColor(7);
    printf("#");

    gotoXY(51, 17);
    setColor(7);
    printf("#");

    gotoXY(52, 17);
    setColor(66);
    printf("#");

    gotoXY(53, 17);
    setColor(240);
    printf("#");

    gotoXY(54, 17);
    setColor(228);
    printf("##");

    gotoXY(56, 17);
    setColor(240);
    printf("#");

    gotoXY(57, 17);
    setColor(72);
    printf("#");

    gotoXY(58, 17);
    setColor(240);
    printf("##");

    gotoXY(60, 17);
    setColor(250);
    printf("#");

    gotoXY(61, 17);
    setColor(7);
    printf("#");

    gotoXY(51, 18);
    setColor(7);
    printf("#");

    gotoXY(52, 18);
    setColor(66);
    printf("##");

    gotoXY(54, 18);
    setColor(7);
    printf("#");

    gotoXY(55, 18);
    setColor(179);
    printf("##");

    gotoXY(57, 18);
    setColor(240);
    printf("##");

    gotoXY(59, 18);
    setColor(72);
    printf("#");

    gotoXY(60, 18);
    setColor(240);
    printf("#");

    gotoXY(61, 18);
    setColor(7);
    printf("#");

    gotoXY(52, 19);
    setColor(7);
    printf("##");

    gotoXY(55, 19);
    setColor(7);
    printf("#");

    gotoXY(56, 19);
    setColor(240);
    printf("#");

    gotoXY(57, 19);
    setColor(6);
    printf("#");

    gotoXY(58, 19);
    setColor(72);
    printf("##");

    gotoXY(60, 19);
    setColor(7);
    printf("#");

    gotoXY(56, 20);
    setColor(7);
    printf("#");

    gotoXY(57, 20);
    setColor(72);
    printf("#");

    gotoXY(58, 20);
    setColor(66);
    printf("#");

    gotoXY(59, 20);
    setColor(72);
    printf("#");

    gotoXY(60, 20);
    setColor(7);
    printf("#");

    gotoXY(57, 21);
    setColor(7);
    printf("###");

    return 0;
}
