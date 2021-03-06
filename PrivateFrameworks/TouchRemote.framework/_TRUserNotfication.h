/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface _TRUserNotfication : NSObject {
    long _response;
    unsigned long _responseFlags;
    struct __CFUserNotification { } *_userNotification;
}

@property (nonatomic, readonly) struct __CFUserNotification { }*CFUserNotification;
@property (nonatomic, readonly) long response;
@property (nonatomic, readonly) unsigned long responseFlags;

- (struct __CFUserNotification { }*)CFUserNotification;
- (void)cancel;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 options:(unsigned long)arg2 error:(int*)arg3;
- (long)response;
- (unsigned long)responseFlags;
- (void)show;

@end
