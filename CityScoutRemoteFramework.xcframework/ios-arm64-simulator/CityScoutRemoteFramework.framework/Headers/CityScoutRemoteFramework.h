#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CSRFAstro, CSRFAstroCompanion, CSRFCity, CSRFCityCompanion, CSRFCityScoutRemoteFactory, CSRFCitySearchError, CSRFCitySearchResponse, CSRFCitySearchResponseCompanion, CSRFCondition, CSRFConditionCompanion, CSRFCurrent, CSRFCurrentCompanion, CSRFDay, CSRFDayCompanion, CSRFForecast, CSRFForecastCompanion, CSRFForecastday, CSRFForecastdayCompanion, CSRFHour, CSRFHourCompanion, CSRFKotlinArray<T>, CSRFKotlinEnum<E>, CSRFKotlinEnumCompanion, CSRFKotlinException, CSRFKotlinIllegalStateException, CSRFKotlinNothing, CSRFKotlinRuntimeException, CSRFKotlinThrowable, CSRFKotlinx_serialization_coreSerialKind, CSRFKotlinx_serialization_coreSerializersModule, CSRFLinks, CSRFLinksCompanion, CSRFLocation, CSRFLocationCompanion, CSRFMetadata, CSRFMetadataCompanion, CSRFWeather, CSRFWeatherCompanion, CSRFWeatherForecastError;

