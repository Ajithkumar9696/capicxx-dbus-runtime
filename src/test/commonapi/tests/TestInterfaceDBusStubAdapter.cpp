/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "TestInterfaceDBusStubAdapter.h"
#include <commonapi/tests/TestInterface.h>

namespace commonapi {
namespace tests {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createTestInterfaceDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<TestInterfaceDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

INITIALIZER(registerTestInterfaceDBusStubAdapter) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(TestInterface::getInterfaceId(),
                                                               &createTestInterfaceDBusStubAdapter);
}



TestInterfaceDBusStubAdapterInternal::~TestInterfaceDBusStubAdapterInternal() {
    deactivateManagedInstances();
    TestInterfaceDBusStubAdapterHelper::deinit();
}

void TestInterfaceDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* TestInterfaceDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getTestPredefinedTypeAttributeAttribute\">\n"
            "<arg name=\"value\" type=\"u\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTestPredefinedTypeAttributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTestPredefinedTypeAttributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"u\" />\n"
        "</signal>\n"
        "<method name=\"getTestDerivedStructAttributeAttribute\">\n"
            "<arg name=\"value\" type=\"(sqi)\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTestDerivedStructAttributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"(sqi)\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(sqi)\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTestDerivedStructAttributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(sqi)\" />\n"
        "</signal>\n"
        "<method name=\"getTestDerivedArrayAttributeAttribute\">\n"
            "<arg name=\"value\" type=\"at\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTestDerivedArrayAttributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"at\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"at\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTestDerivedArrayAttributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"at\" />\n"
        "</signal>\n"
        "<signal name=\"TestPredefinedTypeBroadcast\">\n"
            "<arg name=\"uint32Value\" type=\"u\" />\n"
            "<arg name=\"stringValue\" type=\"s\" />\n"
        "</signal>\n"
        "<signal name=\"TestSelectiveBroadcast\">\n"
        "</signal>\n"
        "<signal name=\"TestBroadcastWithOutArgs\">\n"
            "<arg name=\"uint32Value\" type=\"u\" />\n"
            "<arg name=\"stringValue\" type=\"s\" />\n"
        "</signal>\n"
        "<method name=\"testEmptyMethod\">\n"
        "</method>\n"
        "<method name=\"testVoidPredefinedTypeMethod\">\n"
            "<arg name=\"uint32Value\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"stringValue\" type=\"s\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"testPredefinedTypeMethod\">\n"
            "<arg name=\"uint32InValue\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"stringInValue\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"uint32OutValue\" type=\"u\" direction=\"out\" />\n"
            "<arg name=\"stringOutValue\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"testVoidDerivedTypeMethod\">\n"
            "<arg name=\"testEnumExtended2Value\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"testMapValue\" type=\"a{ua(sq)}\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"testDerivedTypeMethod\">\n"
            "<arg name=\"testEnumExtended2InValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"testMapInValue\" type=\"a{ua(sq)}\" direction=\"in\" />\n"
            "<arg name=\"testEnumExtended2OutValue\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"testMapOutValue\" type=\"a{ua(sq)}\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"TestArrayOfPolymorphicStructMethod\">\n"
            "<arg name=\"inArray\" type=\"a(uv)\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"TestMapOfPolymorphicStructMethod\">\n"
            "<arg name=\"inMap\" type=\"a{y(uv)}\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"TestStructWithPolymorphicMemberMethod\">\n"
            "<arg name=\"inStruct\" type=\"(u(uv))\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"TestStructWithEnumKeyMapMember\">\n"
            "<arg name=\"inStruct\" type=\"(a{is})\" direction=\"in\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        TestInterfaceStub,
        CommonAPI::Version
        > TestInterfaceDBusStubAdapterInternal::getTestInterfaceInterfaceVersionStubDispatcher(&TestInterfaceStub::getInterfaceVersion, "uu");

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        TestInterfaceStub,
        uint32_t
        > TestInterfaceDBusStubAdapterInternal::getTestPredefinedTypeAttributeAttributeStubDispatcher(&TestInterfaceStub::getTestPredefinedTypeAttributeAttribute, "u");
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        TestInterfaceStub,
        uint32_t
        > TestInterfaceDBusStubAdapterInternal::setTestPredefinedTypeAttributeAttributeStubDispatcher(
                &TestInterfaceStub::getTestPredefinedTypeAttributeAttribute,
                &TestInterfaceStubRemoteEvent::onRemoteSetTestPredefinedTypeAttributeAttribute,
                &TestInterfaceStubRemoteEvent::onRemoteTestPredefinedTypeAttributeAttributeChanged
                ,&TestInterfaceStubAdapter::fireTestPredefinedTypeAttributeAttributeChanged
                ,"u"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        TestInterfaceStub,
        DerivedTypeCollection::TestStructExtended
        > TestInterfaceDBusStubAdapterInternal::getTestDerivedStructAttributeAttributeStubDispatcher(&TestInterfaceStub::getTestDerivedStructAttributeAttribute, "(sqi)");
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        TestInterfaceStub,
        DerivedTypeCollection::TestStructExtended
        > TestInterfaceDBusStubAdapterInternal::setTestDerivedStructAttributeAttributeStubDispatcher(
                &TestInterfaceStub::getTestDerivedStructAttributeAttribute,
                &TestInterfaceStubRemoteEvent::onRemoteSetTestDerivedStructAttributeAttribute,
                &TestInterfaceStubRemoteEvent::onRemoteTestDerivedStructAttributeAttributeChanged
                ,&TestInterfaceStubAdapter::fireTestDerivedStructAttributeAttributeChanged
                ,"(sqi)"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        TestInterfaceStub,
        DerivedTypeCollection::TestArrayUInt64
        > TestInterfaceDBusStubAdapterInternal::getTestDerivedArrayAttributeAttributeStubDispatcher(&TestInterfaceStub::getTestDerivedArrayAttributeAttribute, "at");
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        TestInterfaceStub,
        DerivedTypeCollection::TestArrayUInt64
        > TestInterfaceDBusStubAdapterInternal::setTestDerivedArrayAttributeAttributeStubDispatcher(
                &TestInterfaceStub::getTestDerivedArrayAttributeAttribute,
                &TestInterfaceStubRemoteEvent::onRemoteSetTestDerivedArrayAttributeAttribute,
                &TestInterfaceStubRemoteEvent::onRemoteTestDerivedArrayAttributeAttributeChanged
                ,&TestInterfaceStubAdapter::fireTestDerivedArrayAttributeAttributeChanged
                ,"at"
                );


CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testEmptyMethodStubDispatcher(&TestInterfaceStub::testEmptyMethod, "");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<uint32_t, std::string>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testVoidPredefinedTypeMethodStubDispatcher(&TestInterfaceStub::testVoidPredefinedTypeMethod, "");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<uint32_t, std::string>,
    std::tuple<uint32_t, std::string>
    > TestInterfaceDBusStubAdapterInternal::testPredefinedTypeMethodStubDispatcher(&TestInterfaceStub::testPredefinedTypeMethod, "us");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testVoidDerivedTypeMethodStubDispatcher(&TestInterfaceStub::testVoidDerivedTypeMethod, "");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>,
    std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>
    > TestInterfaceDBusStubAdapterInternal::testDerivedTypeMethodStubDispatcher(&TestInterfaceStub::testDerivedTypeMethod, "ia{ua(sq)}");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<std::vector<std::shared_ptr<DerivedTypeCollection::TestPolymorphicStruct>>>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testArrayOfPolymorphicStructMethodStubDispatcher(&TestInterfaceStub::TestArrayOfPolymorphicStructMethod, "");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::MapIntToPolymorphic>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testMapOfPolymorphicStructMethodStubDispatcher(&TestInterfaceStub::TestMapOfPolymorphicStructMethod, "");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::StructWithPolymorphicMember>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testStructWithPolymorphicMemberMethodStubDispatcher(&TestInterfaceStub::TestStructWithPolymorphicMemberMethod, "");
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::StructWithEnumKeyMap>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::testStructWithEnumKeyMapMemberStubDispatcher(&TestInterfaceStub::TestStructWithEnumKeyMapMember, "");


void TestInterfaceDBusStubAdapterInternal::fireTestPredefinedTypeAttributeAttributeChanged(const uint32_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<uint32_t>>
        ::sendSignal(
            *this,
            "onTestPredefinedTypeAttributeAttributeChanged",
            "u",
            value
    );
}
void TestInterfaceDBusStubAdapterInternal::fireTestDerivedStructAttributeAttributeChanged(const DerivedTypeCollection::TestStructExtended& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<DerivedTypeCollection::TestStructExtended>>
        ::sendSignal(
            *this,
            "onTestDerivedStructAttributeAttributeChanged",
            "(sqi)",
            value
    );
}
void TestInterfaceDBusStubAdapterInternal::fireTestDerivedArrayAttributeAttributeChanged(const DerivedTypeCollection::TestArrayUInt64& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<DerivedTypeCollection::TestArrayUInt64>>
        ::sendSignal(
            *this,
            "onTestDerivedArrayAttributeAttributeChanged",
            "at",
            value
    );
}

void TestInterfaceDBusStubAdapterInternal::fireTestPredefinedTypeBroadcastEvent(const uint32_t& uint32Value, const std::string& stringValue) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<uint32_t, std::string>>
            ::sendSignal(
                *this,
                "TestPredefinedTypeBroadcast",
                "us",
                uint32Value, stringValue
        );
}
CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    TestInterfaceStub,
    TestInterfaceStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > TestInterfaceDBusStubAdapterInternal::subscribeTestSelectiveBroadcastSelectiveStubDispatcher(&TestInterfaceStubAdapter::subscribeForTestSelectiveBroadcastSelective, "b");

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    TestInterfaceStub,
    TestInterfaceStubAdapter,
    std::tuple<>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::unsubscribeTestSelectiveBroadcastSelectiveStubDispatcher(&TestInterfaceStubAdapter::unsubscribeFromTestSelectiveBroadcastSelective, "");

void TestInterfaceDBusStubAdapterInternal::fireTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClientId = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(clientId);

    if(dbusClientId)
    {
        CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<>>
            ::sendSignal(
                dbusClientId->getDBusId(),
                *this,
                "TestSelectiveBroadcast",
                ""
        );
    }
}

void TestInterfaceDBusStubAdapterInternal::sendTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList;
    actualReceiverList = receivers;

