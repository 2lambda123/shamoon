/* 
   base64.cpp and base64.h

   Copyright (C) 2004-2008 René Nyffenegger

   This source code is provided 'as-is', without any express or implied
   warranty. In no event will the author be held liable for any damages
   arising from the use of this software.

   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:

   1. The origin of this source code must not be misrepresented; you must not
      claim that you wrote the original source code. If you use this source code
      in a product, an acknowledgment in the product documentation would be
      appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
      misrepresented as being the original source code.

   3. This notice may not be removed or altered from any source distribution.

   René Nyffenegger rene.nyffenegger@adp-gmbh.ch

*/

#ifndef _BASE64_H_
#define _BASE64_H_

#include <string>

// Please note: The following declaration has been added by Christian Roggia
#define base64_encode base64_encodeW

// Please note: The following function has been added by Christian Roggia
wchar_t *base64_encodeW(unsigned int in_size, unsigned char const* bytes_to_encode);
// Please note: The following function has been modified by Christian Roggia
char    *base64_encodeA(unsigned char const* bytes_to_encode, unsigned int in_len);

// Please note: The following function has been modified by Christian Roggia
unsigned char *base64_decode(char *encoded_string, int in_len, int *out_len);

#endif 