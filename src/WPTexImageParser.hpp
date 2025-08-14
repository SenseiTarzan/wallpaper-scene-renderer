#pragma once
#include "Interface/IImageParser.h"
#include "Fs/VFS.h"

#ifndef MAX_IMAGE_COUNT
#define MAX_IMAGE_COUNT 10000
#endif

namespace wallpaper
{

class WPTexImageParser : public IImageParser {
public:
    WPTexImageParser(fs::VFS* vfs): m_vfs(vfs) {}
    virtual ~WPTexImageParser() = default;

    std::shared_ptr<Image> Parse(const std::string&) override;
    ImageHeader            ParseHeader(const std::string&) override;

private:
    fs::VFS* m_vfs;
};
} // namespace wallpaper
