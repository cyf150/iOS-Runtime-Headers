/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKUserContentController : NSObject {
    struct RefPtr<WebKit::WebUserContentControllerProxy> { 
        struct WebUserContentControllerProxy {} *m_ptr; 
    } _userContentControllerProxy;
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    } _userScripts;
}

@property (nonatomic, readonly, copy) NSArray *userScripts;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)addUserScript:(id)arg1;
- (id)init;
- (void)removeAllUserScripts;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (id)userScripts;

@end
