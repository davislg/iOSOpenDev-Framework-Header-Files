/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */



@protocol CKConversationProtocol
@property(readonly, assign, nonatomic) BOOL isStale;
- (id)date;
- (int)unreadCount;
- (BOOL)hasUnreadMessages;
- (id)latestIncomingMessage;
- (void)updateRecipients:(id)recipients;
- (int)addMessage:(id)message incrementUnreadCount:(BOOL)count;
- (void)removeMessage:(id)message;
- (void)updateMessage:(id)message;
- (void)removeAllMessages;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (BOOL)isPlaceholder;
- (void)addPlaceholderMessageIfNeededWithDate:(id)date;
- (id)placeholderMessage;
- (id)latestMessage;
- (void)markAllMessagesAsRead;
- (void)loadAllMessages;
- (void)loadMoreMessages;
- (void)loadLastMessage;
// declared property getter: - (BOOL)isStale;
@end

