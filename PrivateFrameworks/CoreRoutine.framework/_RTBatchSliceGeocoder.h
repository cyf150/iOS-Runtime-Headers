/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface _RTBatchSliceGeocoder : NSObject {
    NSArray *_geoMapItems;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    <GEOMapServiceTicket> *_ticket;
}

@property (nonatomic, retain) NSArray *geoMapItems;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, retain) <GEOMapServiceTicket> *ticket;

- (void).cxx_destruct;
- (void)_cancelTicket:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)geoMapItems;
- (void)geocodeLocations:(id)arg1;
- (id)init;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)semaphore;
- (void)setGeoMapItems:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSemaphore:(id)arg1;
- (void)setTicket:(id)arg1;
- (id)ticket;

@end