@protocol CSRFCityScoutRemote, CSRFKotlinAnnotation, CSRFKotlinComparable, CSRFKotlinIterator, CSRFKotlinKAnnotatedElement, CSRFKotlinKClass, CSRFKotlinKClassifier, CSRFKotlinKDeclarationContainer, CSRFKotlinx_serialization_coreCompositeDecoder, CSRFKotlinx_serialization_coreCompositeEncoder, CSRFKotlinx_serialization_coreDecoder, CSRFKotlinx_serialization_coreDeserializationStrategy, CSRFKotlinx_serialization_coreEncoder, CSRFKotlinx_serialization_coreKSerializer, CSRFKotlinx_serialization_coreSerialDescriptor, CSRFKotlinx_serialization_coreSerializationStrategy, CSRFKotlinx_serialization_coreSerializersModuleCollector, CSRFPlatform;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CSRFBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CSRFBase (CSRFBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CSRFMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CSRFMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCSRFKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CSRFNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CSRFByte : CSRFNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CSRFUByte : CSRFNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CSRFShort : CSRFNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CSRFUShort : CSRFNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CSRFInt : CSRFNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CSRFUInt : CSRFNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CSRFLong : CSRFNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CSRFULong : CSRFNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CSRFFloat : CSRFNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CSRFDouble : CSRFNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CSRFBoolean : CSRFNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Astro")))
@interface CSRFAstro : CSRFBase
- (instancetype)initWithSunrise:(NSString * _Nullable)sunrise sunset:(NSString * _Nullable)sunset moonrise:(NSString * _Nullable)moonrise moonset:(NSString * _Nullable)moonset moonPhase:(NSString * _Nullable)moonPhase moonIllumination:(CSRFInt * _Nullable)moonIllumination isMoonUp:(CSRFInt * _Nullable)isMoonUp isSunUp:(CSRFInt * _Nullable)isSunUp __attribute__((swift_name("init(sunrise:sunset:moonrise:moonset:moonPhase:moonIllumination:isMoonUp:isSunUp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFAstroCompanion *companion __attribute__((swift_name("companion")));
- (CSRFAstro *)doCopySunrise:(NSString * _Nullable)sunrise sunset:(NSString * _Nullable)sunset moonrise:(NSString * _Nullable)moonrise moonset:(NSString * _Nullable)moonset moonPhase:(NSString * _Nullable)moonPhase moonIllumination:(CSRFInt * _Nullable)moonIllumination isMoonUp:(CSRFInt * _Nullable)isMoonUp isSunUp:(CSRFInt * _Nullable)isSunUp __attribute__((swift_name("doCopy(sunrise:sunset:moonrise:moonset:moonPhase:moonIllumination:isMoonUp:isSunUp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFInt * _Nullable isMoonUp __attribute__((swift_name("isMoonUp")));
@property (readonly) CSRFInt * _Nullable isSunUp __attribute__((swift_name("isSunUp")));
@property (readonly) CSRFInt * _Nullable moonIllumination __attribute__((swift_name("moonIllumination")));
@property (readonly) NSString * _Nullable moonPhase __attribute__((swift_name("moonPhase")));
@property (readonly) NSString * _Nullable moonrise __attribute__((swift_name("moonrise")));
@property (readonly) NSString * _Nullable moonset __attribute__((swift_name("moonset")));
@property (readonly) NSString * _Nullable sunrise __attribute__((swift_name("sunrise")));
@property (readonly) NSString * _Nullable sunset __attribute__((swift_name("sunset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Astro.Companion")))
@interface CSRFAstroCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFAstroCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City")))
@interface CSRFCity : CSRFBase
- (instancetype)initWithId:(CSRFInt * _Nullable)id wikiDataId:(NSString * _Nullable)wikiDataId type:(NSString * _Nullable)type city:(NSString * _Nullable)city name:(NSString * _Nullable)name country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode region:(NSString * _Nullable)region regionCode:(NSString * _Nullable)regionCode regionWdId:(NSString * _Nullable)regionWdId latitude:(CSRFDouble * _Nullable)latitude longitude:(CSRFDouble * _Nullable)longitude population:(CSRFInt * _Nullable)population __attribute__((swift_name("init(id:wikiDataId:type:city:name:country:countryCode:region:regionCode:regionWdId:latitude:longitude:population:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFCityCompanion *companion __attribute__((swift_name("companion")));
- (CSRFCity *)doCopyId:(CSRFInt * _Nullable)id wikiDataId:(NSString * _Nullable)wikiDataId type:(NSString * _Nullable)type city:(NSString * _Nullable)city name:(NSString * _Nullable)name country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode region:(NSString * _Nullable)region regionCode:(NSString * _Nullable)regionCode regionWdId:(NSString * _Nullable)regionWdId latitude:(CSRFDouble * _Nullable)latitude longitude:(CSRFDouble * _Nullable)longitude population:(CSRFInt * _Nullable)population __attribute__((swift_name("doCopy(id:wikiDataId:type:city:name:country:countryCode:region:regionCode:regionWdId:latitude:longitude:population:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) CSRFInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CSRFDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) CSRFDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) CSRFInt * _Nullable population __attribute__((swift_name("population")));
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@property (readonly) NSString * _Nullable regionWdId __attribute__((swift_name("regionWdId")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable wikiDataId __attribute__((swift_name("wikiDataId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City.Companion")))
@interface CSRFCityCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFCityCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CityScoutRemote")))
@protocol CSRFCityScoutRemote
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCityWeatherCity:(CSRFCity *)city completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCityWeather(city:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchForCityQuery:(NSString *)query completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("searchForCity(query:completionHandler:)")));
@end


/**
 * Creates [CityScoutRemote] instances for apps that depend on the shared module.
 * Each call builds a new client with its own HTTP engine and JSON configuration.
 *
 * Configure API keys with environment variables `CITYSCOUT_RAPIDAPI_KEY` and
 * `CITYSCOUT_WEATHER_API_KEY`, or for Android Gradle builds with `cityscout.rapidapi.key` /
 * `cityscout.weather.key` in the project root `local.properties`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityScoutRemoteFactory")))
@interface CSRFCityScoutRemoteFactory : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Creates [CityScoutRemote] instances for apps that depend on the shared module.
 * Each call builds a new client with its own HTTP engine and JSON configuration.
 *
 * Configure API keys with environment variables `CITYSCOUT_RAPIDAPI_KEY` and
 * `CITYSCOUT_WEATHER_API_KEY`, or for Android Gradle builds with `cityscout.rapidapi.key` /
 * `cityscout.weather.key` in the project root `local.properties`.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cityScoutRemoteFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFCityScoutRemoteFactory *shared __attribute__((swift_name("shared")));
- (id<CSRFCityScoutRemote>)create __attribute__((swift_name("create()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CSRFKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CSRFKotlinEnum<E> : CSRFBase <CSRFKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CitySearchError")))
@interface CSRFCitySearchError : CSRFKotlinEnum<CSRFCitySearchError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSRFCitySearchError *blankquery __attribute__((swift_name("blankquery")));
@property (class, readonly) CSRFCitySearchError *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) CSRFCitySearchError *forbidden __attribute__((swift_name("forbidden")));
@property (class, readonly) CSRFCitySearchError *notfound __attribute__((swift_name("notfound")));
@property (class, readonly) CSRFCitySearchError *ratelimited __attribute__((swift_name("ratelimited")));
@property (class, readonly) CSRFCitySearchError *badrequest __attribute__((swift_name("badrequest")));
@property (class, readonly) CSRFCitySearchError *servererror __attribute__((swift_name("servererror")));
@property (class, readonly) CSRFCitySearchError *httperror __attribute__((swift_name("httperror")));
@property (class, readonly) CSRFCitySearchError *deserializationerror __attribute__((swift_name("deserializationerror")));
@property (class, readonly) CSRFCitySearchError *networkerror __attribute__((swift_name("networkerror")));
@property (class, readonly) CSRFCitySearchError *timeout __attribute__((swift_name("timeout")));
@property (class, readonly) CSRFCitySearchError *unknownerror __attribute__((swift_name("unknownerror")));
+ (CSRFKotlinArray<CSRFCitySearchError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSRFCitySearchError *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CSRFKotlinThrowable : CSRFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (CSRFKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CSRFKotlinException : CSRFKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CitySearchException")))
@interface CSRFCitySearchException : CSRFKotlinException
- (instancetype)initWithError:(CSRFCitySearchError *)error cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(error:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) CSRFCitySearchError *error __attribute__((swift_name("error")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CitySearchResponse")))
@interface CSRFCitySearchResponse : CSRFBase
- (instancetype)initWithLinks:(NSArray<id> *)links data:(NSArray<id> *)data metadata:(CSRFMetadata * _Nullable)metadata __attribute__((swift_name("init(links:data:metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFCitySearchResponseCompanion *companion __attribute__((swift_name("companion")));
- (CSRFCitySearchResponse *)doCopyLinks:(NSArray<id> *)links data:(NSArray<id> *)data metadata:(CSRFMetadata * _Nullable)metadata __attribute__((swift_name("doCopy(links:data:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *data __attribute__((swift_name("data")));
@property (readonly) NSArray<id> *links __attribute__((swift_name("links")));
@property (readonly) CSRFMetadata * _Nullable metadata __attribute__((swift_name("metadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CitySearchResponse.Companion")))
@interface CSRFCitySearchResponseCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFCitySearchResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition")))
@interface CSRFCondition : CSRFBase
- (instancetype)initWithText:(NSString * _Nullable)text icon:(NSString * _Nullable)icon code:(CSRFInt * _Nullable)code __attribute__((swift_name("init(text:icon:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFConditionCompanion *companion __attribute__((swift_name("companion")));
- (CSRFCondition *)doCopyText:(NSString * _Nullable)text icon:(NSString * _Nullable)icon code:(CSRFInt * _Nullable)code __attribute__((swift_name("doCopy(text:icon:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition.Companion")))
@interface CSRFConditionCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFConditionCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Current")))
@interface CSRFCurrent : CSRFBase
- (instancetype)initWithLastUpdatedEpoch:(CSRFInt * _Nullable)lastUpdatedEpoch lastUpdated:(NSString * _Nullable)lastUpdated tempC:(CSRFDouble * _Nullable)tempC tempF:(CSRFDouble * _Nullable)tempF isDay:(CSRFInt * _Nullable)isDay condition:(CSRFCondition * _Nullable)condition windMph:(CSRFDouble * _Nullable)windMph windKph:(CSRFDouble * _Nullable)windKph windDegree:(CSRFInt * _Nullable)windDegree windDir:(NSString * _Nullable)windDir pressureMb:(CSRFDouble * _Nullable)pressureMb pressureIn:(CSRFDouble * _Nullable)pressureIn precipMm:(CSRFDouble * _Nullable)precipMm precipIn:(CSRFDouble * _Nullable)precipIn humidity:(CSRFInt * _Nullable)humidity cloud:(CSRFInt * _Nullable)cloud feelslikeC:(CSRFDouble * _Nullable)feelslikeC feelslikeF:(CSRFDouble * _Nullable)feelslikeF windchillC:(CSRFDouble * _Nullable)windchillC windchillF:(CSRFDouble * _Nullable)windchillF heatindexC:(CSRFDouble * _Nullable)heatindexC heatindexF:(CSRFDouble * _Nullable)heatindexF dewpointC:(CSRFDouble * _Nullable)dewpointC dewpointF:(CSRFDouble * _Nullable)dewpointF visKm:(CSRFDouble * _Nullable)visKm visMiles:(CSRFDouble * _Nullable)visMiles uv:(CSRFDouble * _Nullable)uv gustMph:(CSRFDouble * _Nullable)gustMph gustKph:(CSRFDouble * _Nullable)gustKph shortRad:(CSRFDouble * _Nullable)shortRad diffRad:(CSRFDouble * _Nullable)diffRad dni:(CSRFDouble * _Nullable)dni gti:(CSRFDouble * _Nullable)gti __attribute__((swift_name("init(lastUpdatedEpoch:lastUpdated:tempC:tempF:isDay:condition:windMph:windKph:windDegree:windDir:pressureMb:pressureIn:precipMm:precipIn:humidity:cloud:feelslikeC:feelslikeF:windchillC:windchillF:heatindexC:heatindexF:dewpointC:dewpointF:visKm:visMiles:uv:gustMph:gustKph:shortRad:diffRad:dni:gti:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFCurrentCompanion *companion __attribute__((swift_name("companion")));
- (CSRFCurrent *)doCopyLastUpdatedEpoch:(CSRFInt * _Nullable)lastUpdatedEpoch lastUpdated:(NSString * _Nullable)lastUpdated tempC:(CSRFDouble * _Nullable)tempC tempF:(CSRFDouble * _Nullable)tempF isDay:(CSRFInt * _Nullable)isDay condition:(CSRFCondition * _Nullable)condition windMph:(CSRFDouble * _Nullable)windMph windKph:(CSRFDouble * _Nullable)windKph windDegree:(CSRFInt * _Nullable)windDegree windDir:(NSString * _Nullable)windDir pressureMb:(CSRFDouble * _Nullable)pressureMb pressureIn:(CSRFDouble * _Nullable)pressureIn precipMm:(CSRFDouble * _Nullable)precipMm precipIn:(CSRFDouble * _Nullable)precipIn humidity:(CSRFInt * _Nullable)humidity cloud:(CSRFInt * _Nullable)cloud feelslikeC:(CSRFDouble * _Nullable)feelslikeC feelslikeF:(CSRFDouble * _Nullable)feelslikeF windchillC:(CSRFDouble * _Nullable)windchillC windchillF:(CSRFDouble * _Nullable)windchillF heatindexC:(CSRFDouble * _Nullable)heatindexC heatindexF:(CSRFDouble * _Nullable)heatindexF dewpointC:(CSRFDouble * _Nullable)dewpointC dewpointF:(CSRFDouble * _Nullable)dewpointF visKm:(CSRFDouble * _Nullable)visKm visMiles:(CSRFDouble * _Nullable)visMiles uv:(CSRFDouble * _Nullable)uv gustMph:(CSRFDouble * _Nullable)gustMph gustKph:(CSRFDouble * _Nullable)gustKph shortRad:(CSRFDouble * _Nullable)shortRad diffRad:(CSRFDouble * _Nullable)diffRad dni:(CSRFDouble * _Nullable)dni gti:(CSRFDouble * _Nullable)gti __attribute__((swift_name("doCopy(lastUpdatedEpoch:lastUpdated:tempC:tempF:isDay:condition:windMph:windKph:windDegree:windDir:pressureMb:pressureIn:precipMm:precipIn:humidity:cloud:feelslikeC:feelslikeF:windchillC:windchillF:heatindexC:heatindexF:dewpointC:dewpointF:visKm:visMiles:uv:gustMph:gustKph:shortRad:diffRad:dni:gti:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFInt * _Nullable cloud __attribute__((swift_name("cloud")));
@property (readonly) CSRFCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) CSRFDouble * _Nullable dewpointC __attribute__((swift_name("dewpointC")));
@property (readonly) CSRFDouble * _Nullable dewpointF __attribute__((swift_name("dewpointF")));
@property (readonly) CSRFDouble * _Nullable diffRad __attribute__((swift_name("diffRad")));
@property (readonly) CSRFDouble * _Nullable dni __attribute__((swift_name("dni")));
@property (readonly) CSRFDouble * _Nullable feelslikeC __attribute__((swift_name("feelslikeC")));
@property (readonly) CSRFDouble * _Nullable feelslikeF __attribute__((swift_name("feelslikeF")));
@property (readonly) CSRFDouble * _Nullable gti __attribute__((swift_name("gti")));
@property (readonly) CSRFDouble * _Nullable gustKph __attribute__((swift_name("gustKph")));
@property (readonly) CSRFDouble * _Nullable gustMph __attribute__((swift_name("gustMph")));
@property (readonly) CSRFDouble * _Nullable heatindexC __attribute__((swift_name("heatindexC")));
@property (readonly) CSRFDouble * _Nullable heatindexF __attribute__((swift_name("heatindexF")));
@property (readonly) CSRFInt * _Nullable humidity __attribute__((swift_name("humidity")));
@property (readonly) CSRFInt * _Nullable isDay __attribute__((swift_name("isDay")));
@property (readonly) NSString * _Nullable lastUpdated __attribute__((swift_name("lastUpdated")));
@property (readonly) CSRFInt * _Nullable lastUpdatedEpoch __attribute__((swift_name("lastUpdatedEpoch")));
@property (readonly) CSRFDouble * _Nullable precipIn __attribute__((swift_name("precipIn")));
@property (readonly) CSRFDouble * _Nullable precipMm __attribute__((swift_name("precipMm")));
@property (readonly) CSRFDouble * _Nullable pressureIn __attribute__((swift_name("pressureIn")));
@property (readonly) CSRFDouble * _Nullable pressureMb __attribute__((swift_name("pressureMb")));
@property (readonly) CSRFDouble * _Nullable shortRad __attribute__((swift_name("shortRad")));
@property (readonly) CSRFDouble * _Nullable tempC __attribute__((swift_name("tempC")));
@property (readonly) CSRFDouble * _Nullable tempF __attribute__((swift_name("tempF")));
@property (readonly) CSRFDouble * _Nullable uv __attribute__((swift_name("uv")));
@property (readonly) CSRFDouble * _Nullable visKm __attribute__((swift_name("visKm")));
@property (readonly) CSRFDouble * _Nullable visMiles __attribute__((swift_name("visMiles")));
@property (readonly) CSRFInt * _Nullable windDegree __attribute__((swift_name("windDegree")));
@property (readonly) NSString * _Nullable windDir __attribute__((swift_name("windDir")));
@property (readonly) CSRFDouble * _Nullable windKph __attribute__((swift_name("windKph")));
@property (readonly) CSRFDouble * _Nullable windMph __attribute__((swift_name("windMph")));
@property (readonly) CSRFDouble * _Nullable windchillC __attribute__((swift_name("windchillC")));
@property (readonly) CSRFDouble * _Nullable windchillF __attribute__((swift_name("windchillF")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Current.Companion")))
@interface CSRFCurrentCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFCurrentCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Day")))
@interface CSRFDay : CSRFBase
- (instancetype)initWithMaxtempC:(CSRFDouble * _Nullable)maxtempC maxtempF:(CSRFDouble * _Nullable)maxtempF mintempC:(CSRFDouble * _Nullable)mintempC mintempF:(CSRFDouble * _Nullable)mintempF avgtempC:(CSRFDouble * _Nullable)avgtempC avgtempF:(CSRFDouble * _Nullable)avgtempF maxwindMph:(CSRFDouble * _Nullable)maxwindMph maxwindKph:(CSRFDouble * _Nullable)maxwindKph totalprecipMm:(CSRFDouble * _Nullable)totalprecipMm totalprecipIn:(CSRFDouble * _Nullable)totalprecipIn totalsnowCm:(CSRFDouble * _Nullable)totalsnowCm avgvisKm:(CSRFDouble * _Nullable)avgvisKm avgvisMiles:(CSRFDouble * _Nullable)avgvisMiles avghumidity:(CSRFInt * _Nullable)avghumidity dailyWillItRain:(CSRFInt * _Nullable)dailyWillItRain dailyChanceOfRain:(CSRFInt * _Nullable)dailyChanceOfRain dailyWillItSnow:(CSRFInt * _Nullable)dailyWillItSnow dailyChanceOfSnow:(CSRFInt * _Nullable)dailyChanceOfSnow condition:(CSRFCondition * _Nullable)condition uv:(CSRFDouble * _Nullable)uv __attribute__((swift_name("init(maxtempC:maxtempF:mintempC:mintempF:avgtempC:avgtempF:maxwindMph:maxwindKph:totalprecipMm:totalprecipIn:totalsnowCm:avgvisKm:avgvisMiles:avghumidity:dailyWillItRain:dailyChanceOfRain:dailyWillItSnow:dailyChanceOfSnow:condition:uv:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFDayCompanion *companion __attribute__((swift_name("companion")));
- (CSRFDay *)doCopyMaxtempC:(CSRFDouble * _Nullable)maxtempC maxtempF:(CSRFDouble * _Nullable)maxtempF mintempC:(CSRFDouble * _Nullable)mintempC mintempF:(CSRFDouble * _Nullable)mintempF avgtempC:(CSRFDouble * _Nullable)avgtempC avgtempF:(CSRFDouble * _Nullable)avgtempF maxwindMph:(CSRFDouble * _Nullable)maxwindMph maxwindKph:(CSRFDouble * _Nullable)maxwindKph totalprecipMm:(CSRFDouble * _Nullable)totalprecipMm totalprecipIn:(CSRFDouble * _Nullable)totalprecipIn totalsnowCm:(CSRFDouble * _Nullable)totalsnowCm avgvisKm:(CSRFDouble * _Nullable)avgvisKm avgvisMiles:(CSRFDouble * _Nullable)avgvisMiles avghumidity:(CSRFInt * _Nullable)avghumidity dailyWillItRain:(CSRFInt * _Nullable)dailyWillItRain dailyChanceOfRain:(CSRFInt * _Nullable)dailyChanceOfRain dailyWillItSnow:(CSRFInt * _Nullable)dailyWillItSnow dailyChanceOfSnow:(CSRFInt * _Nullable)dailyChanceOfSnow condition:(CSRFCondition * _Nullable)condition uv:(CSRFDouble * _Nullable)uv __attribute__((swift_name("doCopy(maxtempC:maxtempF:mintempC:mintempF:avgtempC:avgtempF:maxwindMph:maxwindKph:totalprecipMm:totalprecipIn:totalsnowCm:avgvisKm:avgvisMiles:avghumidity:dailyWillItRain:dailyChanceOfRain:dailyWillItSnow:dailyChanceOfSnow:condition:uv:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFInt * _Nullable avghumidity __attribute__((swift_name("avghumidity")));
@property (readonly) CSRFDouble * _Nullable avgtempC __attribute__((swift_name("avgtempC")));
@property (readonly) CSRFDouble * _Nullable avgtempF __attribute__((swift_name("avgtempF")));
@property (readonly) CSRFDouble * _Nullable avgvisKm __attribute__((swift_name("avgvisKm")));
@property (readonly) CSRFDouble * _Nullable avgvisMiles __attribute__((swift_name("avgvisMiles")));
@property (readonly) CSRFCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) CSRFInt * _Nullable dailyChanceOfRain __attribute__((swift_name("dailyChanceOfRain")));
@property (readonly) CSRFInt * _Nullable dailyChanceOfSnow __attribute__((swift_name("dailyChanceOfSnow")));
@property (readonly) CSRFInt * _Nullable dailyWillItRain __attribute__((swift_name("dailyWillItRain")));
@property (readonly) CSRFInt * _Nullable dailyWillItSnow __attribute__((swift_name("dailyWillItSnow")));
@property (readonly) CSRFDouble * _Nullable maxtempC __attribute__((swift_name("maxtempC")));
@property (readonly) CSRFDouble * _Nullable maxtempF __attribute__((swift_name("maxtempF")));
@property (readonly) CSRFDouble * _Nullable maxwindKph __attribute__((swift_name("maxwindKph")));
@property (readonly) CSRFDouble * _Nullable maxwindMph __attribute__((swift_name("maxwindMph")));
@property (readonly) CSRFDouble * _Nullable mintempC __attribute__((swift_name("mintempC")));
@property (readonly) CSRFDouble * _Nullable mintempF __attribute__((swift_name("mintempF")));
@property (readonly) CSRFDouble * _Nullable totalprecipIn __attribute__((swift_name("totalprecipIn")));
@property (readonly) CSRFDouble * _Nullable totalprecipMm __attribute__((swift_name("totalprecipMm")));
@property (readonly) CSRFDouble * _Nullable totalsnowCm __attribute__((swift_name("totalsnowCm")));
@property (readonly) CSRFDouble * _Nullable uv __attribute__((swift_name("uv")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Day.Companion")))
@interface CSRFDayCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFDayCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Forecast")))
@interface CSRFForecast : CSRFBase
- (instancetype)initWithForecastday:(NSArray<id> *)forecastday __attribute__((swift_name("init(forecastday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFForecastCompanion *companion __attribute__((swift_name("companion")));
- (CSRFForecast *)doCopyForecastday:(NSArray<id> *)forecastday __attribute__((swift_name("doCopy(forecastday:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *forecastday __attribute__((swift_name("forecastday")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Forecast.Companion")))
@interface CSRFForecastCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFForecastCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Forecastday")))
@interface CSRFForecastday : CSRFBase
- (instancetype)initWithDate:(NSString * _Nullable)date dateEpoch:(CSRFInt * _Nullable)dateEpoch day:(CSRFDay * _Nullable)day astro:(CSRFAstro * _Nullable)astro hour:(NSArray<id> *)hour __attribute__((swift_name("init(date:dateEpoch:day:astro:hour:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFForecastdayCompanion *companion __attribute__((swift_name("companion")));
- (CSRFForecastday *)doCopyDate:(NSString * _Nullable)date dateEpoch:(CSRFInt * _Nullable)dateEpoch day:(CSRFDay * _Nullable)day astro:(CSRFAstro * _Nullable)astro hour:(NSArray<id> *)hour __attribute__((swift_name("doCopy(date:dateEpoch:day:astro:hour:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFAstro * _Nullable astro __attribute__((swift_name("astro")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) CSRFInt * _Nullable dateEpoch __attribute__((swift_name("dateEpoch")));
@property (readonly) CSRFDay * _Nullable day __attribute__((swift_name("day")));
@property (readonly) NSArray<id> *hour __attribute__((swift_name("hour")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Forecastday.Companion")))
@interface CSRFForecastdayCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFForecastdayCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hour")))
@interface CSRFHour : CSRFBase
- (instancetype)initWithTimeEpoch:(CSRFInt * _Nullable)timeEpoch time:(NSString * _Nullable)time tempC:(CSRFDouble * _Nullable)tempC tempF:(CSRFDouble * _Nullable)tempF isDay:(CSRFInt * _Nullable)isDay condition:(CSRFCondition * _Nullable)condition windMph:(CSRFDouble * _Nullable)windMph windKph:(CSRFDouble * _Nullable)windKph windDegree:(CSRFInt * _Nullable)windDegree windDir:(NSString * _Nullable)windDir pressureMb:(CSRFDouble * _Nullable)pressureMb pressureIn:(CSRFDouble * _Nullable)pressureIn precipMm:(CSRFDouble * _Nullable)precipMm precipIn:(CSRFDouble * _Nullable)precipIn snowCm:(CSRFDouble * _Nullable)snowCm humidity:(CSRFInt * _Nullable)humidity cloud:(CSRFInt * _Nullable)cloud feelslikeC:(CSRFDouble * _Nullable)feelslikeC feelslikeF:(CSRFDouble * _Nullable)feelslikeF windchillC:(CSRFDouble * _Nullable)windchillC windchillF:(CSRFDouble * _Nullable)windchillF heatindexC:(CSRFDouble * _Nullable)heatindexC heatindexF:(CSRFDouble * _Nullable)heatindexF dewpointC:(CSRFDouble * _Nullable)dewpointC dewpointF:(CSRFDouble * _Nullable)dewpointF willItRain:(CSRFInt * _Nullable)willItRain chanceOfRain:(CSRFInt * _Nullable)chanceOfRain willItSnow:(CSRFInt * _Nullable)willItSnow chanceOfSnow:(CSRFInt * _Nullable)chanceOfSnow visKm:(CSRFDouble * _Nullable)visKm visMiles:(CSRFDouble * _Nullable)visMiles gustMph:(CSRFDouble * _Nullable)gustMph gustKph:(CSRFDouble * _Nullable)gustKph uv:(CSRFDouble * _Nullable)uv shortRad:(CSRFDouble * _Nullable)shortRad diffRad:(CSRFDouble * _Nullable)diffRad dni:(CSRFDouble * _Nullable)dni gti:(CSRFDouble * _Nullable)gti __attribute__((swift_name("init(timeEpoch:time:tempC:tempF:isDay:condition:windMph:windKph:windDegree:windDir:pressureMb:pressureIn:precipMm:precipIn:snowCm:humidity:cloud:feelslikeC:feelslikeF:windchillC:windchillF:heatindexC:heatindexF:dewpointC:dewpointF:willItRain:chanceOfRain:willItSnow:chanceOfSnow:visKm:visMiles:gustMph:gustKph:uv:shortRad:diffRad:dni:gti:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFHourCompanion *companion __attribute__((swift_name("companion")));
- (CSRFHour *)doCopyTimeEpoch:(CSRFInt * _Nullable)timeEpoch time:(NSString * _Nullable)time tempC:(CSRFDouble * _Nullable)tempC tempF:(CSRFDouble * _Nullable)tempF isDay:(CSRFInt * _Nullable)isDay condition:(CSRFCondition * _Nullable)condition windMph:(CSRFDouble * _Nullable)windMph windKph:(CSRFDouble * _Nullable)windKph windDegree:(CSRFInt * _Nullable)windDegree windDir:(NSString * _Nullable)windDir pressureMb:(CSRFDouble * _Nullable)pressureMb pressureIn:(CSRFDouble * _Nullable)pressureIn precipMm:(CSRFDouble * _Nullable)precipMm precipIn:(CSRFDouble * _Nullable)precipIn snowCm:(CSRFDouble * _Nullable)snowCm humidity:(CSRFInt * _Nullable)humidity cloud:(CSRFInt * _Nullable)cloud feelslikeC:(CSRFDouble * _Nullable)feelslikeC feelslikeF:(CSRFDouble * _Nullable)feelslikeF windchillC:(CSRFDouble * _Nullable)windchillC windchillF:(CSRFDouble * _Nullable)windchillF heatindexC:(CSRFDouble * _Nullable)heatindexC heatindexF:(CSRFDouble * _Nullable)heatindexF dewpointC:(CSRFDouble * _Nullable)dewpointC dewpointF:(CSRFDouble * _Nullable)dewpointF willItRain:(CSRFInt * _Nullable)willItRain chanceOfRain:(CSRFInt * _Nullable)chanceOfRain willItSnow:(CSRFInt * _Nullable)willItSnow chanceOfSnow:(CSRFInt * _Nullable)chanceOfSnow visKm:(CSRFDouble * _Nullable)visKm visMiles:(CSRFDouble * _Nullable)visMiles gustMph:(CSRFDouble * _Nullable)gustMph gustKph:(CSRFDouble * _Nullable)gustKph uv:(CSRFDouble * _Nullable)uv shortRad:(CSRFDouble * _Nullable)shortRad diffRad:(CSRFDouble * _Nullable)diffRad dni:(CSRFDouble * _Nullable)dni gti:(CSRFDouble * _Nullable)gti __attribute__((swift_name("doCopy(timeEpoch:time:tempC:tempF:isDay:condition:windMph:windKph:windDegree:windDir:pressureMb:pressureIn:precipMm:precipIn:snowCm:humidity:cloud:feelslikeC:feelslikeF:windchillC:windchillF:heatindexC:heatindexF:dewpointC:dewpointF:willItRain:chanceOfRain:willItSnow:chanceOfSnow:visKm:visMiles:gustMph:gustKph:uv:shortRad:diffRad:dni:gti:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFInt * _Nullable chanceOfRain __attribute__((swift_name("chanceOfRain")));
@property (readonly) CSRFInt * _Nullable chanceOfSnow __attribute__((swift_name("chanceOfSnow")));
@property (readonly) CSRFInt * _Nullable cloud __attribute__((swift_name("cloud")));
@property (readonly) CSRFCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) CSRFDouble * _Nullable dewpointC __attribute__((swift_name("dewpointC")));
@property (readonly) CSRFDouble * _Nullable dewpointF __attribute__((swift_name("dewpointF")));
@property (readonly) CSRFDouble * _Nullable diffRad __attribute__((swift_name("diffRad")));
@property (readonly) CSRFDouble * _Nullable dni __attribute__((swift_name("dni")));
@property (readonly) CSRFDouble * _Nullable feelslikeC __attribute__((swift_name("feelslikeC")));
@property (readonly) CSRFDouble * _Nullable feelslikeF __attribute__((swift_name("feelslikeF")));
@property (readonly) CSRFDouble * _Nullable gti __attribute__((swift_name("gti")));
@property (readonly) CSRFDouble * _Nullable gustKph __attribute__((swift_name("gustKph")));
@property (readonly) CSRFDouble * _Nullable gustMph __attribute__((swift_name("gustMph")));
@property (readonly) CSRFDouble * _Nullable heatindexC __attribute__((swift_name("heatindexC")));
@property (readonly) CSRFDouble * _Nullable heatindexF __attribute__((swift_name("heatindexF")));
@property (readonly) CSRFInt * _Nullable humidity __attribute__((swift_name("humidity")));
@property (readonly) CSRFInt * _Nullable isDay __attribute__((swift_name("isDay")));
@property (readonly) CSRFDouble * _Nullable precipIn __attribute__((swift_name("precipIn")));
@property (readonly) CSRFDouble * _Nullable precipMm __attribute__((swift_name("precipMm")));
@property (readonly) CSRFDouble * _Nullable pressureIn __attribute__((swift_name("pressureIn")));
@property (readonly) CSRFDouble * _Nullable pressureMb __attribute__((swift_name("pressureMb")));
@property (readonly) CSRFDouble * _Nullable shortRad __attribute__((swift_name("shortRad")));
@property (readonly) CSRFDouble * _Nullable snowCm __attribute__((swift_name("snowCm")));
@property (readonly) CSRFDouble * _Nullable tempC __attribute__((swift_name("tempC")));
@property (readonly) CSRFDouble * _Nullable tempF __attribute__((swift_name("tempF")));
@property (readonly) NSString * _Nullable time __attribute__((swift_name("time")));
@property (readonly) CSRFInt * _Nullable timeEpoch __attribute__((swift_name("timeEpoch")));
@property (readonly) CSRFDouble * _Nullable uv __attribute__((swift_name("uv")));
@property (readonly) CSRFDouble * _Nullable visKm __attribute__((swift_name("visKm")));
@property (readonly) CSRFDouble * _Nullable visMiles __attribute__((swift_name("visMiles")));
@property (readonly) CSRFInt * _Nullable willItRain __attribute__((swift_name("willItRain")));
@property (readonly) CSRFInt * _Nullable willItSnow __attribute__((swift_name("willItSnow")));
@property (readonly) CSRFInt * _Nullable windDegree __attribute__((swift_name("windDegree")));
@property (readonly) NSString * _Nullable windDir __attribute__((swift_name("windDir")));
@property (readonly) CSRFDouble * _Nullable windKph __attribute__((swift_name("windKph")));
@property (readonly) CSRFDouble * _Nullable windMph __attribute__((swift_name("windMph")));
@property (readonly) CSRFDouble * _Nullable windchillC __attribute__((swift_name("windchillC")));
@property (readonly) CSRFDouble * _Nullable windchillF __attribute__((swift_name("windchillF")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hour.Companion")))
@interface CSRFHourCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFHourCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Platform")))
@protocol CSRFPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface CSRFIOSPlatform : CSRFBase <CSRFPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Links")))
@interface CSRFLinks : CSRFBase
- (instancetype)initWithRel:(NSString * _Nullable)rel href:(NSString * _Nullable)href __attribute__((swift_name("init(rel:href:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFLinksCompanion *companion __attribute__((swift_name("companion")));
- (CSRFLinks *)doCopyRel:(NSString * _Nullable)rel href:(NSString * _Nullable)href __attribute__((swift_name("doCopy(rel:href:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable href __attribute__((swift_name("href")));
@property (readonly) NSString * _Nullable rel __attribute__((swift_name("rel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Links.Companion")))
@interface CSRFLinksCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFLinksCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface CSRFLocation : CSRFBase
- (instancetype)initWithName:(NSString * _Nullable)name region:(NSString * _Nullable)region country:(NSString * _Nullable)country lat:(CSRFDouble * _Nullable)lat lon:(CSRFDouble * _Nullable)lon tzId:(NSString * _Nullable)tzId localtimeEpoch:(CSRFInt * _Nullable)localtimeEpoch localtime:(NSString * _Nullable)localtime __attribute__((swift_name("init(name:region:country:lat:lon:tzId:localtimeEpoch:localtime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFLocationCompanion *companion __attribute__((swift_name("companion")));
- (CSRFLocation *)doCopyName:(NSString * _Nullable)name region:(NSString * _Nullable)region country:(NSString * _Nullable)country lat:(CSRFDouble * _Nullable)lat lon:(CSRFDouble * _Nullable)lon tzId:(NSString * _Nullable)tzId localtimeEpoch:(CSRFInt * _Nullable)localtimeEpoch localtime:(NSString * _Nullable)localtime __attribute__((swift_name("doCopy(name:region:country:lat:lon:tzId:localtimeEpoch:localtime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) CSRFDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) NSString * _Nullable localtime __attribute__((swift_name("localtime")));
@property (readonly) CSRFInt * _Nullable localtimeEpoch __attribute__((swift_name("localtimeEpoch")));
@property (readonly) CSRFDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));
@property (readonly) NSString * _Nullable tzId __attribute__((swift_name("tzId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface CSRFLocationCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata")))
@interface CSRFMetadata : CSRFBase
- (instancetype)initWithCurrentOffset:(CSRFInt * _Nullable)currentOffset totalCount:(CSRFInt * _Nullable)totalCount __attribute__((swift_name("init(currentOffset:totalCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFMetadataCompanion *companion __attribute__((swift_name("companion")));
- (CSRFMetadata *)doCopyCurrentOffset:(CSRFInt * _Nullable)currentOffset totalCount:(CSRFInt * _Nullable)totalCount __attribute__((swift_name("doCopy(currentOffset:totalCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFInt * _Nullable currentOffset __attribute__((swift_name("currentOffset")));
@property (readonly) CSRFInt * _Nullable totalCount __attribute__((swift_name("totalCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata.Companion")))
@interface CSRFMetadataCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface CSRFWeather : CSRFBase
- (instancetype)initWithLocation:(CSRFLocation * _Nullable)location current:(CSRFCurrent * _Nullable)current forecast:(CSRFForecast * _Nullable)forecast __attribute__((swift_name("init(location:current:forecast:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSRFWeatherCompanion *companion __attribute__((swift_name("companion")));
- (CSRFWeather *)doCopyLocation:(CSRFLocation * _Nullable)location current:(CSRFCurrent * _Nullable)current forecast:(CSRFForecast * _Nullable)forecast __attribute__((swift_name("doCopy(location:current:forecast:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSRFCurrent * _Nullable current __attribute__((swift_name("current")));
@property (readonly) CSRFForecast * _Nullable forecast __attribute__((swift_name("forecast")));
@property (readonly) CSRFLocation * _Nullable location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather.Companion")))
@interface CSRFWeatherCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFWeatherCompanion *shared __attribute__((swift_name("shared")));
- (id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecastError")))
@interface CSRFWeatherForecastError : CSRFKotlinEnum<CSRFWeatherForecastError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSRFWeatherForecastError *missinglocationquery __attribute__((swift_name("missinglocationquery")));
@property (class, readonly) CSRFWeatherForecastError *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) CSRFWeatherForecastError *forbidden __attribute__((swift_name("forbidden")));
@property (class, readonly) CSRFWeatherForecastError *notfound __attribute__((swift_name("notfound")));
@property (class, readonly) CSRFWeatherForecastError *ratelimited __attribute__((swift_name("ratelimited")));
@property (class, readonly) CSRFWeatherForecastError *badrequest __attribute__((swift_name("badrequest")));
@property (class, readonly) CSRFWeatherForecastError *servererror __attribute__((swift_name("servererror")));
@property (class, readonly) CSRFWeatherForecastError *httperror __attribute__((swift_name("httperror")));
@property (class, readonly) CSRFWeatherForecastError *deserializationerror __attribute__((swift_name("deserializationerror")));
@property (class, readonly) CSRFWeatherForecastError *networkerror __attribute__((swift_name("networkerror")));
@property (class, readonly) CSRFWeatherForecastError *timeout __attribute__((swift_name("timeout")));
@property (class, readonly) CSRFWeatherForecastError *unknownerror __attribute__((swift_name("unknownerror")));
+ (CSRFKotlinArray<CSRFWeatherForecastError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSRFWeatherForecastError *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecastException")))
@interface CSRFWeatherForecastException : CSRFKotlinException
- (instancetype)initWithError:(CSRFWeatherForecastError *)error cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(error:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) CSRFWeatherForecastError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface CSRFPlatform_iosKt : CSRFBase
+ (id<CSRFPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CSRFKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CSRFKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CSRFKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CSRFKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CSRFKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CSRFKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CSRFKotlinx_serialization_coreKSerializer <CSRFKotlinx_serialization_coreSerializationStrategy, CSRFKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CSRFKotlinRuntimeException : CSRFKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CSRFKotlinIllegalStateException : CSRFKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CSRFKotlinCancellationException : CSRFKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSRFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CSRFKotlinEnumCompanion : CSRFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSRFKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CSRFKotlinArray<T> : CSRFBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CSRFInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CSRFKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CSRFKotlinx_serialization_coreEncoder
@required
- (id<CSRFKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CSRFKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CSRFKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<CSRFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CSRFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CSRFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CSRFKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<CSRFKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSRFKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<CSRFKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) CSRFKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CSRFKotlinx_serialization_coreDecoder
@required
- (id<CSRFKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CSRFKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (CSRFKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CSRFKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CSRFKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CSRFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CSRFKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CSRFKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CSRFKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSRFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSRFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CSRFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CSRFKotlinx_serialization_coreSerializersModule : CSRFBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<CSRFKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSRFKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CSRFKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CSRFKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSRFKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSRFKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSRFKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSRFKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol CSRFKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CSRFKotlinx_serialization_coreSerialKind : CSRFBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CSRFKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CSRFKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSRFKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSRFKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CSRFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CSRFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CSRFKotlinNothing : CSRFBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CSRFKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CSRFKotlinKClass>)kClass provider:(id<CSRFKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CSRFKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CSRFKotlinKClass>)kClass serializer:(id<CSRFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CSRFKotlinKClass>)baseClass actualClass:(id<CSRFKotlinKClass>)actualClass actualSerializer:(id<CSRFKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CSRFKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSRFKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CSRFKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSRFKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CSRFKotlinKClass>)baseClass defaultSerializerProvider:(id<CSRFKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CSRFKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CSRFKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol CSRFKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol CSRFKotlinKClass <CSRFKotlinKDeclarationContainer, CSRFKotlinKAnnotatedElement, CSRFKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
