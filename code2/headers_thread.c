/// c_include definition ///
/// typedef definition ///
/// previous struct definition ///
struct sigevent;

/// struct definition ///

typedef unsigned long size_t;


typedef int wchar_t;


typedef __builtin_va_list __gnuc_va_list;


typedef unsigned char __u_char;


typedef unsigned short int __u_short;


typedef unsigned int __u_int;


typedef unsigned long  int __u_long;


typedef char __int8_t;


typedef unsigned char __uint8_t;


typedef short int __int16_t;


typedef unsigned short int __uint16_t;


typedef int __int32_t;


typedef unsigned int __uint32_t;


typedef long  int __int64_t;


typedef unsigned long  int __uint64_t;


typedef char __int_least8_t  ;


typedef unsigned char __uint_least8_t  ;


typedef short int __int_least16_t  ;


typedef unsigned short int __uint_least16_t  ;


typedef int __int_least32_t  ;


typedef unsigned int __uint_least32_t  ;


typedef long  int __int_least64_t  ;


typedef unsigned long  int __uint_least64_t  ;


typedef long  int __quad_t;


typedef unsigned long  int __u_quad_t;


typedef long  int __intmax_t;


typedef unsigned long  int __uintmax_t;


typedef unsigned long  int __dev_t;


typedef unsigned int __uid_t;


typedef unsigned int __gid_t;


typedef unsigned long  int __ino_t;


typedef unsigned long  int __ino64_t;


typedef unsigned int __mode_t;


typedef unsigned long  int __nlink_t;


typedef long  int __off_t;


typedef long  int __off64_t;


typedef int __pid_t;

struct __fsid_t {int __val[2]; };

typedef struct __fsid_t __fsid_t  ;


typedef long  int __clock_t;


typedef unsigned long  int __rlim_t;


typedef unsigned long  int __rlim64_t;


typedef unsigned int __id_t;


typedef long  int __time_t;


typedef unsigned int __useconds_t;


typedef long  int __suseconds_t;


typedef long  int __suseconds64_t;


typedef int __daddr_t;


typedef int __key_t;


typedef int __clockid_t;


typedef void* __timer_t;


typedef long  int __blksize_t;


typedef long  int __blkcnt_t;


typedef long  int __blkcnt64_t;


typedef unsigned long  int __fsblkcnt_t;


typedef unsigned long  int __fsblkcnt64_t;


typedef unsigned long  int __fsfilcnt_t;


typedef unsigned long  int __fsfilcnt64_t;


typedef long  int __fsword_t;


typedef long  int __ssize_t;


typedef long  int __syscall_slong_t;


typedef unsigned long  int __syscall_ulong_t;


typedef long  int __loff_t  ;


typedef char* __caddr_t;


typedef long  int __intptr_t;


typedef unsigned int __socklen_t;


typedef int __sig_atomic_t;


typedef unsigned long  long   ;


typedef long  int time_t  ;

struct timespec {long  int tv_sec  ; long  int tv_nsec  ; };



typedef int pid_t  ;


typedef char __s8;


typedef unsigned char __u8;


typedef short __s16;


typedef unsigned short int __u16;


typedef int __s32;


typedef unsigned int __u32;


typedef long long __s64;


typedef unsigned long  long __u64;

struct __kernel_fd_set {unsigned long  int fds_bits[1024/(8*sizeof(long))]; };

typedef struct __kernel_fd_set __kernel_fd_set  ;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;


typedef int __kernel_mqd_t;


typedef unsigned short int __kernel_old_uid_t;


typedef unsigned short int __kernel_old_gid_t;


typedef unsigned long  int __kernel_old_dev_t;


typedef long __kernel_long_t;


typedef unsigned long  int __kernel_ulong_t;


typedef unsigned long  int __kernel_ino_t  ;


typedef unsigned int __kernel_mode_t;


typedef int __kernel_pid_t;


typedef int __kernel_ipc_pid_t;


typedef unsigned int __kernel_uid_t;


typedef unsigned int __kernel_gid_t;


typedef long __kernel_suseconds_t  ;


typedef int __kernel_daddr_t;


typedef unsigned int __kernel_uid32_t;


typedef unsigned int __kernel_gid32_t;


typedef unsigned long  int __kernel_size_t  ;


typedef long __kernel_ssize_t  ;


typedef long __kernel_ptrdiff_t  ;

struct __kernel_fsid_t {int val[2]; };

typedef struct __kernel_fsid_t __kernel_fsid_t  ;


typedef long __kernel_off_t  ;


typedef long long __kernel_loff_t;


typedef long __kernel_old_time_t  ;


typedef long __kernel_time_t  ;


typedef long long __kernel_time64_t;


typedef long __kernel_clock_t  ;


typedef int __kernel_timer_t;


typedef int __kernel_clockid_t;


