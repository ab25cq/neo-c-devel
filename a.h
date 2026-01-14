typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;		/* Read bytes.  */
  cookie_write_function_t *write;	/* Write bytes.  */
  cookie_seek_function_t *seek;		/* Seek/tell file position.  */
  cookie_close_function_t *close;	/* Close file.  */
} cookie_io_functions_t;
