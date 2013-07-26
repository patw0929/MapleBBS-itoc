/*-------------------------------------------------------*/
/* global.h	( NTHU CS MapleBBS Ver 2.36 )		 */
/*-------------------------------------------------------*/
/* target : global definitions & variables		 */
/* create : 95/03/29				 	 */
/* update : 95/12/15				 	 */
/*-------------------------------------------------------*/


#ifndef	_GLOBAL_H_
#define	_GLOBAL_H_


#ifdef	_MAIN_C_
# define VAR
# define INI(x)		= x
#else
# define VAR		extern
# define INI(x)
#endif


/* ----------------------------------------------------- */
/* GLOBAL DEFINITION					 */
/* ----------------------------------------------------- */


/* itoc.010821: ©R¦W­ì«h: ­Ó¤H¾Ö¦³ªÌ(¦p­Ó¤H/¬ÝªO/ºëµØ°Ï©Ò¿W¦Û¾Ö¦³ªº)¿×¤§ FN_XXXX
   ¨t²Î¾Ö¦³ªÌ¡A­Y¬O¤£ÅÜ°Êªº¤å¥ó¡A¿×¤§ FN_ETC_XXXX¡F­Y¬OÅÜ°ÊÀÉ®×¡A¿×¤§ FN_RUN_XXXX */


/* ----------------------------------------------------- */
/* ­Ó¤H¥Ø¿ýÀÉ¦W³]©w                                      */
/* ----------------------------------------------------- */


#define	FN_ACCT		".ACCT"		/* User account */
#define FN_BRH		".BRH"		/* board reading history */
#define FN_CZH		".CZH"		/* class zap history */

#define	FN_PLANS	"plans"		/* ­pµeÀÉ */
#define	FN_SIGN		"sign"		/* Ã±¦WÀÉ.? */

#define FN_LOG		"log"		/* ¤W¯¸¨Ó·½°O¿ý */
#define FN_JUSTIFY	"justify"	/* ¾ú¦¸»{ÃÒ¸ê®Æ */
#define FN_EMAIL	"email"		/* »{ÃÒ§¹¾ã¦^«H°O¿ý */
#define FN_ACL		"acl"		/* ¤W¯¸¦aÂI³]©w */

#define FN_BMW		"bmw"		/* ¤ô²y°O¿ý Binary Message Write */
#define FN_AMW		"amw"		/* ¤ô²y°O¿ý ASCII Message Write */
#define	FN_PAL		"friend"	/* ªB¤Í¦W³æ (Àx¦s¦b¦Û¤v¥Ø¿ý¡A°O¿ý¦³­þ¨Ç¤H) */

#ifdef HAVE_LIST
#define FN_LIST		"list"		/* ¯S®í¦W³æ.? */
#endif

#ifdef LOGIN_NOTIFY
#define FN_BENZ		"benz"		/* ¨t²Î¨ó´M¤W¯¸³qª¾ */
#endif

#ifdef  HAVE_ALOHA
#define FN_ALOHA	"aloha"		/* ¤W¯¸³qª¾ (Àx¦s¦b¦Û¤v¥Ø¿ý¡A°O¿ý¦³­þ¨Ç¤H) */
#define FN_FRIENZ	"frienz"	/* ¤W¯¸³qª¾ (Àx¦s¦b¹ï¤è¥Ø¿ý¡A¹ï¤è¤W¯¸®ÉÄ²µo) */
#endif

#define FN_PAYCHECK	"paycheck"	/* ¤ä²¼ */

#ifdef LOG_TALK
#define FN_TALK_LOG	"talk.log"	/* ²á¤Ñ°O¿ýÀÉ */
#endif

#ifdef MY_FAVORITE
#define FN_MF		"@MyFavorite"	/* §Úªº³Ì·R */
#endif

#ifdef HAVE_CLASSTABLE
#define FN_CLASSTBL	"classtable"	/* ¥\½Òªí */
#define FN_CLASSTBL_LOG	"classtable.log"/* ¥\½Òªí */
#endif

#ifdef HAVE_CREDIT
#define FN_CREDIT	"credit"	/* °O±b¥» */
#endif

