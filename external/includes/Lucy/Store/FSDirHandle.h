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


#ifndef H_LUCY_STORE_FSDIRHANDLE
#define H_LUCY_STORE_FSDIRHANDLE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Store/DirHandle.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_FSDIRHANDLE
extern uint32_t lucy_FSDH_IVARS_OFFSET;
typedef struct lucy_FSDirHandleIVARS lucy_FSDirHandleIVARS;
static CFISH_INLINE lucy_FSDirHandleIVARS*
lucy_FSDH_IVARS(lucy_FSDirHandle *self) {
   char *ptr = (char*)self + lucy_FSDH_IVARS_OFFSET;
   return (lucy_FSDirHandleIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define FSDirHandleIVARS lucy_FSDirHandleIVARS
  #define FSDH_IVARS lucy_FSDH_IVARS
#endif

struct lucy_FSDirHandleIVARS {
    cfish_String* dir;
    cfish_String* entry;
    void* sys_dirhandle;
    void* sys_dir_entry;
    cfish_Err* saved_error;
    bool delayed_iter;
};

#endif /* C_LUCY_FSDIRHANDLE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_FSDirHandle*
lucy_FSDH_open(cfish_String* path);

LUCY_VISIBLE lucy_FSDirHandle*
lucy_FSDH_do_open(lucy_FSDirHandle* self, cfish_String* path);

bool
LUCY_FSDH_Next_IMP(lucy_FSDirHandle* self);

bool
LUCY_FSDH_Entry_Is_Dir_IMP(lucy_FSDirHandle* self);

bool
LUCY_FSDH_Entry_Is_Symlink_IMP(lucy_FSDirHandle* self);

bool
LUCY_FSDH_Close_IMP(lucy_FSDirHandle* self);

void
LUCY_FSDH_Destroy_IMP(lucy_FSDirHandle* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_FSDH_To_Host_t)(lucy_FSDirHandle* self, void* vcache);

typedef cfish_Obj*
(*LUCY_FSDH_Clone_t)(lucy_FSDirHandle* self);

typedef bool
(*LUCY_FSDH_Equals_t)(lucy_FSDirHandle* self, cfish_Obj* other);

typedef int32_t
(*LUCY_FSDH_Compare_To_t)(lucy_FSDirHandle* self, cfish_Obj* other);

typedef void
(*LUCY_FSDH_Destroy_t)(lucy_FSDirHandle* self);

typedef cfish_String*
(*LUCY_FSDH_To_String_t)(lucy_FSDirHandle* self);

typedef bool
(*LUCY_FSDH_Next_t)(lucy_FSDirHandle* self);

typedef bool
(*LUCY_FSDH_Close_t)(lucy_FSDirHandle* self);

typedef cfish_String*
(*LUCY_FSDH_Get_Dir_t)(lucy_FSDirHandle* self);

typedef cfish_String*
(*LUCY_FSDH_Get_Entry_t)(lucy_FSDirHandle* self);

typedef bool
(*LUCY_FSDH_Entry_Is_Dir_t)(lucy_FSDirHandle* self);

typedef bool
(*LUCY_FSDH_Entry_Is_Symlink_t)(lucy_FSDirHandle* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_FSDH_get_class(lucy_FSDirHandle *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_FSDH_get_class_name(lucy_FSDirHandle *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_FSDH_is_a(lucy_FSDirHandle *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_FSDH_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_FSDH_To_Host(lucy_FSDirHandle* self, void* vcache) {
    const LUCY_FSDH_To_Host_t method = (LUCY_FSDH_To_Host_t)cfish_obj_method(self, LUCY_FSDH_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_FSDH_Clone(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Clone_t method = (LUCY_FSDH_Clone_t)cfish_obj_method(self, LUCY_FSDH_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_FSDH_Equals(lucy_FSDirHandle* self, cfish_Obj* other) {
    const LUCY_FSDH_Equals_t method = (LUCY_FSDH_Equals_t)cfish_obj_method(self, LUCY_FSDH_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_FSDH_Compare_To(lucy_FSDirHandle* self, cfish_Obj* other) {
    const LUCY_FSDH_Compare_To_t method = (LUCY_FSDH_Compare_To_t)cfish_obj_method(self, LUCY_FSDH_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_FSDH_Destroy(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Destroy_t method = (LUCY_FSDH_Destroy_t)cfish_obj_method(self, LUCY_FSDH_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FSDH_To_String(lucy_FSDirHandle* self) {
    const LUCY_FSDH_To_String_t method = (LUCY_FSDH_To_String_t)cfish_obj_method(self, LUCY_FSDH_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Next_OFFSET;
static CFISH_INLINE bool
LUCY_FSDH_Next(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Next_t method = (LUCY_FSDH_Next_t)cfish_obj_method(self, LUCY_FSDH_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Close_OFFSET;
static CFISH_INLINE bool
LUCY_FSDH_Close(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Close_t method = (LUCY_FSDH_Close_t)cfish_obj_method(self, LUCY_FSDH_Close_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Get_Dir_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FSDH_Get_Dir(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Get_Dir_t method = (LUCY_FSDH_Get_Dir_t)cfish_obj_method(self, LUCY_FSDH_Get_Dir_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Get_Entry_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FSDH_Get_Entry(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Get_Entry_t method = (LUCY_FSDH_Get_Entry_t)cfish_obj_method(self, LUCY_FSDH_Get_Entry_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Entry_Is_Dir_OFFSET;
static CFISH_INLINE bool
LUCY_FSDH_Entry_Is_Dir(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Entry_Is_Dir_t method = (LUCY_FSDH_Entry_Is_Dir_t)cfish_obj_method(self, LUCY_FSDH_Entry_Is_Dir_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSDH_Entry_Is_Symlink_OFFSET;
static CFISH_INLINE bool
LUCY_FSDH_Entry_Is_Symlink(lucy_FSDirHandle* self) {
    const LUCY_FSDH_Entry_Is_Symlink_t method = (LUCY_FSDH_Entry_Is_Symlink_t)cfish_obj_method(self, LUCY_FSDH_Entry_Is_Symlink_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define FSDirHandle lucy_FSDirHandle
  #define FSDIRHANDLE LUCY_FSDIRHANDLE
  #define FSDH_open lucy_FSDH_open
  #define FSDH_do_open lucy_FSDH_do_open
  #define FSDH_get_class lucy_FSDH_get_class
  #define FSDH_get_class_name lucy_FSDH_get_class_name
  #define FSDH_is_a lucy_FSDH_is_a
  #define FSDH_Next_IMP LUCY_FSDH_Next_IMP
  #define FSDH_Entry_Is_Dir_IMP LUCY_FSDH_Entry_Is_Dir_IMP
  #define FSDH_Entry_Is_Symlink_IMP LUCY_FSDH_Entry_Is_Symlink_IMP
  #define FSDH_Close_IMP LUCY_FSDH_Close_IMP
  #define FSDH_Destroy_IMP LUCY_FSDH_Destroy_IMP
  #define FSDH_To_Host LUCY_FSDH_To_Host
  #define FSDH_To_Host_t LUCY_FSDH_To_Host_t
  #define FSDH_Clone LUCY_FSDH_Clone
  #define FSDH_Clone_t LUCY_FSDH_Clone_t
  #define FSDH_Equals LUCY_FSDH_Equals
  #define FSDH_Equals_t LUCY_FSDH_Equals_t
  #define FSDH_Compare_To LUCY_FSDH_Compare_To
  #define FSDH_Compare_To_t LUCY_FSDH_Compare_To_t
  #define FSDH_Destroy LUCY_FSDH_Destroy
  #define FSDH_Destroy_t LUCY_FSDH_Destroy_t
  #define FSDH_To_String LUCY_FSDH_To_String
  #define FSDH_To_String_t LUCY_FSDH_To_String_t
  #define FSDH_Next LUCY_FSDH_Next
  #define FSDH_Next_t LUCY_FSDH_Next_t
  #define FSDH_Close LUCY_FSDH_Close
  #define FSDH_Close_t LUCY_FSDH_Close_t
  #define FSDH_Get_Dir LUCY_FSDH_Get_Dir
  #define FSDH_Get_Dir_t LUCY_FSDH_Get_Dir_t
  #define FSDH_Get_Entry LUCY_FSDH_Get_Entry
  #define FSDH_Get_Entry_t LUCY_FSDH_Get_Entry_t
  #define FSDH_Entry_Is_Dir LUCY_FSDH_Entry_Is_Dir
  #define FSDH_Entry_Is_Dir_t LUCY_FSDH_Entry_Is_Dir_t
  #define FSDH_Entry_Is_Symlink LUCY_FSDH_Entry_Is_Symlink
  #define FSDH_Entry_Is_Symlink_t LUCY_FSDH_Entry_Is_Symlink_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_FSDIRHANDLE */




