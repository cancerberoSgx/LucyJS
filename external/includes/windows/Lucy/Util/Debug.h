/*
 * ***********************************************
 * 
 * !!!! DO NOT EDIT !!!!
 * 
 * This file was auto-generated by cfc.
 * 
 * ***********************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef H_LUCY_UTIL_DEBUG
#define H_LUCY_UTIL_DEBUG 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Declare this class's inert variables.
 */

extern LUCY_VISIBLE int32_t lucy_Debug_num_allocated;
extern LUCY_VISIBLE int32_t lucy_Debug_num_freed;
extern LUCY_VISIBLE int32_t lucy_Debug_num_globals;


/* Declare this class's inert functions.
 */

LUCY_VISIBLE void
lucy_Debug_print_mess(const char* file, int line, const char* func, const char* pat, ...);

LUCY_VISIBLE int
lucy_Debug_debug_should_print(const char* path, const char* func);

LUCY_VISIBLE void
lucy_Debug_set_env_cache(char* override);



/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Debug_print_mess lucy_Debug_print_mess
  #define Debug_debug_should_print lucy_Debug_debug_should_print
  #define Debug_set_env_cache lucy_Debug_set_env_cache
  #define Debug_num_allocated lucy_Debug_num_allocated
  #define Debug_num_freed lucy_Debug_num_freed
  #define Debug_num_globals lucy_Debug_num_globals
#endif /* LUCY_USE_SHORT_NAMES */



#ifdef LUCY_DEBUG

#undef LUCY_DEBUG   // undef prior to redefining the command line argument
#define LUCY_DEBUG_ENABLED 1

#include <stdio.h>
#include <stdlib.h>

/** Unconditionally print debug statement prepending file and line info.
 */
#define LUCY_DEBUG_PRINT(args...)                                         \
    lucy_Debug_print_mess(__FILE__, __LINE__, __func__, ##args)

/** Conditionally execute code if debugging enabled via LUCY_DEBUG environment
 * variable.
 */
#define LUCY_DEBUG_DO(actions)                                            \
    do {                                                                  \
        static int initialized = 0;                                       \
        static int do_it       = 0;                                       \
        if (!initialized) {                                               \
            initialized = 1;                                              \
            do_it = lucy_Debug_debug_should_print(__FILE__, __func__);    \
        }                                                                 \
        if (do_it) { actions; }                                           \
    } while (0)

/** Execute code so long as LUCY_DEBUG was defined during compilation.
 */
#define LUCY_IFDEF_DEBUG(actions) do { actions; } while (0)

/** Conditionally print debug statement depending on LUCY_DEBUG env variable.
 */
#define LUCY_DEBUG(args...)                                            \
        LUCY_DEBUG_DO(LUCY_DEBUG_PRINT(args));

/** Abort on error if test fails.
 *
 * Note: unlike the system assert(), this [](cfish:.ASSERT) is #ifdef LUCY_DEBUG.
 */
#define LUCY_ASSERT(test , args...)                                    \
    do {                                                               \
        if (!(test)) {                                                 \
            LUCY_DEBUG_PRINT("ASSERT FAILED (" #test ")\n" args);      \
            abort();                                                   \
        }                                                              \
    } while (0)

#elif defined(CFISH_HAS_GNUC_VARIADIC_MACROS) // not LUCY_DEBUG

#undef LUCY_DEBUG
#define LUCY_DEBUG_ENABLED 0
#define LUCY_DEBUG_DO(actions)
#define LUCY_IFDEF_DEBUG(actions)
#define LUCY_DEBUG_PRINT(args...)
#define LUCY_DEBUG(args...)
#define LUCY_ASSERT(test, args...)

#else  // also not LUCY_DEBUG

#undef LUCY_DEBUG
#define LUCY_DEBUG_ENABLED 0
#define LUCY_DEBUG_DO(actions)
#define LUCY_IFDEF_DEBUG(actions)
static void LUCY_DEBUG_PRINT(char *_ignore_me, ...) { }
static void LUCY_DEBUG(char *_ignore_me, ...) { }
static void LUCY_ASSERT(int _ignore_me, ...) { }

#endif // LUCY_DEBUG

#ifdef LUCY_USE_SHORT_NAMES
  #define DEBUG_ENABLED             LUCY_DEBUG_ENABLED
  #define DEBUG_PRINT               LUCY_DEBUG_PRINT
  #define DEBUG_DO                  LUCY_DEBUG_DO
  #define IFDEF_DEBUG               LUCY_IFDEF_DEBUG
  #define DEBUG                     LUCY_DEBUG
  #define ASSERT                    LUCY_ASSERT
#endif



#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_UTIL_DEBUG */




