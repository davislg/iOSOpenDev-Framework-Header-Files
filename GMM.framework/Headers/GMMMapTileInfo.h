/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class GMMCopyright;

__attribute__((visibility("hidden")))
@interface GMMMapTileInfo : XXUnknownSuperclass {
	GMMCopyright *_copyright;	// 4 = 0x4
}
@property(retain, nonatomic) GMMCopyright *copyright;	// G=0x38ab1; S=0x38ac1; @synthesize=_copyright
@property(readonly, assign, nonatomic) BOOL hasCopyright;	// G=0x387c1; 
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x38ac1
// declared property getter: - (id)copyright;	// 0x38ab1
- (void)writeTo:(id)to;	// 0x38a11
- (BOOL)readFrom:(id)from;	// 0x3889d
- (id)dictionaryRepresentation;	// 0x38849
- (id)description;	// 0x387d9
// declared property getter: - (BOOL)hasCopyright;	// 0x387c1
- (void)dealloc;	// 0x3877d
@end