typedef char* __kernel_caddr_t;


typedef unsigned short int __kernel_uid16_t;


typedef unsigned short int __kernel_gid16_t;


typedef unsigned short int __le16  ;


typedef unsigned short int __be16  ;


typedef unsigned int __le32  ;


typedef unsigned int __be32  ;


typedef unsigned long  long __le64  ;


typedef unsigned long  long __be64  ;


typedef unsigned short int __sum16  ;


typedef unsigned int __wsum  ;


typedef unsigned int __poll_t;

struct sched_attr {unsigned int size  ; unsigned int sched_policy  ; unsigned long  long sched_flags  ; int sched_nice  ; unsigned int sched_priority  ; unsigned long  long sched_runtime  ; unsigned long  long sched_deadline  ; unsigned long  long sched_period  ; unsigned int sched_util_min  ; unsigned int sched_util_max  ; };


struct sched_param {int sched_priority; };



typedef unsigned long  int __cpu_mask;

struct cpu_set_t {unsigned long  int __bits[1024/(8*sizeof(unsigned long  int))]  ; };

typedef struct cpu_set_t cpu_set_t  ;

struct timeval {long  int tv_sec  ; long  int tv_usec  ; };


struct timex {unsigned int modes; long  int offset  ; long  int freq  ; long  int maxerror  ; long  int esterror  ; int status; long  int constant  ; long  int precision  ; long  int tolerance  ; struct timeval time  ; long  int tick  ; long  int ppsfreq  ; long  int jitter  ; int shift; long  int stabil  ; long  int jitcnt  ; long  int calcnt  ; long  int errcnt  ; long  int stbcnt  ; int tai; int :32; int :32; int :32; int :32; int :32; int :32; int :32; int :32; int :32; int :32; int :32; };



typedef long  int clock_t  ;

struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long  int tm_gmtoff; const char* tm_zone; };



typedef int clockid_t  ;


typedef void* timer_t  ;

struct itimerspec {struct timespec it_interval  ; struct timespec it_value  ; };


struct __locale_struct {struct __locale_data* __locales[13]; const unsigned short int* __ctype_b; const int* __ctype_tolower; const int* __ctype_toupper; const char* __names[13]; };


struct __locale_t {struct __locale_data* __locales[13]; const unsigned short int* __ctype_b; const int* __ctype_tolower; const int* __ctype_toupper; const char* __names[13]; };

typedef struct __locale_t* __locale_t  ;

struct locale_t {struct __locale_data* __locales[13]; const unsigned short int* __ctype_b; const int* __ctype_tolower; const int* __ctype_toupper; const char* __names[13]; };

typedef struct locale_t* locale_t  ;

union __atomic_wide_counter {unsigned long long int __value64; struct { unsigned int __low; unsigned int __high; }  __value32  ; };

typedef union __atomic_wide_counter __atomic_wide_counter  ;

struct __pthread_internal_list {struct __pthread_internal_list* __prev  ; struct __pthread_internal_list* __next  ; };


struct __pthread_list_t {struct __pthread_internal_list* __prev  ; struct __pthread_internal_list* __next  ; };

typedef struct __pthread_list_t __pthread_list_t  ;

struct __pthread_internal_slist {struct __pthread_internal_slist* __next  ; };


struct __pthread_slist_t {struct __pthread_internal_slist* __next  ; };

typedef struct __pthread_slist_t __pthread_slist_t  ;

struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision; struct __pthread_list_t __list  ; };


struct __pthread_rwlock_arch_t {unsigned int __readers; unsigned int __writers; unsigned int __wrphase_futex; unsigned int __writers_futex; unsigned int __pad3; unsigned int __pad4; int __cur_writer; int __shared; char __rwelision; unsigned char __pad1[7]; unsigned long  int __pad2; unsigned int __flags; };


struct __pthread_cond_s {union __atomic_wide_counter __wseq  ; union __atomic_wide_counter __g1_start  ; unsigned int __g_size[2]; unsigned int __g1_orig_size; unsigned int __wrefs; unsigned int __g_signals[2]; unsigned int __unused_initialized_1; unsigned int __unused_initialized_2; };



typedef unsigned int __tss_t;


typedef unsigned long  int __thrd_t;

struct __once_flag {int __data; };

typedef struct __once_flag __once_flag  ;


typedef unsigned long  int pthread_t;

union pthread_mutexattr_t {char __size[4]; int __align; };

typedef union pthread_mutexattr_t pthread_mutexattr_t  ;

union pthread_condattr_t {char __size[4]; int __align; };

typedef union pthread_condattr_t pthread_condattr_t  ;


typedef unsigned int pthread_key_t;


typedef int pthread_once_t;

union pthread_attr_t {char __size[56]; long  int __align; };

typedef union pthread_attr_t pthread_attr_t  ;

