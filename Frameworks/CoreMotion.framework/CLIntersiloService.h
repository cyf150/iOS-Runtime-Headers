/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CLIntersiloInterface, CLSilo;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {
    CLIntersiloInterface *_inboundInterface;
    CLIntersiloInterface *_outboundInterface;
    CLSilo *_silo;
    bool_valid;
}

@property(readonly) CLIntersiloInterface * inboundInterface;
@property(readonly) CLIntersiloInterface * outboundInterface;
@property(readonly) CLSilo * silo;
@property bool valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)inboundInterface;
- (id)init;
- (id)initInSilo:(id)arg1;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;
- (bool)isHydrated;
- (id)outboundInterface;
- (void)setValid:(bool)arg1;
- (id)silo;
- (bool)valid;

@end