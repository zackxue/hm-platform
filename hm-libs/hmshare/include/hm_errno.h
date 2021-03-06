#ifndef __HM_ERRNO_H__
#define __HM_ERRNO_H__

#include <errno.h>

#define EBASE           255         /* Base number of Hm errno */
#define E_UNKNOWN       EBASE

#define E_INVAL         EINVAL      /* Invalid argument */
#define E_NOMEM         ENOMEM      /* Out of memory */

/* This can NOT be changed! */
#define E_AGAIN         EAGAIN      /* Try again */

#define E_SLOTNCONN     (EBASE + 1)     /* Slot hasn't connected to peer */
#define E_SLOTCONND     (EBASE + 2)     /* Slot has already connected */
#define E_SLOTNREADY    (EBASE + 3)     /* Slot is not ready */
#define E_SLOTEXIST     (EBASE + 4)     /* Slot already exists */
#define E_SLOTNEXIST    (EBASE + 5)     /* No slot exist */
#define E_OWNER         (EBASE + 6)     /* Object has no owner */
#define E_NOTSUPPORT    (EBASE + 7)     /* Operation has not been supported yet */
#define E_NOMODIO       (EBASE + 8)     /* No mod-io component exists */
#define E_NOMSGENG      (EBASE + 9)     /* No message engine exists */
#define E_NOTHPOOL      (EBASE + 10)    /* No thread pool exists */
#define E_NONETOBJ      (EBASE + 11)    /* No net object exists */
#define E_NOPROTO       (EBASE + 12)    /* No protocol entity exists */
#define E_STRINGLEN     (EBASE + 13)    /* String too long */
#define E_PACKET        (EBASE + 14)    /* Packet format error */
#define E_BADFD         (EBASE + 15)    /* Bad descriptor */
//#define E_NEWWATCH      (EBASE + 16)    /* Create new watch failed */
#define E_NOSUCHIO      (EBASE + 17)    /* No such netio object in list */
#define E_MSGTBLFULL    (EBASE + 18)    /* Msg table is full */
#define E_MSGEXIST      (EBASE + 19)    /* Msg entry already exists */
#define E_GUESTIDEXIST  (EBASE + 20)    /* Guest ID already in use */
#define E_TIMER         (EBASE + 21)    /* Set timer failed */
#define E_TIMEREEXIST   (EBASE + 22)    /* Timer engine already exists */
#define E_NEWIOEXIST    (EBASE + 23)    /* New netio already exists in list */
#define E_NOSUCHGUEST   (EBASE + 24)    /* No such guest found */
#define E_NEWMUTEX      (EBASE + 25)    /* Alloc new mutex failed */
#define E_INPROGRESS    (EBASE + 26)    /* Operation now in progress */
#define E_GUESTIOCFLT   (EBASE + 27)    /* Guest ID conflict */
#define E_GUESTREOL     (EBASE + 28)    /* Guest register again without connection reset */
#define E_USRGRPEXIST   (EBASE + 29)    /* User group already exist */
#define E_USREXIST      (EBASE + 30)    /* User already exist */
#define E_TIMEOUT       (EBASE + 31)    /* Operation timeout */
#define E_USRINFO       (EBASE + 32)    /* User information error */
#define E_UGRPINFO      (EBASE + 33)    /* User group informatoin error */
#define E_BUFFSIZE      (EBASE + 34)    /* Buffer is not enough */
#define E_GETDBCONN     (EBASE + 35)    /* Get database connection error*/
#define E_DOQUERY       (EBASE + 36)    /* Do query database error */
#define E_NODBENT       (EBASE + 37)    /* No such record entry in database */
#define E_NOFIELD       (EBASE + 38)    /* No field */
#define E_QUERYTYPE     (EBASE + 39)    /* query type is wrong */
#define E_NOADMIN       (EBASE + 40)    /* No admin exists */
#define E_PASSWD        (EBASE + 41)    /* Password wrong */
#define E_NEWNODE       (EBASE + 42)    /* create xml node error*/
#define E_NOMSGINFO     (EBASE + 43)    /* msg info no exist*/
#define E_NAMEEXIST     (EBASE + 44)    /* name already exist */
#define E_STRINGFORMAT  (EBASE + 45)    /* string format is wrong*/
#define E_NOPERMISSION  (EBASE + 46)    /* user group has not the permission*/
#define E_ROOTAREA      (EBASE + 47)    /* area is root area*/

