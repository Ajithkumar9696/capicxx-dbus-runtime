/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef FAKE_LEGACY_SERVICE_LEGACY_INTERFACE_DBUS_PROXY_H_
#define FAKE_LEGACY_SERVICE_LEGACY_INTERFACE_DBUS_PROXY_H_

#include "LegacyInterfaceProxyBase.h"
#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>

#include <string>

namespace fake {
namespace legacy {
namespace service {

class LegacyInterfaceDBusProxy: virtual public LegacyInterfaceProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    LegacyInterfaceDBusProxy(
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);




    virtual void TestMethod(const int32_t& input, CommonAPI::CallStatus& callStatus, int32_t& val1, int32_t& val2);
    virtual std::future<CommonAPI::CallStatus> TestMethodAsync(const int32_t& input, TestMethodAsyncCallback callback);

    virtual void OtherTestMethod(CommonAPI::CallStatus& callStatus, std::string& greeting, int32_t& identifier);
    virtual std::future<CommonAPI::CallStatus> OtherTestMethodAsync(OtherTestMethodAsyncCallback callback);

    virtual void finish(CommonAPI::CallStatus& callStatus);
    virtual std::future<CommonAPI::CallStatus> finishAsync(FinishAsyncCallback callback);
    
    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:

};

} // namespace service
} // namespace legacy
} // namespace fake

#endif // FAKE_LEGACY_SERVICE_LEGACY_INTERFACE_DBUS_PROXY_H_
