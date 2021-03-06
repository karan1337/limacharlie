/*
Copyright 2015 refractionPOINT

Licensed under the Apache License, Version 2.0 ( the "License" );
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _KERNEL_ACQUISITION_HELPERS_H
#define _KERNEL_ACQUISITION_HELPERS_H

#include <rpal/rpal_datatypes.h>

#define rpal_debug_kernel(format,...)   DbgPrint( "HbsKernelAcq %s: %d %s() - " ##format##"\n", __FILE__, __LINE__, __FUNCTION__, __VA_ARGS__ )
#define ARRAY_N_ELEM(arr)               (sizeof(arr) / sizeof((arr)[0]))
RU64 rpal_time_getLocal();

#define copyUnicodeStringToBuffer(str,buff) (_copyUnicodeStringToBuffer((str),(buff),sizeof(buff)))
RBOOL _copyUnicodeStringToBuffer( PCUNICODE_STRING str, RPWCHAR buff, RU32 buffSize );

#endif