//#define E_ADMINLOGIN    (EBASE + 44)  /*admin has logined*/

#define E_NETIODIE      (EBASE + 50)    /* Net io object has already been killed */
#define E_WATCHDIE      (EBASE + 51)    /* Watch has already been killed */
#define E_NETNOREADER   (EBASE + 52)    /* Net object has no read callback function */
#define E_NETDIE        (EBASE + 53)    /* Net object has already been killed */
#define E_PACKET2LONG   (EBASE + 54)    /* Packet too long, bigger than snd buffer */
#define E_SNDBUFFULL    (EBASE + 55)    /* Net watch send buffer is full */
#define E_WATCH         (EBASE + 56)    /* Create watch failed */
#define E_NONETIO       (EBASE + 57)    /* No such netio object found in net io_list */
#define E_PRONOTIMPL    (EBASE + 58)    /* Net/packet proto has not been completed implemented */
#define E_CONNTIMEOUT   (EBASE + 59)    /* Connection timeout, heart does not beat */
#define E_CMDLEN2LONG   (EBASE + 60)    /* command len is too long*/
#define E_XML2LONG      (EBASE + 61)    /* xml created is too long, buffer overflow */
#define E_NOXMLFUN      (EBASE + 62)    /* no xml parse or create functions */
#define E_CREATEDOC     (EBASE + 63)    /* create xml doc error */
#define E_VERSION       (EBASE + 64)    /* version too low or too high*/
#define E_AVMAXNUM      (EBASE + 65)    /* exceed av max count */
#define E_EXPIRED       (EBASE + 66)    /* Authorazaion period expired */
#define E_DSMAXNUM      (EBASE + 67)    /* exceed ds max count */
#define E_AIMAXNUM      (EBASE + 68)    /* exceed ai max count */
#define E_AOMAXNUM      (EBASE + 69)    /* exceed ao max count */
#define E_NOWDD         (EBASE + 70)    /* watch dog no exist */
#define E_IPSANMAXNUM   (EBASE + 71)    /* exceed ipsan max count */
#define E_NOISCSI       (EBASE + 72)    /* no support iscsi protocal */
#define E_DISKNOPREPARE (EBASE + 73)    /* disk no prepare */
#define E_NOCSS         (EBASE + 74)    /* can't find css */
#define E_NOCSSINFO     (EBASE + 75)    /* can't find css info*/
#define E_CSSNOINLINE   (EBASE + 76)    /* css is not inline */
#define E_CMSBUSY       (EBASE + 77)    /* cms busy, maybe cms restart run, or css is getting large data */
#define E_CSSBUSY       (EBASE + 78)    /* css busy, css multree has not created */
#define E_NETWORKFAULT  (EBASE + 79)    /* css can't connect to cms */
#define E_NOIDENTIFYCODE (EBASE + 80)   /* no such identifying code */
#define E_NETMASKERR    (EBASE + 81)    /* netmask error */
#define E_IDENTIFYCODEZERO (EBASE + 82) /* count of identifying code left is zero */
#define E_NOSUCHDEVICE  (EBASE + 83)    /* no such device, maybe deleted */
#define E_DBSLOCK       (EBASE + 84)    /* dbs forbid writing */



/* PD-MDS */
#define E_RTSPURL       (EBASE + 101)   /* RTSP URL format error */
#define E_EXISTDEV      (EBASE + 102)   /* Device already exists */
#define E_OUTOFPORTS    (EBASE + 103)   /* System out of ports */
#define E_DKILLED       (EBASE + 104)   /* Device already been killed */
#define E_MKILLED       (EBASE + 105)   /* Media has alread been killed */
#define E_CKILLED       (EBASE + 106)
#define E_NOPENDING     (EBASE + 107)   /* No need to pending rtsp request */
#define E_NOSESSION     (EBASE + 108)   /* No such rtsp session found */


