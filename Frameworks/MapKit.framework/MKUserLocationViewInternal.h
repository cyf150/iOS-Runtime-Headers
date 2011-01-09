/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAccuracyLayer, MKUserLocationView, CALayer, MKUserLocationLayer;



@interface MKUserLocationViewInternal : NSObject 
{
    id delegate;
    MKUserLocationView *view;
    MKUserLocationLayer *layer;
    CALayer *dotLayer;
    CALayer *bounceLayer;
    CALayer *userLayer;
    CALayer *headingLayer;
    CALayer *haloLayer;
    MKAccuracyLayer *accuracyLayer;
    NSUInteger mapType;
    NSInteger zoomDirection;
    float accuracy;
    double headingAccuracy;
    struct { 
        unsigned int animatedSublayers : 1; 
        unsigned int disableAccuracyDidUpdate : 1; 
        unsigned int enforceLowerBound : 1; 
        unsigned int shouldDisplayHalo : 1; 
        unsigned int shouldDisplayEffects : 1; 
        unsigned int shouldDisplayAccuracy : 1; 
        unsigned int shouldDisplayHeading : 1; 
        unsigned int stale : 1; 
        unsigned int delegateAccuracyDidUpdate : 1; 
        unsigned int delegateDidQuiesce : 1; 
        unsigned int willAnimateProperty : 1; 
    } flags;
}

@property(readonly) MKUserLocationPositionAnimation *positionAnimation;
@property(readonly) MKHoverAnimation *hoverAnimation;
@property CGPoint position;
@property BOOL animatedSublayers;
@property BOOL disableAccuracyDidUpdate;
@property(getter=isDisplayingAccuracy,readonly) BOOL displayingAccuracy;
@property(getter=isHovering,readonly) BOOL hovering;
@property(getter=isStale) BOOL stale;
@property(readonly) BOOL hasHalo;
@property(readonly) BOOL canHalo;
@property(readonly) BOOL canHaloExcludingAccuracy;
@property(readonly) BOOL canHaloExcludingEffects;
@property(readonly) BOOL needsHalo;
@property(readonly) BOOL hasQuiesced;
@property BOOL shouldDisplayHalo;
@property BOOL shouldDisplayEffects;
@property BOOL shouldDisplayAccuracy;
@property BOOL shouldDisplayHeading;
@property NSInteger zoomDirection; /* unknown property attribute: VzoomDirection */
@property NSUInteger mapType; /* unknown property attribute: VmapType */
@property double headingAccuracy; /* unknown property attribute: VheadingAccuracy */
@property float accuracy; /* unknown property attribute: Vaccuracy */
@property id delegate; /* unknown property attribute: Vdelegate */

+ (void)initialize;
+ (id)dotImage;
+ (id)dotPressedImage;
+ (id)greyDotImage;
+ (id)greyDotPressedImage;
+ (id)headingAngleSmallImage;
+ (id)headingAngleMediumImage;
+ (id)headingAngleLargeImage;
+ (float)accuracyDiameter:(float)arg1 level:(NSUInteger)arg2;
+ (id)bounceImages;
+ (id)haloImages;
+ (struct CGSize { float x1; float x2; })effectsSize;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })effectiveFrameWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (float)maxVisibleAccuracyDiameter;
+ (void)frameLayer:(id)arg1 initialAccuracy:(float*)arg2 restAccuracy:(float*)arg3;

- (id)initWithView:(id)arg1;
- (void)removeSublayers;
- (void)clearViewReferences;
- (void)dealloc;
- (BOOL)animatedSublayers;
- (void)setAnimatedSublayers:(BOOL)arg1;
- (BOOL)disableAccuracyDidUpdate;
- (void)setDisableAccuracyDidUpdate:(BOOL)arg1;
- (BOOL)isStale;
- (void)setStale:(BOOL)arg1;
- (BOOL)shouldDisplayHalo;
- (void)setShouldDisplayHalo:(BOOL)arg1;
- (BOOL)shouldDisplayEffects;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (BOOL)shouldDisplayAccuracy;
- (void)setShouldDisplayAccuracy:(BOOL)arg1;
- (BOOL)shouldDisplayHeading;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })position;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (float)accuracy;
- (BOOL)sizeAccuracyLayerToFit:(float)arg1 animated:(BOOL)arg2;
- (void)resetScale;
- (void)drawAccuracy:(float)arg1;
- (void)applyScale:(float)arg1 animated:(BOOL)arg2;
- (void)setAccuracy:(float)arg1;
- (id)headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)userLocationViewAccuracyDidUpdate;
- (void)userLocationViewDidUpdate;
- (void)setMapType:(NSUInteger)arg1;
- (BOOL)isDotBouncing;
- (BOOL)isDotTeleporting;
- (BOOL)isHovering;
- (BOOL)isAccuracyChanging;
- (BOOL)hasQuiesced;
- (void)setZoomDirection:(NSInteger)arg1;
- (void)setZoomDirection:(NSInteger)arg1 deltaScale:(float)arg2;
- (BOOL)canHaloExcludingAccuracy;
- (BOOL)canHalo;
- (BOOL)canHaloExcludingEffects;
- (BOOL)hasHalo;
- (BOOL)needsHalo;
- (void)updateHalo;
- (void)updateDot;
- (void)staleDidChange;
- (void)shouldDisplayAccuracyDidChange;
- (void)updateHeading;
- (void)shouldDisplayHeadingDidChange;
- (void)pauseHalo;
- (void)resumeHalo;
- (void)pauseHover;
- (void)resumeHover;
- (void)updateHover;
- (void)shouldDisplayEffectsDidChange;
- (NSUInteger)indexForSubLayer:(id)arg1;
- (void)stopHover;
- (void)removeHover;
- (void)terminateHoverAccuracy:(float)arg1 duration:(double)arg2;
- (id)dropUserLocationBreadCrumbAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)orderInDotLayer;
- (void)orderInLayer:(id)arg1 beginTime:(double)arg2;
- (void)insertSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)removeSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)didBeginZoom;
- (void)didEndZoom;
- (void)userLocationAccuracyDidUpdate;
- (void)clampAccuracyValue:(float*)arg1;
- (void)resetAccuracy;
- (NSInteger)zoomDirection;
- (NSUInteger)mapType;
- (double)headingAccuracy;
- (id)delegate;
- (id)positionAnimation;
- (id)accuracyAnimation;
- (id)dotBounceAnimation;
- (id)hoverAnimation;
- (id)haloAnimation;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;

@end