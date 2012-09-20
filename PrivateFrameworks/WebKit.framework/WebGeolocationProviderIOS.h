/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GeolocationCoreLocationDelegate, WebGeolocationPosition, NSTimer, m_tableSize;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider, GeolocationUpdateListener> {
    BOOL _shouldResetOnResume;

  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _registeredWebViews;

    BOOL _isSuspended;

  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _pendingInitialPositionWebView;

    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>> > { 
        struct HashTable<WTF::RetainPtr<WebView>, std::__1::pair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::PairFirstExtractor<std::__1::pair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashMapValueTraits<WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::HashTraits<WTF::RetainPtr<WebView>> > { 
            struct pair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _webViewsWaitingForCoreLocationStart;
    NSTimer *_sendLastPositionAsynchronouslyTimer;
    GeolocationCoreLocationDelegate *_geolocationCoreLocationDelegate;

  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _warmUpWebViews;


  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _trackedWebViews;

    WebGeolocationPosition *_lastPosition;
    BOOL _enableHighAccuracy;
}

@property(retain) GeolocationCoreLocationDelegate * geolocationCoreLocationDelegate;
@property BOOL enableHighAccuracy;
@property BOOL isSuspended;
@property BOOL shouldResetOnResume;
@property(readonly) /* Warning: unhandled struct encoding: '{HashMap<WTF::RetainPtr<WebView>' */ struct  webViewsWaitingForCoreLocationStart; /* unknown property attribute:  WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>> >}iiii}} */
@property(readonly) struct  warmUpWebViews; /* unknown property attribute:  WTF::HashTraits<WebView *> >=^@iiii}} */
@property(readonly) struct  pendingInitialPositionWebView; /* unknown property attribute:  WTF::HashTraits<WebView *> >=^@iiii}} */
@property(readonly) struct  registeredWebViews; /* unknown property attribute:  WTF::HashTraits<WebView *> >=^@iiii}} */
@property(readonly) struct  trackedWebViews; /* unknown property attribute:  WTF::HashTraits<WebView *> >=^@iiii}} */
@property(retain) NSTimer * sendLastPositionAsynchronouslyTimer;
@property(retain) WebGeolocationPosition * lastPosition;

+ (id)sharedGeolocationProvider;

- (void)resume;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)suspend;
- (BOOL)isSuspended;
- (BOOL)enableHighAccuracy;
- (struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { id *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; })trackedWebViews;
- (struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { id *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; })warmUpWebViews;
- (id)geolocationCoreLocationDelegate;
- (id)sendLastPositionAsynchronouslyTimer;
- (struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>> > { struct HashTable<WTF::RetainPtr<WebView>, std::__1::pair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::PairFirstExtractor<std::__1::pair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::PtrHash<WTF::RetainPtr<WebView>>, WTF::HashMapValueTraits<WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::HashTraits<WTF::RetainPtr<WebView>> > { struct pair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>> > {} *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; })webViewsWaitingForCoreLocationStart;
- (struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { id *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; })pendingInitialPositionWebView;
- (void)setIsSuspended:(BOOL)arg1;
- (struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { id *x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; int x_1_1_5; } x1; })registeredWebViews;
- (void)setShouldResetOnResume:(BOOL)arg1;
- (BOOL)shouldResetOnResume;
- (void)stopTrackingWebView:(id)arg1;
- (void)stopCoreLocationDelegateIfNeeded;
- (void)setSendLastPositionAsynchronouslyTimer:(id)arg1;
- (void)handlePendingInitialPosition:(id)arg1;
- (void)startCoreLocationDelegate;
- (void)setLastPosition:(id)arg1;
- (void)setGeolocationCoreLocationDelegate:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)resetGeolocation;
- (void)geolocationDelegateUnableToStart;
- (void)geolocationDelegateStarted;
- (void)errorOccurred:(id)arg1;
- (void)cancelWarmUpForWebView:(id)arg1;
- (id)lastPosition;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (void)setEnableHighAccuracy:(BOOL)arg1;
- (void)unregisterWebView:(id)arg1;
- (void)registerWebView:(id)arg1;

@end