union pthread_mutex_t {struct __pthread_mutex_s __data  ; char __size[40]; long  int __align; };

typedef union pthread_mutex_t pthread_mutex_t  ;

union pthread_cond_t {struct __pthread_cond_s __data  ; char __size[48]; long long int __align; };

typedef union pthread_cond_t pthread_cond_t  ;

union pthread_rwlock_t {struct __pthread_rwlock_arch_t __data  ; char __size[56]; long  int __align; };

typedef union pthread_rwlock_t pthread_rwlock_t  ;

union pthread_rwlockattr_t {char __size[8]; long  int __align; };

typedef union pthread_rwlockattr_t pthread_rwlockattr_t  ;


typedef int pthread_spinlock_t;

union pthread_barrier_t {char __size[32]; long  int __align; };

typedef union pthread_barrier_t pthread_barrier_t  ;

union pthread_barrierattr_t {char __size[4]; int __align; };

typedef union pthread_barrierattr_t pthread_barrierattr_t  ;


typedef long  int __jmp_buf[8];

struct __sigset_t {unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))]; };

typedef struct __sigset_t __sigset_t  ;

struct __jmp_buf_tag {long  int __jmpbuf[8]  ; int __mask_was_saved; struct __sigset_t __saved_mask  ; };


enum   __anoymous_enum_top0 { PTHREAD_CREATE_JOINABLE ,PTHREAD_CREATE_DETACHED };/* b */


enum   __anoymous_enum_top1 { PTHREAD_MUTEX_TIMED_NP ,PTHREAD_MUTEX_RECURSIVE_NP ,PTHREAD_MUTEX_ERRORCHECK_NP ,PTHREAD_MUTEX_ADAPTIVE_NP ,PTHREAD_MUTEX_NORMAL=((0)),PTHREAD_MUTEX_RECURSIVE=((1)),PTHREAD_MUTEX_ERRORCHECK=((2)),PTHREAD_MUTEX_DEFAULT=(((0))),PTHREAD_MUTEX_FAST_NP=((0))};/* b */


enum   __anoymous_enum_top2 { PTHREAD_MUTEX_STALLED ,PTHREAD_MUTEX_STALLED_NP=((0)),PTHREAD_MUTEX_ROBUST ,PTHREAD_MUTEX_ROBUST_NP=(((0)+1))};/* b */


enum   __anoymous_enum_top3 { PTHREAD_PRIO_NONE ,PTHREAD_PRIO_INHERIT ,PTHREAD_PRIO_PROTECT };/* b */


enum   __anoymous_enum_top4 { PTHREAD_RWLOCK_PREFER_READER_NP ,PTHREAD_RWLOCK_PREFER_WRITER_NP ,PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP ,PTHREAD_RWLOCK_DEFAULT_NP=((0))};/* b */


enum   __anoymous_enum_top5 { PTHREAD_INHERIT_SCHED ,PTHREAD_EXPLICIT_SCHED };/* b */


enum   __anoymous_enum_top6 { PTHREAD_SCOPE_SYSTEM ,PTHREAD_SCOPE_PROCESS };/* b */


enum   __anoymous_enum_top7 { PTHREAD_PROCESS_PRIVATE ,PTHREAD_PROCESS_SHARED };/* b */


struct _pthread_cleanup_buffer {void (*__routine)(void*); void* __arg; int __canceltype; struct _pthread_cleanup_buffer* __prev  ; };


enum   __anoymous_enum_top8 { PTHREAD_CANCEL_ENABLE ,PTHREAD_CANCEL_DISABLE };/* b */


enum   __anoymous_enum_top9 { PTHREAD_CANCEL_DEFERRED ,PTHREAD_CANCEL_ASYNCHRONOUS };/* b */


struct __cancel_jmp_buf_tag {long  int __cancel_jmp_buf[8]  ; int __mask_was_saved; };


struct __pthread_unwind_buf_t {struct __cancel_jmp_buf_tag __cancel_jmp_buf[1]  ; void* __pad[4]; };

typedef struct __pthread_unwind_buf_t __pthread_unwind_buf_t __attribute__ ((__aligned__)) ;

struct __pthread_cleanup_frame {void (*__cancel_routine)(void*); void* __cancel_arg; int __do_it; int __cancel_type; };



typedef unsigned char u_char  ;


typedef unsigned short int u_short  ;


typedef unsigned int u_int  ;


typedef unsigned long  int u_long  ;


typedef long  int quad_t  ;


typedef unsigned long  int u_quad_t  ;

struct fsid_t {int __val[2]; };

typedef struct fsid_t fsid_t  ;


typedef long  int loff_t  ;


typedef unsigned long  int ino_t  ;


typedef unsigned long  int ino64_t  ;


typedef unsigned long  int dev_t  ;


typedef unsigned int gid_t  ;


typedef unsigned int mode_t  ;


