/*	$NetBSD: common.h,v 1.1 2007/02/18 22:13:42 rmind Exp $	*/
/*	$OpenBSD: common.h,v 1.2 2006/05/25 03:20:32 ray Exp $	*/

/*
 * Written by Raymond Lai <ray@cyth.net>.
 * Public domain.
 */

__dead void cleanup(const char *);

long long
strtonum(const char *numstr, long long minval, long long maxval,
	const char **errstrp);