#ifdef HAVE_CALENDAR
#define FN_TODO		"todo"		/* ¦æ¨Æ¾ä */
#endif


/* ----------------------------------------------------- */
/* ¬ÝªO/ºëµØ°Ï/«H½cÀÉ¦W³]©w                              */
/* ----------------------------------------------------- */


#define FN_DIR		".DIR"		/* index */
#define FN_VCH		".VCH"		/* vote control header */
#define FN_NOTE		"note"		/* ¶iªOµe­± */


/* ----------------------------------------------------- */
/* ¨t²ÎÀÉ¦W³]©w                                          */
/* ----------------------------------------------------- */

  /* --------------------------------------------------- */
  /* ®Ú¥Ø¿ý¤U¨t²ÎÀÉ®×                                    */
  /* --------------------------------------------------- */


#define FN_BRD		".BRD"		/* board list */
#define FN_SCHEMA	".USR"		/* userid schema */


  /* --------------------------------------------------- */
  /* run/ ¥Ø¿ý¤U¨t²ÎÀÉ®×                                 */
  /* --------------------------------------------------- */


#define	FN_RUN_USIES	"run/usies"	/* BBS log */
#define FN_RUN_NOTE_ALL	"run/note.all"	/* ¯d¨¥ªO */
#define FN_RUN_PAL	"run/pal.log"	/* ªB¤Í¶W¹L¤W­­°O¿ý */

#define FN_RUN_ADMIN	"run/admin.log"	/* ¯¸ªø¦æ¬°°O¿ý */

#ifdef LOG_SONG_USIES
#define FN_RUN_SONGUSIES "run/song_usies" /* ÂIºq°O¿ý */
#endif

#ifdef HAVE_REGISTER_FORM
#define FN_RUN_RFORM	"run/rform"	/* µù¥Uªí³æ */
#define FN_RUN_RFORM_LOG "run/rform.log" /* µù¥Uªí³æ¼f®Ö°O¿ýÀÉ */
#endif

#ifdef MODE_STAT
#define FN_RUN_MODE_LOG	"run/mode.log"	/* ¨Ï¥ÎªÌ°ÊºA²Î­p - record per hour */
#define FN_RUN_MODE_CUR	"run/mode.cur"
#define FN_RUN_MODE_TMP	"run/mode.tmp"
#endif

#ifdef HAVE_ANONYMOUS
#define FN_RUN_ANONYMOUS "run/anonymous" /* °Î¦Wµoªí¤å³¹°O¿ý */
#endif

#ifdef HAVE_BUY
#define FN_RUN_BANK_LOG	"run/bank.log"	/* ¶×¿ú°O¿ý */
#endif

#ifdef HAVE_SIGNED_MAIL
#define FN_RUN_PRIVATE	"run/prikey"	/* ¹q¤lÃ±³¹ */
#endif

#define FN_RUN_EMAILREG	"run/emailreg"	/* °O¿ý¥Î¨Ó»{ÃÒªº«H½c */
#define FN_RUN_MAIL_LOG	"run/mail.log"	/* ±H«Hªº°O¿ý */

#define FN_RUN_POST	"run/post"	/* ¤å³¹½g¼Æ²Î­p */
#define	FN_RUN_POST_LOG	"run/post.log"	/* ¤å³¹½g¼Æ²Î­p */

/* reaper ©Ò²£¥Íªº log */
#define FN_RUN_LAZYBM	"run/lazybm"	/* °½ÃiªO¥D²Î­p */
#define FN_RUN_MANAGER	"run/manager"	/* ¯S®íÅv­­¨Ï¥ÎªÌ¦Cªí */
#define FN_RUN_REAPER	"run/reaper"	/* ªø´Á¥¼¤W¯¸³Q²M°£ªº¨Ï¥ÎªÌ¦Cªí */
#define FN_RUN_EMAILADDR "run/emailaddr" /* ¦P¤@ email »{ÃÒ¦h¦¸¦Cªí */

