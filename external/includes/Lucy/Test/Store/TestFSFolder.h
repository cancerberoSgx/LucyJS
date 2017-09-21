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


#ifndef H_LUCY_TEST_STORE_TESTFSFOLDER
#define H_LUCY_TEST_STORE_TESTFSFOLDER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTFSFOLDER
extern uint32_t testlucy_TestFSFolder_IVARS_OFFSET;
typedef struct testlucy_TestFSFolderIVARS testlucy_TestFSFolderIVARS;
static CFISH_INLINE testlucy_TestFSFolderIVARS*
testlucy_TestFSFolder_IVARS(testlucy_TestFSFolder *self) {
   char *ptr = (char*)self + testlucy_TestFSFolder_IVARS_OFFSET;
   return (testlucy_TestFSFolderIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestFSFolderIVARS testlucy_TestFSFolderIVARS
  #define TestFSFolder_IVARS testlucy_TestFSFolder_IVARS
#endif


#endif /* C_TESTLUCY_TESTFSFOLDER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestFSFolder*
testlucy_TestFSFolder_new(void);

void
TESTLUCY_TestFSFolder_Run_IMP(testlucy_TestFSFolder* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestFSFolder_To_Host_t)(testlucy_TestFSFolder* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestFSFolder_Clone_t)(testlucy_TestFSFolder* self);

typedef bool
(*TESTLUCY_TestFSFolder_Equals_t)(testlucy_TestFSFolder* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestFSFolder_Compare_To_t)(testlucy_TestFSFolder* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestFSFolder_Destroy_t)(testlucy_TestFSFolder* self);

typedef cfish_String*
(*TESTLUCY_TestFSFolder_To_String_t)(testlucy_TestFSFolder* self);

typedef void
(*TESTLUCY_TestFSFolder_Run_t)(testlucy_TestFSFolder* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestFSFolder_get_class(testlucy_TestFSFolder *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestFSFolder_get_class_name(testlucy_TestFSFolder *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestFSFolder_is_a(testlucy_TestFSFolder *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestFSFolder_To_Host(testlucy_TestFSFolder* self, void* vcache) {
    const TESTLUCY_TestFSFolder_To_Host_t method = (TESTLUCY_TestFSFolder_To_Host_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestFSFolder_Clone(testlucy_TestFSFolder* self) {
    const TESTLUCY_TestFSFolder_Clone_t method = (TESTLUCY_TestFSFolder_Clone_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestFSFolder_Equals(testlucy_TestFSFolder* self, cfish_Obj* other) {
    const TESTLUCY_TestFSFolder_Equals_t method = (TESTLUCY_TestFSFolder_Equals_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestFSFolder_Compare_To(testlucy_TestFSFolder* self, cfish_Obj* other) {
    const TESTLUCY_TestFSFolder_Compare_To_t method = (TESTLUCY_TestFSFolder_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestFSFolder_Destroy(testlucy_TestFSFolder* self) {
    const TESTLUCY_TestFSFolder_Destroy_t method = (TESTLUCY_TestFSFolder_Destroy_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestFSFolder_To_String(testlucy_TestFSFolder* self) {
    const TESTLUCY_TestFSFolder_To_String_t method = (TESTLUCY_TestFSFolder_To_String_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestFSFolder_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestFSFolder_Run(testlucy_TestFSFolder* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestFSFolder_Run_t method = (TESTLUCY_TestFSFolder_Run_t)cfish_obj_method(self, TESTLUCY_TestFSFolder_Run_OFFSET);
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
  #define TestFSFolder testlucy_TestFSFolder
  #define TESTFSFOLDER TESTLUCY_TESTFSFOLDER
  #define TestFSFolder_new testlucy_TestFSFolder_new
  #define TestFSFolder_get_class testlucy_TestFSFolder_get_class
  #define TestFSFolder_get_class_name testlucy_TestFSFolder_get_class_name
  #define TestFSFolder_is_a testlucy_TestFSFolder_is_a
  #define TestFSFolder_Run_IMP TESTLUCY_TestFSFolder_Run_IMP
  #define TestFSFolder_To_Host TESTLUCY_TestFSFolder_To_Host
  #define TestFSFolder_To_Host_t TESTLUCY_TestFSFolder_To_Host_t
  #define TestFSFolder_Clone TESTLUCY_TestFSFolder_Clone
  #define TestFSFolder_Clone_t TESTLUCY_TestFSFolder_Clone_t
  #define TestFSFolder_Equals TESTLUCY_TestFSFolder_Equals
  #define TestFSFolder_Equals_t TESTLUCY_TestFSFolder_Equals_t
  #define TestFSFolder_Compare_To TESTLUCY_TestFSFolder_Compare_To
  #define TestFSFolder_Compare_To_t TESTLUCY_TestFSFolder_Compare_To_t
  #define TestFSFolder_Destroy TESTLUCY_TestFSFolder_Destroy
  #define TestFSFolder_Destroy_t TESTLUCY_TestFSFolder_Destroy_t
  #define TestFSFolder_To_String TESTLUCY_TestFSFolder_To_String
  #define TestFSFolder_To_String_t TESTLUCY_TestFSFolder_To_String_t
  #define TestFSFolder_Run TESTLUCY_TestFSFolder_Run
  #define TestFSFolder_Run_t TESTLUCY_TestFSFolder_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_STORE_TESTFSFOLDER */




