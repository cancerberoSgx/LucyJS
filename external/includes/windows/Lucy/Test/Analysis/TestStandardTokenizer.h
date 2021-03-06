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


#ifndef H_LUCY_TEST_ANALYSIS_TESTSTANDARDTOKENIZER
#define H_LUCY_TEST_ANALYSIS_TESTSTANDARDTOKENIZER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTSTANDARDTOKENIZER
extern uint32_t testlucy_TestStandardTokenizer_IVARS_OFFSET;
typedef struct testlucy_TestStandardTokenizerIVARS testlucy_TestStandardTokenizerIVARS;
static CFISH_INLINE testlucy_TestStandardTokenizerIVARS*
testlucy_TestStandardTokenizer_IVARS(testlucy_TestStandardTokenizer *self) {
   char *ptr = (char*)self + testlucy_TestStandardTokenizer_IVARS_OFFSET;
   return (testlucy_TestStandardTokenizerIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestStandardTokenizerIVARS testlucy_TestStandardTokenizerIVARS
  #define TestStandardTokenizer_IVARS testlucy_TestStandardTokenizer_IVARS
#endif


#endif /* C_TESTLUCY_TESTSTANDARDTOKENIZER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestStandardTokenizer*
testlucy_TestStandardTokenizer_new(void);

void
TESTLUCY_TestStandardTokenizer_Run_IMP(testlucy_TestStandardTokenizer* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestStandardTokenizer_To_Host_t)(testlucy_TestStandardTokenizer* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestStandardTokenizer_Clone_t)(testlucy_TestStandardTokenizer* self);

typedef bool
(*TESTLUCY_TestStandardTokenizer_Equals_t)(testlucy_TestStandardTokenizer* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestStandardTokenizer_Compare_To_t)(testlucy_TestStandardTokenizer* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestStandardTokenizer_Destroy_t)(testlucy_TestStandardTokenizer* self);

typedef cfish_String*
(*TESTLUCY_TestStandardTokenizer_To_String_t)(testlucy_TestStandardTokenizer* self);

typedef void
(*TESTLUCY_TestStandardTokenizer_Run_t)(testlucy_TestStandardTokenizer* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestStandardTokenizer_get_class(testlucy_TestStandardTokenizer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestStandardTokenizer_get_class_name(testlucy_TestStandardTokenizer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestStandardTokenizer_is_a(testlucy_TestStandardTokenizer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestStandardTokenizer_To_Host(testlucy_TestStandardTokenizer* self, void* vcache) {
    const TESTLUCY_TestStandardTokenizer_To_Host_t method = (TESTLUCY_TestStandardTokenizer_To_Host_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestStandardTokenizer_Clone(testlucy_TestStandardTokenizer* self) {
    const TESTLUCY_TestStandardTokenizer_Clone_t method = (TESTLUCY_TestStandardTokenizer_Clone_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestStandardTokenizer_Equals(testlucy_TestStandardTokenizer* self, cfish_Obj* other) {
    const TESTLUCY_TestStandardTokenizer_Equals_t method = (TESTLUCY_TestStandardTokenizer_Equals_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestStandardTokenizer_Compare_To(testlucy_TestStandardTokenizer* self, cfish_Obj* other) {
    const TESTLUCY_TestStandardTokenizer_Compare_To_t method = (TESTLUCY_TestStandardTokenizer_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestStandardTokenizer_Destroy(testlucy_TestStandardTokenizer* self) {
    const TESTLUCY_TestStandardTokenizer_Destroy_t method = (TESTLUCY_TestStandardTokenizer_Destroy_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestStandardTokenizer_To_String(testlucy_TestStandardTokenizer* self) {
    const TESTLUCY_TestStandardTokenizer_To_String_t method = (TESTLUCY_TestStandardTokenizer_To_String_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestStandardTokenizer_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestStandardTokenizer_Run(testlucy_TestStandardTokenizer* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestStandardTokenizer_Run_t method = (TESTLUCY_TestStandardTokenizer_Run_t)cfish_obj_method(self, TESTLUCY_TestStandardTokenizer_Run_OFFSET);
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
  #define TestStandardTokenizer testlucy_TestStandardTokenizer
  #define TESTSTANDARDTOKENIZER TESTLUCY_TESTSTANDARDTOKENIZER
  #define TestStandardTokenizer_new testlucy_TestStandardTokenizer_new
  #define TestStandardTokenizer_get_class testlucy_TestStandardTokenizer_get_class
  #define TestStandardTokenizer_get_class_name testlucy_TestStandardTokenizer_get_class_name
  #define TestStandardTokenizer_is_a testlucy_TestStandardTokenizer_is_a
  #define TestStandardTokenizer_Run_IMP TESTLUCY_TestStandardTokenizer_Run_IMP
  #define TestStandardTokenizer_To_Host TESTLUCY_TestStandardTokenizer_To_Host
  #define TestStandardTokenizer_To_Host_t TESTLUCY_TestStandardTokenizer_To_Host_t
  #define TestStandardTokenizer_Clone TESTLUCY_TestStandardTokenizer_Clone
  #define TestStandardTokenizer_Clone_t TESTLUCY_TestStandardTokenizer_Clone_t
  #define TestStandardTokenizer_Equals TESTLUCY_TestStandardTokenizer_Equals
  #define TestStandardTokenizer_Equals_t TESTLUCY_TestStandardTokenizer_Equals_t
  #define TestStandardTokenizer_Compare_To TESTLUCY_TestStandardTokenizer_Compare_To
  #define TestStandardTokenizer_Compare_To_t TESTLUCY_TestStandardTokenizer_Compare_To_t
  #define TestStandardTokenizer_Destroy TESTLUCY_TestStandardTokenizer_Destroy
  #define TestStandardTokenizer_Destroy_t TESTLUCY_TestStandardTokenizer_Destroy_t
  #define TestStandardTokenizer_To_String TESTLUCY_TestStandardTokenizer_To_String
  #define TestStandardTokenizer_To_String_t TESTLUCY_TestStandardTokenizer_To_String_t
  #define TestStandardTokenizer_Run TESTLUCY_TestStandardTokenizer_Run
  #define TestStandardTokenizer_Run_t TESTLUCY_TestStandardTokenizer_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_ANALYSIS_TESTSTANDARDTOKENIZER */




