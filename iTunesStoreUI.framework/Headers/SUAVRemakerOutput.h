/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, NSURL, NSDictionary;

@interface SUAVRemakerOutput : XXUnknownSuperclass <NSCopying> {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSURL *_mediaURL;	// 8 = 0x8
	NSString *_remakerMode;	// 12 = 0xc
	NSDictionary *_remakerOptions;	// 16 = 0x10
}
@property(copy) NSDictionary *remakerOptions;	// G=0xc166d; S=0xc19c9; 
@property(copy) NSString *remakerMode;	// G=0xc14d1; S=0xc18e9; 
@property(copy) NSURL *mediaFileURL;	// G=0xc1321; S=0xc1809; 
// declared property setter: - (void)setRemakerOptions:(id)options;	// 0xc19c9
// declared property setter: - (void)setRemakerMode:(id)mode;	// 0xc18e9
// declared property setter: - (void)setMediaFileURL:(id)url;	// 0xc1809
// declared property getter: - (id)remakerOptions;	// 0xc166d
// declared property getter: - (id)remakerMode;	// 0xc14d1
// declared property getter: - (id)mediaFileURL;	// 0xc1321
- (id)copyWithZone:(NSZone *)zone;	// 0xc11dd
- (void)dealloc;	// 0xc1155
- (id)init;	// 0xc110d
@end
