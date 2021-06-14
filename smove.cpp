#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
	COORD Pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main() {
	system("mode con: cols=60 lines=25");
	int x=10, y=5;
	while(1) {
		if(kbhit()) {
			int key = getch();
			switch(key) {
				case 119: 
					if(y > 0) {
						y-=1; 
					}
					break;
				
				case 97:
					if(x > 5) {
					 	x-=2; 	
					}
					break;
					
				case 115: 
					if(y < 24) {
						y+=1; 
					}
					break;
					
				case 100: 
					if(x < 48) {
						x+=2; 	
					}
					break;
			}
		}
		
		if(x == 48 && y == 24) {
			system("cls");
			gotoxy(0, 0);
			printf("Success!");
			break;
		}
		
		system("cls");
		gotoxy(x,y);
		
		printf("бс");
		
		gotoxy(0, 0);
		printf("%d, %d", x, y);
		
		gotoxy(48, 24);
		printf("Exit");
		
		Sleep(100);
	}
	
	return 0;
}
