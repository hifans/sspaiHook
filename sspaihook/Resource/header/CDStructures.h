//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct APTaskInfoData {
    unsigned char _field1[30];
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct MOBFJConstBuffer {
    struct MOBFJConstPtrRange _field1;
};

struct MOBFJConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct MOBFJEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MOBFJEncodeState {
    struct MOBFJManagedBuffer _field1;
    struct MOBFJManagedBuffer _field2;
    unsigned long long _field3;
    struct MOBFJFastClassLookup _field4;
    struct MOBFJEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct MOBFJFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct MOBFJHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct MOBFJManagedBuffer {
    struct MOBFJPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MOBFJObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct MOBFJObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct MOBFJParseToken {
    struct MOBFJConstPtrRange _field1;
    unsigned long long _field2;
    struct MOBFJTokenValue _field3;
    struct MOBFJManagedBuffer _field4;
};

struct MOBFJPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct MOBFJTokenCache {
    struct MOBFJTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct MOBFJTokenCacheItem;

struct MOBFJTokenValue {
    struct MOBFJConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_abebb5d1 _field4;
    struct MOBFJTokenCacheItem *_field5;
};

struct MOBFParseState {
    unsigned long long _field1;
    struct MOBFJConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct MOBFJParseToken _field9;
    struct MOBFJObjectStack _field10;
    struct MOBFJTokenCache _field11;
    struct MOBFJObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct NSDictionary {
    Class _field1;
};

struct Range {
    double max;
    double min;
};

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UPPPasswordUtil;

struct UPPProguardUtil {
    int _field1;
};

struct UPPasswordTool {
    struct UPPProguardUtil *_field1;
    struct UPPPasswordUtil *_field2;
    int _field3;
};

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_abebb5d1 _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFString;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _utils {
    CDUnknownFunctionPointerType _field1;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct msgpack_object {
    int _field1;
    union {
        _Bool _field1;
        unsigned long long _field2;
        long long _field3;
        double _field4;
        struct {
            unsigned int _field1;
            struct msgpack_object *_field2;
        } _field5;
        struct {
            unsigned int _field1;
            struct msgpack_object_kv *_field2;
        } _field6;
        struct {
            unsigned int _field1;
            char *_field2;
        } _field7;
    } _field2;
};

struct msgpack_object_kv;

struct msgpack_packer {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct ssuregex;

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    int used;
    int alloc;
    int sign;
    unsigned long long *dp;
} CDStruct_c40cccb6;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

#pragma mark Typedef'd Unions

typedef union {
    long long _field1;
    unsigned long long _field2;
    double _field3;
} CDUnion_abebb5d1;

