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


#ifndef H_CLOWNFISH_TESTHARNESS_TESTSUITE
#define H_CLOWNFISH_TESTHARNESS_TESTSUITE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "cfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_TESTSUITE
extern uint32_t cfish_TestSuite_IVARS_OFFSET;
typedef struct cfish_TestSuiteIVARS cfish_TestSuiteIVARS;
static CFISH_INLINE cfish_TestSuiteIVARS*
cfish_TestSuite_IVARS(cfish_TestSuite *self) {
   char *ptr = (char*)self + cfish_TestSuite_IVARS_OFFSET;
   return (cfish_TestSuiteIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define TestSuiteIVARS cfish_TestSuiteIVARS
  #define TestSuite_IVARS cfish_TestSuite_IVARS
#endif

struct cfish_TestSuite {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
    cfish_Vector* batches;
};

#endif /* C_CFISH_TESTSUITE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE cfish_TestSuite*
cfish_TestSuite_new(void);

CFISH_VISIBLE cfish_TestSuite*
cfish_TestSuite_init(cfish_TestSuite* self);

void
CFISH_TestSuite_Destroy_IMP(cfish_TestSuite* self);

void
CFISH_TestSuite_Add_Batch_IMP(cfish_TestSuite* self, cfish_TestBatch* batch);

bool
CFISH_TestSuite_Run_Batch_IMP(cfish_TestSuite* self, cfish_String* class_name, cfish_TestFormatter* formatter);

bool
CFISH_TestSuite_Run_All_Batches_IMP(cfish_TestSuite* self, cfish_TestFormatter* formatter);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_TestSuite_To_Host_t)(cfish_TestSuite* self, void* vcache);

typedef cfish_Obj*
(*CFISH_TestSuite_Clone_t)(cfish_TestSuite* self);

typedef bool
(*CFISH_TestSuite_Equals_t)(cfish_TestSuite* self, cfish_Obj* other);

typedef int32_t
(*CFISH_TestSuite_Compare_To_t)(cfish_TestSuite* self, cfish_Obj* other);

typedef void
(*CFISH_TestSuite_Destroy_t)(cfish_TestSuite* self);

typedef cfish_String*
(*CFISH_TestSuite_To_String_t)(cfish_TestSuite* self);

typedef void
(*CFISH_TestSuite_Add_Batch_t)(cfish_TestSuite* self, cfish_TestBatch* batch);

typedef bool
(*CFISH_TestSuite_Run_Batch_t)(cfish_TestSuite* self, cfish_String* class_name, cfish_TestFormatter* formatter);

typedef bool
(*CFISH_TestSuite_Run_All_Batches_t)(cfish_TestSuite* self, cfish_TestFormatter* formatter);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_TestSuite_get_class(cfish_TestSuite *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_TestSuite_get_class_name(cfish_TestSuite *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_TestSuite_is_a(cfish_TestSuite *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_TestSuite_To_Host(cfish_TestSuite* self, void* vcache) {
    const CFISH_TestSuite_To_Host_t method = (CFISH_TestSuite_To_Host_t)cfish_obj_method(self, CFISH_TestSuite_To_Host_OFFSET);
    return method(self, vcache);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
CFISH_TestSuite_Clone(cfish_TestSuite* self) {
    const CFISH_TestSuite_Clone_t method = (CFISH_TestSuite_Clone_t)cfish_obj_method(self, CFISH_TestSuite_Clone_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_TestSuite_Equals(cfish_TestSuite* self, cfish_Obj* other) {
    const CFISH_TestSuite_Equals_t method = (CFISH_TestSuite_Equals_t)cfish_obj_method(self, CFISH_TestSuite_Equals_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_TestSuite_Compare_To(cfish_TestSuite* self, cfish_Obj* other) {
    const CFISH_TestSuite_Compare_To_t method = (CFISH_TestSuite_Compare_To_t)cfish_obj_method(self, CFISH_TestSuite_Compare_To_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_TestSuite_Destroy(cfish_TestSuite* self) {
    const CFISH_TestSuite_Destroy_t method = (CFISH_TestSuite_Destroy_t)cfish_obj_method(self, CFISH_TestSuite_Destroy_OFFSET);
    method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_TestSuite_To_String(cfish_TestSuite* self) {
    const CFISH_TestSuite_To_String_t method = (CFISH_TestSuite_To_String_t)cfish_obj_method(self, CFISH_TestSuite_To_String_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Add_Batch_OFFSET;
static CFISH_INLINE void
CFISH_TestSuite_Add_Batch(cfish_TestSuite* self, cfish_TestBatch* batch) {
    const CFISH_TestSuite_Add_Batch_t method = (CFISH_TestSuite_Add_Batch_t)cfish_obj_method(self, CFISH_TestSuite_Add_Batch_OFFSET);
    method(self, batch);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Run_Batch_OFFSET;
static CFISH_INLINE bool
CFISH_TestSuite_Run_Batch(cfish_TestSuite* self, cfish_String* class_name, cfish_TestFormatter* formatter) {
    const CFISH_TestSuite_Run_Batch_t method = (CFISH_TestSuite_Run_Batch_t)cfish_obj_method(self, CFISH_TestSuite_Run_Batch_OFFSET);
    return method(self, class_name, formatter);
}

extern CFISH_VISIBLE uint32_t CFISH_TestSuite_Run_All_Batches_OFFSET;
static CFISH_INLINE bool
CFISH_TestSuite_Run_All_Batches(cfish_TestSuite* self, cfish_TestFormatter* formatter) {
    const CFISH_TestSuite_Run_All_Batches_t method = (CFISH_TestSuite_Run_All_Batches_t)cfish_obj_method(self, CFISH_TestSuite_Run_All_Batches_OFFSET);
    return method(self, formatter);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Cfish_TestSuite_Add_Batch_OVERRIDE NULL
#define Cfish_TestSuite_Run_Batch_OVERRIDE NULL
#define Cfish_TestSuite_Run_All_Batches_OVERRIDE NULL
#else
void
Cfish_TestSuite_Add_Batch_OVERRIDE(cfish_TestSuite* self, cfish_TestBatch* batch);
bool
Cfish_TestSuite_Run_Batch_OVERRIDE(cfish_TestSuite* self, cfish_String* class_name, cfish_TestFormatter* formatter);
bool
Cfish_TestSuite_Run_All_Batches_OVERRIDE(cfish_TestSuite* self, cfish_TestFormatter* formatter);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define TestSuite cfish_TestSuite
  #define TESTSUITE CFISH_TESTSUITE
  #define TestSuite_new cfish_TestSuite_new
  #define TestSuite_init cfish_TestSuite_init
  #define TestSuite_get_class cfish_TestSuite_get_class
  #define TestSuite_get_class_name cfish_TestSuite_get_class_name
  #define TestSuite_is_a cfish_TestSuite_is_a
  #define TestSuite_Destroy_IMP CFISH_TestSuite_Destroy_IMP
  #define TestSuite_Add_Batch_IMP CFISH_TestSuite_Add_Batch_IMP
  #define TestSuite_Run_Batch_IMP CFISH_TestSuite_Run_Batch_IMP
  #define TestSuite_Run_All_Batches_IMP CFISH_TestSuite_Run_All_Batches_IMP
  #define TestSuite_To_Host CFISH_TestSuite_To_Host
  #define TestSuite_To_Host_t CFISH_TestSuite_To_Host_t
  #define TestSuite_Clone CFISH_TestSuite_Clone
  #define TestSuite_Clone_t CFISH_TestSuite_Clone_t
  #define TestSuite_Equals CFISH_TestSuite_Equals
  #define TestSuite_Equals_t CFISH_TestSuite_Equals_t
  #define TestSuite_Compare_To CFISH_TestSuite_Compare_To
  #define TestSuite_Compare_To_t CFISH_TestSuite_Compare_To_t
  #define TestSuite_Destroy CFISH_TestSuite_Destroy
  #define TestSuite_Destroy_t CFISH_TestSuite_Destroy_t
  #define TestSuite_To_String CFISH_TestSuite_To_String
  #define TestSuite_To_String_t CFISH_TestSuite_To_String_t
  #define TestSuite_Add_Batch CFISH_TestSuite_Add_Batch
  #define TestSuite_Add_Batch_t CFISH_TestSuite_Add_Batch_t
  #define TestSuite_Run_Batch CFISH_TestSuite_Run_Batch
  #define TestSuite_Run_Batch_t CFISH_TestSuite_Run_Batch_t
  #define TestSuite_Run_All_Batches CFISH_TestSuite_Run_All_Batches
  #define TestSuite_Run_All_Batches_t CFISH_TestSuite_Run_All_Batches_t
#endif /* CFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TESTHARNESS_TESTSUITE */




