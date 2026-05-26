#include <stdio.h>
#include <raylib.h>

int main (void) {
	InitWindow(1920,1080,"title");
	SetTargetFPS(24);
	int i = 0;
	int x = 40;
	int y = 0;
	int player1 = 540;
	int player2 = 540;
	int xv = 25;
	int yv = 25;
	int scorel = 0;
	int scorey = 0;
	while (!WindowShouldClose()) {
		if (IsKeyPressed(103) && player2 < 1080) {
			player2 += 10;}

		if (IsKeyPressed(103) && player2 > 0) {
			player2 -= 10;}
		ClearBackground(BLACK);
		BeginDrawing();
		DrawRectangle(1800,player2,20,200,RAYWHITE);
		DrawRectangle(x,y,30,30,RAYWHITE);
		if (x<0 || x>1920) xv *= -1;
		if (y<0 || y>1080) yv *= -1;
		x+=xv;
		y+=yv;
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
