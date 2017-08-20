/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static int embedded = 0;
static int minpwlen = 32;
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt = NULL;
static const char *asterisk = "*";
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#bbbbbb", "#222222" },
	[SchemeNormal] = { "#bbbbbb", "#222222" },
	[SchemeSelect] = { "#eeeeee", "#005577" },
	[SchemeDesc]   = { "#bbbbbb", "#222222" }
};
