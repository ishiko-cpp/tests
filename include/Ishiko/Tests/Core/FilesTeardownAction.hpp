/*
    Copyright (c) 2015-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/tests/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TESTS_CORE_FILESTEARDOWNACTION_HPP_
#define _ISHIKO_CPP_TESTS_CORE_FILESTEARDOWNACTION_HPP_

#include "TestTeardownAction.hpp"
#include <boost/filesystem/path.hpp>
#include <vector>

namespace Ishiko
{

class FilesTeardownAction : public TestTeardownAction
{
public:
    void teardown() override;

    void add(const boost::filesystem::path& path);

private:
    std::vector<boost::filesystem::path> d_files;
};

}

#endif
