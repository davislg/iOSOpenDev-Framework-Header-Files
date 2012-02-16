/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKContentEntryBridgeClient.h>
#import <ChatKit/CKEntryField.h>
#import <ChatKit/CKTextContentViewDelegate.h>
#import <ChatKit/UITextContentViewDelegate.h>
#import <ChatKit/UIGestureRecognizerDelegate.h>
#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/XXUnknownSuperclass.h>

@class NSMutableArray, NSString, NSArray, CKTextContentView, CKContentEntryBridge, UIView, UITapGestureRecognizer;

@interface CKContentEntryView : XXUnknownSuperclass <CKEntryField, UITextContentViewDelegate, CKContentEntryBridgeClient, UIGestureRecognizerDelegate, CKTextContentViewDelegate> {
	NSMutableArray *_contentViews;	// 388 = 0x184
	CKTextContentView *_textView;	// 392 = 0x188
	CKTextContentView *_subjectView;	// 396 = 0x18c
	CKTextContentView *_activeView;	// 400 = 0x190
	UIView *_subjectLine;	// 404 = 0x194
	NSString *_defaultText;	// 408 = 0x198
	CKContentEntryBridge *_bridge;	// 412 = 0x19c
	UITapGestureRecognizer *_singleTap;	// 416 = 0x1a0
	unsigned _showsSubject : 1;	// 420 = 0x1a4
	unsigned _viewsLoaded : 1;	// 420 = 0x1a4
	id _entryFieldDelegate;	// 424 = 0x1a8
	BOOL _needsScrollToVisible;	// 428 = 0x1ac
	int _contentAdjustmentHoldCount;	// 432 = 0x1b0
	int _outgoingBubbleColor;	// 436 = 0x1b4
	BOOL _needsContentAdjustment;	// 440 = 0x1b8
}
@property(readonly, assign, nonatomic) NSArray *contentViews;	// G=0x592b5; @synthesize=_contentViews
@property(assign, nonatomic) int outgoingBubbleColor;	// G=0x592a5; S=0x5b505; @synthesize=_outgoingBubbleColor
@property(readonly, assign, nonatomic) unsigned displayedLines;	// G=0x5b0a1; 
@property(assign, nonatomic) BOOL showsSubject;	// G=0x59229; S=0x5acd1; 
@property(assign) id entryFieldDelegate;	// G=0x59261; S=0x59251; converted property
@property(retain) id messageComposition;	// G=0x5a439; S=0x5a459; converted property
@property(retain) id messageParts;	// G=0x5a399; S=0x5a3b9; converted property
@property(assign) int cursorPosition;	// G=0x59279; S=0x59275; converted property
@property(retain) id subject;	// G=0x5a0b9; S=0x5a065; converted property
@property(readonly, retain) CKTextContentView *activeView;	// G=0x5923d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x592c5
- (void)dealloc;	// 0x5b5a1
- (void)removeFromSuperview;	// 0x5b545
// declared property setter: - (void)setOutgoingBubbleColor:(int)color;	// 0x5b505
- (void)handlePan:(id)pan;	// 0x5b47d
- (void)setContentOffset:(CGPoint)offset;	// 0x5b3d5
- (void)_scrollViewAnimationEnded;	// 0x5b3a1
- (void)updateCandidateDisplay;	// 0x5b36d
- (void)setFrame:(CGRect)frame;	// 0x5b2c9
- (CGSize)desiredSize;	// 0x5b265
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x5b1d9
// declared property getter: - (unsigned)displayedLines;	// 0x5b0a1
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x5af05
- (CGRect)contentEntryFrame:(BOOL)frame;	// 0x5ada1
// declared property getter: - (BOOL)showsSubject;	// 0x59229
// declared property setter: - (void)setShowsSubject:(BOOL)subject;	// 0x5acd1
- (void)showSubjectLinesAndDefaultText:(BOOL)text;	// 0x5ac7d
// converted property getter: - (id)activeView;	// 0x5923d
- (void)tapGesture:(id)gesture;	// 0x5ac3d
- (BOOL)textContentView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;	// 0x5aacd
- (void)textContentViewDidChange:(id)textContentView;	// 0x5aa45
- (BOOL)textContentViewShouldBeginEditing:(id)textContentView;	// 0x5a9f1
- (void)textContentViewDidBeginEditing:(id)textContentView;	// 0x5a99d
- (BOOL)textContentViewShouldEndEditing:(id)textContentView;	// 0x5a979
- (BOOL)textContentView:(id)view shouldChangeSizeForContentSize:(CGSize)contentSize;	// 0x5924d
- (void)textContentView:(id)view didChangeSize:(CGSize)size;	// 0x5a969
- (id)documentFragmentForPasteboardItemAtIndex:(int)index inTextContentView:(id)textContentView;	// 0x5a93d
- (void)attachmentsDidChange;	// 0x5a91d
- (void)updateFontSize;	// 0x5a7a9
- (void)reflowContent;	// 0x5a795
- (void)reflowContentWithAnimation:(BOOL)animation;	// 0x5a6b5
- (void)setContentHidden:(BOOL)hidden subjectHidden:(BOOL)hidden2;	// 0x5a5c1
// converted property setter: - (void)setEntryFieldDelegate:(id)delegate;	// 0x59251
// converted property getter: - (id)entryFieldDelegate;	// 0x59261
- (void)clearMessage;	// 0x5a505
- (BOOL)hasContent;	// 0x5a4e1
// converted property setter: - (void)setMessageComposition:(id)composition;	// 0x5a459
// converted property getter: - (id)messageComposition;	// 0x5a439
- (id)messageCompositionIfTextOnly;	// 0x5a419
// converted property setter: - (void)setMessageParts:(id)parts;	// 0x5a3b9
// converted property getter: - (id)messageParts;	// 0x5a399
- (void)insertMessagePart:(id)part;	// 0x5a35d
- (void)moveCursorToEnd;	// 0x59271
// converted property setter: - (void)setCursorPosition:(int)position;	// 0x59275
// converted property getter: - (int)cursorPosition;	// 0x59279
- (int)lastCursorPosition;	// 0x5927d
- (void)saveCursorPosition;	// 0x59281
- (void)restoreCursorPosition;	// 0x59285
- (void)makeActive;	// 0x5a1dd
- (BOOL)isActive;	// 0x5a1b9
- (void)disableEditing;	// 0x5a0d9
- (void)setIgnoreAnimations:(BOOL)animations;	// 0x59289
// converted property getter: - (id)subject;	// 0x5a0b9
// converted property setter: - (void)setSubject:(id)subject;	// 0x5a065
- (void)loadSubviews;	// 0x5a055
- (id)attachments;	// 0x5a035
- (void)_addContentView:(id)view;	// 0x59ed9
- (void)_reloadEntryViewsIfLoaded;	// 0x59dc5
- (void)_removeContentView:(id)view;	// 0x59d45
- (void)setDefaultText:(id)text;	// 0x59cd1
- (void)_loadEntryViews;	// 0x598cd
- (CGSize)_contentSize;	// 0x59681
- (void)_adjustAllContent;	// 0x5966d
- (void)_adjustAllContentWithAnimation:(BOOL)animation;	// 0x59595
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x5950d
- (void)_setupGestureRecognizers;	// 0x5948d
- (void)_beginHoldingContentAdjustments;	// 0x5928d
- (void)_endHoldingContentAdjustments;	// 0x59479
- (void)_endHoldingContentAdjustmentsWithAnimation:(BOOL)animation;	// 0x59419
- (BOOL)canPasteObject:(id)object;	// 0x593f1
- (BOOL)ckTextContentViewShouldReturn:(id)ckTextContentView;	// 0x59355
// declared property getter: - (int)outgoingBubbleColor;	// 0x592a5
// declared property getter: - (id)contentViews;	// 0x592b5
@end