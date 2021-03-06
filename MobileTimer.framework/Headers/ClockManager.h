/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */



@class NSArray;

@interface ClockManager : NSObject {
	BOOL _performingUpgrade;	// 4 = 0x4
	NSArray *_scheduledLocalNotifications;	// 8 = 0x8
	BOOL runningInSpringBoard;	// 12 = 0xc
	BOOL runningInAssistantPlugin;	// 13 = 0xd
	BOOL ignoringNotificationPostRequests;	// 14 = 0xe
}
@property(assign, nonatomic, getter=isRunningInSpringBoard) BOOL runningInSpringBoard;	// G=0x37d9; S=0x37e9; @synthesize
@property(assign, nonatomic, getter=isRunningInAssistantPlugin) BOOL runningInAssistantPlugin;	// G=0x37b9; S=0x37c9; @synthesize
@property(assign, nonatomic, getter=isIgnoringNotificationPostRequests) BOOL ignoringNotificationPostRequests;	// G=0x3799; S=0x37a9; @synthesize
+ (void)loadUserPreferences;	// 0x3b05
+ (void)saveAndNotifyForUserPreferences:(BOOL)userPreferences localNotifications:(BOOL)notifications;	// 0x3a8d
+ (void)openClockAppWithSection:(int)section;	// 0x389d
+ (int)sectionFromClockAppURL:(id)clockAppURL;	// 0x3999
+ (id)sharedManager;	// 0x3a45
- (void)dealloc;	// 0x3f7d
- (BOOL)upgradeIfNeverAttempted;	// 0x3e71
- (BOOL)upgrade;	// 0x3dfd
- (BOOL)discardOldVersion;	// 0x37f9
- (void)postUserPreferencesChangedNotification;	// 0x3845
- (void)scheduleLocalNotification:(id)notification;	// 0x3ce9
- (void)cancelLocalNotification:(id)notification;	// 0x3bf9
- (void)refreshScheduledLocalNotificationsCache;	// 0x3b15
- (id)scheduledLocalNotificationsCache;	// 0x3789
// declared property getter: - (BOOL)isIgnoringNotificationPostRequests;	// 0x3799
// declared property setter: - (void)setIgnoringNotificationPostRequests:(BOOL)requests;	// 0x37a9
// declared property getter: - (BOOL)isRunningInAssistantPlugin;	// 0x37b9
// declared property setter: - (void)setRunningInAssistantPlugin:(BOOL)assistantPlugin;	// 0x37c9
// declared property getter: - (BOOL)isRunningInSpringBoard;	// 0x37d9
// declared property setter: - (void)setRunningInSpringBoard:(BOOL)springBoard;	// 0x37e9
@end
