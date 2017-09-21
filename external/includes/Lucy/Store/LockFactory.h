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


#ifndef H_LUCY_STORE_LOCKFACTORY
#define H_LUCY_STORE_LOCKFACTORY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_LOCKFACTORY
extern uint32_t lucy_LockFact_IVARS_OFFSET;
typedef struct lucy_LockFactoryIVARS lucy_LockFactoryIVARS;
static CFISH_INLINE lucy_LockFactoryIVARS*
lucy_LockFact_IVARS(lucy_LockFactory *self) {
   char *ptr = (char*)self + lucy_LockFact_IVARS_OFFSET;
   return (lucy_LockFactoryIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define LockFactoryIVARS lucy_LockFactoryIVARS
  #define LockFact_IVARS lucy_LockFact_IVARS
#endif

struct lucy_LockFactoryIVARS {
    lucy_Folder* folder;
    cfish_String* host;
};

#endif /* C_LUCY_LOCKFACTORY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_LockFactory*
lucy_LockFact_new(lucy_Folder* folder, cfish_String* host);

LUCY_VISIBLE lucy_LockFactory*
lucy_LockFact_init(lucy_LockFactory* self, lucy_Folder* folder, cfish_String* host);

lucy_Lock*
LUCY_LockFact_Make_Lock_IMP(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval);

lucy_Lock*
LUCY_LockFact_Make_Shared_Lock_IMP(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval);

void
LUCY_LockFact_Destroy_IMP(lucy_LockFactory* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_LockFact_To_Host_t)(lucy_LockFactory* self, void* vcache);

typedef cfish_Obj*
(*LUCY_LockFact_Clone_t)(lucy_LockFactory* self);

typedef bool
(*LUCY_LockFact_Equals_t)(lucy_LockFactory* self, cfish_Obj* other);

typedef int32_t
(*LUCY_LockFact_Compare_To_t)(lucy_LockFactory* self, cfish_Obj* other);

typedef void
(*LUCY_LockFact_Destroy_t)(lucy_LockFactory* self);

typedef cfish_String*
(*LUCY_LockFact_To_String_t)(lucy_LockFactory* self);

typedef lucy_Lock*
(*LUCY_LockFact_Make_Lock_t)(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval);

typedef lucy_Lock*
(*LUCY_LockFact_Make_Shared_Lock_t)(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_LockFact_get_class(lucy_LockFactory *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_LockFact_get_class_name(lucy_LockFactory *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_LockFact_is_a(lucy_LockFactory *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_LockFact_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_LockFact_To_Host(lucy_LockFactory* self, void* vcache) {
    const LUCY_LockFact_To_Host_t method = (LUCY_LockFact_To_Host_t)cfish_obj_method(self, LUCY_LockFact_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_LockFact_Clone(lucy_LockFactory* self) {
    const LUCY_LockFact_Clone_t method = (LUCY_LockFact_Clone_t)cfish_obj_method(self, LUCY_LockFact_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_LockFact_Equals(lucy_LockFactory* self, cfish_Obj* other) {
    const LUCY_LockFact_Equals_t method = (LUCY_LockFact_Equals_t)cfish_obj_method(self, LUCY_LockFact_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_LockFact_Compare_To(lucy_LockFactory* self, cfish_Obj* other) {
    const LUCY_LockFact_Compare_To_t method = (LUCY_LockFact_Compare_To_t)cfish_obj_method(self, LUCY_LockFact_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_LockFact_Destroy(lucy_LockFactory* self) {
    const LUCY_LockFact_Destroy_t method = (LUCY_LockFact_Destroy_t)cfish_obj_method(self, LUCY_LockFact_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_LockFact_To_String(lucy_LockFactory* self) {
    const LUCY_LockFact_To_String_t method = (LUCY_LockFact_To_String_t)cfish_obj_method(self, LUCY_LockFact_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_Make_Lock_OFFSET;
static CFISH_INLINE lucy_Lock*
LUCY_LockFact_Make_Lock(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval) {
    const LUCY_LockFact_Make_Lock_t method = (LUCY_LockFact_Make_Lock_t)cfish_obj_method(self, LUCY_LockFact_Make_Lock_OFFSET);
    return method(self, name, timeout, interval);
}

extern LUCY_VISIBLE uint32_t LUCY_LockFact_Make_Shared_Lock_OFFSET;
static CFISH_INLINE lucy_Lock*
LUCY_LockFact_Make_Shared_Lock(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval) {
    const LUCY_LockFact_Make_Shared_Lock_t method = (LUCY_LockFact_Make_Shared_Lock_t)cfish_obj_method(self, LUCY_LockFact_Make_Shared_Lock_OFFSET);
    return method(self, name, timeout, interval);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_LockFact_Make_Lock_OVERRIDE NULL
#define Lucy_LockFact_Make_Shared_Lock_OVERRIDE NULL
#else
lucy_Lock*
Lucy_LockFact_Make_Lock_OVERRIDE(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval);
lucy_Lock*
Lucy_LockFact_Make_Shared_Lock_OVERRIDE(lucy_LockFactory* self, cfish_String* name, int32_t timeout, int32_t interval);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define LockFactory lucy_LockFactory
  #define LOCKFACTORY LUCY_LOCKFACTORY
  #define LockFact_new lucy_LockFact_new
  #define LockFact_init lucy_LockFact_init
  #define LockFact_get_class lucy_LockFact_get_class
  #define LockFact_get_class_name lucy_LockFact_get_class_name
  #define LockFact_is_a lucy_LockFact_is_a
  #define LockFact_Make_Lock_IMP LUCY_LockFact_Make_Lock_IMP
  #define LockFact_Make_Shared_Lock_IMP LUCY_LockFact_Make_Shared_Lock_IMP
  #define LockFact_Destroy_IMP LUCY_LockFact_Destroy_IMP
  #define LockFact_To_Host LUCY_LockFact_To_Host
  #define LockFact_To_Host_t LUCY_LockFact_To_Host_t
  #define LockFact_Clone LUCY_LockFact_Clone
  #define LockFact_Clone_t LUCY_LockFact_Clone_t
  #define LockFact_Equals LUCY_LockFact_Equals
  #define LockFact_Equals_t LUCY_LockFact_Equals_t
  #define LockFact_Compare_To LUCY_LockFact_Compare_To
  #define LockFact_Compare_To_t LUCY_LockFact_Compare_To_t
  #define LockFact_Destroy LUCY_LockFact_Destroy
  #define LockFact_Destroy_t LUCY_LockFact_Destroy_t
  #define LockFact_To_String LUCY_LockFact_To_String
  #define LockFact_To_String_t LUCY_LockFact_To_String_t
  #define LockFact_Make_Lock LUCY_LockFact_Make_Lock
  #define LockFact_Make_Lock_t LUCY_LockFact_Make_Lock_t
  #define LockFact_Make_Shared_Lock LUCY_LockFact_Make_Shared_Lock
  #define LockFact_Make_Shared_Lock_t LUCY_LockFact_Make_Shared_Lock_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_LOCKFACTORY */




