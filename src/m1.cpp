#include <cstdio>
#include <boost/dll.hpp>
#include <vector>

int main(int argc, char** argv) {
    using vector_t = std::vector<boost::dll::shared_library>;
    if (argc < 3) {
        return -1;
    }
    vector_t libs;
    for (int i = 1; i < argc; ++i) {
        printf("going to load: %s\n", argv[i]);
        boost::dll::shared_library lib(argv[i]);
        libs.emplace_back(std::move(lib));
    }
    printf("exiting\n");
    return 0;
}
