/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "methodSampleStubImpl.hpp"

methodSampleStubImpl::methodSampleStubImpl() {

}

methodSampleStubImpl::~methodSampleStubImpl() {

}

void methodSampleStubImpl::setName(
        const std::shared_ptr<CommonAPI::ClientId> clientId,
        std::string familyName,
        v1_0::commonapi::someip::methodSampleStub::setNameReply_t _reply) {

    std::vector<std::string> result;
    if (familyName == "Duck") {
        result.push_back("Donald");
        result.push_back("Dagobert");
        result.push_back("Daisy");
        result.push_back("Tick");
        result.push_back("Trick");
        result.push_back("Track");
    }
    _reply(result);
}
