#ifndef __LIB_TALLOC_TALLOC_TESTSUITE_H__
#define __LIB_TALLOC_TALLOC_TESTSUITE_H__

#include "talloc.h"

struct torture_context;
bool torture_local_talloc(struct torture_context *tctx);

#endif
