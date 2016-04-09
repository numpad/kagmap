#include <stdio.h>
#include <stdlib.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "QW/qw.h"

void render_background(qw_image *img) {
	qw_fill(165, 189, 200);
	qw_color(50, 82, 80, 255);
	int ys = (qw_height / 4) * 3;
	qw_fillrect(0, ys, qw_width, qw_height - ys);
	qw_drawimage(*img);
}

int main(int argc, char *argv[]) {
	
	qw_screen(960, 680, 0, "King Arthur's Gold - Map Editor");
	
	qw_image background = qw_loadimage("res/img/background_trees.png");

	while (qw_running()) {
		render_background(&background);

		qw_redraw();
	}

	qw_quit();

	return 0;
}
