/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSpotlightQuery : NSObject <SPDaemonQueryDelegate> {
    BOOL _cancelled;
    NSMutableDictionary *_chatGUIDToLatestSearchResult;
    id /* block */ _completion;
    BOOL _processing;
    SPDaemonQueryToken *_queryToken;
    unsigned int _resultIndex;
    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;
    SPSearchResultSection *_searchResults;
}

@property (nonatomic, copy) id /* block */ completion;

- (void)_callCompletionIfNecessary;
- (void)_cleanup;
- (void)_processSearchResults;
- (void)cancel;
- (id /* block */)completion;
- (void)dealloc;
- (id)initWithSearchText:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (void)searchDaemonQueryReset:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