    if(receivers == NULL)
        actualReceiverList = subscribersForTestSelectiveBroadcastSelective_;

    for (auto clientIdIterator = actualReceiverList->cbegin();
               clientIdIterator != actualReceiverList->cend();
               clientIdIterator++) {
        if(receivers == NULL || subscribersForTestSelectiveBroadcastSelective_->find(*clientIdIterator) != subscribersForTestSelectiveBroadcastSelective_->end()) {
            fireTestSelectiveBroadcastSelective(*clientIdIterator);
        }
    }
}

void TestInterfaceDBusStubAdapterInternal::subscribeForTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
    auto stub = stub_.lock();
    bool ok = stub->onTestSelectiveBroadcastSelectiveSubscriptionRequested(clientId);
    if (ok) {
        subscribersForTestSelectiveBroadcastSelective_->insert(clientId);
        stub->onTestSelectiveBroadcastSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
        success = true;
    } else {
        success = false;
    }
}


void TestInterfaceDBusStubAdapterInternal::unsubscribeFromTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    subscribersForTestSelectiveBroadcastSelective_->erase(clientId);
    auto stub = stub_.lock();
    stub->onTestSelectiveBroadcastSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
}

std::shared_ptr<CommonAPI::ClientIdList> const TestInterfaceDBusStubAdapterInternal::getSubscribersForTestSelectiveBroadcastSelective() {
    return subscribersForTestSelectiveBroadcastSelective_;
}

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    TestInterfaceStub,
    TestInterfaceStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > TestInterfaceDBusStubAdapterInternal::subscribeTestBroadcastWithOutArgsSelectiveStubDispatcher(&TestInterfaceStubAdapter::subscribeForTestBroadcastWithOutArgsSelective, "b");

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    TestInterfaceStub,
    TestInterfaceStubAdapter,
    std::tuple<>,
    std::tuple<>
    > TestInterfaceDBusStubAdapterInternal::unsubscribeTestBroadcastWithOutArgsSelectiveStubDispatcher(&TestInterfaceStubAdapter::unsubscribeFromTestBroadcastWithOutArgsSelective, "");

