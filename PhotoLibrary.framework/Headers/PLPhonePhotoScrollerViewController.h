/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/UINavigationControllerDelegate.h>
#import <PhotoLibrary/PLPhotoScrollerViewController.h>

@class UIView;

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate> {
@private
	UIView *_savedButtonBarSuperview;	// 608 = 0x260
	int _previousGroup;	// 612 = 0x264
	unsigned _isModalTransition : 1;	// 616 = 0x268
	unsigned _didDisappearUnderModalTransition : 1;	// 616 = 0x268
	UIView *_viewToRemoveForSlideShow;	// 620 = 0x26c
}
- (void)_updateNavigationBar;	// 0x15f0d
- (BOOL)_isAirPlayEnabled;	// 0x1611d
- (BOOL)_isPerformingModalTransitionFromCamera;	// 0x14691
- (BOOL)isModalTransitioning;	// 0xcfed1
- (void)beginSlideshowByRemovingView:(id)view;	// 0xcfe75
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x16df5
- (void)viewDidDisappear:(BOOL)view;	// 0x1b065
- (void)_emailComposeSheetIsReady;	// 0xcfe49
- (void)viewWillDisappear:(BOOL)view;	// 0x191cd
- (void)viewDidAppear:(BOOL)view;	// 0x1739d
- (void)viewWillAppear:(BOOL)view;	// 0x145d1
- (void)didMoveToPhotoAtIndex:(unsigned)index;	// 0x17bbd
- (void)controllerWasOrderedOut:(id)anOut;	// 0xcfd9d
- (void)dealloc;	// 0x2c92d
- (id)initWithPhoto:(id)photo inAlbum:(NSObject *)album;	// 0xcfd79
- (id)initWithPhoto:(id)photo inAlbum:(NSObject *)album lockStatusBar:(BOOL)bar delayImageLoading:(BOOL)loading;	// 0xf1c1
@end
