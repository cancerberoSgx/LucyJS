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


#ifndef H_LUCY_STORE_DIRHANDLE
#define H_LUCY_STORE_DIRHANDLE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_DIRHANDLE
extern uint32_t lucy_DH_IVARS_OFFSET;
typedef struct lucy_DirHandleIVARS lucy_DirHandleIVARS;
static CFISH_INLINE lucy_DirHandleIVARS*
lucy_DH_IVARS(lucy_DirHandle *self) {
   char *ptr = (char*)self + lucy_DH_IVARS_OFFSET;
   return (lucy_DirHandleIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define DirHandleIVARS lucy_DirHandleIVARS
  #define DH_IVARS lucy_DH_IVARS
#endif

struct lucy_DirHandleIVARS {
    cfish_String* dir;
    cfish_String* entry;
};

#endif /* C_LUCY_DIRHANDLE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_DirHandle*
lucy_DH_init(lucy_DirHandle* self, cfish_String* dir);

bool
LUCY_DH_Next_IMP(lucy_DirHandle* self);

bool
LUCY_DH_Close_IMP(lucy_DirHandle* self);

cfish_String*
LUCY_DH_Get_Dir_IMP(lucy_DirHandle* self);

cfish_String*
LUCY_DH_Get_Entry_IMP(lucy_DirHandle* self);

bool
LUCY_DH_Entry_Is_Dir_IMP(lucy_DirHandle* self);

bool
LUCY_DH_Entry_Is_Symlink_IMP(lucy_DirHandle* self);

void
LUCY_DH_Destroy_IMP(lucy_DirHandle* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_DH_To_Host_t)(lucy_DirHandle* self, void* vcache);

typedef cfish_Obj*
(*LUCY_DH_Clone_t)(lucy_DirHandle* self);

typedef bool
(*LUCY_DH_Equals_t)(lucy_DirHandle* self, cfish_Obj* other);

typedef int32_t
(*LUCY_DH_Compare_To_t)(lucy_DirHandle* self, cfish_Obj* other);

typedef void
(*LUCY_DH_Destroy_t)(lucy_DirHandle* self);

typedef cfish_String*
(*LUCY_DH_To_String_t)(lucy_DirHandle* self);

typedef bool
(*LUCY_DH_Next_t)(lucy_DirHandle* self);

typedef bool
(*LUCY_DH_Close_t)(lucy_DirHandle* self);

typedef cfish_String*
(*LUCY_DH_Get_Dir_t)(lucy_DirHandle* self);

typedef cfish_String*
(*LUCY_DH_Get_Entry_t)(lucy_DirHandle* self);

typedef bool
(*LUCY_DH_Entry_Is_Dir_t)(lucy_DirHandle* self);

typedef bool
(*LUCY_DH_Entry_Is_Symlink_t)(lucy_DirHandle* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_DH_get_class(lucy_DirHandle *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_DH_get_class_name(lucy_DirHandle *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_DH_is_a(lucy_DirHandle *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_DH_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_DH_To_Host(lucy_DirHandle* self, void* vcache) {
    const LUCY_DH_To_Host_t method = (LUCY_DH_To_Host_t)cfish_obj_method(self, LUCY_DH_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_DH_Clone(lucy_DirHandle* self) {
    const LUCY_DH_Clone_t method = (LUCY_DH_Clone_t)cfish_obj_method(self, LUCY_DH_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_DH_Equals(lucy_DirHandle* self, cfish_Obj* other) {
    const LUCY_DH_Equals_t method = (LUCY_DH_Equals_t)cfish_obj_method(self, LUCY_DH_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_DH_Compare_To(lucy_DirHandle* self, cfish_Obj* other) {
    const LUCY_DH_Compare_To_t method = (LUCY_DH_Compare_To_t)cfish_obj_method(self, LUCY_DH_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_DH_Destroy(lucy_DirHandle* self) {
    const LUCY_DH_Destroy_t method = (LUCY_DH_Destroy_t)cfish_obj_method(self, LUCY_DH_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DH_To_String(lucy_DirHandle* self) {
    const LUCY_DH_To_String_t method = (LUCY_DH_To_String_t)cfish_obj_method(self, LUCY_DH_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Next_OFFSET;
static CFISH_INLINE bool
LUCY_DH_Next(lucy_DirHandle* self) {
    const LUCY_DH_Next_t method = (LUCY_DH_Next_t)cfish_obj_method(self, LUCY_DH_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Close_OFFSET;
static CFISH_INLINE bool
LUCY_DH_Close(lucy_DirHandle* self) {
    const LUCY_DH_Close_t method = (LUCY_DH_Close_t)cfish_obj_method(self, LUCY_DH_Close_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Get_Dir_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DH_Get_Dir(lucy_DirHandle* self) {
    const LUCY_DH_Get_Dir_t method = (LUCY_DH_Get_Dir_t)cfish_obj_method(self, LUCY_DH_Get_Dir_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Get_Entry_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DH_Get_Entry(lucy_DirHandle* self) {
    const LUCY_DH_Get_Entry_t method = (LUCY_DH_Get_Entry_t)cfish_obj_method(self, LUCY_DH_Get_Entry_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Entry_Is_Dir_OFFSET;
static CFISH_INLINE bool
LUCY_DH_Entry_Is_Dir(lucy_DirHandle* self) {
    const LUCY_DH_Entry_Is_Dir_t method = (LUCY_DH_Entry_Is_Dir_t)cfish_obj_method(self, LUCY_DH_Entry_Is_Dir_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DH_Entry_Is_Symlink_OFFSET;
static CFISH_INLINE bool
LUCY_DH_Entry_Is_Symlink(lucy_DirHandle* self) {
    const LUCY_DH_Entry_Is_Symlink_t method = (LUCY_DH_Entry_Is_Symlink_t)cfish_obj_method(self, LUCY_DH_Entry_Is_Symlink_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_DH_Next_OVERRIDE NULL
#define Lucy_DH_Close_OVERRIDE NULL
#define Lucy_DH_Get_Dir_OVERRIDE NULL
#define Lucy_DH_Get_Entry_OVERRIDE NULL
#define Lucy_DH_Entry_Is_Dir_OVERRIDE NULL
#define Lucy_DH_Entry_Is_Symlink_OVERRIDE NULL
#else
bool
Lucy_DH_Next_OVERRIDE(lucy_DirHandle* self);
bool
Lucy_DH_Close_OVERRIDE(lucy_DirHandle* self);
cfish_String*
Lucy_DH_Get_Dir_OVERRIDE(lucy_DirHandle* self);
cfish_String*
Lucy_DH_Get_Entry_OVERRIDE(lucy_DirHandle* self);
bool
Lucy_DH_Entry_Is_Dir_OVERRIDE(lucy_DirHandle* self);
bool
Lucy_DH_Entry_Is_Symlink_OVERRIDE(lucy_DirHandle* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define DirHandle lucy_DirHandle
  #define DIRHANDLE LUCY_DIRHANDLE
  #define DH_init lucy_DH_init
  #define DH_get_class lucy_DH_get_class
  #define DH_get_class_name lucy_DH_get_class_name
  #define DH_is_a lucy_DH_is_a
  #define DH_Next_IMP LUCY_DH_Next_IMP
  #define DH_Close_IMP LUCY_DH_Close_IMP
  #define DH_Get_Dir_IMP LUCY_DH_Get_Dir_IMP
  #define DH_Get_Entry_IMP LUCY_DH_Get_Entry_IMP
  #define DH_Entry_Is_Dir_IMP LUCY_DH_Entry_Is_Dir_IMP
  #define DH_Entry_Is_Symlink_IMP LUCY_DH_Entry_Is_Symlink_IMP
  #define DH_Destroy_IMP LUCY_DH_Destroy_IMP
  #define DH_To_Host LUCY_DH_To_Host
  #define DH_To_Host_t LUCY_DH_To_Host_t
  #define DH_Clone LUCY_DH_Clone
  #define DH_Clone_t LUCY_DH_Clone_t
  #define DH_Equals LUCY_DH_Equals
  #define DH_Equals_t LUCY_DH_Equals_t
  #define DH_Compare_To LUCY_DH_Compare_To
  #define DH_Compare_To_t LUCY_DH_Compare_To_t
  #define DH_Destroy LUCY_DH_Destroy
  #define DH_Destroy_t LUCY_DH_Destroy_t
  #define DH_To_String LUCY_DH_To_String
  #define DH_To_String_t LUCY_DH_To_String_t
  #define DH_Next LUCY_DH_Next
  #define DH_Next_t LUCY_DH_Next_t
  #define DH_Close LUCY_DH_Close
  #define DH_Close_t LUCY_DH_Close_t
  #define DH_Get_Dir LUCY_DH_Get_Dir
  #define DH_Get_Dir_t LUCY_DH_Get_Dir_t
  #define DH_Get_Entry LUCY_DH_Get_Entry
  #define DH_Get_Entry_t LUCY_DH_Get_Entry_t
  #define DH_Entry_Is_Dir LUCY_DH_Entry_Is_Dir
  #define DH_Entry_Is_Dir_t LUCY_DH_Entry_Is_Dir_t
  #define DH_Entry_Is_Symlink LUCY_DH_Entry_Is_Symlink
  #define DH_Entry_Is_Symlink_t LUCY_DH_Entry_Is_Symlink_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_DIRHANDLE */