void TestInterfaceDBusStubAdapterInternal::fireTestBroadcastWithOutArgsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const uint32_t& uint32Value, const std::string& stringValue) {
    std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClientId = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(clientId);

    if(dbusClientId)
    {
        CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<uint32_t, std::string>>
            ::sendSignal(
                dbusClientId->getDBusId(),
                *this,
                "TestBroadcastWithOutArgs",
                "us",
                uint32Value, stringValue
        );
    }
}

void TestInterfaceDBusStubAdapterInternal::sendTestBroadcastWithOutArgsSelective(const uint32_t& uint32Value, const std::string& stringValue, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
    std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList;
    actualReceiverList = receivers;

    if(receivers == NULL)
        actualReceiverList = subscribersForTestBroadcastWithOutArgsSelective_;

    for (auto clientIdIterator = actualReceiverList->cbegin();
               clientIdIterator != actualReceiverList->cend();
               clientIdIterator++) {
        if(receivers == NULL || subscribersForTestBroadcastWithOutArgsSelective_->find(*clientIdIterator) != subscribersForTestBroadcastWithOutArgsSelective_->end()) {
            fireTestBroadcastWithOutArgsSelective(*clientIdIterator, uint32Value, stringValue);
        }
    }
}

void TestInterfaceDBusStubAdapterInternal::subscribeForTestBroadcastWithOutArgsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
    auto stub = stub_.lock();
    bool ok = stub->onTestBroadcastWithOutArgsSelectiveSubscriptionRequested(clientId);
    if (ok) {
        subscribersForTestBroadcastWithOutArgsSelective_->insert(clientId);
        stub->onTestBroadcastWithOutArgsSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
        success = true;
    } else {
        success = false;
    }
}


