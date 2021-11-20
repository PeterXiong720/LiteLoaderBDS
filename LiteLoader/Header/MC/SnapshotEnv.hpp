// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class SnapshotEnv {
public:
    virtual ~SnapshotEnv();
    virtual class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile**);
    virtual class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile**);
    virtual class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile**);
    virtual class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile**);
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual class leveldb::Status DeleteFileA(std::string const&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual class leveldb::Status RenameFile(std::string const&, std::string const&);
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();

public:
    MCAPI std::vector<struct SnapshotFilenameAndLength> createSnapshot(class Core::Path const&);
    MCAPI void releaseSnapshot();

private:
    MCAPI bool _isQueuedForRemoval(class Core::PathBuffer<std::string> const&);
};