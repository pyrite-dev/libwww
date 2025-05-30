/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to empty if the keyword does not work.  */
#undef const

/* Define to the type of elements in the array set by `getgroups'.
   Usually this is either `int' or `gid_t'.  */
#undef GETGROUPS_T

/* Define to `int' if <sys/types.h> doesn't define.  */
#undef gid_t

/* Define if you have the strftime function.  */
#undef HAVE_STRFTIME

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
#undef HAVE_SYS_WAIT_H
#ifndef _WIN32
#define HAVE_SYS_WAIT_H
#endif

/* Define if you have the wait3 system call.  */
#undef HAVE_WAIT3

/* Define to `int' if <sys/types.h> doesn't define.  */
#undef mode_t

/* Define if you need to in order for stat and other things to work.  */
#undef _POSIX_SOURCE

/* Define if the `S_IS*' macros in <sys/stat.h> do not work properly.  */
#undef STAT_MACROS_BROKEN

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#undef TIME_WITH_SYS_TIME

/* Define to `int' if <sys/types.h> doesn't define.  */
#undef uid_t

/* Always define this. */
#undef DEBUG

/* Define to enable multithreading code. */
#undef EVENT_LOOP

/* Define to enable direct WAIS access. */
#undef DIRECT_WAIS

/* Define to enable SOCKS firewall-breaching code. */
#undef SOCKS

/* Define this to be the version string. */
#undef VC

/* Define this to be the prefix for cache files. */
#undef CACHE_FILE_PREFIX

/* Define this if it's not typedef'd automatically. */
#undef BOOLEAN
#ifndef _WIN32
#define BOOLEAN char
#endif

/* Define this to be the rlogin program name. */
#undef RLOGIN_PROGRAM

/* Define this to be the telnet program name. */
#undef TELNET_PROGRAM

/* Define this to be the tn3270 program name. */
#undef TN3270_PROGRAM

/* Define this if it isn't in the header files.  */
#undef u_char

/* Define this if it isn't in the header files.  */
#undef u_short

/* Define this if it isn't in the header files.  */
#undef u_long

/* Define if you have the NXGetDefaultValue function.  */
#undef HAVE_NXGETDEFAULTVALUE

/* Define if you have the NXRunAlertPanel function.  */
#undef HAVE_NXRUNALERTPANEL

/* Define if you have the cuserid function.  */
#undef HAVE_CUSERID

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD

/* Define if you have the getdomainname function.  */
#undef HAVE_GETDOMAINNAME

/* Define if you have the getlogin function.  */
#undef HAVE_GETLOGIN

/* Define if you have the getpass function.  */
#undef HAVE_GETPASS

/* Define if you have the getpid function.  */
#undef HAVE_GETPID

/* Define if you have the getwd function.  */
#undef HAVE_GETWD

/* Define if you have the gmtime function.  */
#undef HAVE_GMTIME

/* Define if you have the mktime function.  */
#define HAVE_MKTIME

/* Define if you have the memcpy function.  */
#define HAVE_MEMCPY

/* Define if you have the opendir function.  */
#define HAVE_OPENDIR

/* Define if you have the select function.  */
#undef HAVE_SELECT
#ifndef _WIN32
#define HAVE_SELECT
#endif

/* Define if you have the socket_ioctl function.  */
#undef HAVE_SOCKET_IOCTL

/* Define if you have the strcasecomp function.  */
#undef HAVE_STRCASECOMP

/* Define if you have the strchr function.  */
#define HAVE_STRCHR

/* Define if you have the strerror function.  */
#define HAVE_STRERROR

/* Define if you have the strncasecomp function.  */
#undef HAVE_STRNCASECOMP

/* Define if you have the symlink function.  */
#undef HAVE_SYMLINK

/* Define if you have the unlink function.  */
#undef HAVE_UNLINK

/* Define if you have the vms_errno_string function.  */
#undef HAVE_VMS_ERRNO_STRING

