#ifndef EDFS_JS_H
#define EDFS_JS_H

#include "duktape.h"

int edfs_js_register_all(duk_context *js);
int edfs_js_error(duk_context *js, const char *msg);

#endif