#define BMTA_LOGFILE	"run/bmta.log"	/* ¦¬¥~³¡«Hªº°O¿ý */


  /* --------------------------------------------------- */
  /* etc/ ¥Ø¿ý¤U¨t²ÎÀÉ®×				 */
  /* --------------------------------------------------- */


#define FN_ETC_EXPIRE	"etc/expire.conf" 	/* ¬ÝªO¤å³¹½g¼Æ¤W­­³]©w */

#define FN_ETC_VALID	"etc/valid"		/* ¨­¤À»{ÃÒ«H¨ç (Email »{ÃÒ®É¡A±H¥hµ¹¯¸¥~«H½c) */
#define FN_ETC_JUSTIFIED "etc/justified"	/* »{ÃÒ³q¹L³qª¾ (»{ÃÒ³q¹L®É¡A±H¨ì¯¸¤º«H½c) */
#define FN_ETC_REREG	"etc/re-reg"		/* ­«·s»{ÃÒ³qª¾ (»{ÃÒ¹L´Á®É¡A±H¨ì¯¸¤º«H½c) */

#define FN_ETC_CROSSPOST "etc/cross-post"	/* ¸ó¶K°±Åv³qª¾ (Cross-Post ®É¡A±H¨ì¯¸¤º«H½c) */

#define FN_ETC_BADID	"etc/badid"		/* ¤£¶®¦W³æ (©Úµ´µù¥U ID) */
#define FN_ETC_SYSOP	"etc/sysop"		/* ¯¸°È¦W³æ */

#define FN_ETC_FEAST	"etc/feast"		/* ¸`¤é */

#define FN_ETC_HOST	"etc/host"		/* ¬G¶m IP */
#define FN_ETC_FQDN	"etc/fqdn"		/* ¬G¶m FQDN */

#define FN_ETC_TIP	"etc/tip"		/* ¨C¤é¤p¯µ³Z */

#define FN_ETC_LOVELETTER "etc/loveletter"	/* ±¡®Ñ²£¥Í¾¹¤å®w */


  /* --------------------------------------------------- */
  /* etc/ ¥Ø¿ý¤U access crontrol list (ACL)		 */
  /* --------------------------------------------------- */

#define TRUST_ACLFILE	"etc/trust.acl"		/* »{ÃÒ¥Õ¦W³æ */
#define UNTRUST_ACLFILE	"etc/untrust.acl"	/* »{ÃÒ¶Â¦W³æ */

#define MAIL_ACLFILE	"etc/mail.acl"		/* ¦¬«H¥Õ¦W³æ */
#define UNMAIL_ACLFILE	"etc/unmail.acl"	/* ¦¬«H¶Â¦W³æ */

#define BBS_ACLFILE	"etc/bbs.acl"		/* ©Úµ´ telnet ³s½u¦W³æ */


/* ----------------------------------------------------- */
/* ¦U­ÓªOªºÀÉ¦W³]©w                                      */
/* ----------------------------------------------------- */


#if 0	/* itoc.000512: ¨t²Î¬ÝªO¡A¹w³]¤p¼g¡A¤j¼gµL§« */
¬ÝªO        ¤¤   ¤å   ±Ô   ­z       ¾\ÅªÅv­­      µoªíÅv­­
sysop       ¯¸°È ³ø§i¯¸ªø¡Eµ¹§Ú³ø³ø 0             0
0announce   ¯¸°È ©^¤Ñ©Ó¹B¡E¯¸ªø¶@¤ê 0             PERM_ALLADMIN
test        ¯¸°È ´ú¸Õ±M°Ï¡E·s¤â¸ÕÃz 0             PERM_BASIC
note        ¯¸°È °ÊºA¬ÝªO¡E¯]¾÷¸Ü»y 0             PERM_POST
newboard    ¯¸°È ¶}ÅP±MÄæ¡E³s¸p­«¦a 0             PERM_POST
ktv         ¯¸°È ÂIºq°O¿ý¡E¯u±¡¹ï¸Ü 0             PERM_SYSOP
record      ¯¸°È »Ä²¢­W»¶¡E¨t²Î°O¿ý 0             PERM_SYSOP
deleted     ¯¸°È ¤å³¹¬@±Ï¡E¸ê·½¦^¦¬ PERM_BM       PERM_SYSOP
bm          ¯¸°È ±M·~°Q½×¡EªO¥D¥æ½Ë PERM_BM       0
admin       ¯¸°È ´c·d¤Ñ¦a¡E¯¸ªø¦ÛºN PERM_ALLADMIN 0
log         ¯¸°È ¨t²Î«OÀI¡E¦w¥þ°O¿ý PERM_ALLADMIN PERM_SYSOP
junk        ¯¸°È ¤å³¹²M²z¡E©U§£±»®I PERM_ALLBOARD PERM_SYSOP
UnAnonymous ¯¸°È ¶Â¨çº¡¤Ñ¡E°Î¦W²{¨­ PERM_ALLBOARD PERM_SYSOP

¨ä¤¤­­¨îÅª¨úªº¬ÝªO¦b Class ¤ÀÃþ¤¤­n³]©w ¸ê®Æ«O±K
#endif

