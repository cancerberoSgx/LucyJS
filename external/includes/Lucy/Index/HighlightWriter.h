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


#ifndef H_LUCY_INDEX_HIGHLIGHTWRITER
#define H_LUCY_INDEX_HIGHLIGHTWRITER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataWriter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_HIGHLIGHTWRITER
extern uint32_t lucy_HLWriter_IVARS_OFFSET;
typedef struct lucy_HighlightWriterIVARS lucy_HighlightWriterIVARS;
static CFISH_INLINE lucy_HighlightWriterIVARS*
lucy_HLWriter_IVARS(lucy_HighlightWriter *self) {
   char *ptr = (char*)self + lucy_HLWriter_IVARS_OFFSET;
   return (lucy_HighlightWriterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define HighlightWriterIVARS lucy_HighlightWriterIVARS
  #define HLWriter_IVARS lucy_HLWriter_IVARS
#endif

struct lucy_HighlightWriterIVARS {
    lucy_Snapshot* snapshot;
    lucy_Segment* segment;
    lucy_PolyReader* polyreader;
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_OutStream* ix_out;
    lucy_OutStream* dat_out;
};

#endif /* C_LUCY_HIGHLIGHTWRITER */

/* Declare this class's inert variables.
 */

extern LUCY_VISIBLE int32_t lucy_HLWriter_current_file_format;


/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_HighlightWriter*
lucy_HLWriter_new(lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

LUCY_VISIBLE lucy_HighlightWriter*
lucy_HLWriter_init(lucy_HighlightWriter* self, lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

cfish_Blob*
LUCY_HLWriter_TV_Buf_IMP(lucy_HighlightWriter* self, lucy_Inversion* inversion);

void
LUCY_HLWriter_Add_Inverted_Doc_IMP(lucy_HighlightWriter* self, lucy_Inverter* inverter, int32_t doc_id);

void
LUCY_HLWriter_Add_Segment_IMP(lucy_HighlightWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

void
LUCY_HLWriter_Finish_IMP(lucy_HighlightWriter* self);

int32_t
LUCY_HLWriter_Format_IMP(lucy_HighlightWriter* self);

void
LUCY_HLWriter_Destroy_IMP(lucy_HighlightWriter* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_HLWriter_To_Host_t)(lucy_HighlightWriter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_HLWriter_Clone_t)(lucy_HighlightWriter* self);

typedef bool
(*LUCY_HLWriter_Equals_t)(lucy_HighlightWriter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_HLWriter_Compare_To_t)(lucy_HighlightWriter* self, cfish_Obj* other);

typedef void
(*LUCY_HLWriter_Destroy_t)(lucy_HighlightWriter* self);

typedef cfish_String*
(*LUCY_HLWriter_To_String_t)(lucy_HighlightWriter* self);

typedef void
(*LUCY_HLWriter_Add_Inverted_Doc_t)(lucy_HighlightWriter* self, lucy_Inverter* inverter, int32_t doc_id);

typedef void
(*LUCY_HLWriter_Add_Segment_t)(lucy_HighlightWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_HLWriter_Delete_Segment_t)(lucy_HighlightWriter* self, lucy_SegReader* reader);

typedef void
(*LUCY_HLWriter_Merge_Segment_t)(lucy_HighlightWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_HLWriter_Finish_t)(lucy_HighlightWriter* self);

typedef cfish_Hash*
(*LUCY_HLWriter_Metadata_t)(lucy_HighlightWriter* self);

typedef int32_t
(*LUCY_HLWriter_Format_t)(lucy_HighlightWriter* self);

typedef lucy_Snapshot*
(*LUCY_HLWriter_Get_Snapshot_t)(lucy_HighlightWriter* self);

typedef lucy_Segment*
(*LUCY_HLWriter_Get_Segment_t)(lucy_HighlightWriter* self);

typedef lucy_PolyReader*
(*LUCY_HLWriter_Get_PolyReader_t)(lucy_HighlightWriter* self);

typedef lucy_Schema*
(*LUCY_HLWriter_Get_Schema_t)(lucy_HighlightWriter* self);

typedef lucy_Folder*
(*LUCY_HLWriter_Get_Folder_t)(lucy_HighlightWriter* self);

typedef cfish_Blob*
(*LUCY_HLWriter_TV_Buf_t)(lucy_HighlightWriter* self, lucy_Inversion* inversion);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_HLWriter_get_class(lucy_HighlightWriter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_HLWriter_get_class_name(lucy_HighlightWriter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_HLWriter_is_a(lucy_HighlightWriter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_HLWriter_To_Host(lucy_HighlightWriter* self, void* vcache) {
    const LUCY_HLWriter_To_Host_t method = (LUCY_HLWriter_To_Host_t)cfish_obj_method(self, LUCY_HLWriter_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_HLWriter_Clone(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Clone_t method = (LUCY_HLWriter_Clone_t)cfish_obj_method(self, LUCY_HLWriter_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_HLWriter_Equals(lucy_HighlightWriter* self, cfish_Obj* other) {
    const LUCY_HLWriter_Equals_t method = (LUCY_HLWriter_Equals_t)cfish_obj_method(self, LUCY_HLWriter_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_HLWriter_Compare_To(lucy_HighlightWriter* self, cfish_Obj* other) {
    const LUCY_HLWriter_Compare_To_t method = (LUCY_HLWriter_Compare_To_t)cfish_obj_method(self, LUCY_HLWriter_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_HLWriter_Destroy(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Destroy_t method = (LUCY_HLWriter_Destroy_t)cfish_obj_method(self, LUCY_HLWriter_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_HLWriter_To_String(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_To_String_t method = (LUCY_HLWriter_To_String_t)cfish_obj_method(self, LUCY_HLWriter_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Add_Inverted_Doc_OFFSET;
static CFISH_INLINE void
LUCY_HLWriter_Add_Inverted_Doc(lucy_HighlightWriter* self, lucy_Inverter* inverter, int32_t doc_id) {
    const LUCY_HLWriter_Add_Inverted_Doc_t method = (LUCY_HLWriter_Add_Inverted_Doc_t)cfish_obj_method(self, LUCY_HLWriter_Add_Inverted_Doc_OFFSET);
    method(self, inverter, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Add_Segment_OFFSET;
static CFISH_INLINE void
LUCY_HLWriter_Add_Segment(lucy_HighlightWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_HLWriter_Add_Segment_t method = (LUCY_HLWriter_Add_Segment_t)cfish_obj_method(self, LUCY_HLWriter_Add_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Delete_Segment_OFFSET;
static CFISH_INLINE void
LUCY_HLWriter_Delete_Segment(lucy_HighlightWriter* self, lucy_SegReader* reader) {
    const LUCY_HLWriter_Delete_Segment_t method = (LUCY_HLWriter_Delete_Segment_t)cfish_obj_method(self, LUCY_HLWriter_Delete_Segment_OFFSET);
    method(self, reader);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Merge_Segment_OFFSET;
static CFISH_INLINE void
LUCY_HLWriter_Merge_Segment(lucy_HighlightWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_HLWriter_Merge_Segment_t method = (LUCY_HLWriter_Merge_Segment_t)cfish_obj_method(self, LUCY_HLWriter_Merge_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Finish_OFFSET;
static CFISH_INLINE void
LUCY_HLWriter_Finish(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Finish_t method = (LUCY_HLWriter_Finish_t)cfish_obj_method(self, LUCY_HLWriter_Finish_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Metadata_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_HLWriter_Metadata(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Metadata_t method = (LUCY_HLWriter_Metadata_t)cfish_obj_method(self, LUCY_HLWriter_Metadata_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Format_OFFSET;
static CFISH_INLINE int32_t
LUCY_HLWriter_Format(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Format_t method = (LUCY_HLWriter_Format_t)cfish_obj_method(self, LUCY_HLWriter_Format_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_HLWriter_Get_Snapshot(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Get_Snapshot_t method = (LUCY_HLWriter_Get_Snapshot_t)cfish_obj_method(self, LUCY_HLWriter_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_HLWriter_Get_Segment(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Get_Segment_t method = (LUCY_HLWriter_Get_Segment_t)cfish_obj_method(self, LUCY_HLWriter_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Get_PolyReader_OFFSET;
static CFISH_INLINE lucy_PolyReader*
LUCY_HLWriter_Get_PolyReader(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Get_PolyReader_t method = (LUCY_HLWriter_Get_PolyReader_t)cfish_obj_method(self, LUCY_HLWriter_Get_PolyReader_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_HLWriter_Get_Schema(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Get_Schema_t method = (LUCY_HLWriter_Get_Schema_t)cfish_obj_method(self, LUCY_HLWriter_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_HLWriter_Get_Folder(lucy_HighlightWriter* self) {
    const LUCY_HLWriter_Get_Folder_t method = (LUCY_HLWriter_Get_Folder_t)cfish_obj_method(self, LUCY_HLWriter_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HLWriter_TV_Buf_OFFSET;
static CFISH_INLINE cfish_Blob*
LUCY_HLWriter_TV_Buf(lucy_HighlightWriter* self, lucy_Inversion* inversion) {
    const LUCY_HLWriter_TV_Buf_t method = (LUCY_HLWriter_TV_Buf_t)cfish_obj_method(self, LUCY_HLWriter_TV_Buf_OFFSET);
    return method(self, inversion);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_HLWriter_TV_Buf_OVERRIDE NULL
#else
cfish_Blob*
Lucy_HLWriter_TV_Buf_OVERRIDE(lucy_HighlightWriter* self, lucy_Inversion* inversion);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define HighlightWriter lucy_HighlightWriter
  #define HIGHLIGHTWRITER LUCY_HIGHLIGHTWRITER
  #define HLWriter_new lucy_HLWriter_new
  #define HLWriter_init lucy_HLWriter_init
  #define HLWriter_current_file_format lucy_HLWriter_current_file_format
  #define HLWriter_get_class lucy_HLWriter_get_class
  #define HLWriter_get_class_name lucy_HLWriter_get_class_name
  #define HLWriter_is_a lucy_HLWriter_is_a
  #define HLWriter_TV_Buf_IMP LUCY_HLWriter_TV_Buf_IMP
  #define HLWriter_Add_Inverted_Doc_IMP LUCY_HLWriter_Add_Inverted_Doc_IMP
  #define HLWriter_Add_Segment_IMP LUCY_HLWriter_Add_Segment_IMP
  #define HLWriter_Finish_IMP LUCY_HLWriter_Finish_IMP
  #define HLWriter_Format_IMP LUCY_HLWriter_Format_IMP
  #define HLWriter_Destroy_IMP LUCY_HLWriter_Destroy_IMP
  #define HLWriter_To_Host LUCY_HLWriter_To_Host
  #define HLWriter_To_Host_t LUCY_HLWriter_To_Host_t
  #define HLWriter_Clone LUCY_HLWriter_Clone
  #define HLWriter_Clone_t LUCY_HLWriter_Clone_t
  #define HLWriter_Equals LUCY_HLWriter_Equals
  #define HLWriter_Equals_t LUCY_HLWriter_Equals_t
  #define HLWriter_Compare_To LUCY_HLWriter_Compare_To
  #define HLWriter_Compare_To_t LUCY_HLWriter_Compare_To_t
  #define HLWriter_Destroy LUCY_HLWriter_Destroy
  #define HLWriter_Destroy_t LUCY_HLWriter_Destroy_t
  #define HLWriter_To_String LUCY_HLWriter_To_String
  #define HLWriter_To_String_t LUCY_HLWriter_To_String_t
  #define HLWriter_Add_Inverted_Doc LUCY_HLWriter_Add_Inverted_Doc
  #define HLWriter_Add_Inverted_Doc_t LUCY_HLWriter_Add_Inverted_Doc_t
  #define HLWriter_Add_Segment LUCY_HLWriter_Add_Segment
  #define HLWriter_Add_Segment_t LUCY_HLWriter_Add_Segment_t
  #define HLWriter_Delete_Segment LUCY_HLWriter_Delete_Segment
  #define HLWriter_Delete_Segment_t LUCY_HLWriter_Delete_Segment_t
  #define HLWriter_Merge_Segment LUCY_HLWriter_Merge_Segment
  #define HLWriter_Merge_Segment_t LUCY_HLWriter_Merge_Segment_t
  #define HLWriter_Finish LUCY_HLWriter_Finish
  #define HLWriter_Finish_t LUCY_HLWriter_Finish_t
  #define HLWriter_Metadata LUCY_HLWriter_Metadata
  #define HLWriter_Metadata_t LUCY_HLWriter_Metadata_t
  #define HLWriter_Format LUCY_HLWriter_Format
  #define HLWriter_Format_t LUCY_HLWriter_Format_t
  #define HLWriter_Get_Snapshot LUCY_HLWriter_Get_Snapshot
  #define HLWriter_Get_Snapshot_t LUCY_HLWriter_Get_Snapshot_t
  #define HLWriter_Get_Segment LUCY_HLWriter_Get_Segment
  #define HLWriter_Get_Segment_t LUCY_HLWriter_Get_Segment_t
  #define HLWriter_Get_PolyReader LUCY_HLWriter_Get_PolyReader
  #define HLWriter_Get_PolyReader_t LUCY_HLWriter_Get_PolyReader_t
  #define HLWriter_Get_Schema LUCY_HLWriter_Get_Schema
  #define HLWriter_Get_Schema_t LUCY_HLWriter_Get_Schema_t
  #define HLWriter_Get_Folder LUCY_HLWriter_Get_Folder
  #define HLWriter_Get_Folder_t LUCY_HLWriter_Get_Folder_t
  #define HLWriter_TV_Buf LUCY_HLWriter_TV_Buf
  #define HLWriter_TV_Buf_t LUCY_HLWriter_TV_Buf_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_HIGHLIGHTWRITER */