#if 0

#define EPERM        1  /* Operation not permitted */
#define ENOENT       2  /* No such file or directory */
#define ESRCH        3  /* No such process */
#define EINTR        4  /* Interrupted system call */
#define EIO          5  /* I/O error */
#define ENXIO        6  /* No such device or address */
#define E2BIG        7  /* Argument list too long */
#define ENOEXEC      8  /* Exec format error */
#define EBADF        9  /* Bad file number */
#define ECHILD      10  /* No child processes */
#define EAGAIN      11  /* Try again */
#define ENOMEM      12  /* Out of memory */
#define EACCES      13  /* Permission denied */
#define EFAULT      14  /* Bad address */
#define ENOTBLK     15  /* Block device required */
#define EBUSY       16  /* Device or resource busy */
#define EEXIST      17  /* File exists */
#define EXDEV       18  /* Cross-device link */
#define ENODEV      19  /* No such device */
#define ENOTDIR     20  /* Not a directory */
#define EISDIR      21  /* Is a directory */
#define EINVAL      22  /* Invalid argument */
#define ENFILE      23  /* File table overflow */
#define EMFILE      24  /* Too many open files */
#define ENOTTY      25  /* Not a typewriter */
#define ETXTBSY     26  /* Text file busy */
#define EFBIG       27  /* File too large */
#define ENOSPC      28  /* No space left on device */
#define ESPIPE      29  /* Illegal seek */
#define EROFS       30  /* Read-only file system */
#define EMLINK      31  /* Too many links */
#define EPIPE       32  /* Broken pipe */
#define EDOM        33  /* Math argument out of domain of func */
#define ERANGE      34  /* Math result not representable */

#define EDEADLK     35  /* Resource deadlock would occur */
#define ENAMETOOLONG    36  /* File name too long */
#define ENOLCK      37  /* No record locks available */
#define ENOSYS      38  /* Function not implemented */
#define ENOTEMPTY   39  /* Directory not empty */
#define ELOOP       40  /* Too many symbolic links encountered */
#define EWOULDBLOCK EAGAIN  /* Operation would block */
#define ENOMSG      42  /* No message of desired type */
#define EIDRM       43  /* Identifier removed */
#define ECHRNG      44  /* Channel number out of range */
#define EL2NSYNC    45  /* Level 2 not synchronized */
#define EL3HLT      46  /* Level 3 halted */
#define EL3RST      47  /* Level 3 reset */
#define ELNRNG      48  /* Link number out of range */
#define EUNATCH     49  /* Protocol driver not attached */
#define ENOCSI      50  /* No CSI structure available */
#define EL2HLT      51  /* Level 2 halted */
#define EBADE       52  /* Invalid exchange */
#define EBADR       53  /* Invalid request descriptor */
#define EXFULL      54  /* Exchange full */
#define ENOANO      55  /* No anode */
#define EBADRQC     56  /* Invalid request code */
#define EBADSLT     57  /* Invalid slot */

#define EDEADLOCK   EDEADLK

