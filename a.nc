
/*
typedef long		__kernel_long_t;
typedef __kernel_long_t	__kernel_old_time_t;
typedef __kernel_long_t	__kernel_time_t;
typedef __kernel_long_t	__kernel_old_time_t;
typedef __kernel_long_t		__kernel_suseconds_t;
struct timeval {
	__kernel_old_time_t	tv_sec;		
	__kernel_suseconds_t	tv_usec;	
};

struct itimerspec {
	struct timespec it_interval;
	struct timespec it_value;	
};

struct itimerval {
	struct timeval it_interval;
	struct timeval it_value;	
};
*/
struct r_debug
  {
    
    int r_version;

    struct link_map *r_map;	

    




    int r_brk;
    enum
      {
	

	RT_CONSISTENT,		
	RT_ADD,			
	RT_DELETE		
      } r_state;

    int r_ldbase;	
  };

int main(int argc, char** argv) 
{
    return 0;
}

