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


#ifndef H_LUCY_INDEX_SNAPSHOT
#define H_LUCY_INDEX_SNAPSHOT 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SNAPSHOT
extern uint32_t lucy_Snapshot_IVARS_OFFSET;
typedef struct lucy_SnapshotIVARS lucy_SnapshotIVARS;
static CFISH_INLINE lucy_SnapshotIVARS*
lucy_Snapshot_IVARS(lucy_Snapshot *self) {
   char *ptr = (char*)self + lucy_Snapshot_IVARS_OFFSET;
   return (lucy_SnapshotIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SnapshotIVARS lucy_SnapshotIVARS
  #define Snapshot_IVARS lucy_Snapshot_IVARS
#endif

struct lucy_SnapshotIVARS {
    cfish_Hash* entries;
    cfish_String* path;
};

#endif /* C_LUCY_SNAPSHOT */

/* Declare this class's inert variables.
 */

extern LUCY_VISIBLE int32_t lucy_Snapshot_current_file_format;


/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Snapshot*
lucy_Snapshot_new(void);

LUCY_VISIBLE lucy_Snapshot*
lucy_Snapshot_init(lucy_Snapshot* self);

cfish_Vector*
LUCY_Snapshot_List_IMP(lucy_Snapshot* self);

uint32_t
LUCY_Snapshot_Num_Entries_IMP(lucy_Snapshot* self);

void
LUCY_Snapshot_Add_Entry_IMP(lucy_Snapshot* self, cfish_String* entry);

bool
LUCY_Snapshot_Delete_Entry_IMP(lucy_Snapshot* self, cfish_String* entry);

lucy_Snapshot*
LUCY_Snapshot_Read_File_IMP(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path);

void
LUCY_Snapshot_Write_File_IMP(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path);

void
LUCY_Snapshot_Set_Path_IMP(lucy_Snapshot* self, cfish_String* path);

cfish_String*
LUCY_Snapshot_Get_Path_IMP(lucy_Snapshot* self);

void
LUCY_Snapshot_Destroy_IMP(lucy_Snapshot* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Snapshot_To_Host_t)(lucy_Snapshot* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Snapshot_Clone_t)(lucy_Snapshot* self);

typedef bool
(*LUCY_Snapshot_Equals_t)(lucy_Snapshot* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Snapshot_Compare_To_t)(lucy_Snapshot* self, cfish_Obj* other);

typedef void
(*LUCY_Snapshot_Destroy_t)(lucy_Snapshot* self);

typedef cfish_String*
(*LUCY_Snapshot_To_String_t)(lucy_Snapshot* self);

typedef cfish_Vector*
(*LUCY_Snapshot_List_t)(lucy_Snapshot* self);

typedef uint32_t
(*LUCY_Snapshot_Num_Entries_t)(lucy_Snapshot* self);

typedef void
(*LUCY_Snapshot_Add_Entry_t)(lucy_Snapshot* self, cfish_String* entry);

typedef bool
(*LUCY_Snapshot_Delete_Entry_t)(lucy_Snapshot* self, cfish_String* entry);

typedef lucy_Snapshot*
(*LUCY_Snapshot_Read_File_t)(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path);

typedef void
(*LUCY_Snapshot_Write_File_t)(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path);

typedef void
(*LUCY_Snapshot_Set_Path_t)(lucy_Snapshot* self, cfish_String* path);

typedef cfish_String*
(*LUCY_Snapshot_Get_Path_t)(lucy_Snapshot* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Snapshot_get_class(lucy_Snapshot *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Snapshot_get_class_name(lucy_Snapshot *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Snapshot_is_a(lucy_Snapshot *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Snapshot_To_Host(lucy_Snapshot* self, void* vcache) {
    const LUCY_Snapshot_To_Host_t method = (LUCY_Snapshot_To_Host_t)cfish_obj_method(self, LUCY_Snapshot_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Snapshot_Clone(lucy_Snapshot* self) {
    const LUCY_Snapshot_Clone_t method = (LUCY_Snapshot_Clone_t)cfish_obj_method(self, LUCY_Snapshot_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Snapshot_Equals(lucy_Snapshot* self, cfish_Obj* other) {
    const LUCY_Snapshot_Equals_t method = (LUCY_Snapshot_Equals_t)cfish_obj_method(self, LUCY_Snapshot_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Snapshot_Compare_To(lucy_Snapshot* self, cfish_Obj* other) {
    const LUCY_Snapshot_Compare_To_t method = (LUCY_Snapshot_Compare_To_t)cfish_obj_method(self, LUCY_Snapshot_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Snapshot_Destroy(lucy_Snapshot* self) {
    const LUCY_Snapshot_Destroy_t method = (LUCY_Snapshot_Destroy_t)cfish_obj_method(self, LUCY_Snapshot_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Snapshot_To_String(lucy_Snapshot* self) {
    const LUCY_Snapshot_To_String_t method = (LUCY_Snapshot_To_String_t)cfish_obj_method(self, LUCY_Snapshot_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_List_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_Snapshot_List(lucy_Snapshot* self) {
    const LUCY_Snapshot_List_t method = (LUCY_Snapshot_List_t)cfish_obj_method(self, LUCY_Snapshot_List_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Num_Entries_OFFSET;
static CFISH_INLINE uint32_t
LUCY_Snapshot_Num_Entries(lucy_Snapshot* self) {
    const LUCY_Snapshot_Num_Entries_t method = (LUCY_Snapshot_Num_Entries_t)cfish_obj_method(self, LUCY_Snapshot_Num_Entries_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Add_Entry_OFFSET;
static CFISH_INLINE void
LUCY_Snapshot_Add_Entry(lucy_Snapshot* self, cfish_String* entry) {
    const LUCY_Snapshot_Add_Entry_t method = (LUCY_Snapshot_Add_Entry_t)cfish_obj_method(self, LUCY_Snapshot_Add_Entry_OFFSET);
    method(self, entry);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Delete_Entry_OFFSET;
static CFISH_INLINE bool
LUCY_Snapshot_Delete_Entry(lucy_Snapshot* self, cfish_String* entry) {
    const LUCY_Snapshot_Delete_Entry_t method = (LUCY_Snapshot_Delete_Entry_t)cfish_obj_method(self, LUCY_Snapshot_Delete_Entry_OFFSET);
    return method(self, entry);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Read_File_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_Snapshot_Read_File(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path) {
    const LUCY_Snapshot_Read_File_t method = (LUCY_Snapshot_Read_File_t)cfish_obj_method(self, LUCY_Snapshot_Read_File_OFFSET);
    return method(self, folder, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Write_File_OFFSET;
static CFISH_INLINE void
LUCY_Snapshot_Write_File(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path) {
    const LUCY_Snapshot_Write_File_t method = (LUCY_Snapshot_Write_File_t)cfish_obj_method(self, LUCY_Snapshot_Write_File_OFFSET);
    method(self, folder, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Set_Path_OFFSET;
static CFISH_INLINE void
LUCY_Snapshot_Set_Path(lucy_Snapshot* self, cfish_String* path) {
    const LUCY_Snapshot_Set_Path_t method = (LUCY_Snapshot_Set_Path_t)cfish_obj_method(self, LUCY_Snapshot_Set_Path_OFFSET);
    method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Snapshot_Get_Path_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Snapshot_Get_Path(lucy_Snapshot* self) {
    const LUCY_Snapshot_Get_Path_t method = (LUCY_Snapshot_Get_Path_t)cfish_obj_method(self, LUCY_Snapshot_Get_Path_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_Snapshot_List_OVERRIDE NULL
#define Lucy_Snapshot_Num_Entries_OVERRIDE NULL
#define Lucy_Snapshot_Add_Entry_OVERRIDE NULL
#define Lucy_Snapshot_Delete_Entry_OVERRIDE NULL
#define Lucy_Snapshot_Read_File_OVERRIDE NULL
#define Lucy_Snapshot_Write_File_OVERRIDE NULL
#define Lucy_Snapshot_Set_Path_OVERRIDE NULL
#define Lucy_Snapshot_Get_Path_OVERRIDE NULL
#else
cfish_Vector*
Lucy_Snapshot_List_OVERRIDE(lucy_Snapshot* self);
uint32_t
Lucy_Snapshot_Num_Entries_OVERRIDE(lucy_Snapshot* self);
void
Lucy_Snapshot_Add_Entry_OVERRIDE(lucy_Snapshot* self, cfish_String* entry);
bool
Lucy_Snapshot_Delete_Entry_OVERRIDE(lucy_Snapshot* self, cfish_String* entry);
lucy_Snapshot*
Lucy_Snapshot_Read_File_OVERRIDE(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path);
void
Lucy_Snapshot_Write_File_OVERRIDE(lucy_Snapshot* self, lucy_Folder* folder, cfish_String* path);
void
Lucy_Snapshot_Set_Path_OVERRIDE(lucy_Snapshot* self, cfish_String* path);
cfish_String*
Lucy_Snapshot_Get_Path_OVERRIDE(lucy_Snapshot* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Snapshot lucy_Snapshot
  #define SNAPSHOT LUCY_SNAPSHOT
  #define Snapshot_new lucy_Snapshot_new
  #define Snapshot_init lucy_Snapshot_init
  #define Snapshot_current_file_format lucy_Snapshot_current_file_format
  #define Snapshot_get_class lucy_Snapshot_get_class
  #define Snapshot_get_class_name lucy_Snapshot_get_class_name
  #define Snapshot_is_a lucy_Snapshot_is_a
  #define Snapshot_List_IMP LUCY_Snapshot_List_IMP
  #define Snapshot_Num_Entries_IMP LUCY_Snapshot_Num_Entries_IMP
  #define Snapshot_Add_Entry_IMP LUCY_Snapshot_Add_Entry_IMP
  #define Snapshot_Delete_Entry_IMP LUCY_Snapshot_Delete_Entry_IMP
  #define Snapshot_Read_File_IMP LUCY_Snapshot_Read_File_IMP
  #define Snapshot_Write_File_IMP LUCY_Snapshot_Write_File_IMP
  #define Snapshot_Set_Path_IMP LUCY_Snapshot_Set_Path_IMP
  #define Snapshot_Get_Path_IMP LUCY_Snapshot_Get_Path_IMP
  #define Snapshot_Destroy_IMP LUCY_Snapshot_Destroy_IMP
  #define Snapshot_To_Host LUCY_Snapshot_To_Host
  #define Snapshot_To_Host_t LUCY_Snapshot_To_Host_t
  #define Snapshot_Clone LUCY_Snapshot_Clone
  #define Snapshot_Clone_t LUCY_Snapshot_Clone_t
  #define Snapshot_Equals LUCY_Snapshot_Equals
  #define Snapshot_Equals_t LUCY_Snapshot_Equals_t
  #define Snapshot_Compare_To LUCY_Snapshot_Compare_To
  #define Snapshot_Compare_To_t LUCY_Snapshot_Compare_To_t
  #define Snapshot_Destroy LUCY_Snapshot_Destroy
  #define Snapshot_Destroy_t LUCY_Snapshot_Destroy_t
  #define Snapshot_To_String LUCY_Snapshot_To_String
  #define Snapshot_To_String_t LUCY_Snapshot_To_String_t
  #define Snapshot_List LUCY_Snapshot_List
  #define Snapshot_List_t LUCY_Snapshot_List_t
  #define Snapshot_Num_Entries LUCY_Snapshot_Num_Entries
  #define Snapshot_Num_Entries_t LUCY_Snapshot_Num_Entries_t
  #define Snapshot_Add_Entry LUCY_Snapshot_Add_Entry
  #define Snapshot_Add_Entry_t LUCY_Snapshot_Add_Entry_t
  #define Snapshot_Delete_Entry LUCY_Snapshot_Delete_Entry
  #define Snapshot_Delete_Entry_t LUCY_Snapshot_Delete_Entry_t
  #define Snapshot_Read_File LUCY_Snapshot_Read_File
  #define Snapshot_Read_File_t LUCY_Snapshot_Read_File_t
  #define Snapshot_Write_File LUCY_Snapshot_Write_File
  #define Snapshot_Write_File_t LUCY_Snapshot_Write_File_t
  #define Snapshot_Set_Path LUCY_Snapshot_Set_Path
  #define Snapshot_Set_Path_t LUCY_Snapshot_Set_Path_t
  #define Snapshot_Get_Path LUCY_Snapshot_Get_Path
  #define Snapshot_Get_Path_t LUCY_Snapshot_Get_Path_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_SNAPSHOT */