#define EBFONT      59  /* Bad font file format */
#define ENOSTR      60  /* Device not a stream */
#define ENODATA     61  /* No data available */
#define ETIME       62  /* Timer expired */
#define ENOSR       63  /* Out of streams resources */
#define ENONET      64  /* Machine is not on the network */
#define ENOPKG      65  /* Package not installed */
#define EREMOTE     66  /* Object is remote */
#define ENOLINK     67  /* Link has been severed */
#define EADV        68  /* Advertise error */
#define ESRMNT      69  /* Srmount error */
#define ECOMM       70  /* Communication error on send */
#define EPROTO      71  /* Protocol error */
#define EMULTIHOP   72  /* Multihop attempted */
#define EDOTDOT     73  /* RFS specific error */
#define EBADMSG     74  /* Not a data message */
#define EOVERFLOW   75  /* Value too large for defined data type */
#define ENOTUNIQ    76  /* Name not unique on network */
#define EBADFD      77  /* File descriptor in bad state */
#define EREMCHG     78  /* Remote address changed */
#define ELIBACC     79  /* Can not access a needed shared library */
#define ELIBBAD     80  /* Accessing a corrupted shared library */
#define ELIBSCN     81  /* .lib section in a.out corrupted */
#define ELIBMAX     82  /* Attempting to link in too many shared libraries */
#define ELIBEXEC    83  /* Cannot exec a shared library directly */
#define EILSEQ      84  /* Illegal byte sequence */
#define ERESTART    85  /* Interrupted system call should be restarted */
#define ESTRPIPE    86  /* Streams pipe error */
#define EUSERS      87  /* Too many users */
#define ENOTSOCK    88  /* Socket operation on non-socket */
#define EDESTADDRREQ    89  /* Destination address required */
#define EMSGSIZE    90  /* Message too long */
#define EPROTOTYPE  91  /* Protocol wrong type for socket */
#define ENOPROTOOPT 92  /* Protocol not available */
#define EPROTONOSUPPORT 93  /* Protocol not supported */
#define ESOCKTNOSUPPORT 94  /* Socket type not supported */
#define EOPNOTSUPP  95  /* Operation not supported on transport endpoint */
#define EPFNOSUPPORT    96  /* Protocol family not supported */
#define EAFNOSUPPORT    97  /* Address family not supported by protocol */
#define EADDRINUSE  98  /* Address already in use */
#define EADDRNOTAVAIL   99  /* Cannot assign requested address */
#define ENETDOWN    100 /* Network is down */
#define ENETUNREACH 101 /* Network is unreachable */
#define ENETRESET   102 /* Network dropped connection because of reset */
#define ECONNABORTED    103 /* Software caused connection abort */
#define ECONNRESET  104 /* Connection reset by peer */
#define ENOBUFS     105 /* No buffer space available */
#define EISCONN     106 /* Transport endpoint is already connected */
#define ENOTCONN    107 /* Transport endpoint is not connected */
#define ESHUTDOWN   108 /* Cannot send after transport endpoint shutdown */
#define ETOOMANYREFS    109 /* Too many references: cannot splice */
#define ETIMEDOUT   110 /* Connection timed out */
#define ECONNREFUSED    111 /* Connection refused */
#define EHOSTDOWN   112 /* Host is down */
#define EHOSTUNREACH    113 /* No route to host */
#define EALREADY    114 /* Operation already in progress */
#define EINPROGRESS 115 /* Operation now in progress */
#define ESTALE      116 /* Stale NFS file handle */
#define EUCLEAN     117 /* Structure needs cleaning */
#define ENOTNAM     118 /* Not a XENIX named type file */
#define ENAVAIL     119 /* No XENIX semaphores available */
#define EISNAM      120 /* Is a named type file */
#define EREMOTEIO   121 /* Remote I/O error */
#define EDQUOT      122 /* Quota exceeded */

#define ENOMEDIUM   123 /* No medium found */
#define EMEDIUMTYPE 124 /* Wrong medium type */
#define ECANCELED   125 /* Operation Canceled */
#define ENOKEY      126 /* Required key not available */
#define EKEYEXPIRED 127 /* Key has expired */
#define EKEYREVOKED 128 /* Key has been revoked */
#define EKEYREJECTED    129 /* Key was rejected by service */

/* for robust mutexes */
#define EOWNERDEAD  130 /* Owner died */
#define ENOTRECOVERABLE 131 /* State not recoverable */

#define ERFKILL     132 /* Operation not possible due to RF-kill */

#endif  //if 0

#define Err(err_no)	strerror(-(err_no))

#endif  //__HM_ERRNO_H__
