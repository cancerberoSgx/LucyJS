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


#ifndef H_CLOWNFISH_TEST_TESTHASHITERATOR
#define H_CLOWNFISH_TEST_TESTHASHITERATOR 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testcfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTCFISH_TESTHASHITERATOR
extern uint32_t testcfish_TestHashIterator_IVARS_OFFSET;
typedef struct testcfish_TestHashIteratorIVARS testcfish_TestHashIteratorIVARS;
static CFISH_INLINE testcfish_TestHashIteratorIVARS*
testcfish_TestHashIterator_IVARS(testcfish_TestHashIterator *self) {
   char *ptr = (char*)self + testcfish_TestHashIterator_IVARS_OFFSET;
   return (testcfish_TestHashIteratorIVARS*)ptr;
}
#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestHashIteratorIVARS testcfish_TestHashIteratorIVARS
  #define TestHashIterator_IVARS testcfish_TestHashIterator_IVARS
#endif


#endif /* C_TESTCFISH_TESTHASHITERATOR */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTCFISH_VISIBLE testcfish_TestHashIterator*
testcfish_TestHashIterator_new(void);

void
TESTCFISH_TestHashIterator_Run_IMP(testcfish_TestHashIterator* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTCFISH_TestHashIterator_To_Host_t)(testcfish_TestHashIterator* self, void* vcache);

typedef cfish_Obj*
(*TESTCFISH_TestHashIterator_Clone_t)(testcfish_TestHashIterator* self);

typedef bool
(*TESTCFISH_TestHashIterator_Equals_t)(testcfish_TestHashIterator* self, cfish_Obj* other);

typedef int32_t
(*TESTCFISH_TestHashIterator_Compare_To_t)(testcfish_TestHashIterator* self, cfish_Obj* other);

typedef void
(*TESTCFISH_TestHashIterator_Destroy_t)(testcfish_TestHashIterator* self);

typedef cfish_String*
(*TESTCFISH_TestHashIterator_To_String_t)(testcfish_TestHashIterator* self);

typedef void
(*TESTCFISH_TestHashIterator_Run_t)(testcfish_TestHashIterator* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testcfish_TestHashIterator_get_class(testcfish_TestHashIterator *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testcfish_TestHashIterator_get_class_name(testcfish_TestHashIterator *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testcfish_TestHashIterator_is_a(testcfish_TestHashIterator *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_To_Host_OFFSET;
static CFISH_INLINE void*
TESTCFISH_TestHashIterator_To_Host(testcfish_TestHashIterator* self, void* vcache) {
    const TESTCFISH_TestHashIterator_To_Host_t method = (TESTCFISH_TestHashIterator_To_Host_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTCFISH_TestHashIterator_Clone(testcfish_TestHashIterator* self) {
    const TESTCFISH_TestHashIterator_Clone_t method = (TESTCFISH_TestHashIterator_Clone_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_Clone_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_Equals_OFFSET;
static CFISH_INLINE bool
TESTCFISH_TestHashIterator_Equals(testcfish_TestHashIterator* self, cfish_Obj* other) {
    const TESTCFISH_TestHashIterator_Equals_t method = (TESTCFISH_TestHashIterator_Equals_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_Equals_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTCFISH_TestHashIterator_Compare_To(testcfish_TestHashIterator* self, cfish_Obj* other) {
    const TESTCFISH_TestHashIterator_Compare_To_t method = (TESTCFISH_TestHashIterator_Compare_To_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_Destroy_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestHashIterator_Destroy(testcfish_TestHashIterator* self) {
    const TESTCFISH_TestHashIterator_Destroy_t method = (TESTCFISH_TestHashIterator_Destroy_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_Destroy_OFFSET);
    method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTCFISH_TestHashIterator_To_String(testcfish_TestHashIterator* self) {
    const TESTCFISH_TestHashIterator_To_String_t method = (TESTCFISH_TestHashIterator_To_String_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_To_String_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestHashIterator_Run_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestHashIterator_Run(testcfish_TestHashIterator* self, cfish_TestBatchRunner* runner) {
    const TESTCFISH_TestHashIterator_Run_t method = (TESTCFISH_TestHashIterator_Run_t)cfish_obj_method(self, TESTCFISH_TestHashIterator_Run_OFFSET);
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
  #define TestHashIterator testcfish_TestHashIterator
  #define TESTHASHITERATOR TESTCFISH_TESTHASHITERATOR
  #define TestHashIterator_new testcfish_TestHashIterator_new
  #define TestHashIterator_get_class testcfish_TestHashIterator_get_class
  #define TestHashIterator_get_class_name testcfish_TestHashIterator_get_class_name
  #define TestHashIterator_is_a testcfish_TestHashIterator_is_a
  #define TestHashIterator_Run_IMP TESTCFISH_TestHashIterator_Run_IMP
  #define TestHashIterator_To_Host TESTCFISH_TestHashIterator_To_Host
  #define TestHashIterator_To_Host_t TESTCFISH_TestHashIterator_To_Host_t
  #define TestHashIterator_Clone TESTCFISH_TestHashIterator_Clone
  #define TestHashIterator_Clone_t TESTCFISH_TestHashIterator_Clone_t
  #define TestHashIterator_Equals TESTCFISH_TestHashIterator_Equals
  #define TestHashIterator_Equals_t TESTCFISH_TestHashIterator_Equals_t
  #define TestHashIterator_Compare_To TESTCFISH_TestHashIterator_Compare_To
  #define TestHashIterator_Compare_To_t TESTCFISH_TestHashIterator_Compare_To_t
  #define TestHashIterator_Destroy TESTCFISH_TestHashIterator_Destroy
  #define TestHashIterator_Destroy_t TESTCFISH_TestHashIterator_Destroy_t
  #define TestHashIterator_To_String TESTCFISH_TestHashIterator_To_String
  #define TestHashIterator_To_String_t TESTCFISH_TestHashIterator_To_String_t
  #define TestHashIterator_Run TESTCFISH_TestHashIterator_Run
  #define TestHashIterator_Run_t TESTCFISH_TestHashIterator_Run_t
#endif /* TESTCFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TEST_TESTHASHITERATOR */




