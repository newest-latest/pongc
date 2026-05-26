#include <stdio.h>
#include <raylib.h>

int main (void) {
	InitWindow(1080,1920,"title");
	SetTargetFPS(24);
	int i = 0;
	int x = 40;
	int y = 0;
	int xv = 25;
	int yv = 25;
	while (!WindowShouldClose()) {
		ClearBackground(BLACK);
		BeginDrawing();
		DrawRectangle(x,y,50,50,RAYWHITE);
		if (x<0 || x>1080) xv *= -1;
		if (y<0 || y>1080) yv *= -1;
		x+=xv;
		y+=yv;
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
