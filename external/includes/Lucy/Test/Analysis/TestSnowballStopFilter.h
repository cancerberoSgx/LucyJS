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


#ifndef H_LUCY_TEST_ANALYSIS_TESTSNOWBALLSTOPFILTER
#define H_LUCY_TEST_ANALYSIS_TESTSNOWBALLSTOPFILTER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTSNOWBALLSTOPFILTER
extern uint32_t testlucy_TestSnowStop_IVARS_OFFSET;
typedef struct testlucy_TestSnowballStopFilterIVARS testlucy_TestSnowballStopFilterIVARS;
static CFISH_INLINE testlucy_TestSnowballStopFilterIVARS*
testlucy_TestSnowStop_IVARS(testlucy_TestSnowballStopFilter *self) {
   char *ptr = (char*)self + testlucy_TestSnowStop_IVARS_OFFSET;
   return (testlucy_TestSnowballStopFilterIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestSnowballStopFilterIVARS testlucy_TestSnowballStopFilterIVARS
  #define TestSnowStop_IVARS testlucy_TestSnowStop_IVARS
#endif


#endif /* C_TESTLUCY_TESTSNOWBALLSTOPFILTER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestSnowballStopFilter*
testlucy_TestSnowStop_new(void);

void
TESTLUCY_TestSnowStop_Run_IMP(testlucy_TestSnowballStopFilter* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestSnowStop_To_Host_t)(testlucy_TestSnowballStopFilter* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestSnowStop_Clone_t)(testlucy_TestSnowballStopFilter* self);

typedef bool
(*TESTLUCY_TestSnowStop_Equals_t)(testlucy_TestSnowballStopFilter* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestSnowStop_Compare_To_t)(testlucy_TestSnowballStopFilter* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestSnowStop_Destroy_t)(testlucy_TestSnowballStopFilter* self);

typedef cfish_String*
(*TESTLUCY_TestSnowStop_To_String_t)(testlucy_TestSnowballStopFilter* self);

typedef void
(*TESTLUCY_TestSnowStop_Run_t)(testlucy_TestSnowballStopFilter* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestSnowStop_get_class(testlucy_TestSnowballStopFilter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestSnowStop_get_class_name(testlucy_TestSnowballStopFilter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestSnowStop_is_a(testlucy_TestSnowballStopFilter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestSnowStop_To_Host(testlucy_TestSnowballStopFilter* self, void* vcache) {
    const TESTLUCY_TestSnowStop_To_Host_t method = (TESTLUCY_TestSnowStop_To_Host_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestSnowStop_Clone(testlucy_TestSnowballStopFilter* self) {
    const TESTLUCY_TestSnowStop_Clone_t method = (TESTLUCY_TestSnowStop_Clone_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestSnowStop_Equals(testlucy_TestSnowballStopFilter* self, cfish_Obj* other) {
    const TESTLUCY_TestSnowStop_Equals_t method = (TESTLUCY_TestSnowStop_Equals_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestSnowStop_Compare_To(testlucy_TestSnowballStopFilter* self, cfish_Obj* other) {
    const TESTLUCY_TestSnowStop_Compare_To_t method = (TESTLUCY_TestSnowStop_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSnowStop_Destroy(testlucy_TestSnowballStopFilter* self) {
    const TESTLUCY_TestSnowStop_Destroy_t method = (TESTLUCY_TestSnowStop_Destroy_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestSnowStop_To_String(testlucy_TestSnowballStopFilter* self) {
    const TESTLUCY_TestSnowStop_To_String_t method = (TESTLUCY_TestSnowStop_To_String_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStop_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSnowStop_Run(testlucy_TestSnowballStopFilter* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestSnowStop_Run_t method = (TESTLUCY_TestSnowStop_Run_t)cfish_obj_method(self, TESTLUCY_TestSnowStop_Run_OFFSET);
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
  #define TestSnowballStopFilter testlucy_TestSnowballStopFilter
  #define TESTSNOWBALLSTOPFILTER TESTLUCY_TESTSNOWBALLSTOPFILTER
  #define TestSnowStop_new testlucy_TestSnowStop_new
  #define TestSnowStop_get_class testlucy_TestSnowStop_get_class
  #define TestSnowStop_get_class_name testlucy_TestSnowStop_get_class_name
  #define TestSnowStop_is_a testlucy_TestSnowStop_is_a
  #define TestSnowStop_Run_IMP TESTLUCY_TestSnowStop_Run_IMP
  #define TestSnowStop_To_Host TESTLUCY_TestSnowStop_To_Host
  #define TestSnowStop_To_Host_t TESTLUCY_TestSnowStop_To_Host_t
  #define TestSnowStop_Clone TESTLUCY_TestSnowStop_Clone
  #define TestSnowStop_Clone_t TESTLUCY_TestSnowStop_Clone_t
  #define TestSnowStop_Equals TESTLUCY_TestSnowStop_Equals
  #define TestSnowStop_Equals_t TESTLUCY_TestSnowStop_Equals_t
  #define TestSnowStop_Compare_To TESTLUCY_TestSnowStop_Compare_To
  #define TestSnowStop_Compare_To_t TESTLUCY_TestSnowStop_Compare_To_t
  #define TestSnowStop_Destroy TESTLUCY_TestSnowStop_Destroy
  #define TestSnowStop_Destroy_t TESTLUCY_TestSnowStop_Destroy_t
  #define TestSnowStop_To_String TESTLUCY_TestSnowStop_To_String
  #define TestSnowStop_To_String_t TESTLUCY_TestSnowStop_To_String_t
  #define TestSnowStop_Run TESTLUCY_TestSnowStop_Run
  #define TestSnowStop_Run_t TESTLUCY_TestSnowStop_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_ANALYSIS_TESTSNOWBALLSTOPFILTER */