/* ¥H¤U¬O¤@©w­n¦³ªº¨t²Î¬ÝªO¡A¦ý¬O¤@­ÓªO¥i¥H­«ÂÐ¨Ï¥Î¦h¦¸¡A¨Ò¦p§ë½Zºq¥»ªº©M°ÊºA¬ÝªO¦@¥Î note ªO */

#define BN_CAMERA	"note"		/* °ÊºA¬ÝªO©ñ¦b³oªOªººëµØ°Ï */
#define BN_ANNOUNCE	"0announce"	/* ¤½§i¬ÝªO¡A±j­¢¾\Åª */
#define BN_JUNK		"junk"		/* ¦Û¤v§R°£ªº¤å³¹©ñ¦b¦¹ */
#define BN_DELETED	"deleted"	/* ªO¥D§R°£ªº¤å³¹©ñ¦b¦¹ */
#define BN_SECURITY	"log"		/* ¨t²Î¦w¥þ°O¿ý */
#define BN_RECORD	"record"	/* ¨t²Îªº¤@¯ë°O¿ý */
#define BN_UNANONYMOUS	"UnAnonymous"	/* °Î¦WªOªº¤å³¹·|½Æ»s¤@¥÷¦b³o¸Ì */
#define BN_KTV		"ktv"		/* ÂIºq°O¿ý©ñ¦b³oªO¡Aºq¥»©ñ¦b³oªOªººëµØ°Ï */
#define BN_REQUEST	BN_CAMERA	/* ºq¥»§ë½Z³B */

#define BN_NULL		"©|¥¼¿ï©w"	/* ¶i¯¸«áÁÙ¨S¶i¤J¥ô¦ó¬ÝªO¡A©ÒÅã¥Üªº¬ÝªO¦WºÙ */


/* ----------------------------------------------------- */
/* Áä½L³]©w                                              */
/* ----------------------------------------------------- */


#define KEY_BKSP	8	/* ©M Ctrl('H') ¬Û¦P */
#define KEY_TAB		9	/* ©M Ctrl('I') ¬Û¦P */
#define KEY_STAB	90	/* Same as Z */
#define KEY_ENTER	10	/* ©M Ctrl('J') ¬Û¦P */
#define KEY_ESC		27
#define KEY_UP		-1
#define KEY_DOWN	-2
#define KEY_RIGHT	-3
#define KEY_LEFT	-4
#define KEY_HOME	-21
#define KEY_INS		-22
#define KEY_DEL		-23
#define KEY_END		-24
#define KEY_PGUP	-25
#define KEY_PGDN	-26


#define I_TIMEOUT	-31
#define I_OTHERDATA	-32


#define Ctrl(c)		(c & '\037')
#define Esc(c)		(c)		/* itoc.030824: ¤£ TRAP_ESC */
#define isprint2(c)	(c >= ' ')


#if 0	/* itoc.020108: «öÁä¹ïÀ³ªí */

  int HEX = vkey('KEY');
  ³oªí¬O¥Ñ vkey() ¿é¤JÁä½L¡A¶Ç¥Xªº¾ã¼Æ­È¹ïÀ³ªí¡C


/* ­È¬O­tªº */