typedef unsigned long  int nlink_t  ;


typedef unsigned int uid_t  ;


typedef long  int off_t  ;


typedef long  int off64_t  ;


typedef unsigned int id_t  ;


typedef long  int ssize_t  ;


typedef int daddr_t  ;


typedef char* caddr_t  ;


typedef int key_t  ;


typedef unsigned int useconds_t  ;


typedef long  int suseconds_t  ;


typedef unsigned long  int ulong;


typedef unsigned short int ushort;


typedef unsigned int uint;


typedef char int8_t  ;


typedef short int int16_t  ;


typedef int int32_t  ;


typedef long  int int64_t  ;


typedef unsigned char u_int8_t  ;


typedef unsigned short int u_int16_t  ;


typedef unsigned int u_int32_t  ;


typedef unsigned long  int u_int64_t  ;


typedef int register_t __attribute__ ((__mode__ (__word__)));

struct sigset_t {unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))]; };

typedef struct sigset_t sigset_t  ;


typedef long  int __fd_mask;

struct fd_set {long  int fds_bits[1024/(8*(int)sizeof(long  int))]  ; };

typedef struct fd_set fd_set  ;


typedef long  int fd_mask  ;


typedef long  int blksize_t  ;


typedef long  int blkcnt_t  ;


typedef unsigned long  int fsblkcnt_t  ;


typedef unsigned long  int fsfilcnt_t  ;


typedef long  int blkcnt64_t  ;


typedef unsigned long  int fsblkcnt64_t  ;


typedef unsigned long  int fsfilcnt64_t  ;

union sem_t {char __size[32]; long  int __align; };

typedef union sem_t sem_t  ;


typedef unsigned int tss_t  ;


typedef void (*tss_dtor_t)(void*);


typedef unsigned long  int thrd_t  ;


typedef int (*thrd_start_t)(void*);

enum   __anoymous_enum_top10 { thrd_success=(0),thrd_busy=(1),thrd_error=(2),thrd_nomem=(3),thrd_timedout=(4)};/* b */


enum   __anoymous_enum_top11 { mtx_plain=(0),mtx_recursive=(1),mtx_timed=(2)};/* b */


struct once_flag {int __data; };

typedef struct once_flag once_flag  ;

union mtx_t {char __size[40]; long  int __align; };

typedef union mtx_t mtx_t  ;

union cnd_t {char __size[48]; long long int __align; };

typedef union cnd_t cnd_t  ;

struct stack_t {void* ss_sp; int ss_flags; unsigned long ss_size  ; };

typedef struct stack_t stack_t  ;


typedef long long int greg_t;


typedef long long int gregset_t[23]  ;

enum   __anoymous_enum_top12 { REG_R8=(0),REG_R9 ,REG_R10 ,REG_R11 ,REG_R12 ,REG_R13 ,REG_R14 ,REG_R15 ,REG_RDI ,REG_RSI ,REG_RBP ,REG_RBX ,REG_RDX ,REG_RAX ,REG_RCX ,REG_RSP ,REG_RIP ,REG_EFL ,REG_CSGSFS ,REG_ERR ,REG_TRAPNO ,REG_OLDMASK ,REG_CR2 };/* b */


struct _libc_fpxreg {unsigned short int significand[4]; unsigned short int exponent; unsigned short int __glibc_reserved1[3]; };


struct _libc_xmmreg {unsigned int element[4]  ; };


struct _libc_fpstate {unsigned short int cwd  ; unsigned short int swd  ; unsigned short int ftw  ; unsigned short int fop  ; unsigned long  int rip  ; unsigned long  int rdp  ; unsigned int mxcsr  ; unsigned int mxcr_mask  ; struct _libc_fpxreg _st[8]  ; struct _libc_xmmreg _xmm[16]  ; unsigned int __glibc_reserved1[24]  ; };


struct fpregset_t {unsigned short int cwd  ; unsigned short int swd  ; unsigned short int ftw  ; unsigned short int fop  ; unsigned long  int rip  ; unsigned long  int rdp  ; unsigned int mxcsr  ; unsigned int mxcr_mask  ; struct _libc_fpxreg _st[8]  ; struct _libc_xmmreg _xmm[16]  ; unsigned int __glibc_reserved1[24]  ; };

typedef struct fpregset_t* fpregset_t  ;

struct mcontext_t {long long int gregs[23]  ; struct fpregset_t* fpregs  ; unsigned long  long __reserved1[8]; };

typedef struct mcontext_t mcontext_t  ;

struct ucontext_t {unsigned long  int uc_flags; struct ucontext_t* uc_link  ; struct stack_t uc_stack  ; struct mcontext_t uc_mcontext  ; struct sigset_t uc_sigmask  ; struct _libc_fpstate __fpregs_mem  ; unsigned long long int __ssp[4]; };

