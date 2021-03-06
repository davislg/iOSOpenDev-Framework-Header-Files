/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItemWithNoChildren;

@interface CoreDAVErrorItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_validSyncToken;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_noUIDConflict;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_validAddressData;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_maxResourceSize;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_uid;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_ctagOkay;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_maxImageSize;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_invalidImageType;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_imageError;	// 60 = 0x3c
	CoreDAVLeafItem *_status;	// 64 = 0x40
}
@property(retain) CoreDAVLeafItem *status;	// G=0x12a21; S=0x12a35; @synthesize=_status
@property(retain) CoreDAVItemWithNoChildren *imageError;	// G=0x129e9; S=0x129fd; @synthesize=_imageError
@property(retain) CoreDAVItemWithNoChildren *invalidImageType;	// G=0x129b1; S=0x129c5; @synthesize=_invalidImageType
@property(retain) CoreDAVItemWithNoChildren *maxImageSize;	// G=0x12979; S=0x1298d; @synthesize=_maxImageSize
@property(retain) CoreDAVItemWithNoChildren *ctagOkay;	// G=0x12941; S=0x12955; @synthesize=_ctagOkay
@property(retain) CoreDAVItemWithNoChildren *uid;	// G=0x12909; S=0x1291d; @synthesize=_uid
@property(retain) CoreDAVItemWithNoChildren *maxResourceSize;	// G=0x128d1; S=0x128e5; @synthesize=_maxResourceSize
@property(retain) CoreDAVItemWithNoChildren *validAddressData;	// G=0x12899; S=0x128ad; @synthesize=_validAddressData
@property(retain) CoreDAVItemWithNoChildren *noUIDConflict;	// G=0x12861; S=0x12875; @synthesize=_noUIDConflict
@property(retain) CoreDAVItemWithNoChildren *validSyncToken;	// G=0x12829; S=0x1283d; @synthesize=_validSyncToken
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;	// G=0x127f1; S=0x12805; @synthesize=_numberOfMatchesWithinLimits
// declared property setter: - (void)setStatus:(id)status;	// 0x12a35
// declared property getter: - (id)status;	// 0x12a21
// declared property setter: - (void)setImageError:(id)error;	// 0x129fd
// declared property getter: - (id)imageError;	// 0x129e9
// declared property setter: - (void)setInvalidImageType:(id)type;	// 0x129c5
// declared property getter: - (id)invalidImageType;	// 0x129b1
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x1298d
// declared property getter: - (id)maxImageSize;	// 0x12979
// declared property setter: - (void)setCtagOkay:(id)okay;	// 0x12955
// declared property getter: - (id)ctagOkay;	// 0x12941
// declared property setter: - (void)setUid:(id)uid;	// 0x1291d
// declared property getter: - (id)uid;	// 0x12909
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x128e5
// declared property getter: - (id)maxResourceSize;	// 0x128d1
// declared property setter: - (void)setValidAddressData:(id)data;	// 0x128ad
// declared property getter: - (id)validAddressData;	// 0x12899
// declared property setter: - (void)setNoUIDConflict:(id)conflict;	// 0x12875
// declared property getter: - (id)noUIDConflict;	// 0x12861
// declared property setter: - (void)setValidSyncToken:(id)token;	// 0x1283d
// declared property getter: - (id)validSyncToken;	// 0x12829
// declared property setter: - (void)setNumberOfMatchesWithinLimits:(id)matchesWithinLimits;	// 0x12805
// declared property getter: - (id)numberOfMatchesWithinLimits;	// 0x127f1
- (id)copyParseRules;	// 0x120f1
- (id)description;	// 0x11de5
- (void)dealloc;	// 0x11cd1
- (id)init;	// 0x11ca5
@end
