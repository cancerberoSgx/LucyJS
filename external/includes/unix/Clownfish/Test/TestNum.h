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


#ifndef H_CLOWNFISH_TEST_TESTNUM
#define H_CLOWNFISH_TEST_TESTNUM 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testcfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTCFISH_TESTNUM
extern uint32_t testcfish_TestNum_IVARS_OFFSET;
typedef struct testcfish_TestNumIVARS testcfish_TestNumIVARS;
static CFISH_INLINE testcfish_TestNumIVARS*
testcfish_TestNum_IVARS(testcfish_TestNum *self) {
   char *ptr = (char*)self + testcfish_TestNum_IVARS_OFFSET;
   return (testcfish_TestNumIVARS*)ptr;
}
#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestNumIVARS testcfish_TestNumIVARS
  #define TestNum_IVARS testcfish_TestNum_IVARS
#endif


#endif /* C_TESTCFISH_TESTNUM */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTCFISH_VISIBLE testcfish_TestNum*
testcfish_TestNum_new(void);

void
TESTCFISH_TestNum_Run_IMP(testcfish_TestNum* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTCFISH_TestNum_To_Host_t)(testcfish_TestNum* self, void* vcache);

typedef cfish_Obj*
(*TESTCFISH_TestNum_Clone_t)(testcfish_TestNum* self);

typedef bool
(*TESTCFISH_TestNum_Equals_t)(testcfish_TestNum* self, cfish_Obj* other);

typedef int32_t
(*TESTCFISH_TestNum_Compare_To_t)(testcfish_TestNum* self, cfish_Obj* other);

typedef void
(*TESTCFISH_TestNum_Destroy_t)(testcfish_TestNum* self);

typedef cfish_String*
(*TESTCFISH_TestNum_To_String_t)(testcfish_TestNum* self);

typedef void
(*TESTCFISH_TestNum_Run_t)(testcfish_TestNum* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testcfish_TestNum_get_class(testcfish_TestNum *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testcfish_TestNum_get_class_name(testcfish_TestNum *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testcfish_TestNum_is_a(testcfish_TestNum *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_To_Host_OFFSET;
static CFISH_INLINE void*
TESTCFISH_TestNum_To_Host(testcfish_TestNum* self, void* vcache) {
    const TESTCFISH_TestNum_To_Host_t method = (TESTCFISH_TestNum_To_Host_t)cfish_obj_method(self, TESTCFISH_TestNum_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTCFISH_TestNum_Clone(testcfish_TestNum* self) {
    const TESTCFISH_TestNum_Clone_t method = (TESTCFISH_TestNum_Clone_t)cfish_obj_method(self, TESTCFISH_TestNum_Clone_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_Equals_OFFSET;
static CFISH_INLINE bool
TESTCFISH_TestNum_Equals(testcfish_TestNum* self, cfish_Obj* other) {
    const TESTCFISH_TestNum_Equals_t method = (TESTCFISH_TestNum_Equals_t)cfish_obj_method(self, TESTCFISH_TestNum_Equals_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTCFISH_TestNum_Compare_To(testcfish_TestNum* self, cfish_Obj* other) {
    const TESTCFISH_TestNum_Compare_To_t method = (TESTCFISH_TestNum_Compare_To_t)cfish_obj_method(self, TESTCFISH_TestNum_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_Destroy_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestNum_Destroy(testcfish_TestNum* self) {
    const TESTCFISH_TestNum_Destroy_t method = (TESTCFISH_TestNum_Destroy_t)cfish_obj_method(self, TESTCFISH_TestNum_Destroy_OFFSET);
    method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTCFISH_TestNum_To_String(testcfish_TestNum* self) {
    const TESTCFISH_TestNum_To_String_t method = (TESTCFISH_TestNum_To_String_t)cfish_obj_method(self, TESTCFISH_TestNum_To_String_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestNum_Run_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestNum_Run(testcfish_TestNum* self, cfish_TestBatchRunner* runner) {
    const TESTCFISH_TestNum_Run_t method = (TESTCFISH_TestNum_Run_t)cfish_obj_method(self, TESTCFISH_TestNum_Run_OFFSET);
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
  #define TestNum testcfish_TestNum
  #define TESTNUM TESTCFISH_TESTNUM
  #define TestNum_new testcfish_TestNum_new
  #define TestNum_get_class testcfish_TestNum_get_class
  #define TestNum_get_class_name testcfish_TestNum_get_class_name
  #define TestNum_is_a testcfish_TestNum_is_a
  #define TestNum_Run_IMP TESTCFISH_TestNum_Run_IMP
  #define TestNum_To_Host TESTCFISH_TestNum_To_Host
  #define TestNum_To_Host_t TESTCFISH_TestNum_To_Host_t
  #define TestNum_Clone TESTCFISH_TestNum_Clone
  #define TestNum_Clone_t TESTCFISH_TestNum_Clone_t
  #define TestNum_Equals TESTCFISH_TestNum_Equals
  #define TestNum_Equals_t TESTCFISH_TestNum_Equals_t
  #define TestNum_Compare_To TESTCFISH_TestNum_Compare_To
  #define TestNum_Compare_To_t TESTCFISH_TestNum_Compare_To_t
  #define TestNum_Destroy TESTCFISH_TestNum_Destroy
  #define TestNum_Destroy_t TESTCFISH_TestNum_Destroy_t
  #define TestNum_To_String TESTCFISH_TestNum_To_String
  #define TestNum_To_String_t TESTCFISH_TestNum_To_String_t
  #define TestNum_Run TESTCFISH_TestNum_Run
  #define TestNum_Run_t TESTCFISH_TestNum_Run_t
#endif /* TESTCFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TEST_TESTNUM */




