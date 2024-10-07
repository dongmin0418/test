#include <stdio.h>
#include <windows.h> // 윈도우에서 사용하는 라이브러리; 커서 위치를 바꾸기 위해 windows.h를 사용;
#include <conio.h> // Windows 환경에서 getch 사용을 위한 헤더파일
#include <stdlib.h>
#include <time.h>

// 특정 좌표로 커서를 옮기자
void gotoXY(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(hConsole, coord);
}

// 색상 설정 함수
void setColor(int colorCode) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
}

// 게임 초기화 함수
void Initialize() {
    printf("게임 초기화 중...\n");
}

// 렌더링 함수
void Render(int x, int y) {
    system("cls"); // 화면을 지우기
    gotoXY(x, y);
    printf("   /\\_/\\  \n");

    gotoXY(x, y + 1);
    printf("  ( o o ) \n");

    gotoXY(x, y + 2);
    printf("   > ^ <  \n");

    gotoXY(x, y + 4); // 커서 위치 조정 (여백)
    printf("현재 위치: (%d, %d)\n", x, y); // 현재 위치 표시
}

// 업데이트 함수 (입력 처리 포함)
void Update(int* x, int* y) {
    if (_kbhit()) { // 키가 눌렸는지 확인
        char key = _getch(); // 키 입력을 받음

        // 방향키 처리
        switch (key) {
        case 72: // 위쪽 화살표
            (*y)--;
            break;
        case 80: // 아래쪽 화살표
            (*y)++;
            break;
        case 75: // 왼쪽 화살표
            (*x)--;
            break;
        case 77: // 오른쪽 화살표
            (*x)++;
            break;
        case 'q': // 'q'를 입력하면 게임 종료
            printf("게임 종료...\n");
            exit(0);
        }
    }
}

// 메인 게임 루프
void GameLoop(int* x, int* y) {
    Initialize();

    clock_t start_time = clock(); // 현재 시간을 기록
    while (1) {
        Update(x, y); // Update는 계속 호출하여 키 입력을 처리

        // 현재 시간과 시작 시간의 차이를 확인하여 1초마다 렌더링
        if ((clock() - start_time) >= CLOCKS_PER_SEC) { // CLOCKS_PER_SEC는 1초
            Render(*x, *y);
            start_time = clock(); // 시간을 초기화하여 다음 1초를 기다림
        }
    }
}

// 메인 함수
int main() {
    int x = 50; // 초기 x 좌표
    int y = 5;  // 초기 y 좌표

    // 게임 루프 시작
    GameLoop(&x, &y);

    return 0;
}
