# C++ API client

MailSlurp is an API for sending and receiving emails from dynamically allocated email addresses. It's designed for developers and QA teams to test applications, process inbound emails, send templated notifications, attachments, and more.

## Resources

- [Homepage](https://www.mailslurp.com)
- Get an [API KEY](https://app.mailslurp.com/sign-up/)
- Generated [SDK Clients](https://docs.mailslurp.com/)
- [Examples](https://github.com/mailslurp/examples) repository

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project. By using the [OpenAPI spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 6.5.2
- Package version: 15.16.10
- Build package: org.openapitools.codegen.languages.CppRestSdkClientCodegen
For more information, please visit [https://www.mailslurp.com/contact/](https://www.mailslurp.com/contact/)

- API namespace: com.mailslurp.client.api
- Model namespace: com.mailslurp.client.model

## Installation

### Prerequisites

Install [cpprestsdk](https://github.com/Microsoft/cpprestsdk).

- Windows: `vcpkg install cpprestsdk cpprestsdk:x64-windows boost-uuid boost-uuid:x64-windows`
- Mac: `brew install cpprestsdk`
- Linux: `sudo apt-get install libcpprest-dev`

### Build

```sh
cmake -DCPPREST_ROOT=/usr -DCMAKE_CXX_FLAGS="-I/usr/local/opt/openssl/include" -DCMAKE_MODULE_LINKER_FLAGS="-L/usr/local/opt/openssl/lib"
make
```

### Build on Windows with Visual Studio (VS2017)

- Right click on folder containing source code
- Select 'Open in visual studio'
- Once visual studio opens, CMake should show up in top menu bar.
- Select CMake > Build All.

*Note: If the CMake menu item doesn't show up in Visual Studio, CMake
for Visual Studio must be installed. In this case, open the 'Visual Studio
Installer' application. Select 'modify' Visual Studio 2017. Make sure
'Desktop Development with C++' is installed, and specifically that 'Visual
C++ tools for CMake' is selected in the 'Installation Details' section.

Also be sure to review the CMakeLists.txt file. Edits are likely required.*

## Author

contact@mailslurp.dev

