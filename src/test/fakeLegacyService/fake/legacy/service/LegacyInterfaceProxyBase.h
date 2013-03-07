/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef FAKE_LEGACY_SERVICE_LEGACY_INTERFACE_PROXY_BASE_H_
#define FAKE_LEGACY_SERVICE_LEGACY_INTERFACE_PROXY_BASE_H_

#include "LegacyInterface.h"
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

namespace fake {
namespace legacy {
namespace service {

class LegacyInterfaceProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef std::function<void(const CommonAPI::CallStatus&, const int32_t&, const int32_t&)> TestMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> OtherTestMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> FinishAsyncCallback;




    virtual void TestMethod(const int32_t& input, CommonAPI::CallStatus& callStatus, int32_t& val1, int32_t& val2) = 0;
    virtual std::future<CommonAPI::CallStatus> TestMethodAsync(const int32_t& input, TestMethodAsyncCallback callback) = 0;

    virtual void OtherTestMethod(CommonAPI::CallStatus& callStatus, std::string& greeting, int32_t& identifier) = 0;
    virtual std::future<CommonAPI::CallStatus> OtherTestMethodAsync(OtherTestMethodAsyncCallback callback) = 0;

    virtual void finish(CommonAPI::CallStatus& callStatus) = 0;
    virtual std::future<CommonAPI::CallStatus> finishAsync(FinishAsyncCallback callback) = 0;
};


} // namespace service
} // namespace legacy
} // namespace fake

#endif // FAKE_LEGACY_SERVICE_LEGACY_INTERFACE_PROXY_BASE_H_
