#include <stdio.h>
#include <raylib.h>
#include <stdlib.h>
int main (void) {
	InitWindow(1920,1080,"title");
	SetTargetFPS(24);
	int i = 0;
	int x = 960;
	int y = 540;
	int player1 = 540;
	int player2 = 540;
	int xv = 20;
	int yv = 20;
	int scorel = 0;
	int scorey = 0;
	char score1[8];
	char score2[8];
	while (!WindowShouldClose()) {
		sprintf(score1, "%d", scorel);
		sprintf(score2, "%d", scorey);

		if (IsKeyDown(KEY_DOWN) && player2 < 880) {
			player2 += 20;}

		if (IsKeyDown(KEY_UP) && player2 > 0) {
			player2 -= 20;}
		if (IsKeyDown(KEY_S) && player1 < 880) {
			player1 += 20;}

		if (IsKeyDown(KEY_W) && player1 > 0) {
			player1 -= 20;}
		ClearBackground(BLACK);
		BeginDrawing();
		DrawRectangle(1800,player2,20,200,RAYWHITE);
		DrawRectangle(x,y,30,30,RAYWHITE);
		DrawRectangle(180,player1,20,200,RAYWHITE);
		DrawText(score2, 500, 180, 48, RAYWHITE);
		DrawText(score1, 1420, 180, 48, RAYWHITE);
		EndDrawing();
		if (x<0) {
			x = 960;
			y = 540;
			scorel++;
		}
		if (x > 1920) {
			x = 960;
			y = 540;
			scorey++;}
			
		if (y<0 || y>1080) yv *= -1;
		x+=xv;
		y+=yv;
		if (x == 1800 && abs(player2 + 100 - y) < 100) {
			xv *= -1;}
		if (x == 180 && abs(player1 + 100 - y) < 100) {
			xv *= -1;}
		
	}
	CloseWindow();

	return 0;
}
