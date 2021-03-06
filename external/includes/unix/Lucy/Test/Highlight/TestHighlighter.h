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


#ifndef H_LUCY_TEST_HIGHLIGHT_TESTHIGHLIGHTER
#define H_LUCY_TEST_HIGHLIGHT_TESTHIGHLIGHTER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTHIGHLIGHTER
extern uint32_t testlucy_TestHighlighter_IVARS_OFFSET;
typedef struct testlucy_TestHighlighterIVARS testlucy_TestHighlighterIVARS;
static CFISH_INLINE testlucy_TestHighlighterIVARS*
testlucy_TestHighlighter_IVARS(testlucy_TestHighlighter *self) {
   char *ptr = (char*)self + testlucy_TestHighlighter_IVARS_OFFSET;
   return (testlucy_TestHighlighterIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestHighlighterIVARS testlucy_TestHighlighterIVARS
  #define TestHighlighter_IVARS testlucy_TestHighlighter_IVARS
#endif


#endif /* C_TESTLUCY_TESTHIGHLIGHTER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestHighlighter*
testlucy_TestHighlighter_new(void);

void
TESTLUCY_TestHighlighter_Run_IMP(testlucy_TestHighlighter* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestHighlighter_To_Host_t)(testlucy_TestHighlighter* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestHighlighter_Clone_t)(testlucy_TestHighlighter* self);

typedef bool
(*TESTLUCY_TestHighlighter_Equals_t)(testlucy_TestHighlighter* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestHighlighter_Compare_To_t)(testlucy_TestHighlighter* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestHighlighter_Destroy_t)(testlucy_TestHighlighter* self);

typedef cfish_String*
(*TESTLUCY_TestHighlighter_To_String_t)(testlucy_TestHighlighter* self);

typedef void
(*TESTLUCY_TestHighlighter_Run_t)(testlucy_TestHighlighter* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestHighlighter_get_class(testlucy_TestHighlighter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestHighlighter_get_class_name(testlucy_TestHighlighter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestHighlighter_is_a(testlucy_TestHighlighter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestHighlighter_To_Host(testlucy_TestHighlighter* self, void* vcache) {
    const TESTLUCY_TestHighlighter_To_Host_t method = (TESTLUCY_TestHighlighter_To_Host_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestHighlighter_Clone(testlucy_TestHighlighter* self) {
    const TESTLUCY_TestHighlighter_Clone_t method = (TESTLUCY_TestHighlighter_Clone_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestHighlighter_Equals(testlucy_TestHighlighter* self, cfish_Obj* other) {
    const TESTLUCY_TestHighlighter_Equals_t method = (TESTLUCY_TestHighlighter_Equals_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestHighlighter_Compare_To(testlucy_TestHighlighter* self, cfish_Obj* other) {
    const TESTLUCY_TestHighlighter_Compare_To_t method = (TESTLUCY_TestHighlighter_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestHighlighter_Destroy(testlucy_TestHighlighter* self) {
    const TESTLUCY_TestHighlighter_Destroy_t method = (TESTLUCY_TestHighlighter_Destroy_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestHighlighter_To_String(testlucy_TestHighlighter* self) {
    const TESTLUCY_TestHighlighter_To_String_t method = (TESTLUCY_TestHighlighter_To_String_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestHighlighter_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestHighlighter_Run(testlucy_TestHighlighter* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestHighlighter_Run_t method = (TESTLUCY_TestHighlighter_Run_t)cfish_obj_method(self, TESTLUCY_TestHighlighter_Run_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestHighlighter testlucy_TestHighlighter
  #define TESTHIGHLIGHTER TESTLUCY_TESTHIGHLIGHTER
  #define TestHighlighter_new testlucy_TestHighlighter_new
  #define TestHighlighter_get_class testlucy_TestHighlighter_get_class
  #define TestHighlighter_get_class_name testlucy_TestHighlighter_get_class_name
  #define TestHighlighter_is_a testlucy_TestHighlighter_is_a
  #define TestHighlighter_Run_IMP TESTLUCY_TestHighlighter_Run_IMP
  #define TestHighlighter_To_Host TESTLUCY_TestHighlighter_To_Host
  #define TestHighlighter_To_Host_t TESTLUCY_TestHighlighter_To_Host_t
  #define TestHighlighter_Clone TESTLUCY_TestHighlighter_Clone
  #define TestHighlighter_Clone_t TESTLUCY_TestHighlighter_Clone_t
  #define TestHighlighter_Equals TESTLUCY_TestHighlighter_Equals
  #define TestHighlighter_Equals_t TESTLUCY_TestHighlighter_Equals_t
  #define TestHighlighter_Compare_To TESTLUCY_TestHighlighter_Compare_To
  #define TestHighlighter_Compare_To_t TESTLUCY_TestHighlighter_Compare_To_t
  #define TestHighlighter_Destroy TESTLUCY_TestHighlighter_Destroy
  #define TestHighlighter_Destroy_t TESTLUCY_TestHighlighter_Destroy_t
  #define TestHighlighter_To_String TESTLUCY_TestHighlighter_To_String
  #define TestHighlighter_To_String_t TESTLUCY_TestHighlighter_To_String_t
  #define TestHighlighter_Run TESTLUCY_TestHighlighter_Run
  #define TestHighlighter_Run_t TESTLUCY_TestHighlighter_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_HIGHLIGHT_TESTHIGHLIGHTER */




