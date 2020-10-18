# 1 "<stdin>"
# 1 "/home/joemaier/WaspOs/wasp-os/micropython/ports/nrf//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 27 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 62 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 30 "./mpconfigport.h"
# 1 "boards/pinetime/mpconfigboard.h" 1
# 31 "./mpconfigport.h" 2
# 198 "./mpconfigport.h"
# 1 "./bluetooth_conf.h" 1
# 199 "./mpconfigport.h" 2
# 221 "./mpconfigport.h"
typedef int mp_int_t;
typedef unsigned int mp_uint_t;
typedef long mp_off_t;


extern const struct _mp_obj_module_t board_module;
extern const struct _mp_obj_module_t machine_module;
extern const struct _mp_obj_module_t mp_module_utime;
extern const struct _mp_obj_module_t mp_module_uos;
extern const struct _mp_obj_module_t mp_module_ubluepy;
extern const struct _mp_obj_module_t music_module;
extern const struct _mp_obj_module_t random_module;
# 262 "./mpconfigport.h"
extern const struct _mp_obj_module_t ble_module;
# 347 "./mpconfigport.h"
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/alloca.h" 1 3
# 10 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/alloca.h" 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 10 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/_ansi.h" 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/newlib.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/newlib.h" 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3
# 15 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/newlib.h" 2 3
# 11 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/features.h" 1 3
# 6 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 12 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 11 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/alloca.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 13 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 1 3 4
# 143 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4

# 143 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 209 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 321 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 415 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
} max_align_t;
# 15 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 1 3
# 24 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_types.h" 1 3






# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3
# 41 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 8 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/machine/_types.h" 2 3
# 25 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/lock.h" 1 3
# 33 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);
# 26 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 88 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 129 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 145 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 156 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;


# 1 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 1 3 4
# 350 "/opt/gcc-arm-none-eabi-9-2019-q4-major/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;




typedef char * __va_list;
# 16 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 287 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 608 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 814 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/opt/gcc-arm-none-eabi-9-2019-q4-major/arm-none-eabi/include/alloca.h" 2 3
# 348 "./mpconfigport.h" 2
# 63 "../../py/mpconfig.h" 2
# 646 "../../py/mpconfig.h"

