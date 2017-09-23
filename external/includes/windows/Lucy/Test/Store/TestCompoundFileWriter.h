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


#ifndef H_LUCY_TEST_STORE_TESTCOMPOUNDFILEWRITER
#define H_LUCY_TEST_STORE_TESTCOMPOUNDFILEWRITER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTCOMPOUNDFILEWRITER
extern uint32_t testlucy_TestCFWriter_IVARS_OFFSET;
typedef struct testlucy_TestCompoundFileWriterIVARS testlucy_TestCompoundFileWriterIVARS;
static CFISH_INLINE testlucy_TestCompoundFileWriterIVARS*
testlucy_TestCFWriter_IVARS(testlucy_TestCompoundFileWriter *self) {
   char *ptr = (char*)self + testlucy_TestCFWriter_IVARS_OFFSET;
   return (testlucy_TestCompoundFileWriterIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestCompoundFileWriterIVARS testlucy_TestCompoundFileWriterIVARS
  #define TestCFWriter_IVARS testlucy_TestCFWriter_IVARS
#endif


#endif /* C_TESTLUCY_TESTCOMPOUNDFILEWRITER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestCompoundFileWriter*
testlucy_TestCFWriter_new(void);

void
TESTLUCY_TestCFWriter_Run_IMP(testlucy_TestCompoundFileWriter* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestCFWriter_To_Host_t)(testlucy_TestCompoundFileWriter* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestCFWriter_Clone_t)(testlucy_TestCompoundFileWriter* self);

typedef bool
(*TESTLUCY_TestCFWriter_Equals_t)(testlucy_TestCompoundFileWriter* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestCFWriter_Compare_To_t)(testlucy_TestCompoundFileWriter* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestCFWriter_Destroy_t)(testlucy_TestCompoundFileWriter* self);

typedef cfish_String*
(*TESTLUCY_TestCFWriter_To_String_t)(testlucy_TestCompoundFileWriter* self);

typedef void
(*TESTLUCY_TestCFWriter_Run_t)(testlucy_TestCompoundFileWriter* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestCFWriter_get_class(testlucy_TestCompoundFileWriter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestCFWriter_get_class_name(testlucy_TestCompoundFileWriter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestCFWriter_is_a(testlucy_TestCompoundFileWriter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestCFWriter_To_Host(testlucy_TestCompoundFileWriter* self, void* vcache) {
    const TESTLUCY_TestCFWriter_To_Host_t method = (TESTLUCY_TestCFWriter_To_Host_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestCFWriter_Clone(testlucy_TestCompoundFileWriter* self) {
    const TESTLUCY_TestCFWriter_Clone_t method = (TESTLUCY_TestCFWriter_Clone_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestCFWriter_Equals(testlucy_TestCompoundFileWriter* self, cfish_Obj* other) {
    const TESTLUCY_TestCFWriter_Equals_t method = (TESTLUCY_TestCFWriter_Equals_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestCFWriter_Compare_To(testlucy_TestCompoundFileWriter* self, cfish_Obj* other) {
    const TESTLUCY_TestCFWriter_Compare_To_t method = (TESTLUCY_TestCFWriter_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestCFWriter_Destroy(testlucy_TestCompoundFileWriter* self) {
    const TESTLUCY_TestCFWriter_Destroy_t method = (TESTLUCY_TestCFWriter_Destroy_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestCFWriter_To_String(testlucy_TestCompoundFileWriter* self) {
    const TESTLUCY_TestCFWriter_To_String_t method = (TESTLUCY_TestCFWriter_To_String_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestCFWriter_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestCFWriter_Run(testlucy_TestCompoundFileWriter* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestCFWriter_Run_t method = (TESTLUCY_TestCFWriter_Run_t)cfish_obj_method(self, TESTLUCY_TestCFWriter_Run_OFFSET);
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
  #define TestCompoundFileWriter testlucy_TestCompoundFileWriter
  #define TESTCOMPOUNDFILEWRITER TESTLUCY_TESTCOMPOUNDFILEWRITER
  #define TestCFWriter_new testlucy_TestCFWriter_new
  #define TestCFWriter_get_class testlucy_TestCFWriter_get_class
  #define TestCFWriter_get_class_name testlucy_TestCFWriter_get_class_name
  #define TestCFWriter_is_a testlucy_TestCFWriter_is_a
  #define TestCFWriter_Run_IMP TESTLUCY_TestCFWriter_Run_IMP
  #define TestCFWriter_To_Host TESTLUCY_TestCFWriter_To_Host
  #define TestCFWriter_To_Host_t TESTLUCY_TestCFWriter_To_Host_t
  #define TestCFWriter_Clone TESTLUCY_TestCFWriter_Clone
  #define TestCFWriter_Clone_t TESTLUCY_TestCFWriter_Clone_t
  #define TestCFWriter_Equals TESTLUCY_TestCFWriter_Equals
  #define TestCFWriter_Equals_t TESTLUCY_TestCFWriter_Equals_t
  #define TestCFWriter_Compare_To TESTLUCY_TestCFWriter_Compare_To
  #define TestCFWriter_Compare_To_t TESTLUCY_TestCFWriter_Compare_To_t
  #define TestCFWriter_Destroy TESTLUCY_TestCFWriter_Destroy
  #define TestCFWriter_Destroy_t TESTLUCY_TestCFWriter_Destroy_t
  #define TestCFWriter_To_String TESTLUCY_TestCFWriter_To_String
  #define TestCFWriter_To_String_t TESTLUCY_TestCFWriter_To_String_t
  #define TestCFWriter_Run TESTLUCY_TestCFWriter_Run
  #define TestCFWriter_Run_t TESTLUCY_TestCFWriter_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_STORE_TESTCOMPOUNDFILEWRITER */



