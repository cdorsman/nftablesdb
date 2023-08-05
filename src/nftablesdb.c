#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>

static const struct option options[] = {
	{ .name = "help",	.has_arg = 0,	.val = 'h' },
	{ .name = "log",	.has_arg = 1,	.val = 'l' },
	{ .name = "log-output",	.has_arg = 1,	.val = 'L' },
	{ .name = "config",	.has_arg = 1,	.val = 'c' },
	{ .name = "key",	.has_arg = 1,	.val = 'k' },
	{ .name = "exit",	.has_arg = 0,	.val = 'e' },
	{ .name = "daemon",	.has_arg = 0,	.val = 'd' },
	{ .name = "ipv6",	.has_arg = 0,	.val = '6' },
	{ .name = "host",	.has_arg = 1,	.val = 'H' },
	{ .name = "port",	.has_arg = 1,	.val = 'P' },
	{ .name = "serial",	.has_arg = 0,	.val = 'S' },
	{ .name = "masquerade-mark",	.has_arg = 1,	.val = 'm' },
	{ NULL },
};


int main() {

    return 0;
}
