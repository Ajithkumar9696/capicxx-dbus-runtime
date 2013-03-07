/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef COMMONAPI_TESTS_TEST_INTERFACE_H_
#define COMMONAPI_TESTS_TEST_INTERFACE_H_

#include <CommonAPI/types.h>

namespace commonapi {
namespace tests {

class TestInterface {
 public:
    virtual ~TestInterface() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* TestInterface::getInterfaceId() {
    return "commonapi.tests.TestInterface";
}

CommonAPI::Version TestInterface::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace tests
} // namespace commonapi

namespace CommonAPI {

}


namespace std {
}

#endif // COMMONAPI_TESTS_TEST_INTERFACE_H_
