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


#ifndef H_LUCY_TEST_INDEX_TESTSEGMENT
#define H_LUCY_TEST_INDEX_TESTSEGMENT 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTSEGMENT
extern uint32_t testlucy_TestSeg_IVARS_OFFSET;
typedef struct testlucy_TestSegmentIVARS testlucy_TestSegmentIVARS;
static CFISH_INLINE testlucy_TestSegmentIVARS*
testlucy_TestSeg_IVARS(testlucy_TestSegment *self) {
   char *ptr = (char*)self + testlucy_TestSeg_IVARS_OFFSET;
   return (testlucy_TestSegmentIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestSegmentIVARS testlucy_TestSegmentIVARS
  #define TestSeg_IVARS testlucy_TestSeg_IVARS
#endif


#endif /* C_TESTLUCY_TESTSEGMENT */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestSegment*
testlucy_TestSeg_new(void);

void
TESTLUCY_TestSeg_Run_IMP(testlucy_TestSegment* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestSeg_To_Host_t)(testlucy_TestSegment* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestSeg_Clone_t)(testlucy_TestSegment* self);

typedef bool
(*TESTLUCY_TestSeg_Equals_t)(testlucy_TestSegment* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestSeg_Compare_To_t)(testlucy_TestSegment* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestSeg_Destroy_t)(testlucy_TestSegment* self);

typedef cfish_String*
(*TESTLUCY_TestSeg_To_String_t)(testlucy_TestSegment* self);

typedef void
(*TESTLUCY_TestSeg_Run_t)(testlucy_TestSegment* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestSeg_get_class(testlucy_TestSegment *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestSeg_get_class_name(testlucy_TestSegment *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestSeg_is_a(testlucy_TestSegment *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestSeg_To_Host(testlucy_TestSegment* self, void* vcache) {
    const TESTLUCY_TestSeg_To_Host_t method = (TESTLUCY_TestSeg_To_Host_t)cfish_obj_method(self, TESTLUCY_TestSeg_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestSeg_Clone(testlucy_TestSegment* self) {
    const TESTLUCY_TestSeg_Clone_t method = (TESTLUCY_TestSeg_Clone_t)cfish_obj_method(self, TESTLUCY_TestSeg_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestSeg_Equals(testlucy_TestSegment* self, cfish_Obj* other) {
    const TESTLUCY_TestSeg_Equals_t method = (TESTLUCY_TestSeg_Equals_t)cfish_obj_method(self, TESTLUCY_TestSeg_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestSeg_Compare_To(testlucy_TestSegment* self, cfish_Obj* other) {
    const TESTLUCY_TestSeg_Compare_To_t method = (TESTLUCY_TestSeg_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestSeg_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSeg_Destroy(testlucy_TestSegment* self) {
    const TESTLUCY_TestSeg_Destroy_t method = (TESTLUCY_TestSeg_Destroy_t)cfish_obj_method(self, TESTLUCY_TestSeg_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestSeg_To_String(testlucy_TestSegment* self) {
    const TESTLUCY_TestSeg_To_String_t method = (TESTLUCY_TestSeg_To_String_t)cfish_obj_method(self, TESTLUCY_TestSeg_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSeg_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSeg_Run(testlucy_TestSegment* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestSeg_Run_t method = (TESTLUCY_TestSeg_Run_t)cfish_obj_method(self, TESTLUCY_TestSeg_Run_OFFSET);
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
  #define TestSegment testlucy_TestSegment
  #define TESTSEGMENT TESTLUCY_TESTSEGMENT
  #define TestSeg_new testlucy_TestSeg_new
  #define TestSeg_get_class testlucy_TestSeg_get_class
  #define TestSeg_get_class_name testlucy_TestSeg_get_class_name
  #define TestSeg_is_a testlucy_TestSeg_is_a
  #define TestSeg_Run_IMP TESTLUCY_TestSeg_Run_IMP
  #define TestSeg_To_Host TESTLUCY_TestSeg_To_Host
  #define TestSeg_To_Host_t TESTLUCY_TestSeg_To_Host_t
  #define TestSeg_Clone TESTLUCY_TestSeg_Clone
  #define TestSeg_Clone_t TESTLUCY_TestSeg_Clone_t
  #define TestSeg_Equals TESTLUCY_TestSeg_Equals
  #define TestSeg_Equals_t TESTLUCY_TestSeg_Equals_t
  #define TestSeg_Compare_To TESTLUCY_TestSeg_Compare_To
  #define TestSeg_Compare_To_t TESTLUCY_TestSeg_Compare_To_t
  #define TestSeg_Destroy TESTLUCY_TestSeg_Destroy
  #define TestSeg_Destroy_t TESTLUCY_TestSeg_Destroy_t
  #define TestSeg_To_String TESTLUCY_TestSeg_To_String
  #define TestSeg_To_String_t TESTLUCY_TestSeg_To_String_t
  #define TestSeg_Run TESTLUCY_TestSeg_Run
  #define TestSeg_Run_t TESTLUCY_TestSeg_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_INDEX_TESTSEGMENT */




