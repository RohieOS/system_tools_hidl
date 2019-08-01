/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <string>

namespace android {

struct Coordinator;
struct Formatter;
struct FQName;
struct Interface;
struct NamedType;
struct Scope;
struct Type;

struct AidlHelper {
    static std::string getAidlName(const FQName& fqName);
    static std::string getAidlName(const NamedType& type);

    static void emitFileHeader(Formatter& out, const NamedType& type);

    /* Methods for Type */
    static std::string getAidlType(const Type& type);

    /* Methods for NamedType */
    static void emitAidl(const NamedType& namedType, const Coordinator& coordinator);

    /* Methods for Scope */
    static void emitAidl(const Scope& scope, const Coordinator& coordinator);

    /* Methods for Interface */
    static void emitAidl(const Interface& interface, const Coordinator& coordinator);
};

}  // namespace android
