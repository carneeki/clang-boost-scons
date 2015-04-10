env = Environment(
    CXX = 'clang++',
    CXXFLAGS = '-std=c++11 -stdlib=libc++',
    LINKFLAGS = '-lboost_system')

env.Program("myProg",Glob('*.cpp'))
