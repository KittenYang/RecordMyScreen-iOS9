/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#import "NSCopying.h"
#import "NSCoding.h"
#import "UIKBShape.h"
#import "UIKit-Structs.h"
#import "UIKBCacheKey.h"

@class NSArray, NSString, UIKBAttributeList;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString* m_name;
	NSString* m_representedString;
	NSString* m_displayString;
	NSString* m_displayType;
	NSString* m_interactionType;
	NSString* m_variantType;
	UIKBAttributeList* m_attributes;
	unsigned m_displayTypeHint;
	NSString* m_displayRowHint;
	NSArray* m_variantKeys;
	NSString* m_overrideDisplayString;
	BOOL m_visible;
}
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* representedString;
@property(copy, nonatomic) NSString* displayString;
@property(copy, nonatomic) NSString* displayType;
@property(copy, nonatomic) NSString* interactionType;
@property(copy, nonatomic) NSString* variantType;
@property(copy, nonatomic) UIKBAttributeList* attributes;
@property(assign, nonatomic) BOOL visible;
@property(assign, nonatomic) unsigned displayTypeHint;
@property(retain, nonatomic) NSString* displayRowHint;
@property(copy, nonatomic) NSArray* variantKeys;
@property(copy, nonatomic) NSString* overrideDisplayString;
@property(assign, nonatomic) BOOL disabled;
@property(assign, nonatomic) BOOL hidden;
+(UIKBKey*)key;
+(UIKBKey*)keyWithKey:(id)key;
//-(instancetype)init;
//-(void)dealloc;
//-(nullable instancetype)initWithCoder:(NSCoder *)coder;
//-(void)encodeWithCoder:(id)coder;
//-(id)copyWithZone:(NSZone*)zone;
//-(id)description;
-(void)mergeAttributes:(UIKBAttributeList*)attributes;
-(id)variantDisplayString;
-(void)setVariantPopupBias:(id)bias;
-(id)variantPopupBias;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(copy, nonatomic) NSString* clientVariantRepresentedString;
@property(copy, nonatomic) NSString* clientVariantActionName;
@property(retain, nonatomic) NSArray* flicks;
// in a protocol: @property(readonly, assign, nonatomic) NSString* cacheKey;
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;
@property(copy, nonatomic) NSString* rendering;
@property(copy, nonatomic) NSString* tint;
-(int)textAlignment;
-(void)setTextAlignment:(int)alignment;
-(void)removeClientVariantActionInfo;
#endif
@end
