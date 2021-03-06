/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellContext.h>

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext {
	int _pendingWebViewLoads;	// 56 = 0x38
	NSString *_stylesheet;	// 60 = 0x3c
	CFDictionaryRef _webViewCache;	// 64 = 0x40
	float _webViewWidth;	// 68 = 0x44
}
@property(assign, nonatomic) float webViewWidth;	// G=0xaf2c1; S=0xaf2d1; @synthesize=_webViewWidth
@property(retain, nonatomic) NSString *stylesheet;	// G=0xaf28d; S=0xaf29d; @synthesize=_stylesheet
// declared property setter: - (void)setWebViewWidth:(float)width;	// 0xaf2d1
// declared property getter: - (float)webViewWidth;	// 0xaf2c1
// declared property setter: - (void)setStylesheet:(id)stylesheet;	// 0xaf29d
// declared property getter: - (id)stylesheet;	// 0xaf28d
- (void)webViewDidFinishLoading:(id)webView;	// 0xaf22d
- (id)webViewForMarkup:(id)markup;	// 0xaf005
- (void)dealloc;	// 0xaef99
@end
