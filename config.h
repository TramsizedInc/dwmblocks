//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	//{"",	"sb-tasks",	10,	26},
	//{"",	"sb-music",	0,	11},
	{"",	"zene-bar",	1,	11},
	{"",	"sb-pacpackages",	300,	8},
	{"",	"ip_bar",		9999990,	6},
// b 	{"",	"ipv6_bar",		9999990,	22},
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰",				9000,	21}, */
	{"🌍",	"pubip_bar",	40,	7},
	{"",	"sb-memory",	10,	14},
	{"",	"cpu_bar",  	1,	23},
//	{"",	"sb-cpubars",	1,	21},
	{"🌡",	"cputemp_bar",	10,	18},
//	{"",	"sb-moonphase",	18000,	17},
//	{"",	"sb-forecast",	18000,	5},
	{"",	"weather_bar",	18000,	5},
//	{"",	"sb-internet",	5,	4},
	//{"",	"sb-mailbox",	180,	12},
	{"",	"sb-nettraf",	1,	16},
	{"",	"vol_bar",	10,	10},
	//{"",	"sb-battery",	5,	3},
	{"",	"clock_bar",	1,1},
	//{"",	"sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
