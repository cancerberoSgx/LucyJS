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


#ifndef H_LUCY_TEST_STORE_TESTRAMFILEHANDLE
#define H_LUCY_TEST_STORE_TESTRAMFILEHANDLE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTRAMFILEHANDLE
extern uint32_t testlucy_TestRAMFH_IVARS_OFFSET;
typedef struct testlucy_TestRAMFileHandleIVARS testlucy_TestRAMFileHandleIVARS;
static CFISH_INLINE testlucy_TestRAMFileHandleIVARS*
testlucy_TestRAMFH_IVARS(testlucy_TestRAMFileHandle *self) {
   char *ptr = (char*)self + testlucy_TestRAMFH_IVARS_OFFSET;
   return (testlucy_TestRAMFileHandleIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestRAMFileHandleIVARS testlucy_TestRAMFileHandleIVARS
  #define TestRAMFH_IVARS testlucy_TestRAMFH_IVARS
#endif


#endif /* C_TESTLUCY_TESTRAMFILEHANDLE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestRAMFileHandle*
testlucy_TestRAMFH_new(void);

void
TESTLUCY_TestRAMFH_Run_IMP(testlucy_TestRAMFileHandle* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestRAMFH_To_Host_t)(testlucy_TestRAMFileHandle* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestRAMFH_Clone_t)(testlucy_TestRAMFileHandle* self);

typedef bool
(*TESTLUCY_TestRAMFH_Equals_t)(testlucy_TestRAMFileHandle* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestRAMFH_Compare_To_t)(testlucy_TestRAMFileHandle* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestRAMFH_Destroy_t)(testlucy_TestRAMFileHandle* self);

typedef cfish_String*
(*TESTLUCY_TestRAMFH_To_String_t)(testlucy_TestRAMFileHandle* self);

typedef void
(*TESTLUCY_TestRAMFH_Run_t)(testlucy_TestRAMFileHandle* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestRAMFH_get_class(testlucy_TestRAMFileHandle *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestRAMFH_get_class_name(testlucy_TestRAMFileHandle *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestRAMFH_is_a(testlucy_TestRAMFileHandle *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestRAMFH_To_Host(testlucy_TestRAMFileHandle* self, void* vcache) {
    const TESTLUCY_TestRAMFH_To_Host_t method = (TESTLUCY_TestRAMFH_To_Host_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestRAMFH_Clone(testlucy_TestRAMFileHandle* self) {
    const TESTLUCY_TestRAMFH_Clone_t method = (TESTLUCY_TestRAMFH_Clone_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestRAMFH_Equals(testlucy_TestRAMFileHandle* self, cfish_Obj* other) {
    const TESTLUCY_TestRAMFH_Equals_t method = (TESTLUCY_TestRAMFH_Equals_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestRAMFH_Compare_To(testlucy_TestRAMFileHandle* self, cfish_Obj* other) {
    const TESTLUCY_TestRAMFH_Compare_To_t method = (TESTLUCY_TestRAMFH_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestRAMFH_Destroy(testlucy_TestRAMFileHandle* self) {
    const TESTLUCY_TestRAMFH_Destroy_t method = (TESTLUCY_TestRAMFH_Destroy_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestRAMFH_To_String(testlucy_TestRAMFileHandle* self) {
    const TESTLUCY_TestRAMFH_To_String_t method = (TESTLUCY_TestRAMFH_To_String_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMFH_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestRAMFH_Run(testlucy_TestRAMFileHandle* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestRAMFH_Run_t method = (TESTLUCY_TestRAMFH_Run_t)cfish_obj_method(self, TESTLUCY_TestRAMFH_Run_OFFSET);
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
  #define TestRAMFileHandle testlucy_TestRAMFileHandle
  #define TESTRAMFILEHANDLE TESTLUCY_TESTRAMFILEHANDLE
  #define TestRAMFH_new testlucy_TestRAMFH_new
  #define TestRAMFH_get_class testlucy_TestRAMFH_get_class
  #define TestRAMFH_get_class_name testlucy_TestRAMFH_get_class_name
  #define TestRAMFH_is_a testlucy_TestRAMFH_is_a
  #define TestRAMFH_Run_IMP TESTLUCY_TestRAMFH_Run_IMP
  #define TestRAMFH_To_Host TESTLUCY_TestRAMFH_To_Host
  #define TestRAMFH_To_Host_t TESTLUCY_TestRAMFH_To_Host_t
  #define TestRAMFH_Clone TESTLUCY_TestRAMFH_Clone
  #define TestRAMFH_Clone_t TESTLUCY_TestRAMFH_Clone_t
  #define TestRAMFH_Equals TESTLUCY_TestRAMFH_Equals
  #define TestRAMFH_Equals_t TESTLUCY_TestRAMFH_Equals_t
  #define TestRAMFH_Compare_To TESTLUCY_TestRAMFH_Compare_To
  #define TestRAMFH_Compare_To_t TESTLUCY_TestRAMFH_Compare_To_t
  #define TestRAMFH_Destroy TESTLUCY_TestRAMFH_Destroy
  #define TestRAMFH_Destroy_t TESTLUCY_TestRAMFH_Destroy_t
  #define TestRAMFH_To_String TESTLUCY_TestRAMFH_To_String
  #define TestRAMFH_To_String_t TESTLUCY_TestRAMFH_To_String_t
  #define TestRAMFH_Run TESTLUCY_TestRAMFH_Run
  #define TestRAMFH_Run_t TESTLUCY_TestRAMFH_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_STORE_TESTRAMFILEHANDLE */




