#import <Cedar-iOS/Cedar-iOS.h>
#import "DumpstrInterface.h"

using namespace Cedar::Matchers;
using namespace Cedar::Doubles;

SPEC_BEGIN(DumpstrInterfaceSpec)

describe(@"DumpstrInterface", ^{
    __block DumpstrInterface *interface;

    beforeEach(^{
        interface = [[DumpstrInterface alloc] init];
    });
    
    it(@"should not blow up", ^{
        YES should be_truthy;
    });
});

SPEC_END
