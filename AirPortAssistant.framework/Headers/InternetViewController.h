/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/UIScrollViewDelegate.h>
#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <AirPortAssistant/InternetViewController.h>

@class UIPageControl, UIImageView, NSMutableSet, NSMutableArray, UIView, UILabel, UIActivityIndicatorView, ViewScroller;

__attribute__((visibility("hidden")))
@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {
	UIView *containerView;	// 188 = 0xbc
	UIView *diagramContainerView;	// 192 = 0xc0
	ViewScroller *diagramView;	// 196 = 0xc4
	UIPageControl *pageControl;	// 200 = 0xc8
	UIView *descriptionContainerView;	// 204 = 0xcc
	UILabel *descriptionLabel;	// 208 = 0xd0
	UIView *spinnerWithStatusAdjacentView;	// 212 = 0xd4
	UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;	// 216 = 0xd8
	UILabel *spinnerWithStatusAdjacentLabel;	// 220 = 0xdc
	UIView *wanCableView;	// 224 = 0xe0
	UIImageView *cablingImageFirstFrame;	// 228 = 0xe4
	UIImageView *cablingImageLastFrame;	// 232 = 0xe8
	UILabel *wanPortLabel;	// 236 = 0xec
	UILabel *internetLabel;	// 240 = 0xf0
	UILabel *routerLabel;	// 244 = 0xf4
	UILabel *deviceLabel;	// 248 = 0xf8
	UIImageView *routerImageView;	// 252 = 0xfc
	UIImageView *deviceImageView;	// 256 = 0x100
	UIImageView *insetImageView;	// 260 = 0x104
	UIView *resetBroadband1View;	// 264 = 0x108
	UIImageView *resetBroadband1Image;	// 268 = 0x10c
	UILabel *cyclePowerLabel;	// 272 = 0x110
	UILabel *removeBatteryLabel;	// 276 = 0x114
	UIView *resetBroadband2View;	// 280 = 0x118
	UIImageView *resetBroadband2Image;	// 284 = 0x11c
	UIView *swapCableView;	// 288 = 0x120
	UIImageView *swapCableViewCablingImageFirstFrame;	// 292 = 0x124
	UIImageView *swapCableViewCablingImageLastFrame;	// 296 = 0x128
	UIImageView *swapCableViewRouterImage;	// 300 = 0x12c
	UIImageView *swapCableViewTargetImage;	// 304 = 0x130
	UIImageView *swapCableViewSourceImage;	// 308 = 0x134
	UIImageView *swapCableViewInsetImage;	// 312 = 0x138
	UILabel *swapCableViewInternetLabel;	// 316 = 0x13c
	UILabel *swapCableViewRouterLabel;	// 320 = 0x140
	UILabel *swapCableViewSourceLabel;	// 324 = 0x144
	UILabel *swapCableViewTargetLabel;	// 328 = 0x148
	unsigned internetFlow;	// 332 = 0x14c
	BOOL pageControlIsChangingPage;	// 336 = 0x150
	NSMutableSet *recycledPages;	// 340 = 0x154
	NSMutableSet *visiblePages;	// 344 = 0x158
	NSMutableArray *images;	// 348 = 0x15c
	XXStruct_bxvjXB targetDevice;	// 352 = 0x160
	XXStruct_bxvjXB sourceDevice;	// 364 = 0x16c
}
@property(assign) unsigned internetFlow;	// G=0x11579; S=0x11589; @synthesize
@property(retain, nonatomic) UILabel *swapCableViewTargetLabel;	// G=0x11545; S=0x11555; @synthesize
@property(retain, nonatomic) UILabel *swapCableViewSourceLabel;	// G=0x11511; S=0x11521; @synthesize
@property(retain, nonatomic) UILabel *swapCableViewRouterLabel;	// G=0x114dd; S=0x114ed; @synthesize
@property(retain, nonatomic) UILabel *swapCableViewInternetLabel;	// G=0x114a9; S=0x114b9; @synthesize
@property(retain, nonatomic) UIImageView *swapCableViewInsetImage;	// G=0x11475; S=0x11485; @synthesize
@property(retain, nonatomic) UIImageView *swapCableViewSourceImage;	// G=0x11441; S=0x11451; @synthesize
@property(retain, nonatomic) UIImageView *swapCableViewTargetImage;	// G=0x1140d; S=0x1141d; @synthesize
@property(retain, nonatomic) UIImageView *swapCableViewRouterImage;	// G=0x113d9; S=0x113e9; @synthesize
@property(retain, nonatomic) UIImageView *swapCableViewCablingImageLastFrame;	// G=0x113a5; S=0x113b5; @synthesize
@property(retain, nonatomic) UIImageView *swapCableViewCablingImageFirstFrame;	// G=0x11371; S=0x11381; @synthesize
@property(retain, nonatomic) UIView *swapCableView;	// G=0x1133d; S=0x1134d; @synthesize
@property(retain, nonatomic) UIImageView *resetBroadband2Image;	// G=0x11309; S=0x11319; @synthesize
@property(retain, nonatomic) UIView *resetBroadband2View;	// G=0x112d5; S=0x112e5; @synthesize
@property(retain, nonatomic) UIImageView *resetBroadband1Image;	// G=0x112a1; S=0x112b1; @synthesize
@property(retain, nonatomic) UIView *resetBroadband1View;	// G=0x1126d; S=0x1127d; @synthesize
@property(retain, nonatomic) UIImageView *insetImageView;	// G=0x11239; S=0x11249; @synthesize
@property(retain, nonatomic) UIImageView *deviceImageView;	// G=0x11205; S=0x11215; @synthesize
@property(retain, nonatomic) UIImageView *routerImageView;	// G=0x1119d; S=0x111ad; @synthesize
@property(retain, nonatomic) UILabel *deviceLabel;	// G=0x111d1; S=0x111e1; @synthesize
@property(retain, nonatomic) UILabel *routerLabel;	// G=0x11169; S=0x11179; @synthesize
@property(retain, nonatomic) UILabel *internetLabel;	// G=0x11135; S=0x11145; @synthesize
@property(retain, nonatomic) UILabel *wanPortLabel;	// G=0x11101; S=0x11111; @synthesize
@property(retain, nonatomic) UIImageView *cablingImageLastFrame;	// G=0x110cd; S=0x110dd; @synthesize
@property(retain, nonatomic) UIImageView *cablingImageFirstFrame;	// G=0x11099; S=0x110a9; @synthesize
@property(retain, nonatomic) UIView *wanCableView;	// G=0x11065; S=0x11075; @synthesize
@property(retain, nonatomic) UILabel *descriptionLabel;	// G=0x10f95; S=0x10fa5; @synthesize
@property(retain, nonatomic) UIView *descriptionContainerView;	// G=0x10f61; S=0x10f71; @synthesize
@property(retain, nonatomic) UIPageControl *pageControl;	// G=0x10ffd; S=0x1100d; @synthesize
@property(retain, nonatomic) ViewScroller *diagramView;	// G=0x11031; S=0x11041; @synthesize
@property(retain, nonatomic) UIView *diagramContainerView;	// G=0x10fc9; S=0x10fd9; @synthesize
@property(retain, nonatomic) UIView *containerView;	// G=0x10f2d; S=0x10f3d; @synthesize
// declared property setter: - (void)setInternetFlow:(unsigned)flow;	// 0x11589
// declared property getter: - (unsigned)internetFlow;	// 0x11579
// declared property setter: - (void)setSwapCableViewTargetLabel:(id)label;	// 0x11555
// declared property getter: - (id)swapCableViewTargetLabel;	// 0x11545
// declared property setter: - (void)setSwapCableViewSourceLabel:(id)label;	// 0x11521
// declared property getter: - (id)swapCableViewSourceLabel;	// 0x11511
// declared property setter: - (void)setSwapCableViewRouterLabel:(id)label;	// 0x114ed
// declared property getter: - (id)swapCableViewRouterLabel;	// 0x114dd
// declared property setter: - (void)setSwapCableViewInternetLabel:(id)label;	// 0x114b9
// declared property getter: - (id)swapCableViewInternetLabel;	// 0x114a9
// declared property setter: - (void)setSwapCableViewInsetImage:(id)image;	// 0x11485
// declared property getter: - (id)swapCableViewInsetImage;	// 0x11475
// declared property setter: - (void)setSwapCableViewSourceImage:(id)image;	// 0x11451
// declared property getter: - (id)swapCableViewSourceImage;	// 0x11441
// declared property setter: - (void)setSwapCableViewTargetImage:(id)image;	// 0x1141d
// declared property getter: - (id)swapCableViewTargetImage;	// 0x1140d
// declared property setter: - (void)setSwapCableViewRouterImage:(id)image;	// 0x113e9
// declared property getter: - (id)swapCableViewRouterImage;	// 0x113d9
// declared property setter: - (void)setSwapCableViewCablingImageLastFrame:(id)frame;	// 0x113b5
// declared property getter: - (id)swapCableViewCablingImageLastFrame;	// 0x113a5
// declared property setter: - (void)setSwapCableViewCablingImageFirstFrame:(id)frame;	// 0x11381
// declared property getter: - (id)swapCableViewCablingImageFirstFrame;	// 0x11371
// declared property setter: - (void)setSwapCableView:(id)view;	// 0x1134d
// declared property getter: - (id)swapCableView;	// 0x1133d
// declared property setter: - (void)setResetBroadband2Image:(id)image;	// 0x11319
// declared property getter: - (id)resetBroadband2Image;	// 0x11309
// declared property setter: - (void)setResetBroadband2View:(id)view;	// 0x112e5
// declared property getter: - (id)resetBroadband2View;	// 0x112d5
// declared property setter: - (void)setResetBroadband1Image:(id)image;	// 0x112b1
// declared property getter: - (id)resetBroadband1Image;	// 0x112a1
// declared property setter: - (void)setResetBroadband1View:(id)view;	// 0x1127d
// declared property getter: - (id)resetBroadband1View;	// 0x1126d
// declared property setter: - (void)setInsetImageView:(id)view;	// 0x11249
// declared property getter: - (id)insetImageView;	// 0x11239
// declared property setter: - (void)setDeviceImageView:(id)view;	// 0x11215
// declared property getter: - (id)deviceImageView;	// 0x11205
// declared property setter: - (void)setDeviceLabel:(id)label;	// 0x111e1
// declared property getter: - (id)deviceLabel;	// 0x111d1
// declared property setter: - (void)setRouterImageView:(id)view;	// 0x111ad
// declared property getter: - (id)routerImageView;	// 0x1119d
// declared property setter: - (void)setRouterLabel:(id)label;	// 0x11179
// declared property getter: - (id)routerLabel;	// 0x11169
// declared property setter: - (void)setInternetLabel:(id)label;	// 0x11145
// declared property getter: - (id)internetLabel;	// 0x11135
// declared property setter: - (void)setWanPortLabel:(id)label;	// 0x11111
// declared property getter: - (id)wanPortLabel;	// 0x11101
// declared property setter: - (void)setCablingImageLastFrame:(id)frame;	// 0x110dd
// declared property getter: - (id)cablingImageLastFrame;	// 0x110cd
// declared property setter: - (void)setCablingImageFirstFrame:(id)frame;	// 0x110a9
// declared property getter: - (id)cablingImageFirstFrame;	// 0x11099
// declared property setter: - (void)setWanCableView:(id)view;	// 0x11075
// declared property getter: - (id)wanCableView;	// 0x11065
// declared property setter: - (void)setDiagramView:(id)view;	// 0x11041
// declared property getter: - (id)diagramView;	// 0x11031
// declared property setter: - (void)setPageControl:(id)control;	// 0x1100d
// declared property getter: - (id)pageControl;	// 0x10ffd
// declared property setter: - (void)setDiagramContainerView:(id)view;	// 0x10fd9
// declared property getter: - (id)diagramContainerView;	// 0x10fc9
// declared property setter: - (void)setDescriptionLabel:(id)label;	// 0x10fa5
// declared property getter: - (id)descriptionLabel;	// 0x10f95
// declared property setter: - (void)setDescriptionContainerView:(id)view;	// 0x10f71
// declared property getter: - (id)descriptionContainerView;	// 0x10f61
// declared property setter: - (void)setContainerView:(id)view;	// 0x10f3d
// declared property getter: - (id)containerView;	// 0x10f2d
- (void)startAnimatingCablingForView:(id)view startingOpacity:(float)opacity endingOpacity:(float)opacity3 duration:(double)duration;	// 0x10e59
- (id)sizedImageNamed:(id)named;	// 0x10dc1
- (id)insetImageForDeviceDiagramInfo:(XXStruct_bxvjXB *)deviceDiagramInfo;	// 0x10d39
- (id)deviceImageForDeviceDiagramInfo:(XXStruct_bxvjXB *)deviceDiagramInfo;	// 0x10c89
- (void)determineInfoForProductID:(unsigned)productID deviceDiagramInfo:(XXStruct_bxvjXB *)info;	// 0x10c65
- (void)changeDiagram:(id)diagram;	// 0x10c51
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x10c3d
- (void)scrollViewDidScroll:(id)scrollView;	// 0x10bd1
- (void)presentInternetDisconnectedUI;	// 0x10bb9
- (void)presentInternetWANPluginUI;	// 0x10ba1
- (void)presentSwapCablingCompleteUI;	// 0x10a99
- (void)presentSwapCablingUI;	// 0x10a81
- (void)viewWillDisappear:(BOOL)view;	// 0x10a35
- (void)viewWillAppear:(BOOL)view;	// 0x108b1
@end

@interface InternetViewController (private)
- (void)addInternetNotWorkingUI;	// 0x11e09
- (void)addInternetWANPluginUI;	// 0x119f1
- (void)addSwapCablingUI;	// 0x11599
@end
