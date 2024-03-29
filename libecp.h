/*
Copyright 2014-2015 Coinfloor LTD.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void ecp_pubkey_u8(uint8_t Q[], const uint8_t p[], const uint8_t a[], const uint8_t G[], const uint8_t d[], size_t l);

void ecp_sign_u8(uint8_t r[], uint8_t s[], const uint8_t p[], const uint8_t a[], const uint8_t G[], const uint8_t n[], const uint8_t d[], const uint8_t z[], size_t l);

bool ecp_verify_u8(const uint8_t p[], const uint8_t a[], const uint8_t G[], const uint8_t n[], const uint8_t Q[], const uint8_t z[], const uint8_t r[], const uint8_t s[], size_t l);

#ifdef __cplusplus
} // extern "C"
#endif