KEY_INS   ffffffea	KEY_DEL   ffffffe9
KEY_HOME  ffffffeb	KEY_END   ffffffe8
KEY_PGUP  ffffffe7	KEY_PGDN  ffffffe6

KEY_UP    ffffffff	KEY_DOWN  fffffffe
KEY_RIGHT fffffffd	KEY_LEFT  fffffffc

/* ­È¬O¥¿ªº */

¢z¢w¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢s¢w¢{
¢x HEX¢x00¢x01¢x02¢x03¢x04¢x05¢x06¢x07¢x08¢x09¢x0a¢x0b¢x0c¢x0d¢x0e¢x0f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x  ¢x^A¢x^B¢x^C¢x^D¢x^E¢x^F¢x^G¢x^H¢x^I¢x^J¢x^K¢x^L¢x^M¢x^N¢x^O¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x10¢x11¢x12¢x13¢x14¢x15¢x16¢x17¢x18¢x19¢x1a¢x1b¢x1c¢x1d¢x1e¢x1f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x^P¢x^Q¢x^R¢x^S¢x^T¢x^U¢x^V¢x^W¢x^X¢x^Y¢x^Z¢xEs¢x  ¢x  ¢x  ¢x  ¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x20¢x21¢x22¢x23¢x24¢x25¢x26¢x27¢x28¢x29¢x2a¢x2b¢x2c¢x2d¢x2e¢x2f¢x	/* 0x22 ¬OÂù¤Þ¸¹¡AÁ×§K compile ¿ù»~ */
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x  ¢x !¢xXX¢x #¢x $¢x %¢x &¢xXX¢x (¢x )¢x *¢x  ¢x ,¢x -¢x .¢x /¢x	/* 0x27 ¬O³æ¤Þ¸¹¡AÁ×§K compile ¿ù»~ */
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x30¢x31¢x32¢x33¢x34¢x35¢x36¢x37¢x38¢x39¢x3a¢x3b¢x3c¢x3d¢x3e¢x3f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x 0¢x 1¢x 2¢x 3¢x 4¢x 5¢x 6¢x 7¢x 8¢x 9¢x :¢x ;¢x <¢x  ¢x >¢x ?¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x40¢x41¢x42¢x43¢x44¢x45¢x46¢x47¢x48¢x49¢x4a¢x4b¢x4c¢x4d¢x4e¢x4f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x @¢x A¢x B¢x C¢x D¢x E¢x F¢x G¢x H¢x I¢x J¢x K¢x L¢x M¢x N¢x O¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x50¢x51¢x52¢x53¢x54¢x55¢x56¢x57¢x58¢x59¢x5a¢x5b¢x5c¢x5d¢x5e¢x5f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x P¢x Q¢x R¢x S¢x T¢x U¢x V¢x W¢x X¢x Y¢x Z¢x [¢x \¢x ]¢x ^¢x _¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x60¢x61¢x62¢x63¢x64¢x65¢x66¢x67¢x68¢x69¢x6a¢x6b¢x6c¢x6d¢x6e¢x6f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x `¢x a¢x b¢x c¢x d¢x e¢x f¢x g¢x h¢x i¢x j¢x k¢x l¢x m¢x n¢x o¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x HEX¢x70¢x71¢x72¢x73¢x74¢x75¢x76¢x77¢x78¢x79¢x7a¢x7b¢x7c¢x7d¢x7e¢x7f¢x
¢u¢w¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢q¢w¢t
¢x KEY¢x p¢x q¢x r¢x s¢x t¢x u¢x v¢x w¢x x¢x y¢x z¢x {¢x |¢x }¢x  ¢x  ¢x
¢|¢w¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢r¢w¢}

/* ­È­«ÂÐ */

KEY_BKSP == Ctrl('H') == 0x08
'\t' == Ctrl('I') == 0x09
'\n' == Ctrl('J') == 0x0a
'\r' == Ctrl('M') == 0x0d

#endif


/* ----------------------------------------------------- */
/* °T®§¦r¦ê¡G¿W¥ß¥X¨Ó¡A¥H§Q¤ä´©¦UºØ»y¨¥			 */
/* ----------------------------------------------------- */


#define QUOTE_CHAR1	'>'
#define QUOTE_CHAR2	':'
#define QUOTE_CHAR3	'='
#define QUOTE_CHAR4	'<'
#define QUOTE_CHAR5	'\\'

#define LINE_HEADER	3
#define STR_HEADER  {"ä½œè€…", "æ¨™é¡Œ", "æ™‚é–“"}
#define STR_HEADER2 {"ç™¼ä¿¡äºº", "æ¨™  é¡Œ", "ç™¼ä¿¡ç«™"}

#define	STR_SPACE	" \t\n\r"

#define	STR_AUTHOR1	"§@ªÌ:"
#define	STR_AUTHOR2	"µo«H¤H:"
#define	STR_POST1	"¬ÝªO:"
#define	STR_POST2	"¯¸¤º:"
#define	STR_REPLY	"Re: "
#define	STR_FORWARD	"Fw: "

#define STR_LINE	"\n\
> -------------------------------------------------------------------------- <\n\n"

#define LEN_AUTHOR1	(sizeof(STR_AUTHOR1) - 1)
#define LEN_AUTHOR2	(sizeof(STR_AUTHOR2) - 1)

#define STR_SYSOP	"sysop"
#define STR_GUEST	"guest"
#define STR_NEW		"new"

#define STR_ANONYMOUS	"¯«¯µ¸ô¤H¥Ò"		/* ­nµu©ó IDLEN ­Ó¦r */

#define MSG_SEPERATOR	"\
¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w¢w"

#define MSG_CANCEL	"¨ú®ø"
#define MSG_USR_LEFT	"¹ï¤è¤w¸gÂ÷¥h"
#define MSG_XY_NONE	"ªÅµL¤@ª«"

#define MSG_USERPERM	"Åv­­µ¥¯Å¡G"
#define MSG_READPERM	"¾\\ÅªÅv­­¡G"
#define MSG_POSTPERM	"µoªíÅv­­¡G"
#define MSG_BRDATTR	"¬ÝªOÄÝ©Ê¡G"
#define MSG_USERUFO	"²ßºDºX¼Ð¡G             ¡½ / ¡¼                                 ¡½ / ¡¼"

#define MSG_XYPOST1	"¼ÐÃDÃöÁä¦r¡G"
#define MSG_XYPOST2	"§@ªÌÃöÁä¦r¡G"

#define MSG_DEL_OK	"§R°£§¹²¦"
#define MSG_DEL_CANCEL	"¨ú®ø§R°£"
#define MSG_DEL_ERROR	"§R°£¿ù»~"
#define MSG_DEL_NY	"½Ð½T©w§R°£(Y/N)¡H[N] "

#define MSG_SURE_NY	"½Ð±z½T©w(Y/N)¡H[N] "
#define MSG_SURE_YN	"½Ð±z½T©w(Y/N)¡H[Y] "

#define MSG_MULTIREPLY	"±z½T©w­n¸s²Õ¦^«H(Y/N)¡H[N] "

#define MSG_BID		"½Ð¿é¤J¬ÝªO¦WºÙ¡G"
#define MSG_UID		"½Ð¿é¤J¥N¸¹¡G"
#define MSG_PASSWD	"½Ð¿é¤J±K½X¡G"

#define ERR_BID		"¿ù»~ªº¬ÝªO¦WºÙ"
#define ERR_UID		"¿ù»~ªº¨Ï¥ÎªÌ¥N¸¹"
#define ERR_PASSWD	"±K½X¿é¤J¿ù»~"
#define ERR_EMAIL	"¤£¦X®æªº E-mail address"

#define MSG_SENT_OK	"«H¤w±H¥X"

#define MSG_LIST_OVER	"±zªº¦W³æ¤Ó¦h¡A½Ðµ½¥[¾ã²z"

#define MSG_COINLOCK	"±z¤£¯à¥H¤À¨­¶i¦æ³o¼ËªºªA°È"
#define MSG_REG_VALID	"±z¤w¸g³q¹L¨­¤À»{ÃÒ¡A½Ð­«·s¤W¯¸"

#define	MSG_LL		"\033[32m[¸s²Õ¦W³æ]\033[m\n"
#define MSG_DATA_CLOAK	"<¸ê®Æ«O±K>\n"

#define MSG_CHKDATA	"¡¹ ¸ê®Æ¾ã²z½]®Ö¤¤¡A½Ðµy­Ô \033[5m...\033[m"
#define MSG_QUITGAME	"¤£ª±¤F°Ú¡H¤U¦¸¦A¨Ó®@¡I ^_^"

#define MSG_CHAT_ULIST	\
"\033[7m ¨Ï¥ÎªÌ¥N¸¹    ¥Ø«eª¬ºA  ¢x ¨Ï¥ÎªÌ¥N¸¹    ¥Ø«eª¬ºA  ¢x ¨Ï¥ÎªÌ¥N¸¹    ¥Ø«eª¬ºA \033[m"


/* ----------------------------------------------------- */
/* GLOBAL VARIABLE					 */
/* ----------------------------------------------------- */


VAR int bbsmode;		/* bbs operating mode, see modes.h */
VAR usint bbstate;		/* bbs operatine state */

VAR ACCT cuser;			/* current user structure */
VAR UTMP *cutmp;		/* current user temporary */

VAR time_t ap_start;		/* ¶i¯¸®É¨è */
VAR int total_user;		/* ¨Ï¥ÎªÌ¦Û¥H¬°ªº¯¸¤W¤H¼Æ */

VAR int b_lines;		/* bottom line */
VAR int b_cols;			/* bottom columns */
VAR int d_cols;			/* difference columns from standard */

VAR char fromhost[48];		/* from FQDN */

VAR char ve_title[80];		/* edited title */
VAR char quote_file[80];
VAR char quote_user[80];
VAR char quote_nick[80];

VAR char hunt[32];		/* hunt keyword */

VAR int curredit;		/* current edit mode */
VAR time_t currchrono;		/* current file timestamp */
VAR char currtitle[80];		/* currently selected article title */

VAR int currbno;		/* currently selected board bno */
VAR usint currbattr;		/* currently selected board battr */
VAR char currboard[BNLEN + 1];	/* currently selected board brdname */
VAR char currBM[BMLEN + 7];	/* currently selected board BM */	/* BMLEN + 1 + strlen("ªO¥D¡G") */

/* filename */

VAR char *fn_acct	INI(FN_ACCT);
VAR char *fn_dir	INI(FN_DIR);
VAR char *fn_bmw	INI(FN_BMW);
VAR char *fn_amw	INI(FN_AMW);
VAR char *fn_pal	INI(FN_PAL);
VAR char *fn_plans	INI(FN_PLANS);
VAR char *fn_note	INI(FN_NOTE);


/* message */

VAR char *msg_seperator	INI(MSG_SEPERATOR);

VAR char *msg_cancel	INI(MSG_CANCEL);

VAR char *msg_sure_ny	INI(MSG_SURE_NY);

VAR char *msg_uid	INI(MSG_UID);

VAR char *msg_del_ny	INI(MSG_DEL_NY);

VAR char *err_bid	INI(ERR_BID);
VAR char *err_uid	INI(ERR_UID);
VAR char *err_email	INI(ERR_EMAIL);

VAR char *msg_sent_ok	INI(MSG_SENT_OK);

VAR char *msg_list_over	INI(MSG_LIST_OVER);

VAR char *msg_reg_valid	INI(MSG_REG_VALID);
VAR char *msg_coinlock	INI(MSG_COINLOCK);

VAR char *str_sysop	INI(STR_SYSOP);
VAR char *str_author1	INI(STR_AUTHOR1);
VAR char *str_author2	INI(STR_AUTHOR2);
VAR char *str_post1	INI(STR_POST1);
VAR char *str_post2	INI(STR_POST2);
VAR char *str_host	INI(MYHOSTNAME);
VAR char *str_site	INI(BBSNAME);
VAR char *str_line	INI(STR_LINE);

VAR char *str_ransi	INI("\033[m");

#undef	VAR
#undef	INI

#endif				/* _GLOBAL_H_ */
