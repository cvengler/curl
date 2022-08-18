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

#include "tool_sbox.h"

#include "memdebug.h" /* keep this as LAST include */

/* Inspect the global config and generate the required promises bitmask */
static sandbox_t promises_global(struct GlobalConfig *config)
{
  sandbox_t promises = 0;
  (void)config;

  return promises;
}

/* Inspect a single struct OperationConfig and generate the required promises
   bitmask */
static sandbox_t promises_operation(struct OperationConfig *config)
{
  sandbox_t promises = 0;
  (void)config;

  return promises;
}

sandbox_t sandbox_promises(struct GlobalConfig *global)
{
  struct OperationConfig *oper;
  sandbox_t promises = 0;

  /* These three promises are essentially always required for curl */
  /* TODO: Drop INET and DNS for file:// transfers and/or transfers not
     involving any DNS operations */
  promises |= (SANDBOX_STDIO | SANDBOX_INET | SANDBOX_DNS);

  promises |= promises_global(global);
  for(oper = global->first; oper != NULL; oper = oper->next)
    promises |= promises_operation(oper);

  return promises;
}

#endif
