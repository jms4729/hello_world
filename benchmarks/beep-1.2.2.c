/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 56 "/usr/include/bits/types.h"
typedef long long __quad_t;
#line 141 "/usr/include/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/bits/types.h"
typedef __quad_t __off64_t;
#line 150 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;
#line 211 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stddef.h"
typedef unsigned int size_t;
#line 106 "/usr/include/getopt.h"
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
#line 84 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int  );
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 170 "/usr/include/libio.h"
struct _IO_FILE;
#line 180 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 186 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 271 "/usr/include/libio.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
#line 72 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
struct beep_parms_t {
   float freq ;
   int length ;
   int reps ;
   int delay ;
   int end_delay ;
   int stdin_beep ;
   struct beep_parms_t *next ;
};
#line 72 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
typedef struct beep_parms_t beep_parms_t;
#line 73 "/usr/include/fcntl.h"
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file , int __oflag 
                                                   , ...) ;
#line 59 "/usr/include/getopt.h"
extern char *optarg ;
#line 175
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc , char * const  *___argv ,
                                                     char const   *__shortopts , struct option  const  *__longopts ,
                                                     int *__longind ) ;
#line 101 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
#line 145 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 146
extern struct _IO_FILE *stdout ;
#line 147
extern struct _IO_FILE *stderr ;
#line 219
extern int fflush(FILE *__stream ) ;
#line 313
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream , char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
#line 333
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 339
extern int printf(char const   * __restrict  __format  , ...) ;
#line 415
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s , char const   * __restrict  __format 
                                                , ...)  __asm__("__isoc99_sscanf")  ;
#line 562
extern int putchar(int __c ) ;
#line 604
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
#line 662
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 819
extern void perror(char const   *__s ) ;
#line 471 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
#line 488
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
#line 543
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
#line 350 "/usr/include/unistd.h"
extern int close(int __fd ) ;
#line 456
extern int usleep(__useconds_t __useconds ) ;
#line 42 "/usr/include/sys/ioctl.h"
extern  __attribute__((__nothrow__)) int ioctl(int __fd , unsigned long __request 
                                               , ...) ;
