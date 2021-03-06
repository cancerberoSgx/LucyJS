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


#ifndef H_LUCY_TEST_STORE_TESTRAMDIRHANDLE
#define H_LUCY_TEST_STORE_TESTRAMDIRHANDLE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTRAMDIRHANDLE
extern uint32_t testlucy_TestRAMDH_IVARS_OFFSET;
typedef struct testlucy_TestRAMDirHandleIVARS testlucy_TestRAMDirHandleIVARS;
static CFISH_INLINE testlucy_TestRAMDirHandleIVARS*
testlucy_TestRAMDH_IVARS(testlucy_TestRAMDirHandle *self) {
   char *ptr = (char*)self + testlucy_TestRAMDH_IVARS_OFFSET;
   return (testlucy_TestRAMDirHandleIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestRAMDirHandleIVARS testlucy_TestRAMDirHandleIVARS
  #define TestRAMDH_IVARS testlucy_TestRAMDH_IVARS
#endif


#endif /* C_TESTLUCY_TESTRAMDIRHANDLE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestRAMDirHandle*
testlucy_TestRAMDH_new(void);

void
TESTLUCY_TestRAMDH_Run_IMP(testlucy_TestRAMDirHandle* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestRAMDH_To_Host_t)(testlucy_TestRAMDirHandle* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestRAMDH_Clone_t)(testlucy_TestRAMDirHandle* self);

typedef bool
(*TESTLUCY_TestRAMDH_Equals_t)(testlucy_TestRAMDirHandle* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestRAMDH_Compare_To_t)(testlucy_TestRAMDirHandle* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestRAMDH_Destroy_t)(testlucy_TestRAMDirHandle* self);

typedef cfish_String*
(*TESTLUCY_TestRAMDH_To_String_t)(testlucy_TestRAMDirHandle* self);

typedef void
(*TESTLUCY_TestRAMDH_Run_t)(testlucy_TestRAMDirHandle* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestRAMDH_get_class(testlucy_TestRAMDirHandle *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestRAMDH_get_class_name(testlucy_TestRAMDirHandle *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestRAMDH_is_a(testlucy_TestRAMDirHandle *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestRAMDH_To_Host(testlucy_TestRAMDirHandle* self, void* vcache) {
    const TESTLUCY_TestRAMDH_To_Host_t method = (TESTLUCY_TestRAMDH_To_Host_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestRAMDH_Clone(testlucy_TestRAMDirHandle* self) {
    const TESTLUCY_TestRAMDH_Clone_t method = (TESTLUCY_TestRAMDH_Clone_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestRAMDH_Equals(testlucy_TestRAMDirHandle* self, cfish_Obj* other) {
    const TESTLUCY_TestRAMDH_Equals_t method = (TESTLUCY_TestRAMDH_Equals_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestRAMDH_Compare_To(testlucy_TestRAMDirHandle* self, cfish_Obj* other) {
    const TESTLUCY_TestRAMDH_Compare_To_t method = (TESTLUCY_TestRAMDH_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestRAMDH_Destroy(testlucy_TestRAMDirHandle* self) {
    const TESTLUCY_TestRAMDH_Destroy_t method = (TESTLUCY_TestRAMDH_Destroy_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestRAMDH_To_String(testlucy_TestRAMDirHandle* self) {
    const TESTLUCY_TestRAMDH_To_String_t method = (TESTLUCY_TestRAMDH_To_String_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestRAMDH_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestRAMDH_Run(testlucy_TestRAMDirHandle* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestRAMDH_Run_t method = (TESTLUCY_TestRAMDH_Run_t)cfish_obj_method(self, TESTLUCY_TestRAMDH_Run_OFFSET);
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
  #define TestRAMDirHandle testlucy_TestRAMDirHandle
  #define TESTRAMDIRHANDLE TESTLUCY_TESTRAMDIRHANDLE
  #define TestRAMDH_new testlucy_TestRAMDH_new
  #define TestRAMDH_get_class testlucy_TestRAMDH_get_class
  #define TestRAMDH_get_class_name testlucy_TestRAMDH_get_class_name
  #define TestRAMDH_is_a testlucy_TestRAMDH_is_a
  #define TestRAMDH_Run_IMP TESTLUCY_TestRAMDH_Run_IMP
  #define TestRAMDH_To_Host TESTLUCY_TestRAMDH_To_Host
  #define TestRAMDH_To_Host_t TESTLUCY_TestRAMDH_To_Host_t
  #define TestRAMDH_Clone TESTLUCY_TestRAMDH_Clone
  #define TestRAMDH_Clone_t TESTLUCY_TestRAMDH_Clone_t
  #define TestRAMDH_Equals TESTLUCY_TestRAMDH_Equals
  #define TestRAMDH_Equals_t TESTLUCY_TestRAMDH_Equals_t
  #define TestRAMDH_Compare_To TESTLUCY_TestRAMDH_Compare_To
  #define TestRAMDH_Compare_To_t TESTLUCY_TestRAMDH_Compare_To_t
  #define TestRAMDH_Destroy TESTLUCY_TestRAMDH_Destroy
  #define TestRAMDH_Destroy_t TESTLUCY_TestRAMDH_Destroy_t
  #define TestRAMDH_To_String TESTLUCY_TestRAMDH_To_String
  #define TestRAMDH_To_String_t TESTLUCY_TestRAMDH_To_String_t
  #define TestRAMDH_Run TESTLUCY_TestRAMDH_Run
  #define TestRAMDH_Run_t TESTLUCY_TestRAMDH_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_STORE_TESTRAMDIRHANDLE */




