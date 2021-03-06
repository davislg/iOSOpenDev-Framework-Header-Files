/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoBakedThumbnailsDelegate.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class NSRecursiveLock, NSCountedSet, NSMutableArray;

@interface PLImageWriter : XXUnknownSuperclass <PLPhotoBakedThumbnailsDelegate> {
	NSMutableArray *_highPriorityJobs;	// 4 = 0x4
	NSCountedSet *_unfinishedHighPriorityJobs;	// 8 = 0x8
	unsigned _highPrioritySequentialJobCount;	// 12 = 0xc
	NSMutableArray *_lowPriorityJobs;	// 16 = 0x10
	NSCountedSet *_unfinishedLowPriorityJobs;	// 20 = 0x14
	NSRecursiveLock *_jobsLock;	// 24 = 0x18
	int _jobQueueAvailabilityToken;	// 28 = 0x1c
	BOOL _writerThreadRunning;	// 32 = 0x20
	BOOL _databaseIsCorrupt;	// 33 = 0x21
}
+ (void)decorateThumbnailInRect:(CGRect)rect size:(CGSize)size duration:(id)duration inContext:(CGContextRef)context format:(int)format;	// 0x12d25
+ (void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;	// 0x12c01
+ (void)writeableDataForImage:(id)image previewImage:(id)image2 imageData:(id)data imageUTIType:(CFStringRef)type exifProperties:(id)properties imageRefOut:(CGImageRef *)anOut lowResImageRefOut:(CGImageRef *)anOut7 thumbnailDataOut:(id *)anOut8 imageUTITypeOut:(const CFStringRef *)anOut9 exifPropertiesOut:(id *)anOut10 isJPEGOut:(BOOL *)anOut11 imageDataOut:(id *)anOut12;	// 0xf0b9
+ (id)sharedWriter;	// 0xe7ed
- (void)_writerThread;	// 0x14991
- (void)_processJob:(id)job;	// 0x144b5
- (void)_processSyncedVideoSaveJob:(id)job;	// 0x1443d
- (void)_processVideoSaveJob:(id)job;	// 0x14219
- (BOOL)_sufficientDiskSpaceToCopyVideoAtPath:(id)path;	// 0x14135
- (void)_processVideoJob:(id)job;	// 0x13369
- (void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;	// 0x132e9
- (void)_decorateThumbnail:(id)thumbnail;	// 0x1329d
- (void)_processIngestedSyncedAssetJob:(id)job;	// 0x12775
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)cameraRollJob;	// 0x121ed
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)photoStreamJob;	// 0x11ee9
- (void)_processDeletePhotoStreamDataJob:(id)job;	// 0x116e9
- (void)_processImportImageJob:(id)job;	// 0x10f39
- (void)_processImageJob:(id)job;	// 0xf8f5
- (void)_removeTransientKeys:(id)keys;	// 0xf8bd
- (id)cameraAssetPathForNewAssetWithType:(int)type;	// 0xf7c1
- (BOOL)enqueueJob:(id)job;	// 0xeed5
- (void)_decrementJobCount:(id)count;	// 0xede5
- (void)_incrementJobCount:(id)count;	// 0xeccd
- (void)_postJobQueueNotificationIsAvailable:(BOOL)available;	// 0xec11
- (BOOL)canEnqueueJob:(id)job;	// 0xeb6d
- (BOOL)_isHighPriorityJob:(id)job;	// 0xea99
- (void)dealloc;	// 0xe9fd
- (id)init;	// 0xe859
@end
