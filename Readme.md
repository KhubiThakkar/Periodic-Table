# Modern Periodic Table Application


Build | Code Coverage | Unit Testing | Static Analysis | Git Inspector | Memory Leak
------|----------|-------|-------- | --- | ---
[![C Compile - Build](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/build.yml) | [![CI-Coverage](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/coverage.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/coverage.yml) | [![Unit Test - Unity](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/unit-test.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/unit-test.yml) | [![Code Quality - Static Code - Cppcheck](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/cpp-check.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/cpp-check.yml) | [![Contribution Check - Git Inspector](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/gitinspector.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/gitinspector.yml) | [![Dynamic Memory Check - Valgrind](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/valgrind.yml/badge.svg?branch=master)](https://github.com/KhubiThakkar/Periodic-Table/actions/workflows/valgrind.yml)


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Report`         | Documented details of the project
`6_ImagesandVideo` | All the images used in Readme and the working of the application
`7_Other`          | Output files for Test Plans


## Challenges Faced and How Was It Overcome

1. Build workflow not working: Was using the absolute address, so changed to relative address.
2. Test case not compiling: The file pointer which were passed multiple times in functions was getting closed inside the function. So declaring different pointers for every case.
3. Code coverage: The code coverage required for me to run the code manually with inputs, so changed the executable with the executable of the test file. 
4. Test case for void functions: Converted them to int functions and return 0 (on success) | return 1 (on failure)
5. Unit testcase workflow not working: Needed to add the build function to generate the executables of project_main.c file
6. Valgrind workflow not working: Needed to add the build function to generate the executables of project_main.c file


## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)
