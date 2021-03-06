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


#ifndef H_LUCY_TEST_UTIL_TESTNUMBERUTILS
#define H_LUCY_TEST_UTIL_TESTNUMBERUTILS 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTNUMBERUTILS
extern uint32_t testlucy_TestNumUtil_IVARS_OFFSET;
typedef struct testlucy_TestNumberUtilsIVARS testlucy_TestNumberUtilsIVARS;
static CFISH_INLINE testlucy_TestNumberUtilsIVARS*
testlucy_TestNumUtil_IVARS(testlucy_TestNumberUtils *self) {
   char *ptr = (char*)self + testlucy_TestNumUtil_IVARS_OFFSET;
   return (testlucy_TestNumberUtilsIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestNumberUtilsIVARS testlucy_TestNumberUtilsIVARS
  #define TestNumUtil_IVARS testlucy_TestNumUtil_IVARS
#endif


#endif /* C_TESTLUCY_TESTNUMBERUTILS */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestNumberUtils*
testlucy_TestNumUtil_new(void);

void
TESTLUCY_TestNumUtil_Run_IMP(testlucy_TestNumberUtils* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestNumUtil_To_Host_t)(testlucy_TestNumberUtils* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestNumUtil_Clone_t)(testlucy_TestNumberUtils* self);

typedef bool
(*TESTLUCY_TestNumUtil_Equals_t)(testlucy_TestNumberUtils* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestNumUtil_Compare_To_t)(testlucy_TestNumberUtils* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestNumUtil_Destroy_t)(testlucy_TestNumberUtils* self);

typedef cfish_String*
(*TESTLUCY_TestNumUtil_To_String_t)(testlucy_TestNumberUtils* self);

typedef void
(*TESTLUCY_TestNumUtil_Run_t)(testlucy_TestNumberUtils* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestNumUtil_get_class(testlucy_TestNumberUtils *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestNumUtil_get_class_name(testlucy_TestNumberUtils *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestNumUtil_is_a(testlucy_TestNumberUtils *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestNumUtil_To_Host(testlucy_TestNumberUtils* self, void* vcache) {
    const TESTLUCY_TestNumUtil_To_Host_t method = (TESTLUCY_TestNumUtil_To_Host_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestNumUtil_Clone(testlucy_TestNumberUtils* self) {
    const TESTLUCY_TestNumUtil_Clone_t method = (TESTLUCY_TestNumUtil_Clone_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestNumUtil_Equals(testlucy_TestNumberUtils* self, cfish_Obj* other) {
    const TESTLUCY_TestNumUtil_Equals_t method = (TESTLUCY_TestNumUtil_Equals_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestNumUtil_Compare_To(testlucy_TestNumberUtils* self, cfish_Obj* other) {
    const TESTLUCY_TestNumUtil_Compare_To_t method = (TESTLUCY_TestNumUtil_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestNumUtil_Destroy(testlucy_TestNumberUtils* self) {
    const TESTLUCY_TestNumUtil_Destroy_t method = (TESTLUCY_TestNumUtil_Destroy_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestNumUtil_To_String(testlucy_TestNumberUtils* self) {
    const TESTLUCY_TestNumUtil_To_String_t method = (TESTLUCY_TestNumUtil_To_String_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumUtil_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestNumUtil_Run(testlucy_TestNumberUtils* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestNumUtil_Run_t method = (TESTLUCY_TestNumUtil_Run_t)cfish_obj_method(self, TESTLUCY_TestNumUtil_Run_OFFSET);
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
  #define TestNumberUtils testlucy_TestNumberUtils
  #define TESTNUMBERUTILS TESTLUCY_TESTNUMBERUTILS
  #define TestNumUtil_new testlucy_TestNumUtil_new
  #define TestNumUtil_get_class testlucy_TestNumUtil_get_class
  #define TestNumUtil_get_class_name testlucy_TestNumUtil_get_class_name
  #define TestNumUtil_is_a testlucy_TestNumUtil_is_a
  #define TestNumUtil_Run_IMP TESTLUCY_TestNumUtil_Run_IMP
  #define TestNumUtil_To_Host TESTLUCY_TestNumUtil_To_Host
  #define TestNumUtil_To_Host_t TESTLUCY_TestNumUtil_To_Host_t
  #define TestNumUtil_Clone TESTLUCY_TestNumUtil_Clone
  #define TestNumUtil_Clone_t TESTLUCY_TestNumUtil_Clone_t
  #define TestNumUtil_Equals TESTLUCY_TestNumUtil_Equals
  #define TestNumUtil_Equals_t TESTLUCY_TestNumUtil_Equals_t
  #define TestNumUtil_Compare_To TESTLUCY_TestNumUtil_Compare_To
  #define TestNumUtil_Compare_To_t TESTLUCY_TestNumUtil_Compare_To_t
  #define TestNumUtil_Destroy TESTLUCY_TestNumUtil_Destroy
  #define TestNumUtil_Destroy_t TESTLUCY_TestNumUtil_Destroy_t
  #define TestNumUtil_To_String TESTLUCY_TestNumUtil_To_String
  #define TestNumUtil_To_String_t TESTLUCY_TestNumUtil_To_String_t
  #define TestNumUtil_Run TESTLUCY_TestNumUtil_Run
  #define TestNumUtil_Run_t TESTLUCY_TestNumUtil_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_UTIL_TESTNUMBERUTILS */




