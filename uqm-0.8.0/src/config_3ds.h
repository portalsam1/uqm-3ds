/* Hopefully the 3DS supports all the bullshit I just vomited into this file. */

#ifndef CONFIG_3DS_H_
#define CONFIG_3DS_H_

/* Don't actually know if SD card file paths work like this, taking a wild guess. */

/* Directory where the UQM game data is located */
#define CONTENTDIR "3ds/uqm/content"

/* Directory where game data will be stored */
#define USERDIR "3ds/uqm/userdata"

/* Directory where config files will be stored */
#define CONFIGDIR USERDIR

/* Directory where supermelee teams will be stored */
#define MELEEDIR "3ds/uqm/userdata/teams/"

/* Directory where save games will be stored */
#define SAVEDIR "3ds/uqm/userdata/save/"

/* 3DS is a little bitch boy that doesnt have a direct libvorbis >:3 */
#define OVCODEC_TREMOR

/* Defined if words are stored with the most significant byte first */
/* Spoiler alert they fucking aren't >:3 */
#undef WORDS_BIGENDIAN

/* Defined if your system has readdir_r of its own */
#define HAVE_READDIR_R

/* Defined if your system has setenv of its own */
#define HAVE_SETENV

/* Defined if your system has strupr of its own */
#define HAVE_STRUP

/* Defined if your system has strcasecmp of its own */
#define HAVE_STRCASECMP_UQM
		// Not using "HAVE_STRCASECMP" as that conflicts with SDL.

/* Defined if your system has stricmp of its own */
#undef HAVE_STRICMP

/* Defined if your system has getopt_long */
#define HAVE_GETOPT_LONG

/* Defined if your system has iswgraph of its own*/
#define HAVE_ISWGRAPH

/* Defined if your system has wchar_t of its own */
#define HAVE_WCHAR_T

/* Defined if your system has wint_t of its own */
#define HAVE_WINT_T

/* Defined if your system has _Bool of its own */
#define HAVE__BOOL

#endif  /* CONFIG_UNIX_H_ */