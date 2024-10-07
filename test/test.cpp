#include <stdio.h>
#include <windows.h> // �����쿡�� ����ϴ� ���̺귯��; Ŀ�� ��ġ�� �ٲٱ� ���� windows.h�� ���;
#include <conio.h> // Windows ȯ�濡�� getch ����� ���� �������
#include <stdlib.h>
#include <time.h>

// Ư�� ��ǥ�� Ŀ���� �ű���
void gotoXY(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(hConsole, coord);
}

// ���� ���� �Լ�
void setColor(int colorCode) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
}

// ���� �ʱ�ȭ �Լ�
void Initialize() {
    printf("���� �ʱ�ȭ ��...\n");
}

// ������ �Լ�
void Render(int x, int y) {
    system("cls"); // ȭ���� �����
    gotoXY(x, y);
    printf("   /\\_/\\  \n");

    gotoXY(x, y + 1);
    printf("  ( o o ) \n");

    gotoXY(x, y + 2);
    printf("   > ^ <  \n");

    gotoXY(x, y + 4); // Ŀ�� ��ġ ���� (����)
    printf("���� ��ġ: (%d, %d)\n", x, y); // ���� ��ġ ǥ��
}

// ������Ʈ �Լ� (�Է� ó�� ����)
void Update(int* x, int* y) {
    if (_kbhit()) { // Ű�� ���ȴ��� Ȯ��
        char key = _getch(); // Ű �Է��� ����

        // ����Ű ó��
        switch (key) {
        case 72: // ���� ȭ��ǥ
            (*y)--;
            break;
        case 80: // �Ʒ��� ȭ��ǥ
            (*y)++;
            break;
        case 75: // ���� ȭ��ǥ
            (*x)--;
            break;
        case 77: // ������ ȭ��ǥ
            (*x)++;
            break;
        case 'q': // 'q'�� �Է��ϸ� ���� ����
            printf("���� ����...\n");
            exit(0);
        }
    }
}

// ���� ���� ����
void GameLoop(int* x, int* y) {
    Initialize();

    clock_t start_time = clock(); // ���� �ð��� ���
    while (1) {
        Update(x, y); // Update�� ��� ȣ���Ͽ� Ű �Է��� ó��

        // ���� �ð��� ���� �ð��� ���̸� Ȯ���Ͽ� 1�ʸ��� ������
        if ((clock() - start_time) >= CLOCKS_PER_SEC) { // CLOCKS_PER_SEC�� 1��
            Render(*x, *y);
            start_time = clock(); // �ð��� �ʱ�ȭ�Ͽ� ���� 1�ʸ� ��ٸ�
        }
    }
}

// ���� �Լ�
int main() {
    int x = 50; // �ʱ� x ��ǥ
    int y = 5;  // �ʱ� y ��ǥ

    // ���� ���� ����
    GameLoop(&x, &y);

    return 0;
}
