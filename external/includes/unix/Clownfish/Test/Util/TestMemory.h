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


#ifndef H_CLOWNFISH_TEST_UTIL_TESTMEMORY
#define H_CLOWNFISH_TEST_UTIL_TESTMEMORY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testcfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTCFISH_TESTMEMORY
extern uint32_t testcfish_TestMemory_IVARS_OFFSET;
typedef struct testcfish_TestMemoryIVARS testcfish_TestMemoryIVARS;
static CFISH_INLINE testcfish_TestMemoryIVARS*
testcfish_TestMemory_IVARS(testcfish_TestMemory *self) {
   char *ptr = (char*)self + testcfish_TestMemory_IVARS_OFFSET;
   return (testcfish_TestMemoryIVARS*)ptr;
}
#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestMemoryIVARS testcfish_TestMemoryIVARS
  #define TestMemory_IVARS testcfish_TestMemory_IVARS
#endif


#endif /* C_TESTCFISH_TESTMEMORY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTCFISH_VISIBLE testcfish_TestMemory*
testcfish_TestMemory_new(void);

void
TESTCFISH_TestMemory_Run_IMP(testcfish_TestMemory* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTCFISH_TestMemory_To_Host_t)(testcfish_TestMemory* self, void* vcache);

typedef cfish_Obj*
(*TESTCFISH_TestMemory_Clone_t)(testcfish_TestMemory* self);

typedef bool
(*TESTCFISH_TestMemory_Equals_t)(testcfish_TestMemory* self, cfish_Obj* other);

typedef int32_t
(*TESTCFISH_TestMemory_Compare_To_t)(testcfish_TestMemory* self, cfish_Obj* other);

typedef void
(*TESTCFISH_TestMemory_Destroy_t)(testcfish_TestMemory* self);

typedef cfish_String*
(*TESTCFISH_TestMemory_To_String_t)(testcfish_TestMemory* self);

typedef void
(*TESTCFISH_TestMemory_Run_t)(testcfish_TestMemory* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testcfish_TestMemory_get_class(testcfish_TestMemory *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testcfish_TestMemory_get_class_name(testcfish_TestMemory *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testcfish_TestMemory_is_a(testcfish_TestMemory *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_To_Host_OFFSET;
static CFISH_INLINE void*
TESTCFISH_TestMemory_To_Host(testcfish_TestMemory* self, void* vcache) {
    const TESTCFISH_TestMemory_To_Host_t method = (TESTCFISH_TestMemory_To_Host_t)cfish_obj_method(self, TESTCFISH_TestMemory_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTCFISH_TestMemory_Clone(testcfish_TestMemory* self) {
    const TESTCFISH_TestMemory_Clone_t method = (TESTCFISH_TestMemory_Clone_t)cfish_obj_method(self, TESTCFISH_TestMemory_Clone_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_Equals_OFFSET;
static CFISH_INLINE bool
TESTCFISH_TestMemory_Equals(testcfish_TestMemory* self, cfish_Obj* other) {
    const TESTCFISH_TestMemory_Equals_t method = (TESTCFISH_TestMemory_Equals_t)cfish_obj_method(self, TESTCFISH_TestMemory_Equals_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTCFISH_TestMemory_Compare_To(testcfish_TestMemory* self, cfish_Obj* other) {
    const TESTCFISH_TestMemory_Compare_To_t method = (TESTCFISH_TestMemory_Compare_To_t)cfish_obj_method(self, TESTCFISH_TestMemory_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_Destroy_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestMemory_Destroy(testcfish_TestMemory* self) {
    const TESTCFISH_TestMemory_Destroy_t method = (TESTCFISH_TestMemory_Destroy_t)cfish_obj_method(self, TESTCFISH_TestMemory_Destroy_OFFSET);
    method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTCFISH_TestMemory_To_String(testcfish_TestMemory* self) {
    const TESTCFISH_TestMemory_To_String_t method = (TESTCFISH_TestMemory_To_String_t)cfish_obj_method(self, TESTCFISH_TestMemory_To_String_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestMemory_Run_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestMemory_Run(testcfish_TestMemory* self, cfish_TestBatchRunner* runner) {
    const TESTCFISH_TestMemory_Run_t method = (TESTCFISH_TestMemory_Run_t)cfish_obj_method(self, TESTCFISH_TestMemory_Run_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestMemory testcfish_TestMemory
  #define TESTMEMORY TESTCFISH_TESTMEMORY
  #define TestMemory_new testcfish_TestMemory_new
  #define TestMemory_get_class testcfish_TestMemory_get_class
  #define TestMemory_get_class_name testcfish_TestMemory_get_class_name
  #define TestMemory_is_a testcfish_TestMemory_is_a
  #define TestMemory_Run_IMP TESTCFISH_TestMemory_Run_IMP
  #define TestMemory_To_Host TESTCFISH_TestMemory_To_Host
  #define TestMemory_To_Host_t TESTCFISH_TestMemory_To_Host_t
  #define TestMemory_Clone TESTCFISH_TestMemory_Clone
  #define TestMemory_Clone_t TESTCFISH_TestMemory_Clone_t
  #define TestMemory_Equals TESTCFISH_TestMemory_Equals
  #define TestMemory_Equals_t TESTCFISH_TestMemory_Equals_t
  #define TestMemory_Compare_To TESTCFISH_TestMemory_Compare_To
  #define TestMemory_Compare_To_t TESTCFISH_TestMemory_Compare_To_t
  #define TestMemory_Destroy TESTCFISH_TestMemory_Destroy
  #define TestMemory_Destroy_t TESTCFISH_TestMemory_Destroy_t
  #define TestMemory_To_String TESTCFISH_TestMemory_To_String
  #define TestMemory_To_String_t TESTCFISH_TestMemory_To_String_t
  #define TestMemory_Run TESTCFISH_TestMemory_Run
  #define TestMemory_Run_t TESTCFISH_TestMemory_Run_t
#endif /* TESTCFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TEST_UTIL_TESTMEMORY */



