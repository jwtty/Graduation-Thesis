/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "OctetString.h"

#ifndef SS_CODE_H_
#define SS_CODE_H_

#define SS_CODE_MINIMUM_LENGTH 2
#define SS_CODE_MAXIMUM_LENGTH 2

typedef uint8_t SsCode;

int encode_ss_code(SsCode *sscode, uint8_t iei, uint8_t *buffer, uint32_t len);

void dump_ss_code_xml(SsCode *sscode, uint8_t iei);

int decode_ss_code(SsCode *sscode, uint8_t iei, uint8_t *buffer, uint32_t len);

#endif /* SS CODE_H_ */
