/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/NSCoding.h>
#import <ManagedConfiguration/XXUnknownSuperclass.h>

@class NSString;

@interface MCProfileWarning : XXUnknownSuperclass <NSCoding> {
@private
	NSString *_localizedTitle;	// 4 = 0x4
	NSString *_localizedBody;	// 8 = 0x8
	BOOL _isLongForm;	// 12 = 0xc
}
@property(retain) NSString *localizedTitle;	// G=0x2e3e9; S=0x2e3c5; @synthesize=_localizedTitle
@property(retain) NSString *localizedBody;	// G=0x2e425; S=0x2e401; @synthesize=_localizedBody
@property(assign) BOOL isLongForm;	// G=0x2e27d; S=0x2e28d; @synthesize=_isLongForm
+ (id)warningWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x2e31d
- (void)dealloc;	// 0x2e365
- (id)initWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x2e511
- (void)encodeWithCoder:(id)coder;	// 0x2e29d
- (id)initWithCoder:(id)coder;	// 0x2e43d
// declared property getter: - (BOOL)isLongForm;	// 0x2e27d
// declared property setter: - (void)setIsLongForm:(BOOL)form;	// 0x2e28d
// declared property getter: - (id)localizedBody;	// 0x2e425
// declared property setter: - (void)setLocalizedBody:(id)body;	// 0x2e401
// declared property getter: - (id)localizedTitle;	// 0x2e3e9
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x2e3c5
@end
