/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADImageFillTechnique, OADRelativeRect, OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADImageFill : OADFill {
@private
	OADBlipRef *mBlipRef;	// 12 = 0xc
	BOOL mIsBlipRefOverridden;	// 16 = 0x10
	OADRelativeRect *mSourceRect;	// 20 = 0x14
	BOOL mIsSourceRectOverridden;	// 24 = 0x18
	int mDpi;	// 28 = 0x1c
	BOOL mIsDpiOverridden;	// 32 = 0x20
	BOOL mRotateWithShape;	// 33 = 0x21
	BOOL mIsRotateWithShapeOverridden;	// 34 = 0x22
	OADImageFillTechnique *mTechnique;	// 36 = 0x24
	BOOL mIsTechniqueOverridden;	// 40 = 0x28
}
@property(retain) id blipRef;	// G=0x95349; S=0xc21f1; converted property
@property(retain) id sourceRect;	// G=0xc67f5; S=0xc22d1; converted property
@property(assign) long dpi;	// G=0x2a1e9d; S=0xc2321; converted property
@property(assign) BOOL rotateWithShape;	// G=0x2a1f05; S=0xc2341; converted property
@property(retain) id technique;	// G=0x17bd05; S=0xc2519; converted property
+ (id)defaultProperties;	// 0xc20a9
- (id)copyWithZone:(NSZone *)zone;	// 0x1e9175
- (void)dealloc;	// 0x8ce85
- (id)initWithDefaults;	// 0xc20f1
- (void)setParent:(id)parent;	// 0xc2569
- (id)color;	// 0x2a1df5
// converted property getter: - (id)blipRef;	// 0x95349
// converted property setter: - (void)setBlipRef:(id)ref;	// 0xc21f1
- (BOOL)isBlipRefOverridden;	// 0x95311
// converted property getter: - (id)sourceRect;	// 0xc67f5
// converted property setter: - (void)setSourceRect:(id)rect;	// 0xc22d1
- (BOOL)isSourceRectOverridden;	// 0xc67bd
// converted property getter: - (long)dpi;	// 0x2a1e9d
// converted property setter: - (void)setDpi:(long)dpi;	// 0xc2321
- (BOOL)isDpiOverridden;	// 0x2a1ecd
// converted property getter: - (BOOL)rotateWithShape;	// 0x2a1f05
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0xc2341
- (BOOL)isRotateWithShapeOverridden;	// 0x2a1f35
// converted property getter: - (id)technique;	// 0x17bd05
// converted property setter: - (void)setTechnique:(id)technique;	// 0xc2519
- (BOOL)isTechniqueOverridden;	// 0x17bd35
- (void)setStyleColor:(id)color;	// 0x1e9619
- (unsigned)hash;	// 0x2a1f6d
- (BOOL)isEqual:(id)equal;	// 0xc7749
@end