#line 51 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
char *copyright  =    (char *)"Copyright (C) Johnathan Nightingale, 2002.  Use and Distribution subject to GPL.  For information: http://www.gnu.org/copyleft/.";
#line 91 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
int console_fd  =    -1;
#line 95 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
void handle_signal(int signum ) 
{ 


  {
  {
#line 97
  if (signum == 2) {
#line 97
    goto case_2;
  }
#line 96
  goto switch_break;
  case_2: /* CIL Label */ 
#line 98
  if (console_fd >= 0) {
    {
    {
#line 100
    ioctl(console_fd, 19247UL, 0);
    }
    {
#line 101
    close(console_fd);
    }
    {
#line 102
    exit(signum);
    }
    }
  } else {
    {
    {
#line 105
    exit(signum);
    }
    }
  }
  switch_break: /* CIL Label */ ;
  }
#line 108
  return;
}
}
#line 111 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
void usage_bail(char const   *executable_name ) 
{ 
  char *__cil_tmp2 ;
  char *__cil_tmp3 ;
  char *__cil_tmp4 ;
  char *__cil_tmp5 ;

  {
  {
  {
#line 112
  printf((char const   */* __restrict  */)"Usage:\n%s [-f freq] [-l length] [-r reps] [-d delay] [-D delay] [-s] [-c]\n",
         executable_name);
  }
  {
#line 115
  printf((char const   */* __restrict  */)"%s [Options...] [-n] [--new] [Options...] ... \n",
         executable_name);
  }
  {
#line 116
  printf((char const   */* __restrict  */)"%s [-h] [--help]\n", executable_name);
  }
  {
#line 117
  printf((char const   */* __restrict  */)"%s [-v] [-V] [--version]\n", executable_name);
  }
  {
#line 118
  exit(1);
  }
  }
}
}
#line 141 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
void parse_command_line(int argc , char **argv , beep_parms_t *result ) 
{ 
  int c ;
  struct option opt_list[4] ;
  int argval ;
  float argfreq ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  void *tmp___4 ;
  void *__cil_tmp14 ;
  int __cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;
  char *__cil_tmp26 ;

  {
#line 144
  opt_list[0].name = "help";
#line 144
  opt_list[0].has_arg = 0;
#line 144
  opt_list[0].flag = (int *)((void *)0);
#line 144
  opt_list[0].val = 'h';
#line 144
  opt_list[1].name = "version";
#line 144
  opt_list[1].has_arg = 0;
#line 144
  opt_list[1].flag = (int *)((void *)0);
#line 144
  opt_list[1].val = 'V';
#line 144
  opt_list[2].name = "new";
#line 144
  opt_list[2].has_arg = 0;
#line 144
  opt_list[2].flag = (int *)((void *)0);
#line 144
  opt_list[2].val = 'n';
#line 144
  opt_list[3].name = (char const   *)0;
#line 144
  opt_list[3].has_arg = 0;
#line 144
  opt_list[3].flag = (int *)0;
#line 144
  opt_list[3].val = 0;
  {
  {
#line 148
  while (1) {
    while_continue___0: /* CIL Label */ ;
    while_continue: /* CIL Label */ ;
    {
    {
#line 148
    c = getopt_long(argc, (char * const  *)argv, "f:l:r:d:D:schvVn", (struct option  const  *)(opt_list),
                    (int *)((void *)0));
    }
    }
#line 148
    if (! (c != -1)) {
#line 148
      goto while_break;
    }
#line 150
    argval = -1;
#line 151
    argfreq = (float )-1;
    {
#line 153
    if (c == 102) {
#line 153
      goto case_102;
    }
#line 160
    if (c == 108) {
#line 160
      goto case_108;
    }
#line 166
    if (c == 114) {
#line 166
      goto case_114;
    }
#line 172
    if (c == 100) {
#line 172
      goto case_100;
    }
#line 180
    if (c == 68) {
#line 180
      goto case_68;
    }
#line 188
    if (c == 115) {
#line 188
      goto case_115;
    }
#line 191
    if (c == 99) {
#line 191
      goto case_99;
    }
#line 195
    if (c == 86) {
#line 195
      goto case_86;
    }
#line 195
    if (c == 118) {
#line 195
      goto case_86;
    }
#line 199
    if (c == 110) {
#line 199
      goto case_110;
    }
#line 211
    goto switch_default;
    case_102: /* CIL Label */ 
    {
    {
#line 154
    tmp = sscanf((char const   */* __restrict  */)optarg, (char const   */* __restrict  */)"%f",
                 & argfreq);
    }
    }
#line 154
    if (tmp) {
#line 154
      if (argfreq >= (float )20000) {
        {
        {
#line 156
        usage_bail((char const   *)*(argv + 0));
        }
        }
      } else
#line 154
      if (argfreq <= (float )0) {
        {
        {
#line 156
        usage_bail((char const   *)*(argv + 0));
        }
        }
      } else {
#line 158
        result->freq = argfreq;
      }
    } else {
      {
      {
#line 156
      usage_bail((char const   *)*(argv + 0));
      }
      }
    }
#line 159
    goto switch_break;
    case_108: /* CIL Label */ 
    {
    {
#line 161
    tmp___0 = sscanf((char const   */* __restrict  */)optarg, (char const   */* __restrict  */)"%d",
                     & argval);
    }
    }
#line 161
    if (tmp___0) {
#line 161
      if (argval < 0) {
        {
        {
#line 162
        usage_bail((char const   *)*(argv + 0));
        }
        }
      } else {
#line 164
        result->length = argval;
      }
    } else {
      {
      {
#line 162
      usage_bail((char const   *)*(argv + 0));
      }
      }
    }
#line 165
    goto switch_break;
    case_114: /* CIL Label */ 
    {
    {
#line 167
    tmp___1 = sscanf((char const   */* __restrict  */)optarg, (char const   */* __restrict  */)"%d",
                     & argval);
    }
    }
#line 167
    if (tmp___1) {
#line 167
      if (argval < 0) {
        {
        {
#line 168
        usage_bail((char const   *)*(argv + 0));
        }
        }
      } else {
#line 170
        result->reps = argval;
      }
    } else {
      {
      {
#line 168
      usage_bail((char const   *)*(argv + 0));
      }
      }
    }
#line 171
    goto switch_break;
    case_100: /* CIL Label */ 
    {
    {
#line 173
    tmp___2 = sscanf((char const   */* __restrict  */)optarg, (char const   */* __restrict  */)"%d",
                     & argval);
    }
    }
#line 173
    if (tmp___2) {
#line 173
      if (argval < 0) {
        {
        {
#line 174
        usage_bail((char const   *)*(argv + 0));
        }
        }
      } else {
#line 176
        result->delay = argval;
#line 177
        result->end_delay = 0;
      }
    } else {
      {
      {
#line 174
      usage_bail((char const   *)*(argv + 0));
      }
      }
    }
#line 179
    goto switch_break;
    case_68: /* CIL Label */ 
    {
    {
#line 181
    tmp___3 = sscanf((char const   */* __restrict  */)optarg, (char const   */* __restrict  */)"%d",
                     & argval);
    }
    }
#line 181
    if (tmp___3) {
#line 181
      if (argval < 0) {
        {
        {
#line 182
        usage_bail((char const   *)*(argv + 0));
        }
        }
      } else {
#line 184
        result->delay = argval;
#line 185
        result->end_delay = 1;
      }
    } else {
      {
      {
#line 182
      usage_bail((char const   *)*(argv + 0));
      }
      }
    }
#line 187
    goto switch_break;
    case_115: /* CIL Label */ 
#line 189
    result->stdin_beep = 1;
#line 190
    goto switch_break;
    case_99: /* CIL Label */ 
#line 192
    result->stdin_beep = 2;
#line 193
    goto switch_break;
    case_86: /* CIL Label */ 
    case_118: /* CIL Label */ 
    {
    {
#line 196
    printf((char const   */* __restrict  */)"%s\n", "beep-1.2.2");
    }
    {
#line 197
    exit(0);
    }
    }
#line 198
    goto switch_break;
    case_110: /* CIL Label */ 
    {
    {
#line 200
    tmp___4 = malloc((size_t )sizeof(beep_parms_t ));
    }
#line 200
    result->next = (beep_parms_t *)tmp___4;
#line 201
    (result->next)->freq = (float )440.0;
#line 202
    (result->next)->length = 200;
#line 203
    (result->next)->reps = 1;
#line 204
    (result->next)->delay = 100;
#line 205
    (result->next)->end_delay = 0;
#line 206
    (result->next)->stdin_beep = 0;
#line 207
    (result->next)->next = (struct beep_parms_t *)((void *)0);
#line 208
    result = result->next;
    }
#line 209
    goto switch_break;
    switch_default: /* CIL Label */ 
    {
    {
#line 212
    usage_bail((char const   *)*(argv + 0));
    }
    }
    switch_break: /* CIL Label */ ;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: /* CIL Label */ ;
  }
#line 215
  return;
}
}
#line 217 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
void play_beep(beep_parms_t parms ) 
{ 
  int i ;
  int tmp ;
  char *__cil_tmp4 ;
  char *__cil_tmp5 ;
  char *__cil_tmp6 ;
  char *__cil_tmp7 ;
  char *__cil_tmp8 ;
  char *__cil_tmp9 ;

  {
  {
  {
#line 221
  console_fd = open("/dev/console", 1);
  }
  }
#line 221
  if (console_fd == -1) {
    {
    {
#line 222
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Could not open /dev/console for writing.\n");
    }
    {
#line 223
    printf((char const   */* __restrict  */)"\a");
    }
    {
#line 224
    perror("open");
    }
    {
#line 225
    exit(1);
    }
    }
  }
#line 229
  i = 0;
  {
  {
#line 229
  while (1) {
    while_continue___0: /* CIL Label */ ;
    while_continue: /* CIL Label */ ;
#line 229
    if (! (i < parms.reps)) {
#line 229
      goto while_break;
    }
    {
    {
#line 230
    tmp = ioctl(console_fd, 19247UL, (int )((float )1193180 / parms.freq));
    }
    }
#line 230
    if (tmp < 0) {
      {
      {
#line 231
      printf((char const   */* __restrict  */)"\a");
      }
      {
#line 232
      perror("ioctl");
      }
      }
    }
    {
    {
#line 235
    usleep((__useconds_t )(1000 * parms.length));
    }
    {
#line 236
    ioctl(console_fd, 19247UL, 0);
    }
    }
#line 237
    if (parms.end_delay) {
      {
      {
#line 238
      usleep((__useconds_t )(1000 * parms.delay));
      }
      }
    } else
#line 237
    if (i + 1 < parms.reps) {
      {
      {
#line 238
      usleep((__useconds_t )(1000 * parms.delay));
      }
      }
    }
#line 229
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: /* CIL Label */ ;
  }
  {
  {
#line 241
  close(console_fd);
  }
  }
#line 242
  return;
}
}
#line 246 "/home/wslee/benchmarks/sound/beep-1.2.2/beep.c"
int main(int argc , char **argv ) 
{ 
  char sin[4096] ;
  char *ptr ;
  beep_parms_t *parms ;
  void *tmp ;
  beep_parms_t *next ;
  char *tmp___0 ;
  void *__cil_tmp9 ;

  {
  {
  {
#line 249
  tmp = malloc((size_t )sizeof(beep_parms_t ));
  }
#line 249
  parms = (beep_parms_t *)tmp;
#line 250
  parms->freq = (float )440.0;
#line 251
  parms->length = 200;
#line 252
  parms->reps = 1;
#line 253
  parms->delay = 100;
#line 254
  parms->end_delay = 0;
#line 255
  parms->stdin_beep = 0;
#line 256
  parms->next = (struct beep_parms_t *)((void *)0);
  {
#line 258
  signal(2, & handle_signal);
  }
  {
#line 259
  parse_command_line(argc, argv, parms);
  }
  }
  {
  {
#line 264
  while (1) {
    while_continue___2: /* CIL Label */ ;
    while_continue: /* CIL Label */ ;
#line 264
    if (! parms) {
#line 264
      goto while_break;
    }
#line 265
    next = parms->next;
#line 267
    if (parms->stdin_beep) {
      {
      {
#line 275
      setvbuf((FILE */* __restrict  */)stdin, (char */* __restrict  */)((void *)0),
              2, (size_t )0);
      }
      {
#line 276
      setvbuf((FILE */* __restrict  */)stdout, (char */* __restrict  */)((void *)0),
              2, (size_t )0);
      }
      }
      {
      {
#line 277
      while (1) {
        while_continue___3: /* CIL Label */ ;
        while_continue___0: /* CIL Label */ ;
        {
        {
#line 277
        tmp___0 = fgets((char */* __restrict  */)(sin), 4096, (FILE */* __restrict  */)stdin);
        }
        }
#line 277
        if (! tmp___0) {
#line 277
          goto while_break___0;
        }
#line 278
        if (parms->stdin_beep == 2) {
#line 279
          ptr = sin;
          {
          {
#line 279
          while (1) {
            while_continue___4: /* CIL Label */ ;
            while_continue___1: /* CIL Label */ ;
#line 279
            if (! *ptr) {
#line 279
              goto while_break___1;
            }
            {
            {
#line 280
            putchar((int )*ptr);
            }
            {
#line 281
            fflush(stdout);
            }
            {
#line 282
            play_beep(*parms);
            }
#line 279
            ptr ++;
            }
          }
          while_break___4: /* CIL Label */ ;
          }
          while_break___1: /* CIL Label */ ;
          }
        } else {
          {
          {
#line 285
          fputs((char const   */* __restrict  */)(sin), (FILE */* __restrict  */)stdout);
          }
          {
#line 286
          play_beep(*parms);
          }
          }
        }
      }
      while_break___3: /* CIL Label */ ;
      }
      while_break___0: /* CIL Label */ ;
      }
    } else {
      {
      {
#line 290
      play_beep(*parms);
      }
      }
    }
    {
    {
#line 294
    free((void *)parms);
    }
#line 295
    parms = next;
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: /* CIL Label */ ;
  }
#line 298
  return (0);
}
}
