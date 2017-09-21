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


#ifndef H_LUCY_STORE_FSFILEHANDLE
#define H_LUCY_STORE_FSFILEHANDLE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Store/FileHandle.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_FSFILEHANDLE
extern uint32_t lucy_FSFH_IVARS_OFFSET;
typedef struct lucy_FSFileHandleIVARS lucy_FSFileHandleIVARS;
static CFISH_INLINE lucy_FSFileHandleIVARS*
lucy_FSFH_IVARS(lucy_FSFileHandle *self) {
   char *ptr = (char*)self + lucy_FSFH_IVARS_OFFSET;
   return (lucy_FSFileHandleIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define FSFileHandleIVARS lucy_FSFileHandleIVARS
  #define FSFH_IVARS lucy_FSFH_IVARS
#endif

struct lucy_FSFileHandleIVARS {
    cfish_String* path;
    uint32_t flags;
    int fd;
    void* win_fhandle;
    void* win_maphandle;
    int64_t len;
    int64_t page_size;
    char* buf;
};

#endif /* C_LUCY_FSFILEHANDLE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_FSFileHandle*
lucy_FSFH_open(cfish_String* path, uint32_t flags);

LUCY_VISIBLE lucy_FSFileHandle*
lucy_FSFH_do_open(lucy_FSFileHandle* self, cfish_String* path, uint32_t flags);

bool
LUCY_FSFH_Window_IMP(lucy_FSFileHandle* self, lucy_FileWindow* window, int64_t offset, int64_t len);

bool
LUCY_FSFH_Release_Window_IMP(lucy_FSFileHandle* self, lucy_FileWindow* window);

bool
LUCY_FSFH_Read_IMP(lucy_FSFileHandle* self, char* dest, int64_t offset, size_t len);

bool
LUCY_FSFH_Write_IMP(lucy_FSFileHandle* self, const void* data, size_t len);

int64_t
LUCY_FSFH_Length_IMP(lucy_FSFileHandle* self);

bool
LUCY_FSFH_Close_IMP(lucy_FSFileHandle* self);

int
LUCY_FSFH_Set_FD_IMP(lucy_FSFileHandle* self, int fd);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_FSFH_To_Host_t)(lucy_FSFileHandle* self, void* vcache);

typedef cfish_Obj*
(*LUCY_FSFH_Clone_t)(lucy_FSFileHandle* self);

typedef bool
(*LUCY_FSFH_Equals_t)(lucy_FSFileHandle* self, cfish_Obj* other);

typedef int32_t
(*LUCY_FSFH_Compare_To_t)(lucy_FSFileHandle* self, cfish_Obj* other);

typedef void
(*LUCY_FSFH_Destroy_t)(lucy_FSFileHandle* self);

typedef cfish_String*
(*LUCY_FSFH_To_String_t)(lucy_FSFileHandle* self);

typedef bool
(*LUCY_FSFH_Window_t)(lucy_FSFileHandle* self, lucy_FileWindow* window, int64_t offset, int64_t len);

typedef bool
(*LUCY_FSFH_Release_Window_t)(lucy_FSFileHandle* self, lucy_FileWindow* window);

typedef bool
(*LUCY_FSFH_Read_t)(lucy_FSFileHandle* self, char* dest, int64_t offset, size_t len);

typedef bool
(*LUCY_FSFH_Write_t)(lucy_FSFileHandle* self, const void* data, size_t len);

typedef int64_t
(*LUCY_FSFH_Length_t)(lucy_FSFileHandle* self);

typedef bool
(*LUCY_FSFH_Grow_t)(lucy_FSFileHandle* self, int64_t len);

typedef bool
(*LUCY_FSFH_Close_t)(lucy_FSFileHandle* self);

typedef void
(*LUCY_FSFH_Set_Path_t)(lucy_FSFileHandle* self, cfish_String* path);

typedef cfish_String*
(*LUCY_FSFH_Get_Path_t)(lucy_FSFileHandle* self);

typedef int
(*LUCY_FSFH_Set_FD_t)(lucy_FSFileHandle* self, int fd);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_FSFH_get_class(lucy_FSFileHandle *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_FSFH_get_class_name(lucy_FSFileHandle *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_FSFH_is_a(lucy_FSFileHandle *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_FSFH_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_FSFH_To_Host(lucy_FSFileHandle* self, void* vcache) {
    const LUCY_FSFH_To_Host_t method = (LUCY_FSFH_To_Host_t)cfish_obj_method(self, LUCY_FSFH_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_FSFH_Clone(lucy_FSFileHandle* self) {
    const LUCY_FSFH_Clone_t method = (LUCY_FSFH_Clone_t)cfish_obj_method(self, LUCY_FSFH_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Equals(lucy_FSFileHandle* self, cfish_Obj* other) {
    const LUCY_FSFH_Equals_t method = (LUCY_FSFH_Equals_t)cfish_obj_method(self, LUCY_FSFH_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_FSFH_Compare_To(lucy_FSFileHandle* self, cfish_Obj* other) {
    const LUCY_FSFH_Compare_To_t method = (LUCY_FSFH_Compare_To_t)cfish_obj_method(self, LUCY_FSFH_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_FSFH_Destroy(lucy_FSFileHandle* self) {
    const LUCY_FSFH_Destroy_t method = (LUCY_FSFH_Destroy_t)cfish_obj_method(self, LUCY_FSFH_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FSFH_To_String(lucy_FSFileHandle* self) {
    const LUCY_FSFH_To_String_t method = (LUCY_FSFH_To_String_t)cfish_obj_method(self, LUCY_FSFH_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Window_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Window(lucy_FSFileHandle* self, lucy_FileWindow* window, int64_t offset, int64_t len) {
    const LUCY_FSFH_Window_t method = (LUCY_FSFH_Window_t)cfish_obj_method(self, LUCY_FSFH_Window_OFFSET);
    return method(self, window, offset, len);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Release_Window_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Release_Window(lucy_FSFileHandle* self, lucy_FileWindow* window) {
    const LUCY_FSFH_Release_Window_t method = (LUCY_FSFH_Release_Window_t)cfish_obj_method(self, LUCY_FSFH_Release_Window_OFFSET);
    return method(self, window);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Read_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Read(lucy_FSFileHandle* self, char* dest, int64_t offset, size_t len) {
    const LUCY_FSFH_Read_t method = (LUCY_FSFH_Read_t)cfish_obj_method(self, LUCY_FSFH_Read_OFFSET);
    return method(self, dest, offset, len);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Write_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Write(lucy_FSFileHandle* self, const void* data, size_t len) {
    const LUCY_FSFH_Write_t method = (LUCY_FSFH_Write_t)cfish_obj_method(self, LUCY_FSFH_Write_OFFSET);
    return method(self, data, len);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Length_OFFSET;
static CFISH_INLINE int64_t
LUCY_FSFH_Length(lucy_FSFileHandle* self) {
    const LUCY_FSFH_Length_t method = (LUCY_FSFH_Length_t)cfish_obj_method(self, LUCY_FSFH_Length_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Grow_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Grow(lucy_FSFileHandle* self, int64_t len) {
    const LUCY_FSFH_Grow_t method = (LUCY_FSFH_Grow_t)cfish_obj_method(self, LUCY_FSFH_Grow_OFFSET);
    return method(self, len);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Close_OFFSET;
static CFISH_INLINE bool
LUCY_FSFH_Close(lucy_FSFileHandle* self) {
    const LUCY_FSFH_Close_t method = (LUCY_FSFH_Close_t)cfish_obj_method(self, LUCY_FSFH_Close_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Set_Path_OFFSET;
static CFISH_INLINE void
LUCY_FSFH_Set_Path(lucy_FSFileHandle* self, cfish_String* path) {
    const LUCY_FSFH_Set_Path_t method = (LUCY_FSFH_Set_Path_t)cfish_obj_method(self, LUCY_FSFH_Set_Path_OFFSET);
    method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Get_Path_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FSFH_Get_Path(lucy_FSFileHandle* self) {
    const LUCY_FSFH_Get_Path_t method = (LUCY_FSFH_Get_Path_t)cfish_obj_method(self, LUCY_FSFH_Get_Path_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FSFH_Set_FD_OFFSET;
static CFISH_INLINE int
LUCY_FSFH_Set_FD(lucy_FSFileHandle* self, int fd) {
    const LUCY_FSFH_Set_FD_t method = (LUCY_FSFH_Set_FD_t)cfish_obj_method(self, LUCY_FSFH_Set_FD_OFFSET);
    return method(self, fd);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_FSFH_Set_FD_OVERRIDE NULL
#else
int
Lucy_FSFH_Set_FD_OVERRIDE(lucy_FSFileHandle* self, int fd);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define FSFileHandle lucy_FSFileHandle
  #define FSFILEHANDLE LUCY_FSFILEHANDLE
  #define FSFH_open lucy_FSFH_open
  #define FSFH_do_open lucy_FSFH_do_open
  #define FSFH_get_class lucy_FSFH_get_class
  #define FSFH_get_class_name lucy_FSFH_get_class_name
  #define FSFH_is_a lucy_FSFH_is_a
  #define FSFH_Window_IMP LUCY_FSFH_Window_IMP
  #define FSFH_Release_Window_IMP LUCY_FSFH_Release_Window_IMP
  #define FSFH_Read_IMP LUCY_FSFH_Read_IMP
  #define FSFH_Write_IMP LUCY_FSFH_Write_IMP
  #define FSFH_Length_IMP LUCY_FSFH_Length_IMP
  #define FSFH_Close_IMP LUCY_FSFH_Close_IMP
  #define FSFH_Set_FD_IMP LUCY_FSFH_Set_FD_IMP
  #define FSFH_To_Host LUCY_FSFH_To_Host
  #define FSFH_To_Host_t LUCY_FSFH_To_Host_t
  #define FSFH_Clone LUCY_FSFH_Clone
  #define FSFH_Clone_t LUCY_FSFH_Clone_t
  #define FSFH_Equals LUCY_FSFH_Equals
  #define FSFH_Equals_t LUCY_FSFH_Equals_t
  #define FSFH_Compare_To LUCY_FSFH_Compare_To
  #define FSFH_Compare_To_t LUCY_FSFH_Compare_To_t
  #define FSFH_Destroy LUCY_FSFH_Destroy
  #define FSFH_Destroy_t LUCY_FSFH_Destroy_t
  #define FSFH_To_String LUCY_FSFH_To_String
  #define FSFH_To_String_t LUCY_FSFH_To_String_t
  #define FSFH_Window LUCY_FSFH_Window
  #define FSFH_Window_t LUCY_FSFH_Window_t
  #define FSFH_Release_Window LUCY_FSFH_Release_Window
  #define FSFH_Release_Window_t LUCY_FSFH_Release_Window_t
  #define FSFH_Read LUCY_FSFH_Read
  #define FSFH_Read_t LUCY_FSFH_Read_t
  #define FSFH_Write LUCY_FSFH_Write
  #define FSFH_Write_t LUCY_FSFH_Write_t
  #define FSFH_Length LUCY_FSFH_Length
  #define FSFH_Length_t LUCY_FSFH_Length_t
  #define FSFH_Grow LUCY_FSFH_Grow
  #define FSFH_Grow_t LUCY_FSFH_Grow_t
  #define FSFH_Close LUCY_FSFH_Close
  #define FSFH_Close_t LUCY_FSFH_Close_t
  #define FSFH_Set_Path LUCY_FSFH_Set_Path
  #define FSFH_Set_Path_t LUCY_FSFH_Set_Path_t
  #define FSFH_Get_Path LUCY_FSFH_Get_Path
  #define FSFH_Get_Path_t LUCY_FSFH_Get_Path_t
  #define FSFH_Set_FD LUCY_FSFH_Set_FD
  #define FSFH_Set_FD_t LUCY_FSFH_Set_FD_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_FSFILEHANDLE */




