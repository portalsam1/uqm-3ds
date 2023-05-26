/* This file contains some compile-time configuration options.
 */

#if defined(__N3DS__)
	/* Use this one and this one alone or I will appear in your floorboards. */
	#include "config_3ds.h"
#else
	/* If we're compiling in unix (you shouldn't >:()), use config_unix.h, generated from
	 * src/config_unix.h.in by build.sh. */
	#include "config_unix.h"
#endif