void TestInterfaceDBusStubAdapterInternal::unsubscribeFromTestBroadcastWithOutArgsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    subscribersForTestBroadcastWithOutArgsSelective_->erase(clientId);
    auto stub = stub_.lock();
    stub->onTestBroadcastWithOutArgsSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
}

std::shared_ptr<CommonAPI::ClientIdList> const TestInterfaceDBusStubAdapterInternal::getSubscribersForTestBroadcastWithOutArgsSelective() {
    return subscribersForTestBroadcastWithOutArgsSelective_;
}



const TestInterfaceDBusStubAdapterHelper::StubDispatcherTable& TestInterfaceDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& TestInterfaceDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

TestInterfaceDBusStubAdapterInternal::TestInterfaceDBusStubAdapterInternal(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        CommonAPI::DBus::DBusStubAdapter(
                factory,
                commonApiAddress,
                dbusInterfaceName,
                dbusBusName,
                dbusObjectPath,
                dbusConnection,
                false),
        TestInterfaceDBusStubAdapterHelper(
            factory,
            commonApiAddress,
            dbusInterfaceName,
            dbusBusName,
            dbusObjectPath,
            dbusConnection,
            std::dynamic_pointer_cast<TestInterfaceStub>(stub),
            false),
        stubDispatcherTable_({
            { { "getTestPredefinedTypeAttributeAttribute", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::getTestPredefinedTypeAttributeAttributeStubDispatcher }
            , { { "setTestPredefinedTypeAttributeAttribute", "u" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::setTestPredefinedTypeAttributeAttributeStubDispatcher },
            { { "getTestDerivedStructAttributeAttribute", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::getTestDerivedStructAttributeAttributeStubDispatcher }
            , { { "setTestDerivedStructAttributeAttribute", "(sqi)" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::setTestDerivedStructAttributeAttributeStubDispatcher },
            { { "getTestDerivedArrayAttributeAttribute", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::getTestDerivedArrayAttributeAttributeStubDispatcher }
            , { { "setTestDerivedArrayAttributeAttribute", "at" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::setTestDerivedArrayAttributeAttributeStubDispatcher }
            ,
            { { "testEmptyMethod", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testEmptyMethodStubDispatcher },
            { { "testVoidPredefinedTypeMethod", "us" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testVoidPredefinedTypeMethodStubDispatcher },
            { { "testPredefinedTypeMethod", "us" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testPredefinedTypeMethodStubDispatcher },
            { { "testVoidDerivedTypeMethod", "ia{ua(sq)}" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testVoidDerivedTypeMethodStubDispatcher },
            { { "testDerivedTypeMethod", "ia{ua(sq)}" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testDerivedTypeMethodStubDispatcher },
            { { "TestArrayOfPolymorphicStructMethod", "a(uv)" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testArrayOfPolymorphicStructMethodStubDispatcher },
            { { "TestMapOfPolymorphicStructMethod", "a{y(uv)}" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testMapOfPolymorphicStructMethodStubDispatcher },
            { { "TestStructWithPolymorphicMemberMethod", "(u(uv))" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testStructWithPolymorphicMemberMethodStubDispatcher },
            { { "TestStructWithEnumKeyMapMember", "(a{is})" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::testStructWithEnumKeyMapMemberStubDispatcher }
            ,
            { { "subscribeForTestSelectiveBroadcastSelective", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::subscribeTestSelectiveBroadcastSelectiveStubDispatcher }
            ,
            { { "unsubscribeFromTestSelectiveBroadcastSelective", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::unsubscribeTestSelectiveBroadcastSelectiveStubDispatcher },
            { { "subscribeForTestBroadcastWithOutArgsSelective", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::subscribeTestBroadcastWithOutArgsSelectiveStubDispatcher }
            ,
            { { "unsubscribeFromTestBroadcastWithOutArgsSelective", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::unsubscribeTestBroadcastWithOutArgsSelectiveStubDispatcher }
            }),
        stubAttributeTable_() {
    subscribersForTestSelectiveBroadcastSelective_ = std::make_shared<CommonAPI::ClientIdList>();
    subscribersForTestBroadcastWithOutArgsSelective_ = std::make_shared<CommonAPI::ClientIdList>();

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &commonapi::tests::TestInterfaceDBusStubAdapterInternal::getTestInterfaceInterfaceVersionStubDispatcher });
}

const bool TestInterfaceDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace tests
} // namespace commonapi