/* Define if you have the socket_errno external.  */
#undef HAVE_SOCKET_ERRNO

/* Define if you have the sys_errlist external.  */
#undef HAVE_SYS_ERRLIST

/* Define if you have the sys_nerr external.  */
#undef HAVE_SYS_NERR

/* Define if you have the <MacSockDefs.h> header file.  */
#undef HAVE_MACSOCKDEFS_H

/* Define if you have the <appkit.h> header file.  */
#undef HAVE_APPKIT_H

/* Define if you have the <appkit/appkit.h> header file.  */
#undef HAVE_APPKIT_APPKIT_H

/* Define if you have the <arpa/inet.h> header file.  */
#undef HAVE_ARPA_INET_H
#ifndef _WIN32
#define HAVE_ARPA_INET_H
#endif

/* Define if you have the <bsdtime.h> header file.  */
#undef HAVE_BSDTIME_H

/* Define if you have the <bsdtypes.h> header file.  */
#undef HAVE_BSDTYPES_H

/* Define if you have the <ctype.h> header file.  */
#define HAVE_CTYPE_H

/* Define if you have the <curses.h> header file.  */
#undef HAVE_CURSES_H

/* Define if you have the <cursesX.h> header file.  */
#undef HAVE_CURSESX_H

/* Define if you have the <dir.h> header file.  */
#undef HAVE_DIR_H

/* Define if you have the <direct.h> header file.  */
#undef HAVE_DIRECT_H
#ifdef _WIN32
#define HAVE_DIRECT_H
#endif

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H

/* Define if you have the <stddef.h> header file.  */
#define HAVE_STDDEF_H

/* Define if you have the <dn.h> header file.  */
#undef HAVE_DN_H

/* Define if you have the <dnetdb.h> header file.  */
#undef HAVE_DNETDB_H

/* Define if you have the <errno.h> header file.  */
#define HAVE_ERRNO_H

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H

/* Define if you have the <grp.h> header file.  */
#undef HAVE_GRP_H

/* Define if you have the <in.h> header file.  */
#undef HAVE_IN_H

/* Define if you have the <inet.h> header file.  */
#undef HAVE_INET_H

/* Define if you have the <libc.h> header file.  */
#undef HAVE_LIBC_H

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H

/* Define if you have the <malloc.h> header file.  */
#undef HAVE_MALLOC_H

/* Define if you have the <manifest.h> header file.  */
#undef HAVE_MANIFEST_H

/* Define if you have the <memory.h> header file.  */
#undef HAVE_MEMORY_H

/* Define if you have the <ndir.h> header file.  */
#undef HAVE_NDIR_H

/* Define if you have the <net/errno.h> header file.  */
#undef HAVE_NET_ERRNO_H

/* Define if you have the <netdb.h> header file.  */
#undef HAVE_NETDB_H
#ifndef _WIN32
#define HAVE_NETDB_H
#endif

/* Define if you have the <netinet/in.h> header file.  */
#undef HAVE_NETINET_IN_H
#ifndef _WIN32
#define HAVE_NETINET_IN_H
#endif

/* Define if you have the <pwd.h> header file.  */
#undef HAVE_PWD_H

/* Define if you have the <resource.h> header file.  */
#undef HAVE_RESOURCE_H

/* Define if you have the <select.h> header file.  */
#undef HAVE_SELECT_H

/* Define if you have the <socket.ext.h> header file.  */
#undef HAVE_SOCKET_EXT_H

/* Define if you have the <socket.h> header file.  */
#undef HAVE_SOCKET_H

/* Define if you have the <stat.h> header file.  */
#undef HAVE_STAT_H

/* Define if you have the <stdefs.h> header file.  */
#undef HAVE_STDEFS_H

/* Define if you have the <stdio.h> header file.  */
#define HAVE_STDIO_H

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H

/* Define if you have the <strings.h> header file.  */
#undef HAVE_STRINGS_H

