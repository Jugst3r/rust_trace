#include "gnatcov_rts_c_traces_output_base64.h"
#include "gnatcov_rts_c_interface.h"
#include <stdlib.h>

extern gnatcov_rts_unit_coverage_buffers gnatcov_rts_buffers_hello_rs_buffers;

void gnatcov_rts_hello_rs_dump_buffers (void) {
  gnatcov_rts_unit_coverage_buffers_array buffers_array;
  buffers_array.length = 1;
  buffers_array.buffers =(gnatcov_rts_unit_coverage_buffers **) malloc (sizeof (gnatcov_rts_unit_coverage_buffers*)* 1);
  buffers_array.buffers[0] = &gnatcov_rts_buffers_hello_rs_buffers;

  __gnatcov_write_trace_file_base64(&buffers_array, "hello.rs", 0, "");
}