# 646 "../../py/mpconfig.h"
typedef float mp_float_t;
# 28 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 91 "<stdin>"
Q(a)
Q(a#)
Q(a#:1)
Q(a#:3)
Q(a2)
Q(a4)
Q(a4:1)
Q(a4:3)
Q(a:1)
Q(a:2)
Q(a:4)
Q(a:5)
Q(b)
Q(b2:1)
Q(b3)
Q(b4)
Q(b4:1)
Q(b4:2)
Q(b5)
Q(b5:1)
Q(b:1)
Q(b:2)
Q(c)
Q(c#)
Q(c#5)
Q(c#5:1)
Q(c#5:2)
Q(c#:1)
Q(c#:8)
Q(c2:2)
Q(c3)
Q(c3:3)
Q(c3:4)
Q(c4)
Q(c4:1)
Q(c4:3)
Q(c4:4)
Q(c5)
Q(c5:1)
Q(c5:2)
Q(c5:3)
Q(c5:4)
Q(c:1)
Q(c:2)
Q(c:3)
Q(c:4)
Q(c:8)
Q(d)
Q(d#)
Q(d#5:2)
Q(d#:2)
Q(d#:3)
Q(d3)
Q(d4)
Q(d4:1)
Q(d5)
Q(d5:1)
Q(d5:2)
Q(d:1)
Q(d:2)
Q(d:3)
Q(d:4)
Q(d:5)
Q(d:6)
Q(d:8)
Q(e)
Q(e3:3)
Q(e4)
Q(e4:1)
Q(e5)
Q(e6:3)
Q(e:1)
Q(e:2)
Q(e:3)
Q(e:4)
Q(e:5)
Q(e:6)
Q(e:8)
Q(eb:8)
Q(f)
Q(f#)
Q(f#5)
Q(f#5:2)
Q(f#:1)
Q(f#:2)
Q(f#:8)
Q(f2)
Q(f:1)
Q(f:2)
Q(f:3)
Q(f:4)
Q(f:8)
Q(g)
Q(g#)
Q(g#:1)
Q(g#:3)
Q(g3:1)
Q(g4)
Q(g4:1)
Q(g4:2)
Q(g5)
Q(g5:1)
Q(g:1)
Q(g:2)
Q(g:3)
Q(g:8)
Q(r)
Q(r4:2)
Q(r:1)
Q(r:2)
Q(r:3)

Q(ACCEL_INT)
Q(BATTERY)
Q(BL_HI)
Q(BL_LO)
Q(BL_MID)
Q(BUTTON)
Q(BUTTON_EN)
Q(CHARGING)
Q(DISP_CS)
Q(DISP_DC)
Q(DISP_RST)
Q(HRS_TST)
Q(I2C_SCL)
Q(I2C_SDA)
Q(LCD_DETECT)
Q(MOTOR)
Q(NOR_CS)
Q(P10)
Q(P11)
Q(P12)
Q(P13)
Q(P14)
Q(P15)
Q(P16)
Q(P17)
Q(P18)
Q(P19)
Q(P2)
Q(P22)
Q(P23)
Q(P24)
Q(P25)
Q(P26)
Q(P27)
Q(P28)
Q(P29)
Q(P3)
Q(P30)
Q(P31)
Q(P4)
Q(P5)
Q(P6)
Q(P7)
Q(P8)
Q(P9)
Q(SPI_MISO)
Q(SPI_MOSI)
Q(SPI_SCK)
Q(TP_INT)
Q(TP_RST)
Q(UART_RX)
Q(UART_TX)
Q(USB_PWR)
Q(ACCEL_CONFIG_ADDR)

Q(ACCEL_NORMAL_AVG4)

Q(ACCEL_RANGE_16G)

Q(ACCEL_RANGE_2G)

Q(ACCEL_RANGE_4G)

Q(ACCEL_RANGE_8G)

Q(ADC)

Q(ADC)

Q(ADDR_TYPE_PUBLIC)

Q(ADDR_TYPE_RANDOM_STATIC)

Q(AD_TYPE_128BIT_SERVICE_UUID_COMPLETE)

Q(AD_TYPE_128BIT_SERVICE_UUID_MORE_AVAILABLE)

Q(AD_TYPE_16BIT_SERVICE_UUID_COMPLETE)

Q(AD_TYPE_16BIT_SERVICE_UUID_MORE_AVAILABLE)

Q(AD_TYPE_32BIT_SERVICE_UUID_COMPLETE)

Q(AD_TYPE_32BIT_SERVICE_UUID_MORE_AVAILABLE)

Q(AD_TYPE_3D_INFORMATION_DATA)

Q(AD_TYPE_ADVERTISING_INTERVAL)

Q(AD_TYPE_APPEARANCE)

Q(AD_TYPE_CLASS_OF_DEVICE)

Q(AD_TYPE_COMPLETE_LOCAL_NAME)

Q(AD_TYPE_FLAGS)

Q(AD_TYPE_LE_BLUETOOTH_DEVICE_ADDRESS)

Q(AD_TYPE_LE_ROLE)

Q(AD_TYPE_MANUFACTURER_SPECIFIC_DATA)

Q(AD_TYPE_PUBLIC_TARGET_ADDRESS)

Q(AD_TYPE_RANDOM_TARGET_ADDRESS)

Q(AD_TYPE_SECURITY_MANAGER_OOB_FLAGS)

Q(AD_TYPE_SECURITY_MANAGER_TK_VALUE)

Q(AD_TYPE_SERVICE_DATA)

Q(AD_TYPE_SERVICE_DATA_128BIT_UUID)

Q(AD_TYPE_SERVICE_DATA_32BIT_UUID)

Q(AD_TYPE_SHORT_LOCAL_NAME)

Q(AD_TYPE_SIMPLE_PAIRING_HASH_C)

Q(AD_TYPE_SIMPLE_PAIRING_HASH_C256)

Q(AD_TYPE_SIMPLE_PAIRING_RANDOMIZER_R)

Q(AD_TYPE_SIMPLE_PAIRING_RANDOMIZER_R256)

Q(AD_TYPE_SLAVE_CONNECTION_INTERVAL_RANGE)

Q(AD_TYPE_SOLICITED_SERVICE_UUIDS_128BIT)

Q(AD_TYPE_SOLICITED_SERVICE_UUIDS_16BIT)

Q(AD_TYPE_TX_POWER_LEVEL)

Q(AD_TYPE_URI)

Q(ANY_MOT_INT)

Q(ATTR_CCCD)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BMA42X)

Q(BMA42X)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BytesIO)

Q(BytesIO)

Q(CIC_AVG_MODE)

Q(CONTINUOUS_MODE)

Q(Characteristic)

Q(Characteristic)

Q(DEBUG_IF_RESET)

Q(DEG)

Q(DIS_ALL_AXIS)

Q(DOUBLE_TAP)

Q(DefaultDelegate)

Q(DefaultDelegate)

Q(Descriptor)

Q(EN_ALL_AXIS)

Q(EOFError)

Q(EOFError)

Q(EVT_GAP_CONNECTED)

Q(EVT_GAP_DISCONNECTED)

Q(EVT_GATTS_WRITE)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FAHREN)

Q(FREQUENCY)

Q(FREQ_125KHZ)

Q(FREQ_16MHZ)

Q(FREQ_1MHZ)

Q(FREQ_250KHZ)

Q(FREQ_2MHZ)

Q(FREQ_4MHZ)

Q(FREQ_500KHZ)

Q(FREQ_8MHZ)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(GeneratorExit)

Q(GeneratorExit)

Q(HARD_RESET)

Q(I2C)

Q(I2C)

Q(I2C)

Q(IN)

Q(INTR1_MAP)

Q(INTR2_MAP)

Q(IRQ_FALLING)

Q(IRQ_RISING)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KELVIN)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LOCKUP_RESET)

Q(LPCOMP_RESET)

Q(LSB)

Q(LookupError)

Q(LookupError)

Q(MODE_HIGH_LOW)

Q(MODE_LOW_HIGH)

Q(MSB)

Q(MemoryError)

Q(MemoryError)

Q(NFC_RESET)

Q(NO_MOT_INT)

Q(NV_CONFIG_ADDR)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ONESHOT)

Q(ONESHOT)

Q(OSError)

Q(OSError)

Q(OUT)

Q(OUTPUT_DATA_RATE_100HZ)

Q(OUTPUT_DATA_RATE_50HZ)

Q(OverflowError)

Q(OverflowError)

Q(PERIODIC)

Q(PERIODIC)

Q(POWER_CONF_ADDR)

Q(POWER_CTRL_ADDR)

Q(PRIMARY)

Q(PROP_AUTH_SIGNED_WR)

Q(PROP_AUTH_SIGNED_WR)

Q(PROP_BROADCAST)

Q(PROP_INDICATE)

Q(PROP_NOTIFY)

Q(PROP_READ)

Q(PROP_WRITE)

Q(PROP_WRITE_WO_RESP)

Q(PULL_DISABLED)

Q(PULL_DOWN)

Q(PULL_UP)

Q(PWM)

Q(PWM)

Q(PWRON_RESET)

Q(Peripheral)

Q(Peripheral)

Q(Pin)

Q(Pin)

Q(PinAF)

Q(PinBase)

Q(RTCounter)

Q(RTCounter)

Q(RuntimeError)

Q(RuntimeError)

Q(SCALE_TEMP)

Q(SECONDARY)

Q(SINGLE_TAP)

Q(SOFT_RESET)

Q(SPI)

Q(SPI)

Q(STEP_ACT)

Q(STEP_CNTR)

Q(STEP_CNTR_INT)

Q(ScanEntry)

Q(ScanEntry)

Q(Scanner)

Q(Scanner)

Q(Service)

Q(Service)

Q(Signal)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(Temp)

Q(Temp)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(Timer)

Q(Timer)

Q(TypeError)

Q(TypeError)

Q(UUID)

Q(UUID)

Q(UUID_CCCD)

Q(ValueError)

Q(ValueError)

Q(VfsLfs2)

Q(VfsLfs2)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WDT_RESET)

Q(WRIST_WEAR)

Q(X_AXIS_EN)

Q(Y_AXIS_EN)

Q(Z_AXIS_EN)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__ge__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__module__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__qualname__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(abs)

Q(acos)

Q(ad_types)

Q(ad_types)

Q(add)

Q(addCharacteristic)

Q(addService)

Q(addr)

Q(addr)

Q(addr_type)

Q(addr_type)

Q(address)

Q(addrsize)

Q(advertise)

Q(advertise_stop)

Q(af)

Q(af)

Q(af_list)

Q(all)

Q(alloc_emergency_exception_buf)

Q(alt)

Q(any)

Q(append)

Q(append)

Q(arg)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(asin)

Q(atan)

Q(atan2)

Q(attrs)

Q(axes_en)

Q(bandwidth)

Q(battery_level)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(binVal)

Q(bits)

Q(bits)

Q(ble)

Q(ble)

Q(bma42x)

Q(bma42x)

Q(board)

Q(board)

Q(board)

Q(board)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bound_method)

Q(buffering)

Q(builtins)

Q(builtins)

Q(bytearray)

Q(bytearray)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(calcsize)

Q(callable)

Q(callback)

Q(callback)

Q(ceil)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(closure)

Q(code)

Q(collect)

Q(compile)

Q(complex)

Q(complex)

Q(connect)

Q(connectable)

Q(const)

Q(const)

Q(constants)

Q(constants)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(cos)

Q(count)

Q(count)

Q(count)

Q(count)

Q(counter)

Q(cpu)

Q(cpu)

Q(data)

Q(debug)

Q(decode)

Q(decode)

Q(deepsleep)

Q(default)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(deleter)

Q(device_name)

Q(dict)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference_update)

Q(dir)

Q(disable)

Q(disable)

Q(disable_irq)

Q(discard)

Q(disconnect)

Q(divmod)

Q(doc)

Q(dump)

Q(dumps)

Q(duration)

Q(duty)

Q(duty)

Q(e)

Q(enable)

Q(enable)

Q(enable_irq)

Q(enabled)

Q(encode)

Q(encoding)

Q(end)

Q(endswith)

Q(enter_ota_dfu)

Q(enter_serial_dfu)

Q(enumerate)

Q(enumerate)

Q(eval)

Q(eval)

Q(exec)

Q(exec)

Q(exit)

Q(exp)

Q(extend)

Q(extend)

Q(fabs)

Q(feature_enable)

Q(file)

Q(file)

Q(filter)

Q(filter)

Q(find)

Q(firstbit)

Q(firstbit)

Q(float)

Q(float)

Q(floor)

Q(flush)

Q(flush)

Q(fmod)

Q(format)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(getCharacteristic)

Q(getCharacteristics)

Q(getScanData)

Q(getServices)

Q(get_offset_comp)

Q(get_reg)

Q(get_temperature)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(globals)

Q(handleConnection)

Q(handleNotification)

Q(handler)

Q(hasattr)

Q(hash)

Q(heap_lock)

Q(heap_unlock)

Q(help)

Q(help)

Q(hex)

Q(high)

Q(i2c)

Q(id)

Q(id)

Q(id)

Q(id)

Q(id)

Q(id)

Q(id)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(implementation)

Q(index)

Q(index)

Q(index)

Q(index)

Q(info)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(invert)

Q(ioctl)

Q(irq)

Q(isalpha)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(isnan)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(join)

Q(kbd_intr)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(ldexp)

Q(len)

Q(lightsleep)

Q(list)

Q(list)

Q(listdir)

Q(little)

Q(little)

Q(little)

Q(little)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(log)

Q(lookahead)

Q(low)

Q(lower)

Q(lstrip)

Q(machine)

Q(machine)

Q(map)

Q(map)

Q(map_interrupt)

Q(mapper)

Q(math)

Q(math)

Q(max)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(mem)

Q(mem16)

Q(mem32)

Q(mem8)

Q(mem_alloc)

Q(mem_free)

Q(mem_info)

Q(memaddr)

Q(memoryview)

Q(memoryview)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(miso)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(module)

Q(modules)

Q(modules)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mpy)

Q(name)

Q(name)

Q(name)

Q(namedtuple)

Q(names)

Q(native)

Q(next)

Q(nodename)

Q(object)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(odr)

Q(off)

Q(off)

Q(on)

Q(on)

Q(open)

Q(open)

Q(open)

Q(open)

Q(opt_level)

Q(ord)

Q(pack)

Q(pack_into)

Q(path)

Q(pend_throw)

Q(perf_mode)

Q(period)

Q(period)

Q(period)

Q(period)

Q(period)

Q(phase)

Q(phase)

Q(pi)

Q(pin)

Q(pin)

Q(pin)

Q(platform)

Q(polarity)

Q(polarity)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(port)

Q(pow)

Q(pow)

Q(print)

Q(print_exception)

Q(progsize)

Q(properties)

Q(property)

Q(property)

Q(props)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(pull)

Q(pull)

Q(pulse_width)

Q(qstr_info)

Q(r)

Q(radians)

Q(randint)

Q(random)

Q(random)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(range)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_accel_xyz)

Q(read_int_status)

Q(read_u16)

Q(readblocks)

Q(readfrom)

Q(readfrom_into)

Q(readfrom_mem)

Q(readfrom_mem_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readonly)

Q(readsize)

Q(real)

Q(reg)

Q(release)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(rename)

Q(rename)

Q(rename)

Q(repl_info)

Q(replace)

Q(repr)

Q(reset)

Q(reset_cause)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rindex)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(round)

Q(rsplit)

Q(rssi)

Q(rstrip)

Q(scan)

Q(scan)

Q(schedule)

Q(sck)

Q(scl)

Q(scl)

Q(sda)

Q(sda)

Q(seek)

Q(seek)

Q(send)

Q(send)

Q(sep)

Q(sep)

Q(services)

Q(set)

Q(set)

Q(setConnectionHandler)

Q(setNotificationHandler)

Q(set_accel_config)

Q(set_accel_enable)

Q(set_any_mot_config)

Q(set_command_register)

Q(set_no_mot_config)

Q(set_offset_comp)

Q(set_reg)

Q(setattr)

Q(setdefault)

Q(setter)

Q(sin)

Q(single)

Q(sleep)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(soft_reset)

Q(sort)

Q(sorted)

Q(split)

Q(sqrt)

Q(stack_use)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(startswith)

Q(starve_wdt)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(staticmethod)

Q(staticmethod)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step_counter_output)

Q(step_counter_set_watermark)

Q(step_detector_enable)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(str)

Q(str)

Q(str)

Q(str)

Q(strip)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(tell)

Q(threshold)

Q(threshold)

Q(throw)

Q(throw)

Q(time)

Q(time)

Q(timeout)

Q(to_bytes)

Q(trigger)

Q(trunc)

Q(tuple)

Q(tuple)

Q(tuple)

Q(type)

Q(type)

Q(uarray)

Q(uarray)

Q(uart_connected)

Q(uart_enabled)

Q(ubluepy)

Q(ubluepy)

Q(ucollections)

Q(ucollections)

Q(uint)

Q(uint)

Q(uio)

Q(uio)

Q(ujson)

Q(ujson)

Q(umachine)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(uniform)

Q(union)

Q(union)

Q(unlink)

Q(unpack)

Q(unpack_from)

Q(uos)

Q(uos)

Q(update)

Q(update)

Q(upper)

Q(ustruct)

Q(ustruct)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(utime)

Q(utime)

Q(uuid)

Q(uuid)

Q(uuid)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(viper)

Q(wake)

Q(withDelegate)

Q(with_response)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_config_file)

Q(write_readinto)

Q(writeblocks)

Q(writeto)

Q(writeto_mem)

Q(writevto)

Q(zip)

Q(zip)
