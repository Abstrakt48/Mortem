#include "game.h"
#include "orderdef.h"
#include "public/string_t.h"
#include "public/color.h"
#include "engine/sys.h"

#include <stdlib.h>
#include <stdio.h>
#include <tuple>

int GM_OrderInit(void)
{
	// init code here
	return EXIT_SUCCESS;
};

void GM_OrderMain(void)
{
	Sys_Printf("\n********** %s V%s *********\n", STRING(MAKE_STRING(GAME)), STRING(MAKE_STRING(VERSION)));

	Sys_Exit(0);
};