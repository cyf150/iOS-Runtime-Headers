/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    } _autoscrollBasePoint;
    float _autoscrollFactor;
    int _autoscrollRamp;
    struct CGPoint { 
        float x; 
        float y; 
    } _autoscrollUntransformedExtentPoint;
    BOOL _autoscrolled;
    UIGestureRecognizer *_doubleTapGesture;
    BOOL _externalTextInput;
    NSHashTable *_gestureRecognizerViews;
    BOOL _inGesture;
    BOOL _isTryingToHighlightLink;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_loupeGesture;
    struct CGPoint { 
        float x; 
        float y; 
    } _loupeGestureEndPoint;
    NSMutableArray *_recognizers;
    UITextSelectionView *_selectionView;
    UITapGestureRecognizer *_singleTapGesture;
    UITextChecker *_textChecker;
    UIResponder<UITextInput> *_view;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } autoscrollUntransformedExtentPoint;
@property (nonatomic) BOOL autoscrolled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIGestureRecognizer *doubleTapGesture;
@property (getter=isExperimentalUIEnabled, nonatomic, readonly) BOOL experimentalUIEnabled;
@property (nonatomic, readonly) BOOL externalTextInput;
@property (nonatomic, readonly) UIFieldEditor *fieldEditor;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inGesture;
@property (nonatomic, retain) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) struct CGPoint { float x1; float x2; } loupeGestureEndPoint;
@property (nonatomic, readonly) UIView *scrollView;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic, readonly, retain) UITapGestureRecognizer *singleTapGesture;
@property (nonatomic, retain) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIResponder<UITextInput> *textDocument;
@property (nonatomic, readonly) UIResponder<UITextInput> *view;

- (id)_asText;
- (id)_scrollable;
- (id)_selectionView;
- (void)activateSelection;
- (id)addDragRecognizer;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)addHighlightLinkRecognizerToView:(id)arg1 withHighlightDelay:(BOOL)arg2;
- (id)addLoupeGestureRecognizer:(BOOL)arg1 toView:(id)arg2;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerDoubleTapRecognizerToView:(id)arg1;
- (id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerTapRecognizerToView:(id)arg1;
- (id)addOneFingerTripleTapRecognizerToView:(id)arg1;
- (id)addPhraseBoundaryGestureRecognizerToView:(id)arg1;
- (id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addSelectionTapRecognizerToView:(id)arg1;
- (id)addTapAndAHalfRecognizerToView:(id)arg1;
- (id)addTapAndHoldOnLinkRecognizerToView:(id)arg1;
- (id)addTwoFingerRangedSelectRecognizerToView:(id)arg1;
- (id)addTwoFingerSingleTapRecognizerToView:(id)arg1;
- (void)attach;
- (struct CGPoint { float x1; float x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (BOOL)autoscrolled;
- (void)canBeginDragCursor:(id)arg1;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (void)clearSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containerAllowsSelection;
- (BOOL)containerAllowsSelectionTintOnly;
- (BOOL)containerChangesSelectionOnOneFingerTap;
- (BOOL)containerIsAtom;
- (BOOL)containerIsBrowserView;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsTextField;
- (void)deactivateSelection;
- (void)dealloc;
- (void)detach;
- (void)detach:(BOOL)arg1;
- (void)didEndScrollingOverflow;
- (void)disableClearsOnInsertion;
- (float)distanceBetweenPoint:(struct CGPoint { float x1; float x2; })arg1 andRange:(id)arg2;
- (id)doubleTapGesture;
- (void)doubleTapInUneditable:(id)arg1;
- (BOOL)externalTextInput;
- (id)fieldEditor;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)inGesture;
- (id)initWithResponder:(id)arg1;
- (id)initWithView:(id)arg1;
- (BOOL)isExperimentalUIEnabled;
- (BOOL)isInteractingWithLink;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)linkInteractionView;
- (void)longDelayRecognizer:(id)arg1;
- (id)loupeGesture;
- (void)loupeGesture:(id)arg1;
- (struct CGPoint { float x1; float x2; })loupeGestureEndPoint;
- (id)loupeGestureRecognizer:(BOOL)arg1;
- (BOOL)noCalloutBarAndTouchInSelection:(struct CGPoint { float x1; float x2; })arg1;
- (void)notifyKeyboardSelectionChanged;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)oneFingerTapRecognizer:(SEL)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (id)oneFingerTripleTapRecognizer;
- (id)phraseBoundaryGestureRecognizer;
- (id)rangeForTextReplacement:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint { float x1; float x2; })arg1;
- (void)rangeSelectionMoved:(struct CGPoint { float x1; float x2; })arg1 withTouchPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)rangeSelectionStarted:(struct CGPoint { float x1; float x2; })arg1;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeGestureRecognizersFromView:(id)arg1;
- (BOOL)requiresImmediateUpdate;
- (void)resignedFirstResponder;
- (void)scheduleChineseTransliteration;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)scrollSelectionToVisible;
- (id)scrollView;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)selectionChanged;
- (id)selectionTapRecognizer:(SEL)arg1;
- (id)selectionView;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAutoscrolled:(BOOL)arg1;
- (void)setDoubleTapGesture:(id)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setInGesture:(BOOL)arg1;
- (void)setLoupeGesture:(id)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSingleTapGesture:(id)arg1;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (BOOL)shouldIgnoreLinkGestures;
- (id)singleTapGesture;
- (void)smallDelayRecognizer:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)swallowsDoubleTapWithScale:(float)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)tapAndAHalf:(id)arg1;
- (id)tapAndAHalfRecognizer;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (id)textDocument;
- (id)textSelectionView;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (id)twoFingerRangedSelectRecognizer;
- (void)twoFingerSingleTap:(id)arg1;
- (id)twoFingerSingleTapRecognizer;
- (void)updateAutoscroll:(id)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (BOOL)useGesturesForEditableContent;
- (id)view;
- (BOOL)viewCouldBecomeEditable:(id)arg1;
- (void)willStartScrollingOverflow;

@end
