#ifndef HEADER_CURL_TOOL_SBOX_H
#define HEADER_CURL_TOOL_SBOX_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 2022, Emil Engler, <me@emilengler.com>
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 * SPDX-License-Identifier: curl
 *
 ***************************************************************************/

#include "tool_setup.h"

#if defined(CURL_ENABLE_SANDBOX) || defined(CURLDEBUG)

/*
 * This is the sandbox interface for the curl tool, which tries to provide a
 * generic wrapper around operating-system-specific sandboxing mechanisms, such
 * as seccomp/landlock (Linux), pledge/unveil (OpenBSD), ...
 *
 * The curl internal interface itself has been heavily inspired by OpenBSDs
 * pledge and unveil system calls.[1][2] An understanding of those is very
 * helpful when utilizing this feature.
 *
 * [1]: http://man.openbsd.org/pledge
 * [2]: http://man.openbsd.org/unveil
 */

/* The various promises that curl can make to the operating system */
#define SANDBOX_STDIO   (1<<0)
#define SANDBOX_RPATH   (1<<1)
#define SANDBOX_WPATH   (1<<2)
#define SANDBOX_CPATH   (1<<3)
#define SANDBOX_INET    (1<<4)
#define SANDBOX_UNIX    (1<<5)
#define SANDBOX_DNS     (1<<6)
#define SANDBOX_TTY     (1<<7)

typedef unsigned char sandbox_t;

struct Sandbox {
  int (*pledge)(sandbox_t);
  int (*unveil)(const char *, const char *);
};

#endif

#endif /* HEADER_CURL_TOOL_SBOX_H */
