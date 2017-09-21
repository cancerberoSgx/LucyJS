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


#ifndef H_CLOWNFISH_TEST_TESTBLOB
#define H_CLOWNFISH_TEST_TESTBLOB 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testcfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTCFISH_TESTBLOB
extern uint32_t testcfish_TestBlob_IVARS_OFFSET;
typedef struct testcfish_TestBlobIVARS testcfish_TestBlobIVARS;
static CFISH_INLINE testcfish_TestBlobIVARS*
testcfish_TestBlob_IVARS(testcfish_TestBlob *self) {
   char *ptr = (char*)self + testcfish_TestBlob_IVARS_OFFSET;
   return (testcfish_TestBlobIVARS*)ptr;
}
#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestBlobIVARS testcfish_TestBlobIVARS
  #define TestBlob_IVARS testcfish_TestBlob_IVARS
#endif


#endif /* C_TESTCFISH_TESTBLOB */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTCFISH_VISIBLE testcfish_TestBlob*
testcfish_TestBlob_new(void);

void
TESTCFISH_TestBlob_Run_IMP(testcfish_TestBlob* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTCFISH_TestBlob_To_Host_t)(testcfish_TestBlob* self, void* vcache);

typedef cfish_Obj*
(*TESTCFISH_TestBlob_Clone_t)(testcfish_TestBlob* self);

typedef bool
(*TESTCFISH_TestBlob_Equals_t)(testcfish_TestBlob* self, cfish_Obj* other);

typedef int32_t
(*TESTCFISH_TestBlob_Compare_To_t)(testcfish_TestBlob* self, cfish_Obj* other);

typedef void
(*TESTCFISH_TestBlob_Destroy_t)(testcfish_TestBlob* self);

typedef cfish_String*
(*TESTCFISH_TestBlob_To_String_t)(testcfish_TestBlob* self);

typedef void
(*TESTCFISH_TestBlob_Run_t)(testcfish_TestBlob* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testcfish_TestBlob_get_class(testcfish_TestBlob *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testcfish_TestBlob_get_class_name(testcfish_TestBlob *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testcfish_TestBlob_is_a(testcfish_TestBlob *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_To_Host_OFFSET;
static CFISH_INLINE void*
TESTCFISH_TestBlob_To_Host(testcfish_TestBlob* self, void* vcache) {
    const TESTCFISH_TestBlob_To_Host_t method = (TESTCFISH_TestBlob_To_Host_t)cfish_obj_method(self, TESTCFISH_TestBlob_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTCFISH_TestBlob_Clone(testcfish_TestBlob* self) {
    const TESTCFISH_TestBlob_Clone_t method = (TESTCFISH_TestBlob_Clone_t)cfish_obj_method(self, TESTCFISH_TestBlob_Clone_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_Equals_OFFSET;
static CFISH_INLINE bool
TESTCFISH_TestBlob_Equals(testcfish_TestBlob* self, cfish_Obj* other) {
    const TESTCFISH_TestBlob_Equals_t method = (TESTCFISH_TestBlob_Equals_t)cfish_obj_method(self, TESTCFISH_TestBlob_Equals_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTCFISH_TestBlob_Compare_To(testcfish_TestBlob* self, cfish_Obj* other) {
    const TESTCFISH_TestBlob_Compare_To_t method = (TESTCFISH_TestBlob_Compare_To_t)cfish_obj_method(self, TESTCFISH_TestBlob_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_Destroy_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestBlob_Destroy(testcfish_TestBlob* self) {
    const TESTCFISH_TestBlob_Destroy_t method = (TESTCFISH_TestBlob_Destroy_t)cfish_obj_method(self, TESTCFISH_TestBlob_Destroy_OFFSET);
    method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTCFISH_TestBlob_To_String(testcfish_TestBlob* self) {
    const TESTCFISH_TestBlob_To_String_t method = (TESTCFISH_TestBlob_To_String_t)cfish_obj_method(self, TESTCFISH_TestBlob_To_String_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBlob_Run_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestBlob_Run(testcfish_TestBlob* self, cfish_TestBatchRunner* runner) {
    const TESTCFISH_TestBlob_Run_t method = (TESTCFISH_TestBlob_Run_t)cfish_obj_method(self, TESTCFISH_TestBlob_Run_OFFSET);
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
  #define TestBlob testcfish_TestBlob
  #define TESTBLOB TESTCFISH_TESTBLOB
  #define TestBlob_new testcfish_TestBlob_new
  #define TestBlob_get_class testcfish_TestBlob_get_class
  #define TestBlob_get_class_name testcfish_TestBlob_get_class_name
  #define TestBlob_is_a testcfish_TestBlob_is_a
  #define TestBlob_Run_IMP TESTCFISH_TestBlob_Run_IMP
  #define TestBlob_To_Host TESTCFISH_TestBlob_To_Host
  #define TestBlob_To_Host_t TESTCFISH_TestBlob_To_Host_t
  #define TestBlob_Clone TESTCFISH_TestBlob_Clone
  #define TestBlob_Clone_t TESTCFISH_TestBlob_Clone_t
  #define TestBlob_Equals TESTCFISH_TestBlob_Equals
  #define TestBlob_Equals_t TESTCFISH_TestBlob_Equals_t
  #define TestBlob_Compare_To TESTCFISH_TestBlob_Compare_To
  #define TestBlob_Compare_To_t TESTCFISH_TestBlob_Compare_To_t
  #define TestBlob_Destroy TESTCFISH_TestBlob_Destroy
  #define TestBlob_Destroy_t TESTCFISH_TestBlob_Destroy_t
  #define TestBlob_To_String TESTCFISH_TestBlob_To_String
  #define TestBlob_To_String_t TESTCFISH_TestBlob_To_String_t
  #define TestBlob_Run TESTCFISH_TestBlob_Run
  #define TestBlob_Run_t TESTCFISH_TestBlob_Run_t
#endif /* TESTCFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TEST_TESTBLOB */




