//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface MRTObject : NSObject
{
}

- (id)description;
- (id)dateFromComponents:(id)arg1;
- (id)arrayOfObjectsOfClass:(Class)arg1 withKeyedValuesArray:(id)arg2;
- (id)customSerializationOfValue:(id)arg1 forKey:(id)arg2;
- (_Bool)supportsCustomSerializationOfValueForKey:(id)arg1;
- (id)dateFormatterForKey:(id)arg1;
- (id)ISO8601TimestampFormatter;
- (id)dateWithoutTimeFormatter;
@property(readonly, nonatomic) NSSet *keysToIgnore;
@property(readonly, nonatomic) NSDictionary *keyAliases;
- (id)JSONDataForRequestBody;
- (id)JSONDictionaryRepresentation;
- (id)serializationPropertyNames;
- (id)customDeserializationValueOfValue:(id)arg1 forJSONKey:(id)arg2;
- (id)propertyNameForJSONKey:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1 mappings:(id)arg2;
- (id)resolveCompoundKeysWithDictionary:(id)arg1 mappings:(id)arg2;
- (void)assignJSONValue:(id)arg1 forKey:(id)arg2 JSONKey:(id)arg3;
- (id)defaultDeserializationForValue:(id)arg1 key:(id)arg2 toClass:(Class)arg3;
- (_Bool)isKeyDeserializationWarningIgnored:(id)arg1;
- (Class)classForProperty:(id)arg1;
- (SEL)setterMethodForKey:(id)arg1;
- (id)deserializationPropertyNames;
- (id)mappingDictionary;
- (void)awakeFromJSONDeserialization;
- (id)initWithJSONDictionary:(id)arg1;

@end