typedef struct ucontext_t ucontext_t  ;

/// variable definition ///
extern char* __tzname[2];
extern int __daylight;
extern long  int __timezone;
extern char* tzname[2];
extern int daylight;
extern long  int timezone;
extern int getdate_err;
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list );
int snprintf(char* , unsigned long  int , const char* , ...);
int clone(int (*__fn)(void*), void* __child_stack, int __flags, void* __arg, ...);
int unshare(int __flags);
int sched_getcpu();
int getcpu(unsigned int* , unsigned int* );
int setns(int __fd, int __nstype);
int sched_setattr(int tid  , struct sched_attr* attr  , unsigned int flags);
int sched_getattr(int tid  , struct sched_attr* attr  , unsigned int size, unsigned int flags);
int __sched_cpucount(unsigned long __setsize  , const struct cpu_set_t* __setp  );
struct cpu_set_t* __sched_cpualloc(unsigned long __count  );
void __sched_cpufree(struct cpu_set_t* __set  );
int sched_setparam(int __pid  , const struct sched_param* __param  );
int sched_getparam(int __pid  , struct sched_param* __param  );
int sched_setscheduler(int __pid  , int __policy, const struct sched_param* __param  );
int sched_getscheduler(int __pid  );
int sched_yield();
int sched_get_priority_max(int __algorithm);
int sched_get_priority_min(int __algorithm);
int sched_rr_get_interval(int __pid  , struct timespec* __t  );
int sched_setaffinity(int __pid  , unsigned long __cpusetsize  , const struct cpu_set_t* __cpuset  );
int sched_getaffinity(int __pid  , unsigned long __cpusetsize  , struct cpu_set_t* __cpuset  );
int clock_adjtime(int __clock_id  , struct timex* __utx  );
long  int clock();
long  int time(long  int* __timer  );
double difftime(long  int __time1  , long  int __time0  );
long  int mktime(struct tm* __tp  );
unsigned long strftime(char* __s, unsigned long __maxsize  , const char* __format, const struct tm* __tp  );
char* strptime(const char* __s, const char* __fmt, struct tm* __tp  );
unsigned long strftime_l(char* __s, unsigned long __maxsize  , const char* __format, const struct tm* __tp  , struct locale_t* __loc  );
char* strptime_l(const char* __s, const char* __fmt, struct tm* __tp  , struct locale_t* __loc  );
struct tm* gmtime(const long  int* __timer  );
struct tm* localtime(const long  int* __timer  );
struct tm* gmtime_r(const long  int* __timer  , struct tm* __tp  );
struct tm* localtime_r(const long  int* __timer  , struct tm* __tp  );
char* asctime(const struct tm* __tp  );
char* ctime(const long  int* __timer  );
char* asctime_r(const struct tm* __tp  , char* __buf);
char* ctime_r(const long  int* __timer  , char* __buf);
void tzset();
long  int timegm(struct tm* __tp  );
long  int timelocal(struct tm* __tp  );
int dysize(int __year);
int nanosleep(const struct timespec* __requested_time  , struct timespec* __remaining  );
int clock_getres(int __clock_id  , struct timespec* __res  );
int clock_gettime(int __clock_id  , struct timespec* __tp  );
int clock_settime(int __clock_id  , const struct timespec* __tp  );
int clock_nanosleep(int __clock_id  , int __flags, const struct timespec* __req  , struct timespec* __rem  );
int clock_getcpuclockid(int __pid  , int* __clock_id  );
int timer_create(int __clock_id  , struct sigevent* __evp  , void** __timerid  );
int timer_delete(void* __timerid  );
int timer_settime(void* __timerid  , int __flags, const struct itimerspec* __value  , struct itimerspec* __ovalue  );
int timer_gettime(void* __timerid  , struct itimerspec* __value  );
int timer_getoverrun(void* __timerid  );
int timespec_get(struct timespec* __ts  , int __base);
int timespec_getres(struct timespec* __ts  , int __base);
struct tm* getdate(const char* __string);
int getdate_r(const char* __string, struct tm* __resbufp  );
long  int __sysconf(int __name);
int pthread_create(unsigned long  int* __newthread  , const union pthread_attr_t* __attr  , void* (*__start_routine)(void*), void* __arg);
void pthread_exit(void* __retval);
int pthread_join(unsigned long  int __th  , void** __thread_return);
int pthread_tryjoin_np(unsigned long  int __th  , void** __thread_return);
int pthread_timedjoin_np(unsigned long  int __th  , void** __thread_return, const struct timespec* __abstime  );
int pthread_clockjoin_np(unsigned long  int __th  , void** __thread_return, int __clockid  , const struct timespec* __abstime  );
int pthread_detach(unsigned long  int __th  );
unsigned long  int pthread_self();
int pthread_equal(unsigned long  int __thread1  , unsigned long  int __thread2  );
int pthread_attr_init(union pthread_attr_t* __attr  );
int pthread_attr_destroy(union pthread_attr_t* __attr  );
int pthread_attr_getdetachstate(const union pthread_attr_t* __attr  , int* __detachstate);
int pthread_attr_setdetachstate(union pthread_attr_t* __attr  , int __detachstate);
int pthread_attr_getguardsize(const union pthread_attr_t* __attr  , unsigned long* __guardsize  );
int pthread_attr_setguardsize(union pthread_attr_t* __attr  , unsigned long __guardsize  );
int pthread_attr_getschedparam(const union pthread_attr_t* __attr  , struct sched_param* __param  );
int pthread_attr_setschedparam(union pthread_attr_t* __attr  , const struct sched_param* __param  );
int pthread_attr_getschedpolicy(const union pthread_attr_t* __attr  , int* __policy);
int pthread_attr_setschedpolicy(union pthread_attr_t* __attr  , int __policy);
int pthread_attr_getinheritsched(const union pthread_attr_t* __attr  , int* __inherit);
int pthread_attr_setinheritsched(union pthread_attr_t* __attr  , int __inherit);
int pthread_attr_getscope(const union pthread_attr_t* __attr  , int* __scope);
int pthread_attr_setscope(union pthread_attr_t* __attr  , int __scope);
int pthread_attr_getstackaddr(const union pthread_attr_t* __attr  , void** __stackaddr);
int pthread_attr_setstackaddr(union pthread_attr_t* __attr  , void* __stackaddr);
int pthread_attr_getstacksize(const union pthread_attr_t* __attr  , unsigned long* __stacksize  );
int pthread_attr_setstacksize(union pthread_attr_t* __attr  , unsigned long __stacksize  );
int pthread_attr_getstack(const union pthread_attr_t* __attr  , void** __stackaddr, unsigned long* __stacksize  );
int pthread_attr_setstack(union pthread_attr_t* __attr  , void* __stackaddr, unsigned long __stacksize  );
int pthread_attr_setaffinity_np(union pthread_attr_t* __attr  , unsigned long __cpusetsize  , const struct cpu_set_t* __cpuset  );
int pthread_attr_getaffinity_np(const union pthread_attr_t* __attr  , unsigned long __cpusetsize  , struct cpu_set_t* __cpuset  );
int pthread_getattr_default_np(union pthread_attr_t* __attr  );
int pthread_attr_setsigmask_np(union pthread_attr_t* __attr  , const struct __sigset_t* sigmask  );
int pthread_attr_getsigmask_np(const union pthread_attr_t* __attr  , struct __sigset_t* sigmask  );
int pthread_setattr_default_np(const union pthread_attr_t* __attr  );
int pthread_getattr_np(unsigned long  int __th  , union pthread_attr_t* __attr  );
int pthread_setschedparam(unsigned long  int __target_thread  , int __policy, const struct sched_param* __param  );
int pthread_getschedparam(unsigned long  int __target_thread  , int* __policy, struct sched_param* __param  );
int pthread_setschedprio(unsigned long  int __target_thread  , int __prio);
int pthread_getname_np(unsigned long  int __target_thread  , char* __buf, unsigned long __buflen  );
int pthread_setname_np(unsigned long  int __target_thread  , const char* __name);
int pthread_getconcurrency();
int pthread_setconcurrency(int __level);
int pthread_yield();
int pthread_setaffinity_np(unsigned long  int __th  , unsigned long __cpusetsize  , const struct cpu_set_t* __cpuset  );
int pthread_getaffinity_np(unsigned long  int __th  , unsigned long __cpusetsize  , struct cpu_set_t* __cpuset  );
int pthread_once(int* __once_control  , void (*__init_routine)());
int pthread_setcancelstate(int __state, int* __oldstate);
int pthread_setcanceltype(int __type, int* __oldtype);
int pthread_cancel(unsigned long  int __th  );
void pthread_testcancel();
void __pthread_register_cancel(struct __pthread_unwind_buf_t* __buf  );
void __pthread_unregister_cancel(struct __pthread_unwind_buf_t* __buf  );
void __pthread_register_cancel_defer(struct __pthread_unwind_buf_t* __buf  );
void __pthread_unregister_cancel_restore(struct __pthread_unwind_buf_t* __buf  );
void __pthread_unwind_next(struct __pthread_unwind_buf_t* __buf  );
int __sigsetjmp(struct __jmp_buf_tag __env[1]  , int __savemask);
int pthread_mutex_init(union pthread_mutex_t* __mutex  , const union pthread_mutexattr_t* __mutexattr  );
int pthread_mutex_destroy(union pthread_mutex_t* __mutex  );
int pthread_mutex_trylock(union pthread_mutex_t* __mutex  );
int pthread_mutex_lock(union pthread_mutex_t* __mutex  );
int pthread_mutex_timedlock(union pthread_mutex_t* __mutex  , const struct timespec* __abstime  );
int pthread_mutex_clocklock(union pthread_mutex_t* __mutex  , int __clockid  , const struct timespec* __abstime  );
int pthread_mutex_unlock(union pthread_mutex_t* __mutex  );
int pthread_mutex_getprioceiling(const union pthread_mutex_t* __mutex  , int* __prioceiling);
int pthread_mutex_setprioceiling(union pthread_mutex_t* __mutex  , int __prioceiling, int* __old_ceiling);
int pthread_mutex_consistent(union pthread_mutex_t* __mutex  );
int pthread_mutexattr_init(union pthread_mutexattr_t* __attr  );
int pthread_mutexattr_destroy(union pthread_mutexattr_t* __attr  );
int pthread_mutexattr_getpshared(const union pthread_mutexattr_t* __attr  , int* __pshared);
int pthread_mutexattr_setpshared(union pthread_mutexattr_t* __attr  , int __pshared);
int pthread_mutexattr_gettype(const union pthread_mutexattr_t* __attr  , int* __kind);
int pthread_mutexattr_settype(union pthread_mutexattr_t* __attr  , int __kind);
int pthread_mutexattr_getprotocol(const union pthread_mutexattr_t* __attr  , int* __protocol);
int pthread_mutexattr_setprotocol(union pthread_mutexattr_t* __attr  , int __protocol);
int pthread_mutexattr_getprioceiling(const union pthread_mutexattr_t* __attr  , int* __prioceiling);
int pthread_mutexattr_setprioceiling(union pthread_mutexattr_t* __attr  , int __prioceiling);
int pthread_mutexattr_getrobust(const union pthread_mutexattr_t* __attr  , int* __robustness);
int pthread_mutexattr_setrobust(union pthread_mutexattr_t* __attr  , int __robustness);
int pthread_rwlock_init(union pthread_rwlock_t* __rwlock  , const union pthread_rwlockattr_t* __attr  );
int pthread_rwlock_destroy(union pthread_rwlock_t* __rwlock  );
int pthread_rwlock_rdlock(union pthread_rwlock_t* __rwlock  );
int pthread_rwlock_tryrdlock(union pthread_rwlock_t* __rwlock  );
int pthread_rwlock_timedrdlock(union pthread_rwlock_t* __rwlock  , const struct timespec* __abstime  );
int pthread_rwlock_clockrdlock(union pthread_rwlock_t* __rwlock  , int __clockid  , const struct timespec* __abstime  );
int pthread_rwlock_wrlock(union pthread_rwlock_t* __rwlock  );
int pthread_rwlock_trywrlock(union pthread_rwlock_t* __rwlock  );
int pthread_rwlock_timedwrlock(union pthread_rwlock_t* __rwlock  , const struct timespec* __abstime  );
int pthread_rwlock_clockwrlock(union pthread_rwlock_t* __rwlock  , int __clockid  , const struct timespec* __abstime  );
int pthread_rwlock_unlock(union pthread_rwlock_t* __rwlock  );
int pthread_rwlockattr_init(union pthread_rwlockattr_t* __attr  );
int pthread_rwlockattr_destroy(union pthread_rwlockattr_t* __attr  );
int pthread_rwlockattr_getpshared(const union pthread_rwlockattr_t* __attr  , int* __pshared);
int pthread_rwlockattr_setpshared(union pthread_rwlockattr_t* __attr  , int __pshared);
int pthread_rwlockattr_getkind_np(const union pthread_rwlockattr_t* __attr  , int* __pref);
int pthread_rwlockattr_setkind_np(union pthread_rwlockattr_t* __attr  , int __pref);
int pthread_cond_init(union pthread_cond_t* __cond  , const union pthread_condattr_t* __cond_attr  );
int pthread_cond_destroy(union pthread_cond_t* __cond  );
int pthread_cond_signal(union pthread_cond_t* __cond  );
int pthread_cond_broadcast(union pthread_cond_t* __cond  );
int pthread_cond_wait(union pthread_cond_t* __cond  , union pthread_mutex_t* __mutex  );
int pthread_cond_timedwait(union pthread_cond_t* __cond  , union pthread_mutex_t* __mutex  , const struct timespec* __abstime  );
int pthread_cond_clockwait(union pthread_cond_t* __cond  , union pthread_mutex_t* __mutex  , int __clock_id  , const struct timespec* __abstime  );
int pthread_condattr_init(union pthread_condattr_t* __attr  );
int pthread_condattr_destroy(union pthread_condattr_t* __attr  );
int pthread_condattr_getpshared(const union pthread_condattr_t* __attr  , int* __pshared);
int pthread_condattr_setpshared(union pthread_condattr_t* __attr  , int __pshared);
int pthread_condattr_getclock(const union pthread_condattr_t* __attr  , int* __clock_id  );
int pthread_condattr_setclock(union pthread_condattr_t* __attr  , int __clock_id  );
int pthread_spin_init(int* __lock  , int __pshared);
int pthread_spin_destroy(int* __lock  );
int pthread_spin_lock(int* __lock  );
int pthread_spin_trylock(int* __lock  );
int pthread_spin_unlock(int* __lock  );
int pthread_barrier_init(union pthread_barrier_t* __barrier  , const union pthread_barrierattr_t* __attr  , unsigned int __count);
int pthread_barrier_destroy(union pthread_barrier_t* __barrier  );
int pthread_barrier_wait(union pthread_barrier_t* __barrier  );
int pthread_barrierattr_init(union pthread_barrierattr_t* __attr  );
int pthread_barrierattr_destroy(union pthread_barrierattr_t* __attr  );
int pthread_barrierattr_getpshared(const union pthread_barrierattr_t* __attr  , int* __pshared);
int pthread_barrierattr_setpshared(union pthread_barrierattr_t* __attr  , int __pshared);
int pthread_key_create(unsigned int* __key  , void (*__destr_function)(void*));
int pthread_key_delete(unsigned int __key  );
void* pthread_getspecific(unsigned int __key  );
int pthread_setspecific(unsigned int __key  , const void* __pointer);
int pthread_getcpuclockid(unsigned long  int __thread_id  , int* __clock_id  );
int pthread_gettid_np(unsigned long  int __thread_id  );
int pthread_atfork(void (*__prepare)(), void (*__parent)(), void (*__child)());
int select(int __nfds, struct fd_set* __readfds  , struct fd_set* __writefds  , struct fd_set* __exceptfds  , struct timeval* __timeout  );
int pselect(int __nfds, struct fd_set* __readfds  , struct fd_set* __writefds  , struct fd_set* __exceptfds  , const struct timespec* __timeout  , const struct __sigset_t* __sigmask  );
int sem_init(union sem_t* __sem  , int __pshared, unsigned int __value);
int sem_destroy(union sem_t* __sem  );
union sem_t* sem_open(const char* __name, int __oflag, ...);
int sem_close(union sem_t* __sem  );
int sem_unlink(const char* __name);
int sem_wait(union sem_t* __sem  );
int sem_timedwait(union sem_t* __sem  , const struct timespec* __abstime  );
int sem_clockwait(union sem_t* __sem  , int clock  , const struct timespec* __abstime  );
int sem_trywait(union sem_t* __sem  );
int sem_post(union sem_t* __sem  );
int sem_getvalue(union sem_t* __sem  , int* __sval);
int thrd_create(unsigned long  int* __thr  , int (*__func)(void*)  , void* __arg);
int thrd_equal(unsigned long  int __lhs  , unsigned long  int __rhs  );
unsigned long  int thrd_current();
int thrd_sleep(const struct timespec* __time_point  , struct timespec* __remaining  );
void thrd_exit(int __res);
int thrd_detach(unsigned long  int __thr  );
int thrd_join(unsigned long  int __thr  , int* __res);
void thrd_yield();
int mtx_init(union mtx_t* __mutex  , int __type);
int mtx_lock(union mtx_t* __mutex  );
int mtx_timedlock(union mtx_t* __mutex  , const struct timespec* __time_point  );
int mtx_trylock(union mtx_t* __mutex  );
int mtx_unlock(union mtx_t* __mutex  );
void mtx_destroy(union mtx_t* __mutex  );
void call_once(struct once_flag* __flag  , void (*__func)());
int cnd_init(union cnd_t* __cond  );
int cnd_signal(union cnd_t* __cond  );
int cnd_broadcast(union cnd_t* __cond  );
int cnd_wait(union cnd_t* __cond  , union mtx_t* __mutex  );
int cnd_timedwait(union cnd_t* __cond  , union mtx_t* __mutex  , const struct timespec* __time_point  );
void cnd_destroy(union cnd_t* __COND  );
int tss_create(unsigned int* __tss_id  , void (*__destructor)(void*)  );
void* tss_get(unsigned int __tss_id  );
int tss_set(unsigned int __tss_id  , void* __val);
void tss_delete(unsigned int __tss_id  );
int getcontext(struct ucontext_t* __ucp  );
int setcontext(const struct ucontext_t* __ucp  );
int swapcontext(struct ucontext_t* __oucp  , const struct ucontext_t* __ucp  );
void makecontext(struct ucontext_t* __ucp  , void (*__func)(), int __argc, ...);
int test_headers_thread();
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx  )
{
    return ((unsigned short int)((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx  )
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx  )
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x  )
{
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x  )
{
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x  )
{
    return __x;
}

// body function
int test_headers_thread()
{
    return 0;
}