/* Define if you have the <sys/dir.h> header file.  */
#undef HAVE_SYS_DIR_H

/* Define if you have the <sys/errno.h> header file.  */
#undef HAVE_SYS_ERRNO_H

/* Define if you have the <sys/fcntl.h> header file.  */
#undef HAVE_SYS_FCNTL_H

/* Define if you have the <sys/file.h> header file.  */
#undef HAVE_SYS_FILE_H

/* Define if you have the <sys/ioctl.h> header file.  */
#undef HAVE_SYS_IOCTL_H

/* Define if you have the <sys/ipc.h> header file.  */
#undef HAVE_SYS_IPC_H

/* Define if you have the <sys/limits.h> header file.  */
#undef HAVE_SYS_LIMITS_H

/* Define if you have the <sys/ndir.h> header file.  */
#undef HAVE_SYS_NDIR_H

/* Define if you have the <sys/resource.h> header file.  */
#undef HAVE_SYS_RESOURCE_H

/* Define if you have the <sys/select.h> header file.  */
#undef HAVE_SYS_SELECT_H
#ifndef _WIN32
#define HAVE_SYS_SELECT_H
#endif

/* Define if you have the <sys/socket.h> header file.  */
#undef HAVE_SYS_SOCKET_H
#ifndef _WIN32
#define HAVE_SYS_SOCKET_H
#endif

/* Define if you have the <sys/stat.h> header file.  */
#define HAVE_SYS_STAT_H

/* Define if you have the <sys/time.h> header file.  */
#undef HAVE_SYS_TIME_H

/* Define if you have the <sys/types.h> header file.  */
#define HAVE_SYS_TYPES_H

/* Define if you have the <sys/unistd.h> header file.  */
#undef HAVE_SYS_UNISTD_H

/* Define if you have the <syslog.h> header file.  */
#undef HAVE_SYSLOG_H

/* Define if you have the <time.h> header file.  */
#define HAVE_TIME_H

/* Define if you have the <types.h> header file.  */
#undef HAVE_TYPES_H

/* Define if you have the <unistd.h> header file.  */
#undef HAVE_UNISTD_H
#ifndef _WIN32
#define HAVE_UNISTD_H
#endif

/* Define if you have the <unixlib.h> header file.  */
#undef HAVE_UNIXLIB_H

/* Define if you have the <winsock.h> header file.  */
#undef HAVE_WINSOCK_H
#ifdef _WIN32
#define HAVE_WINSOCK_H
#endif

/* Define if you have the inet library (-linet).  */
#undef HAVE_LIBINET

/* Define if you have the nsl library (-lnsl).  */
#undef HAVE_LIBNSL

/* Define if you have the socket library (-lsocket).  */
#undef HAVE_LIBSOCKET

/* Define this if it is not typedef'd automatically. */
#undef fd_set

/* Define this to be blank if your compiler doesn't grok 'volatile'. */
#undef volatile

/* Define this to be blank if your compiler doesn't grok 'noshare'. */
#undef noshare

/* Define this if you have the external variable 'socket_errno'. */
#undef HAVE_SOCKET_ERRNO

/* Define this if you have the external variable 'sys_errlist'. */
#undef HAVE_SYS_ERRLIST

/* Define this if you have the external variable 'sys_nerr'. */
#undef HAVE_SYS_NERR

/* Define this if you have the external variable 'vaxc$errno'. */
#undef HAVE_VAXC_ERRNO

/* Define this if you have the uxc$inetdef.h header file. */
#undef HAVE_UXC_INETDEF_H

/* Define this if directory entries have inodes. */
#undef HAVE_DIRENT_INO

/* Define this if sys_errlist must be declared (if it exists). */
#undef NEED_SYS_ERRLIST_DECLARED

/* Define this if sys_nerr must be declared (if it exists). */
#undef NEED_SYS_NERR_DECLARED

#define HT_NO_NAGLE
#define HAVE_SETSOCKOPT
#define HT_MD5
