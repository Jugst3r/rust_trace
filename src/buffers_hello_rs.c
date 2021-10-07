#include "gnatcov_rts_c_buffers.h"

unsigned char __xcov__buf_stmt__hello_rs[1];
unsigned char *const xcov__buf_stmt__hello_rs = &__xcov__buf_stmt__hello_rs[0];

unsigned char __xcov__buf_dc__hello_rs[1];
unsigned char *const xcov__buf_dc__hello_rs = &__xcov__buf_dc__hello_rs[0];

unsigned char __xcov__buf_mcdc__hello_rs[1];
unsigned char *const xcov__buf_mcdc__hello_rs = &__xcov__buf_mcdc__hello_rs[0];

struct gnatcov_rts_unit_coverage_buffers gnatcov_rts_buffers_hello_rs_buffers= {
    .fingerprint = {115, 165, 7, 124, 71, 3, 115, 66, 169, 243, 36, 143, 75, 174, 71, 157, 88, 69, 223, 139},
    .language =  1,
    .unit_part =  0,
    .unit_name = "/home/meyraud/rust/hw/src/hello.rs",
    .unit_name_length = 34,
    .project_name = "",
    .project_name_length = 0,
    .statement = &__xcov__buf_stmt__hello_rs[0],
    .decision = &__xcov__buf_dc__hello_rs[0],
    .mcdc = &__xcov__buf_mcdc__hello_rs[0],
    .statement_last_bit = 1,
    .decision_last_bit = -1,
    .mcdc_last_bit = -1
};
