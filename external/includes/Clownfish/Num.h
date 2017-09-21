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


#ifndef H_CLOWNFISH_NUM
#define H_CLOWNFISH_NUM 1


#ifdef __cplusplus
extern "C" {
#endif

#include "cfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_FLOAT
extern uint32_t cfish_Float_IVARS_OFFSET;
typedef struct cfish_FloatIVARS cfish_FloatIVARS;
static CFISH_INLINE cfish_FloatIVARS*
cfish_Float_IVARS(cfish_Float *self) {
   char *ptr = (char*)self + cfish_Float_IVARS_OFFSET;
   return (cfish_FloatIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define FloatIVARS cfish_FloatIVARS
  #define Float_IVARS cfish_Float_IVARS
#endif

struct cfish_Float {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
    double value;
};

#endif /* C_CFISH_FLOAT */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE cfish_Float*
cfish_Float_new(double value);

CFISH_VISIBLE cfish_Float*
cfish_Float_init(cfish_Float* self, double value);

void*
CFISH_Float_To_Host_IMP(cfish_Float* self, void* vcache);

double
CFISH_Float_Get_Value_IMP(cfish_Float* self);

int64_t
CFISH_Float_To_I64_IMP(cfish_Float* self);

cfish_String*
CFISH_Float_To_String_IMP(cfish_Float* self);

bool
CFISH_Float_Equals_IMP(cfish_Float* self, cfish_Obj* other);

int32_t
CFISH_Float_Compare_To_IMP(cfish_Float* self, cfish_Obj* other);

cfish_Float*
CFISH_Float_Clone_IMP(cfish_Float* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_Float_To_Host_t)(cfish_Float* self, void* vcache);

typedef cfish_Float*
(*CFISH_Float_Clone_t)(cfish_Float* self);

typedef bool
(*CFISH_Float_Equals_t)(cfish_Float* self, cfish_Obj* other);

typedef int32_t
(*CFISH_Float_Compare_To_t)(cfish_Float* self, cfish_Obj* other);

typedef void
(*CFISH_Float_Destroy_t)(cfish_Float* self);

typedef cfish_String*
(*CFISH_Float_To_String_t)(cfish_Float* self);

typedef double
(*CFISH_Float_Get_Value_t)(cfish_Float* self);

typedef int64_t
(*CFISH_Float_To_I64_t)(cfish_Float* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_Float_get_class(cfish_Float *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_Float_get_class_name(cfish_Float *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_Float_is_a(cfish_Float *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_Float_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_Float_To_Host(cfish_Float* self, void* vcache) {
#ifdef CFP_CFISH
    return CFISH_Float_To_Host_IMP(self, vcache);
#else
    const CFISH_Float_To_Host_t method = (CFISH_Float_To_Host_t)cfish_obj_method(self, CFISH_Float_To_Host_OFFSET);
    return method(self, vcache);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_Clone_OFFSET;
static CFISH_INLINE cfish_Float*
CFISH_Float_Clone(cfish_Float* self) {
#ifdef CFP_CFISH
    return CFISH_Float_Clone_IMP(self);
#else
    const CFISH_Float_Clone_t method = (CFISH_Float_Clone_t)cfish_obj_method(self, CFISH_Float_Clone_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_Float_Equals(cfish_Float* self, cfish_Obj* other) {
#ifdef CFP_CFISH
    return CFISH_Float_Equals_IMP(self, other);
#else
    const CFISH_Float_Equals_t method = (CFISH_Float_Equals_t)cfish_obj_method(self, CFISH_Float_Equals_OFFSET);
    return method(self, other);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_Float_Compare_To(cfish_Float* self, cfish_Obj* other) {
#ifdef CFP_CFISH
    return CFISH_Float_Compare_To_IMP(self, other);
#else
    const CFISH_Float_Compare_To_t method = (CFISH_Float_Compare_To_t)cfish_obj_method(self, CFISH_Float_Compare_To_OFFSET);
    return method(self, other);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_Float_Destroy(cfish_Float* self) {
#ifdef CFP_CFISH
    CFISH_Obj_Destroy_IMP((cfish_Obj*)self);
#else
    const CFISH_Float_Destroy_t method = (CFISH_Float_Destroy_t)cfish_obj_method(self, CFISH_Float_Destroy_OFFSET);
    method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_Float_To_String(cfish_Float* self) {
#ifdef CFP_CFISH
    return CFISH_Float_To_String_IMP(self);
#else
    const CFISH_Float_To_String_t method = (CFISH_Float_To_String_t)cfish_obj_method(self, CFISH_Float_To_String_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_Get_Value_OFFSET;
static CFISH_INLINE double
CFISH_Float_Get_Value(cfish_Float* self) {
#ifdef CFP_CFISH
    return CFISH_Float_Get_Value_IMP(self);
#else
    const CFISH_Float_Get_Value_t method = (CFISH_Float_Get_Value_t)cfish_obj_method(self, CFISH_Float_Get_Value_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Float_To_I64_OFFSET;
static CFISH_INLINE int64_t
CFISH_Float_To_I64(cfish_Float* self) {
#ifdef CFP_CFISH
    return CFISH_Float_To_I64_IMP(self);
#else
    const CFISH_Float_To_I64_t method = (CFISH_Float_To_I64_t)cfish_obj_method(self, CFISH_Float_To_I64_OFFSET);
    return method(self);
#endif
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define Float cfish_Float
  #define FLOAT CFISH_FLOAT
  #define Float_new cfish_Float_new
  #define Float_init cfish_Float_init
  #define Float_get_class cfish_Float_get_class
  #define Float_get_class_name cfish_Float_get_class_name
  #define Float_is_a cfish_Float_is_a
  #define Float_To_Host_IMP CFISH_Float_To_Host_IMP
  #define Float_Get_Value_IMP CFISH_Float_Get_Value_IMP
  #define Float_To_I64_IMP CFISH_Float_To_I64_IMP
  #define Float_To_String_IMP CFISH_Float_To_String_IMP
  #define Float_Equals_IMP CFISH_Float_Equals_IMP
  #define Float_Compare_To_IMP CFISH_Float_Compare_To_IMP
  #define Float_Clone_IMP CFISH_Float_Clone_IMP
  #define Float_To_Host CFISH_Float_To_Host
  #define Float_To_Host_t CFISH_Float_To_Host_t
  #define Float_Clone CFISH_Float_Clone
  #define Float_Clone_t CFISH_Float_Clone_t
  #define Float_Equals CFISH_Float_Equals
  #define Float_Equals_t CFISH_Float_Equals_t
  #define Float_Compare_To CFISH_Float_Compare_To
  #define Float_Compare_To_t CFISH_Float_Compare_To_t
  #define Float_Destroy CFISH_Float_Destroy
  #define Float_Destroy_t CFISH_Float_Destroy_t
  #define Float_To_String CFISH_Float_To_String
  #define Float_To_String_t CFISH_Float_To_String_t
  #define Float_Get_Value CFISH_Float_Get_Value
  #define Float_Get_Value_t CFISH_Float_Get_Value_t
  #define Float_To_I64 CFISH_Float_To_I64
  #define Float_To_I64_t CFISH_Float_To_I64_t
#endif /* CFISH_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_INTEGER
extern uint32_t cfish_Int_IVARS_OFFSET;
typedef struct cfish_IntegerIVARS cfish_IntegerIVARS;
static CFISH_INLINE cfish_IntegerIVARS*
cfish_Int_IVARS(cfish_Integer *self) {
   char *ptr = (char*)self + cfish_Int_IVARS_OFFSET;
   return (cfish_IntegerIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define IntegerIVARS cfish_IntegerIVARS
  #define Int_IVARS cfish_Int_IVARS
#endif

struct cfish_Integer {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
    int64_t value;
};

#endif /* C_CFISH_INTEGER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE cfish_Integer*
cfish_Int_new(int64_t value);

CFISH_VISIBLE cfish_Integer*
cfish_Int_init(cfish_Integer* self, int64_t value);

void*
CFISH_Int_To_Host_IMP(cfish_Integer* self, void* vcache);

int64_t
CFISH_Int_Get_Value_IMP(cfish_Integer* self);

double
CFISH_Int_To_F64_IMP(cfish_Integer* self);

cfish_String*
CFISH_Int_To_String_IMP(cfish_Integer* self);

bool
CFISH_Int_Equals_IMP(cfish_Integer* self, cfish_Obj* other);

int32_t
CFISH_Int_Compare_To_IMP(cfish_Integer* self, cfish_Obj* other);

cfish_Integer*
CFISH_Int_Clone_IMP(cfish_Integer* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_Int_To_Host_t)(cfish_Integer* self, void* vcache);

typedef cfish_Integer*
(*CFISH_Int_Clone_t)(cfish_Integer* self);

typedef bool
(*CFISH_Int_Equals_t)(cfish_Integer* self, cfish_Obj* other);

typedef int32_t
(*CFISH_Int_Compare_To_t)(cfish_Integer* self, cfish_Obj* other);

typedef void
(*CFISH_Int_Destroy_t)(cfish_Integer* self);

typedef cfish_String*
(*CFISH_Int_To_String_t)(cfish_Integer* self);

typedef int64_t
(*CFISH_Int_Get_Value_t)(cfish_Integer* self);

typedef double
(*CFISH_Int_To_F64_t)(cfish_Integer* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_Int_get_class(cfish_Integer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_Int_get_class_name(cfish_Integer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_Int_is_a(cfish_Integer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_Int_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_Int_To_Host(cfish_Integer* self, void* vcache) {
#ifdef CFP_CFISH
    return CFISH_Int_To_Host_IMP(self, vcache);
#else
    const CFISH_Int_To_Host_t method = (CFISH_Int_To_Host_t)cfish_obj_method(self, CFISH_Int_To_Host_OFFSET);
    return method(self, vcache);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_Clone_OFFSET;
static CFISH_INLINE cfish_Integer*
CFISH_Int_Clone(cfish_Integer* self) {
#ifdef CFP_CFISH
    return CFISH_Int_Clone_IMP(self);
#else
    const CFISH_Int_Clone_t method = (CFISH_Int_Clone_t)cfish_obj_method(self, CFISH_Int_Clone_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_Int_Equals(cfish_Integer* self, cfish_Obj* other) {
#ifdef CFP_CFISH
    return CFISH_Int_Equals_IMP(self, other);
#else
    const CFISH_Int_Equals_t method = (CFISH_Int_Equals_t)cfish_obj_method(self, CFISH_Int_Equals_OFFSET);
    return method(self, other);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_Int_Compare_To(cfish_Integer* self, cfish_Obj* other) {
#ifdef CFP_CFISH
    return CFISH_Int_Compare_To_IMP(self, other);
#else
    const CFISH_Int_Compare_To_t method = (CFISH_Int_Compare_To_t)cfish_obj_method(self, CFISH_Int_Compare_To_OFFSET);
    return method(self, other);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_Int_Destroy(cfish_Integer* self) {
#ifdef CFP_CFISH
    CFISH_Obj_Destroy_IMP((cfish_Obj*)self);
#else
    const CFISH_Int_Destroy_t method = (CFISH_Int_Destroy_t)cfish_obj_method(self, CFISH_Int_Destroy_OFFSET);
    method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_Int_To_String(cfish_Integer* self) {
#ifdef CFP_CFISH
    return CFISH_Int_To_String_IMP(self);
#else
    const CFISH_Int_To_String_t method = (CFISH_Int_To_String_t)cfish_obj_method(self, CFISH_Int_To_String_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_Get_Value_OFFSET;
static CFISH_INLINE int64_t
CFISH_Int_Get_Value(cfish_Integer* self) {
#ifdef CFP_CFISH
    return CFISH_Int_Get_Value_IMP(self);
#else
    const CFISH_Int_Get_Value_t method = (CFISH_Int_Get_Value_t)cfish_obj_method(self, CFISH_Int_Get_Value_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_Int_To_F64_OFFSET;
static CFISH_INLINE double
CFISH_Int_To_F64(cfish_Integer* self) {
#ifdef CFP_CFISH
    return CFISH_Int_To_F64_IMP(self);
#else
    const CFISH_Int_To_F64_t method = (CFISH_Int_To_F64_t)cfish_obj_method(self, CFISH_Int_To_F64_OFFSET);
    return method(self);
#endif
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define Integer cfish_Integer
  #define INTEGER CFISH_INTEGER
  #define Int_new cfish_Int_new
  #define Int_init cfish_Int_init
  #define Int_get_class cfish_Int_get_class
  #define Int_get_class_name cfish_Int_get_class_name
  #define Int_is_a cfish_Int_is_a
  #define Int_To_Host_IMP CFISH_Int_To_Host_IMP
  #define Int_Get_Value_IMP CFISH_Int_Get_Value_IMP
  #define Int_To_F64_IMP CFISH_Int_To_F64_IMP
  #define Int_To_String_IMP CFISH_Int_To_String_IMP
  #define Int_Equals_IMP CFISH_Int_Equals_IMP
  #define Int_Compare_To_IMP CFISH_Int_Compare_To_IMP
  #define Int_Clone_IMP CFISH_Int_Clone_IMP
  #define Int_To_Host CFISH_Int_To_Host
  #define Int_To_Host_t CFISH_Int_To_Host_t
  #define Int_Clone CFISH_Int_Clone
  #define Int_Clone_t CFISH_Int_Clone_t
  #define Int_Equals CFISH_Int_Equals
  #define Int_Equals_t CFISH_Int_Equals_t
  #define Int_Compare_To CFISH_Int_Compare_To
  #define Int_Compare_To_t CFISH_Int_Compare_To_t
  #define Int_Destroy CFISH_Int_Destroy
  #define Int_Destroy_t CFISH_Int_Destroy_t
  #define Int_To_String CFISH_Int_To_String
  #define Int_To_String_t CFISH_Int_To_String_t
  #define Int_Get_Value CFISH_Int_Get_Value
  #define Int_Get_Value_t CFISH_Int_Get_Value_t
  #define Int_To_F64 CFISH_Int_To_F64
  #define Int_To_F64_t CFISH_Int_To_F64_t
#endif /* CFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_NUM */




