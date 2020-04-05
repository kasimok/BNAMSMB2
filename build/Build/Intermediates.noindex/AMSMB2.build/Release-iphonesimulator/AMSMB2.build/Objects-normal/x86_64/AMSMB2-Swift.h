// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AMSMB2",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSURLCredential;
@class NSCoder;
@class NSInputStream;
@class NSOutputStream;

/// Implements SMB2 File operations.
SWIFT_CLASS("_TtC6AMSMB26AMSMB2")
@interface AMSMB2 : NSObject <NSCopying, NSSecureCoding>
@property (nonatomic, readonly, copy) NSURL * _Nonnull url;
/// The timeout interval to use when doing an operation until getting response. Default value is 60 seconds.
/// Set this to 0 or negative value in order to disable it.
@property (nonatomic) NSTimeInterval timeout;
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
/// Initializes a SMB2 class with given url and credential.
/// note:
/// For now, only user/password credential on NTLM servers are supported.
/// important:
/// A connection to a share must be established by <code>connectShare(name:completionHandler:)</code> before any operation.
- (nullable instancetype)initWithUrl:(NSURL * _Nonnull)url domain:(NSString * _Nonnull)domain credential:(NSURLCredential * _Nullable)credential OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
/// Connects to a share.
/// \param name share name to connect.
///
/// \param encrypted enables SMB3 encryption if <code>true</code>, it fails with error in case server does not support encryption.
///
/// \param completionHandler closure will be run after enumerating is completed.
///
- (void)connectShareWithName:(NSString * _Nonnull)name encrypted:(BOOL)encrypted completionHandler:(void (^ _Nonnull)(NSError * _Nullable))completionHandler;
/// Disconnects from a share.
/// important:
/// Disconnecting when an operation is in progress may cause disgraceful termination of operation.
/// \param gracefully waits until all queued operations are done before disconnecting from server. Default value is <code>false</code>.
///
/// \param completionHandler closure will be run after enumerating is completed.
///
- (void)disconnectShareGracefully:(BOOL)gracefully completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Sends echo to server. Use it to prevent timeout or check connectivity.
/// \param completionHandler closure will be run after echoing server is completed.
///
- (void)echoWithCompletionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Creates a new directory at given path.
/// \param atPath path of new directory to be created.
///
/// \param completionHandler closure will be run after operation is completed.
///
- (void)createDirectoryAtPath:(NSString * _Nonnull)path completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Removes an existing directory at given path.
/// \param atPath path of directory to be removed.
///
/// \param recursive children items will be deleted if <code>true</code>.
///
/// \param completionHandler closure will be run after operation is completed.
///
- (void)removeDirectoryAtPath:(NSString * _Nonnull)path recursive:(BOOL)recursive completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Removes an existing file at given path.
/// \param atPath path of file to be removed.
///
/// \param completionHandler closure will be run after operation is completed.
///
- (void)removeFileAtPath:(NSString * _Nonnull)path completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Removes an existing file or directory at given path.
/// \param atPath path of file or directory to be removed.
///
/// \param completionHandler closure will be run after operation is completed.
///
- (void)removeItemAtPath:(NSString * _Nonnull)path completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Truncates or extends the file represented by the path to a specified offset within the file and
/// puts the file pointer at that position.
/// If the file is extended (if offset is beyond the current end of file), the added characters are null bytes.
/// \param atPath path of file to be truncated.
///
/// \param atOffset final size of truncated file.
///
/// \param completionHandler closure will be run after operation is completed.
///
- (void)truncateFileAtPath:(NSString * _Nonnull)path atOffset:(uint64_t)atOffset completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Moves/Renames an existing file at given path to a new location.
/// \param atPath path of file to be move.
///
/// \param toPath new location of file.
///
/// \param completionHandler closure will be run after operation is completed.
///
- (void)moveItemAtPath:(NSString * _Nonnull)path toPath:(NSString * _Nonnull)toPath completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Streams data contents of a file from an offset with specified length. With reporting data and progress
/// on about every 1MiB.
/// \param atPath path of file to be fetched.
///
/// \param offset first byte of file to be read, starting from zero.
///
/// \param fetchedData returns data portion fetched and recieved bytes count read and expected content length.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort reading.
///
/// \param offset offset of first byte of data portion in file.
///
/// \param total expected content length.
///
/// \param data data portion which read from server.
///
/// \param completionHandler closure will be run after reading data is completed.
///
- (void)contentsAtPath:(NSString * _Nonnull)path fromOffset:(int64_t)offset fetchedData:(BOOL (^ _Nonnull)(int64_t, int64_t, NSData * _Nonnull))fetchedData completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Creates and writes input stream to file. With reporting progress on about every 1MiB.
/// note:
/// Data saved in server maybe truncated when completion handler returns error.
/// important:
/// Stream will be closed eventually if is not already opened when passed.
/// \param stream input stream that provides data to be written to file.
///
/// \param toPath path of file to be written.
///
/// \param chunkSize optimized chunk size to read from stream. Default value is abount 1MB.
///
/// \param progress reports progress of written bytes count so far.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort writing.
///
/// \param bytes written bytes count.
///
/// \param completionHandler closure will be run after writing is completed.
///
- (void)writeStream:(NSInputStream * _Nonnull)stream toPath:(NSString * _Nonnull)path chunkSize:(NSInteger)chunkSize progress:(BOOL (^ _Nullable)(int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Copy file contents to a new location. With reporting progress on about every 1MiB.
/// note:
/// This operation consists downloading and uploading file.
/// \param atPath path of file to be copied from.
///
/// \param toPath path of new file to be copied to.
///
/// \param recursive copies directory structure and files if path is directory.
///
/// \param progress reports progress of written bytes count so far and expected length of contents.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort copying.
///
/// \param bytes written bytes count.
///
/// \param completionHandler closure will be run after copying is completed.
///
- (void)copyContentsOfItemAtPath:(NSString * _Nonnull)path toPath:(NSString * _Nonnull)toPath recursiveprogress:(BOOL)recursive :(BOOL (^ _Nullable)(int64_t, int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler SWIFT_DEPRECATED_MSG("New method does server-side copy and is much faster.", "copyItemAtPath:toPath:recursive:progress:completionHandler:");
/// Copy files to a new location. With reporting progress on about every 1MiB.
/// \param atPath path of file to be copied from.
///
/// \param toPath path of new file to be copied to.
///
/// \param recursive copies directory structure and files if path is directory.
///
/// \param progress reports progress of written bytes count so far and expected length of contents.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort copying.
///
/// \param bytes written bytes count.
///
/// \param completionHandler closure will be run after copying is completed.
///
- (void)copyItemAtPath:(NSString * _Nonnull)path toPath:(NSString * _Nonnull)toPath recursive:(BOOL)recursive progress:(BOOL (^ _Nullable)(int64_t, int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Uploads local file contents to a new location. With reporting progress on about every 1MiB.
/// note:
/// given url must be local file url otherwise it will throw error.
/// \param at url of a local file to be uploaded from.
///
/// \param toPath path of new file to be uploaded to.
///
/// \param progress reports progress of written bytes count so far.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort copying.
///
/// \param completionHandler closure will be run after uploading is completed.
///
- (void)uploadItemAtURL:(NSURL * _Nonnull)url toPath:(NSString * _Nonnull)toPath progress:(BOOL (^ _Nullable)(int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Downloads file contents to a local url. With reporting progress on about every 1MiB.
/// note:
/// if a file already exists on given url, This function will overwrite to that url.
/// note:
/// given url must be local file url otherwise it will throw error.
/// \param atPath path of file to be downloaded from.
///
/// \param at url of a local file to be written to.
///
/// \param progress reports progress of written bytes count so farand expected length of contents.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort copying.
///
/// \param completionHandler closure will be run after uploading is completed.
///
- (void)downloadItemAtPath:(NSString * _Nonnull)path toURL:(NSURL * _Nonnull)url progress:(BOOL (^ _Nullable)(int64_t, int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Downloads file contents to a local url. With reporting progress on about every 1MiB.
/// note:
/// if a file already exists on given url, This function will overwrite to that url.
/// note:
/// given url must be local file url otherwise it will throw error.
/// important:
/// Stream will be closed eventually if is not alrady opened.
/// \param atPath path of file to be downloaded from.
///
/// \param at url of a local file to be written to.
///
/// \param progress reports progress of written bytes count so farand expected length of contents.
/// User must return <code>true</code> if they want to continuing or <code>false</code> to abort copying.
///
/// \param completionHandler closure will be run after uploading is completed.
///
- (void)downloadItemAtPath:(NSString * _Nonnull)path toStream:(NSOutputStream * _Nonnull)stream progress:(BOOL (^ _Nullable)(int64_t, int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








@interface AMSMB2 (SWIFT_EXTENSION(AMSMB2))
/// Connects to a share.
/// \param name share name to connect.
///
/// \param completionHandler closure will be run after enumerating is completed.
///
- (void)connectShareWithName:(NSString * _Nonnull)name completionHandler:(void (^ _Nonnull)(NSError * _Nullable))completionHandler;
/// Disconnects from a share.
/// important:
/// Disconnecting when an operation is in progress may cause disgraceful termination of operation.
- (void)disconnectShare;
/// Disconnects from a share.
/// important:
/// Disconnecting when an operation is in progress may cause disgraceful termination of operation.
/// \param completionHandler closure will be run after enumerating is completed.
///
- (void)disconnectShareWithCompletionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
/// Enumerates shares’ list on server.
/// \param completionHandler closure will be run after enumerating is completed.
///
/// \param names An array of share names. Can be passed to <code>connectShare:</code> function.
///
/// \param comments An array of share remark name, related to names array with same index. Suitable for displaying shares to user.
///
/// \param error <code>NSError</code> if any occured during enumeration.
///
- (void)listSharesWithCompletionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSError * _Nullable))completionHandler;
/// Enumerates shares’ list on server.
/// \param enumerateHidden enumrating special/administrative e.g. user directory in macOS or
/// shares usually ends with <code>$</code>, e.g. <code>C$</code> or <code>admin$</code>.
///
/// \param completionHandler closure will be run after enumerating is completed.
///
/// \param names An array of share names. Can be passed to <code>connectShare:</code> function.
///
/// \param comments An array of share remark name, related to names array with same index. Suitable for displaying shares to user.
///
/// \param error <code>Error</code> if any occured during enumeration.
///
- (void)listSharesWithEnumerateHidden:(BOOL)enumerateHidden completionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSArray<NSString *> * _Nonnull, NSError * _Nullable))completionHandler;
/// Enumerates directory contents in the give path.
/// \param atPath path of directory to be enumerated.
///
/// \param completionHandler closure will be run after enumerating is completed.
///
/// \param recursive subdirectories will enumerated if <code>YES</code>.
///
/// \param contents An array of <code>NSDictionart<NSURLResourceKey, NSObject></code> which holds files’ attributes. file name is stored in <code>NSURLResourceKeyNameKey</code>.
///
/// \param error <code>NSError</code> if any occured during enumeration.
///
- (void)contentsOfDirectoryAtPath:(NSString * _Nonnull)path recursive:(BOOL)recursive completionHandler:(void (^ _Nonnull)(NSArray<NSDictionary<NSURLResourceKey, id> *> * _Nullable, NSError * _Nullable))completionHandler;
/// Returns a dictionary that describes the attributes of the mounted file system on which a given path resides.
/// \param forPath Any pathname within the mounted file system.
///
/// \param completionHandler closure will be run after fetching attributes is completed.
///
/// \param attrubutes A dictionary object that describes the attributes of the mounted file system on which path resides.
/// See <em>File-System Attribute Keys</em> for a description of the keys available in the dictionary.
///
/// \param error <code>NSError</code> if any occured during enumeration.
///
- (void)attributesOfFileSystemForPath:(NSString * _Nonnull)path completionHandler:(void (^ _Nonnull)(NSDictionary<NSFileAttributeKey, id> * _Nullable, NSError * _Nullable))completionHandler;
/// Returns the attributes of the item at given path.
/// \param atPath path of file to be enumerated.
///
/// \param completionHandler closure will be run after enumerating is completed.
///
/// \param file A dictionary with <code>NSURLResourceKey</code> as key which holds file’s attributes.
///
/// \param error <code>NSError</code> if any occured during enumeration.
///
- (void)attributesOfItemAtPath:(NSString * _Nonnull)path completionHandler:(void (^ _Nonnull)(NSDictionary<NSURLResourceKey, id> * _Nullable, NSError * _Nullable))completionHandler;
/// Returns the path of the item pointed to by a symbolic link.
/// \param atPath The path of a file or directory.
///
/// \param completionHandler closure will be run after reading link is completed.
///
/// \param destinationPath A <code>NSString</code> object containing the path of the directory or file to which the symbolic link path refers.
/// If the symbolic link is specified as a relative path, that relative path is returned.
///
/// \param error <code>NSError</code> if any occured during enumeration.
///
- (void)destinationOfSymbolicLinkAtPath:(NSString * _Nonnull)path completionHandler:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completionHandler;
/// Fetches data contents of a file from an offset with specified length. With reporting progress
/// on about every 1MiB.
/// note:
/// If offset is bigger than file’s size, an empty <code>NSData</code> will be returned. If length exceeds file, returned data
/// will be truncated to entire file content from given offset.
/// \param atPath path of file to be fetched.
///
/// \param offset first byte of file to be read, starting from zero.
///
/// \param length length of bytes should be read from offset.
///
/// \param progress reports progress of recieved bytes count read and expected content length.
/// User must return <code>YES</code> if they want to continuing or <code>NO</code> to abort reading.
///
/// \param bytes recieved bytes count.
///
/// \param total expected content length.
///
/// \param completionHandler closure will be run after reading data is completed.
///
/// \param contents a <code>NSData</code> object which contains file contents.
///
/// \param error <code>NSError</code> if any occured during reading.
///
- (void)contentsAtPath:(NSString * _Nonnull)path fromOffset:(int64_t)offset toLength:(NSInteger)length progress:(BOOL (^ _Nullable)(int64_t, int64_t))progress completionHandler:(void (^ _Nonnull)(NSData * _Nullable, NSError * _Nullable))completionHandler;
/// Creates and writes data to file. With reporting progress on about every 1MiB.
/// note:
/// Data saved in server maybe truncated when completion handler returns error.
/// \param data data that must be written to file.
///
/// \param toPath path of file to be written.
///
/// \param progress reports progress of written bytes count so far.
/// User must return <code>YES</code> if they want to continuing or <code>NO</code> to abort writing.
///
/// \param bytes written bytes count.
///
/// \param completionHandler closure will be run after writing is completed.
///
- (void)writeData:(NSData * _Nonnull)data toPath:(NSString * _Nonnull)path progress:(BOOL (^ _Nullable)(int64_t))progress completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
@end







#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop