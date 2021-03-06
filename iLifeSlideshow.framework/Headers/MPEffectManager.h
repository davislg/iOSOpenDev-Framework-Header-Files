/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/MPEffectManager.h>

@class NSMutableDictionary;

@interface MPEffectManager : XXUnknownSuperclass {
	NSMutableDictionary *mEffects;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
}
+ (void)initialize;	// 0x5226d
+ (id)sharedManager;	// 0x52225
+ (void)releaseSharedManager;	// 0x521f9
- (void)dealloc;	// 0x5326d
- (id)versionOfEffectID:(id)effectID;	// 0x51e85
- (unsigned)numOfImagesForEffectID:(id)effectID;	// 0x530b1
- (unsigned)numOfTextsForEffectID:(id)effectID;	// 0x51ebd
- (id)thumbnailForEffectID:(id)effectID;	// 0x51f05
- (id)imageResourceForEffectID:(id)effectID withFileName:(id)fileName;	// 0x51f95
- (id)categoryIDsForEffectID:(id)effectID;	// 0x52021
- (id)effectIDsForCategoryID:(id)categoryID;	// 0x52f89
- (id)localizedEffectNameForEffectID:(id)effectID;	// 0x52059
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x52e9d
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inEffect:(id)effect;	// 0x52095
- (id)controlForAttribute:(id)attribute forEffectID:(id)effectID;	// 0x52d91
- (id)settingsUIControlDescriptionsForEffect:(id)effect;	// 0x520dd
- (id)effectsWithNumOfImages:(unsigned)images;	// 0x52c9d
- (id)allEffectIDs;	// 0x52115
- (id)allCategoryIDs;	// 0x52ad9
- (float)maxFontSizeInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x52135
- (id)presetIDsForEffectID:(id)effectID;	// 0x52a91
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x52a09
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId;	// 0x528d1
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index;	// 0x52841
- (float)mediaAspectRatioForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x52715
- (id)slideSettingsForEffectID:(id)effectID usingPresetID:(id)anId;	// 0x52655
- (id)imageInputInfoForEffectID:(id)effectID;	// 0x525fd
- (BOOL)canChangeFontForTextAtIndex:(int)index inEffect:(id)effect withPresetID:(id)presetID;	// 0x52555
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x5250d
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x524c5
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x52465
- (double)defaultPosterFrameTimeForEffectID:(id)effectID andPresetID:(id)anId;	// 0x5234d
- (double)defaultPosterFrameTimeForEffect:(id)effect;	// 0x52299
@end

@interface MPEffectManager (VeryPrivate)
- (id)initWithPaths:(id)paths;	// 0x53701
- (void)_loadFontsFromPath:(id)path requiredFonts:(id)fonts;	// 0x51e81
@end

@interface MPEffectManager (Private)
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x53401
@end

@interface MPEffectManager (Internal)
- (id)showTimeScriptForEffectID:(id)effectID atSlideIndex:(int)slideIndex;	// 0x532e5
- (double)minimumEffectDurationForEffectID:(id)effectID;	// 0x5345d
- (id)sizeScriptForEffectID:(id)effectID atIndex:(int)index;	// 0x5332d
- (id)effectPresetsMatchingCriteria:(id)criteria;	// 0x5404d
- (double)defaultFullDurationForEffectID:(id)effectID;	// 0x53375
- (unsigned)numOfImagesForEffectPresetID:(id)effectPresetID;	// 0x53521
- (unsigned)maxNumOfImagesPerEffectInList:(id)list;	// 0x535ad
- (unsigned)minNumOfImagesPerEffectInList:(id)list;	// 0x53659
@end
