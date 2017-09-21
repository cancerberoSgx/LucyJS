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


#ifndef H_CLOWNFISH_TEST_UTIL_TESTATOMIC
#define H_CLOWNFISH_TEST_UTIL_TESTATOMIC 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testcfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTCFISH_TESTATOMIC
extern uint32_t testcfish_TestAtomic_IVARS_OFFSET;
typedef struct testcfish_TestAtomicIVARS testcfish_TestAtomicIVARS;
static CFISH_INLINE testcfish_TestAtomicIVARS*
testcfish_TestAtomic_IVARS(testcfish_TestAtomic *self) {
   char *ptr = (char*)self + testcfish_TestAtomic_IVARS_OFFSET;
   return (testcfish_TestAtomicIVARS*)ptr;
}
#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestAtomicIVARS testcfish_TestAtomicIVARS
  #define TestAtomic_IVARS testcfish_TestAtomic_IVARS
#endif


#endif /* C_TESTCFISH_TESTATOMIC */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTCFISH_VISIBLE testcfish_TestAtomic*
testcfish_TestAtomic_new(void);

void
TESTCFISH_TestAtomic_Run_IMP(testcfish_TestAtomic* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTCFISH_TestAtomic_To_Host_t)(testcfish_TestAtomic* self, void* vcache);

typedef cfish_Obj*
(*TESTCFISH_TestAtomic_Clone_t)(testcfish_TestAtomic* self);

typedef bool
(*TESTCFISH_TestAtomic_Equals_t)(testcfish_TestAtomic* self, cfish_Obj* other);

typedef int32_t
(*TESTCFISH_TestAtomic_Compare_To_t)(testcfish_TestAtomic* self, cfish_Obj* other);

typedef void
(*TESTCFISH_TestAtomic_Destroy_t)(testcfish_TestAtomic* self);

typedef cfish_String*
(*TESTCFISH_TestAtomic_To_String_t)(testcfish_TestAtomic* self);

typedef void
(*TESTCFISH_TestAtomic_Run_t)(testcfish_TestAtomic* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testcfish_TestAtomic_get_class(testcfish_TestAtomic *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testcfish_TestAtomic_get_class_name(testcfish_TestAtomic *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testcfish_TestAtomic_is_a(testcfish_TestAtomic *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_To_Host_OFFSET;
static CFISH_INLINE void*
TESTCFISH_TestAtomic_To_Host(testcfish_TestAtomic* self, void* vcache) {
    const TESTCFISH_TestAtomic_To_Host_t method = (TESTCFISH_TestAtomic_To_Host_t)cfish_obj_method(self, TESTCFISH_TestAtomic_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTCFISH_TestAtomic_Clone(testcfish_TestAtomic* self) {
    const TESTCFISH_TestAtomic_Clone_t method = (TESTCFISH_TestAtomic_Clone_t)cfish_obj_method(self, TESTCFISH_TestAtomic_Clone_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_Equals_OFFSET;
static CFISH_INLINE bool
TESTCFISH_TestAtomic_Equals(testcfish_TestAtomic* self, cfish_Obj* other) {
    const TESTCFISH_TestAtomic_Equals_t method = (TESTCFISH_TestAtomic_Equals_t)cfish_obj_method(self, TESTCFISH_TestAtomic_Equals_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTCFISH_TestAtomic_Compare_To(testcfish_TestAtomic* self, cfish_Obj* other) {
    const TESTCFISH_TestAtomic_Compare_To_t method = (TESTCFISH_TestAtomic_Compare_To_t)cfish_obj_method(self, TESTCFISH_TestAtomic_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_Destroy_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestAtomic_Destroy(testcfish_TestAtomic* self) {
    const TESTCFISH_TestAtomic_Destroy_t method = (TESTCFISH_TestAtomic_Destroy_t)cfish_obj_method(self, TESTCFISH_TestAtomic_Destroy_OFFSET);
    method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTCFISH_TestAtomic_To_String(testcfish_TestAtomic* self) {
    const TESTCFISH_TestAtomic_To_String_t method = (TESTCFISH_TestAtomic_To_String_t)cfish_obj_method(self, TESTCFISH_TestAtomic_To_String_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestAtomic_Run_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestAtomic_Run(testcfish_TestAtomic* self, cfish_TestBatchRunner* runner) {
    const TESTCFISH_TestAtomic_Run_t method = (TESTCFISH_TestAtomic_Run_t)cfish_obj_method(self, TESTCFISH_TestAtomic_Run_OFFSET);
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
  #define TestAtomic testcfish_TestAtomic
  #define TESTATOMIC TESTCFISH_TESTATOMIC
  #define TestAtomic_new testcfish_TestAtomic_new
  #define TestAtomic_get_class testcfish_TestAtomic_get_class
  #define TestAtomic_get_class_name testcfish_TestAtomic_get_class_name
  #define TestAtomic_is_a testcfish_TestAtomic_is_a
  #define TestAtomic_Run_IMP TESTCFISH_TestAtomic_Run_IMP
  #define TestAtomic_To_Host TESTCFISH_TestAtomic_To_Host
  #define TestAtomic_To_Host_t TESTCFISH_TestAtomic_To_Host_t
  #define TestAtomic_Clone TESTCFISH_TestAtomic_Clone
  #define TestAtomic_Clone_t TESTCFISH_TestAtomic_Clone_t
  #define TestAtomic_Equals TESTCFISH_TestAtomic_Equals
  #define TestAtomic_Equals_t TESTCFISH_TestAtomic_Equals_t
  #define TestAtomic_Compare_To TESTCFISH_TestAtomic_Compare_To
  #define TestAtomic_Compare_To_t TESTCFISH_TestAtomic_Compare_To_t
  #define TestAtomic_Destroy TESTCFISH_TestAtomic_Destroy
  #define TestAtomic_Destroy_t TESTCFISH_TestAtomic_Destroy_t
  #define TestAtomic_To_String TESTCFISH_TestAtomic_To_String
  #define TestAtomic_To_String_t TESTCFISH_TestAtomic_To_String_t
  #define TestAtomic_Run TESTCFISH_TestAtomic_Run
  #define TestAtomic_Run_t TESTCFISH_TestAtomic_Run_t
#endif /* TESTCFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TEST_UTIL_TESTATOMIC */




