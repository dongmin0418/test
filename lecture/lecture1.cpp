#include <stdio.h>
#include <conio.h> // Windows ȯ�濡�� getch ����� ���� �������
#include <stdlib.h>
#include <time.h>

// �ʱ�ȭ �Լ�
void Initialize() {
    printf("���� �ʱ�ȭ ��...\n");
}

// ������ �Լ�
void Render() {
    printf("ȭ���� ������ ��...\n");

}

// ������Ʈ �Լ� (�Է� ó�� ����)
void Update() {
    if (_kbhit()) { // Ű�� ���ȴ��� Ȯ��
        char key = _getch(); // Ű �Է��� ����
        printf("�Էµ� Ű: %c\n", key);

        // Ű�� ���� ���� �߰� ����
        if (key == 'q') {
            printf("���� ����...\n");
            exit(0); // 'q'�� �Է��ϸ� ���� ����
        }
    }
}

// ���� ���� ����
void GameLoop() {
    Initialize();

    clock_t start_time = clock(); // ���� �ð��� ���
    while (1) {
        Update(); // Update�� ��� ȣ���Ͽ� Ű �Է��� ó��
        // ���� �ð��� ���� �ð��� ���̸� Ȯ���Ͽ� 1�ʸ��� ������
        if ((clock() - start_time) >= CLOCKS_PER_SEC) { // CLOCKS_PER_SEC�� 1��
            Render();
            start_time = clock(); // �ð��� �ʱ�ȭ�Ͽ� ���� 1�ʸ� ��ٸ�
        }



    }
}

int main() {
    GameLoop();
    return 0;
}