/** @file

  Copyright (c) 2024, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
// ECDSA_ECC_P256_SHA_256: ECDSA_ECC_NIST_P256 + SHA_256
GLOBAL_REMOVE_IF_UNREFERENCED UINT8  EccTestRootCer[] = {
  0x30, 0x82, 0x01, 0x97, 0x30, 0x82, 0x01, 0x3d, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x14, 0x3b, 
  0x9e, 0x12, 0x86, 0x60, 0x65, 0xb9, 0x63, 0x4d, 0x9a, 0x1e, 0x1f, 0xd7, 0x3e, 0xd8, 0xb3, 0xd2, 
  0x5e, 0x96, 0x31, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 
  0x21, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x16, 0x44, 0x4d, 0x54, 0x46, 
  0x20, 0x6c, 0x69, 0x62, 0x73, 0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 0x35, 0x36, 0x20, 
  0x43, 0x41, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x33, 0x30, 0x34, 0x30, 0x33, 0x30, 0x35, 0x35, 0x34, 
  0x34, 0x32, 0x5a, 0x17, 0x0d, 0x33, 0x33, 0x30, 0x33, 0x33, 0x31, 0x30, 0x35, 0x35, 0x34, 0x34, 
  0x32, 0x5a, 0x30, 0x21, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x16, 0x44, 
  0x4d, 0x54, 0x46, 0x20, 0x6c, 0x69, 0x62, 0x73, 0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 
  0x35, 0x36, 0x20, 0x43, 0x41, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 
  0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 
  0x3f, 0xcb, 0x4b, 0xf2, 0x82, 0x58, 0x12, 0x3e, 0x40, 0x0d, 0xde, 0xd2, 0x0d, 0xec, 0x67, 0x9f, 
  0xa6, 0x81, 0x72, 0xdd, 0x3f, 0x0c, 0x35, 0x6b, 0x8d, 0x92, 0x50, 0x7c, 0x7f, 0xb2, 0xb1, 0x15, 
  0x65, 0x3f, 0x18, 0x6a, 0x85, 0x5c, 0x31, 0x5b, 0xea, 0x68, 0x4c, 0xb7, 0x55, 0xe2, 0xa8, 0xa8, 
  0x7a, 0xd9, 0x0d, 0x7b, 0xfd, 0x89, 0xab, 0x62, 0xec, 0xbc, 0xb6, 0x26, 0x4b, 0x7f, 0xa5, 0xa9, 
  0xa3, 0x53, 0x30, 0x51, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x29, 
  0x10, 0xf1, 0xfa, 0xdd, 0x78, 0x94, 0x07, 0x11, 0x92, 0x0a, 0x9f, 0x62, 0xbf, 0xb4, 0x82, 0xa9, 
  0x02, 0xc6, 0x5d, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 
  0x29, 0x10, 0xf1, 0xfa, 0xdd, 0x78, 0x94, 0x07, 0x11, 0x92, 0x0a, 0x9f, 0x62, 0xbf, 0xb4, 0x82, 
  0xa9, 0x02, 0xc6, 0x5d, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 
  0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 
  0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x20, 0x46, 0xbd, 0xf0, 0x8b, 0x3d, 0xd6, 0x23, 0x42, 
  0x4f, 0xbb, 0x65, 0xdb, 0x50, 0x30, 0xc5, 0x7c, 0x6d, 0xf6, 0xfc, 0xbf, 0xaa, 0xc8, 0xfc, 0x0d, 
  0xaf, 0xd0, 0xa5, 0xc1, 0x05, 0x95, 0xcb, 0x6c, 0x02, 0x21, 0x00, 0x9b, 0x2d, 0xb4, 0x6b, 0x4f, 
  0x38, 0xc6, 0x7c, 0x37, 0xc8, 0x49, 0x79, 0xcc, 0x07, 0x2f, 0x1e, 0x45, 0xc2, 0x9f, 0xe2, 0x1b, 
  0xa3, 0xc1, 0xff, 0x80, 0x91, 0x14, 0x1e, 0x5a, 0x33, 0x68, 0xc0,
};
UINTN                                EccTestRootCerSize = sizeof (EccTestRootCer);

GLOBAL_REMOVE_IF_UNREFERENCED UINT8  EccTestCertChain[] = {
  0x30, 0x82, 0x01, 0x97, 0x30, 0x82, 0x01, 0x3d, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x14, 0x3b, 
  0x9e, 0x12, 0x86, 0x60, 0x65, 0xb9, 0x63, 0x4d, 0x9a, 0x1e, 0x1f, 0xd7, 0x3e, 0xd8, 0xb3, 0xd2, 
  0x5e, 0x96, 0x31, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 
  0x21, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x16, 0x44, 0x4d, 0x54, 0x46, 
  0x20, 0x6c, 0x69, 0x62, 0x73, 0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 0x35, 0x36, 0x20, 
  0x43, 0x41, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x33, 0x30, 0x34, 0x30, 0x33, 0x30, 0x35, 0x35, 0x34, 
  0x34, 0x32, 0x5a, 0x17, 0x0d, 0x33, 0x33, 0x30, 0x33, 0x33, 0x31, 0x30, 0x35, 0x35, 0x34, 0x34, 
  0x32, 0x5a, 0x30, 0x21, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x16, 0x44, 
  0x4d, 0x54, 0x46, 0x20, 0x6c, 0x69, 0x62, 0x73, 0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 
  0x35, 0x36, 0x20, 0x43, 0x41, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 
  0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 
  0x3f, 0xcb, 0x4b, 0xf2, 0x82, 0x58, 0x12, 0x3e, 0x40, 0x0d, 0xde, 0xd2, 0x0d, 0xec, 0x67, 0x9f, 
  0xa6, 0x81, 0x72, 0xdd, 0x3f, 0x0c, 0x35, 0x6b, 0x8d, 0x92, 0x50, 0x7c, 0x7f, 0xb2, 0xb1, 0x15, 
  0x65, 0x3f, 0x18, 0x6a, 0x85, 0x5c, 0x31, 0x5b, 0xea, 0x68, 0x4c, 0xb7, 0x55, 0xe2, 0xa8, 0xa8, 
  0x7a, 0xd9, 0x0d, 0x7b, 0xfd, 0x89, 0xab, 0x62, 0xec, 0xbc, 0xb6, 0x26, 0x4b, 0x7f, 0xa5, 0xa9, 
  0xa3, 0x53, 0x30, 0x51, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x29, 
  0x10, 0xf1, 0xfa, 0xdd, 0x78, 0x94, 0x07, 0x11, 0x92, 0x0a, 0x9f, 0x62, 0xbf, 0xb4, 0x82, 0xa9, 
  0x02, 0xc6, 0x5d, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 
  0x29, 0x10, 0xf1, 0xfa, 0xdd, 0x78, 0x94, 0x07, 0x11, 0x92, 0x0a, 0x9f, 0x62, 0xbf, 0xb4, 0x82, 
  0xa9, 0x02, 0xc6, 0x5d, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 
  0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 
  0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x20, 0x46, 0xbd, 0xf0, 0x8b, 0x3d, 0xd6, 0x23, 0x42, 
  0x4f, 0xbb, 0x65, 0xdb, 0x50, 0x30, 0xc5, 0x7c, 0x6d, 0xf6, 0xfc, 0xbf, 0xaa, 0xc8, 0xfc, 0x0d, 
  0xaf, 0xd0, 0xa5, 0xc1, 0x05, 0x95, 0xcb, 0x6c, 0x02, 0x21, 0x00, 0x9b, 0x2d, 0xb4, 0x6b, 0x4f, 
  0x38, 0xc6, 0x7c, 0x37, 0xc8, 0x49, 0x79, 0xcc, 0x07, 0x2f, 0x1e, 0x45, 0xc2, 0x9f, 0xe2, 0x1b, 
  0xa3, 0xc1, 0xff, 0x80, 0x91, 0x14, 0x1e, 0x5a, 0x33, 0x68, 0xc0, 0x30, 0x82, 0x01, 0x9f, 0x30, 
  0x82, 0x01, 0x44, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x01, 0x01, 0x30, 0x0a, 0x06, 0x08, 0x2a, 
  0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x21, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x03, 0x55, 
  0x04, 0x03, 0x0c, 0x16, 0x44, 0x4d, 0x54, 0x46, 0x20, 0x6c, 0x69, 0x62, 0x73, 0x70, 0x64, 0x6d, 
  0x20, 0x45, 0x43, 0x50, 0x32, 0x35, 0x36, 0x20, 0x43, 0x41, 0x30, 0x1e, 0x17, 0x0d, 0x32, 0x33, 
  0x30, 0x34, 0x30, 0x33, 0x30, 0x35, 0x35, 0x34, 0x34, 0x33, 0x5a, 0x17, 0x0d, 0x33, 0x33, 0x30, 
  0x33, 0x33, 0x31, 0x30, 0x35, 0x35, 0x34, 0x34, 0x33, 0x5a, 0x30, 0x30, 0x31, 0x2e, 0x30, 0x2c, 
  0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x25, 0x44, 0x4d, 0x54, 0x46, 0x20, 0x6c, 0x69, 0x62, 0x73, 
  0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 0x35, 0x36, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 
  0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x20, 0x63, 0x65, 0x72, 0x74, 0x30, 0x59, 0x30, 0x13, 
  0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 
  0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0xe9, 0x8a, 0x24, 0x8d, 0xf3, 0x8b, 0x79, 0x11, 0x46, 
  0x77, 0x40, 0x87, 0x3b, 0xbc, 0x99, 0x03, 0x93, 0x85, 0x1b, 0xf3, 0xab, 0x4f, 0x68, 0x52, 0xb2, 
  0xba, 0x81, 0xc5, 0x5f, 0x9d, 0x05, 0x9b, 0x86, 0x64, 0x36, 0x49, 0x30, 0x93, 0x25, 0x8d, 0x29, 
  0xea, 0xc7, 0xfd, 0x11, 0x8a, 0xb5, 0xdb, 0x78, 0x43, 0x44, 0xbc, 0xcd, 0x63, 0x5e, 0x12, 0xb1, 
  0xe2, 0xcf, 0x7b, 0x1c, 0xeb, 0xa8, 0x2e, 0xa3, 0x5e, 0x30, 0x5c, 0x30, 0x0c, 0x06, 0x03, 0x55, 
  0x1d, 0x13, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 0x0f, 
  0x04, 0x04, 0x03, 0x02, 0x01, 0xfe, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 
  0x14, 0x92, 0x99, 0xfe, 0x73, 0x45, 0xfb, 0xe6, 0x42, 0x5a, 0x5a, 0xcf, 0x5b, 0xbe, 0x69, 0x05, 
  0x42, 0x81, 0x19, 0x2c, 0x5c, 0x30, 0x20, 0x06, 0x03, 0x55, 0x1d, 0x25, 0x01, 0x01, 0xff, 0x04, 
  0x16, 0x30, 0x14, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x01, 0x06, 0x08, 0x2b, 
  0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x02, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 
  0x04, 0x03, 0x02, 0x03, 0x49, 0x00, 0x30, 0x46, 0x02, 0x21, 0x00, 0xd5, 0x82, 0x81, 0x1f, 0xfb, 
  0x11, 0x59, 0x49, 0x2d, 0x11, 0x92, 0xa3, 0x64, 0xd1, 0xac, 0xe0, 0xb3, 0xaf, 0xcc, 0xd8, 0xc5, 
  0xe2, 0xbc, 0x81, 0x1d, 0x91, 0xe9, 0xc0, 0xd9, 0xa4, 0x85, 0xbe, 0x02, 0x21, 0x00, 0xba, 0x84, 
  0x3d, 0x5f, 0xe1, 0xf2, 0x11, 0x0c, 0x1f, 0x95, 0x99, 0xdd, 0x51, 0xe3, 0x8d, 0x97, 0x19, 0x93, 
  0xb6, 0x33, 0x63, 0x1e, 0xd4, 0x5b, 0x02, 0x91, 0x91, 0xa7, 0x34, 0x77, 0x67, 0x4b, 0x30, 0x82, 
  0x02, 0x08, 0x30, 0x82, 0x01, 0xaf, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x01, 0x03, 0x30, 0x0a, 
  0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x30, 0x31, 0x2e, 0x30, 0x2c, 
  0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x25, 0x44, 0x4d, 0x54, 0x46, 0x20, 0x6c, 0x69, 0x62, 0x73, 
  0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 0x35, 0x36, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 
  0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x20, 0x63, 0x65, 0x72, 0x74, 0x30, 0x1e, 0x17, 0x0d, 
  0x32, 0x33, 0x30, 0x39, 0x31, 0x32, 0x30, 0x37, 0x31, 0x31, 0x31, 0x34, 0x5a, 0x17, 0x0d, 0x33, 
  0x33, 0x30, 0x39, 0x30, 0x39, 0x30, 0x37, 0x31, 0x31, 0x31, 0x34, 0x5a, 0x30, 0x2d, 0x31, 0x2b, 
  0x30, 0x29, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x22, 0x44, 0x4d, 0x54, 0x46, 0x20, 0x6c, 0x69, 
  0x62, 0x73, 0x70, 0x64, 0x6d, 0x20, 0x45, 0x43, 0x50, 0x32, 0x35, 0x36, 0x20, 0x72, 0x65, 0x73, 
  0x70, 0x6f, 0x6e, 0x64, 0x65, 0x72, 0x20, 0x63, 0x65, 0x72, 0x74, 0x30, 0x59, 0x30, 0x13, 0x06, 
  0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 
  0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x0d, 0xf4, 0x6e, 0x4d, 0x65, 0xfa, 0x52, 0xfe, 0xce, 0xb0, 
  0xbd, 0xa0, 0x59, 0x40, 0x49, 0xa0, 0x7b, 0x8d, 0x67, 0xfc, 0x61, 0x91, 0xae, 0x7e, 0x7a, 0xa5, 
  0x60, 0x93, 0x78, 0x97, 0xe2, 0xab, 0x42, 0x90, 0x28, 0xca, 0x3e, 0x72, 0x51, 0x1e, 0x6d, 0xd7, 
  0x1b, 0xeb, 0x1a, 0x13, 0x11, 0xa5, 0x1d, 0x36, 0x4f, 0x27, 0xdf, 0x80, 0x66, 0x96, 0x41, 0x73, 
  0xea, 0x51, 0xdd, 0x54, 0xf9, 0x95, 0xa3, 0x81, 0xbc, 0x30, 0x81, 0xb9, 0x30, 0x0c, 0x06, 0x03, 
  0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x02, 0x30, 0x00, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 
  0x0f, 0x04, 0x04, 0x03, 0x02, 0x05, 0xe0, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 
  0x04, 0x14, 0xc8, 0x58, 0x02, 0x82, 0xe6, 0xa1, 0x28, 0x16, 0x5d, 0xde, 0x24, 0xc8, 0xa6, 0x52, 
  0xc5, 0xab, 0x54, 0x1c, 0xe0, 0x51, 0x30, 0x31, 0x06, 0x03, 0x55, 0x1d, 0x11, 0x04, 0x2a, 0x30, 
  0x28, 0xa0, 0x26, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x83, 0x1c, 0x82, 0x12, 0x01, 0xa0, 
  0x18, 0x0c, 0x16, 0x41, 0x43, 0x4d, 0x45, 0x3a, 0x57, 0x49, 0x44, 0x47, 0x45, 0x54, 0x3a, 0x31, 
  0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x30, 0x30, 0x2a, 0x06, 0x03, 0x55, 0x1d, 0x25, 
  0x01, 0x01, 0xff, 0x04, 0x20, 0x30, 0x1e, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 
  0x01, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x02, 0x06, 0x08, 0x2b, 0x06, 0x01, 
  0x05, 0x05, 0x07, 0x03, 0x09, 0x30, 0x1e, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x83, 0x1c, 
  0x82, 0x12, 0x06, 0x04, 0x10, 0x30, 0x0e, 0x30, 0x0c, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 
  0x83, 0x1c, 0x82, 0x12, 0x02, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 
  0x02, 0x03, 0x47, 0x00, 0x30, 0x44, 0x02, 0x20, 0x30, 0x90, 0x5c, 0x67, 0x6f, 0x63, 0x85, 0x8a, 
  0x06, 0x1b, 0xac, 0xd6, 0x8c, 0xc3, 0xd7, 0xd5, 0x87, 0xc8, 0x36, 0x01, 0xa6, 0x4c, 0x56, 0xc4, 
  0x8c, 0x0c, 0x46, 0x3e, 0xc1, 0xbb, 0x68, 0x9c, 0x02, 0x20, 0x08, 0x68, 0x02, 0x1d, 0x06, 0x75, 
  0x4c, 0x99, 0x1c, 0x20, 0x96, 0x52, 0x14, 0x9d, 0xe4, 0xc5, 0x39, 0x88, 0x9d, 0xb4, 0x29, 0xf7, 
  0x53, 0x6b, 0x41, 0x1f, 0x0d, 0x26, 0xef, 0x80, 0x4c, 0x49,
};
UINTN                                EccTestCertChainSize = sizeof (EccTestCertChain);

GLOBAL_REMOVE_IF_UNREFERENCED UINT8  EccTestRootKey[] = {
  0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x20, 0x50, 0x52, 0x49, 0x56, 0x41, 
  0x54, 0x45, 0x20, 0x4b, 0x45, 0x59, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0d, 0x0a, 0x4d, 0x49, 0x47, 
  0x48, 0x41, 0x67, 0x45, 0x41, 0x4d, 0x42, 0x4d, 0x47, 0x42, 0x79, 0x71, 0x47, 0x53, 0x4d, 0x34, 
  0x39, 0x41, 0x67, 0x45, 0x47, 0x43, 0x43, 0x71, 0x47, 0x53, 0x4d, 0x34, 0x39, 0x41, 0x77, 0x45, 
  0x48, 0x42, 0x47, 0x30, 0x77, 0x61, 0x77, 0x49, 0x42, 0x41, 0x51, 0x51, 0x67, 0x72, 0x58, 0x77, 
  0x36, 0x4f, 0x75, 0x70, 0x47, 0x34, 0x4d, 0x46, 0x4e, 0x61, 0x62, 0x6a, 0x56, 0x0d, 0x0a, 0x62, 
  0x34, 0x59, 0x6a, 0x7a, 0x44, 0x65, 0x31, 0x59, 0x62, 0x61, 0x4d, 0x70, 0x45, 0x68, 0x69, 0x4d, 
  0x71, 0x4f, 0x51, 0x44, 0x6e, 0x65, 0x41, 0x50, 0x59, 0x71, 0x68, 0x52, 0x41, 0x4e, 0x43, 0x41, 
  0x41, 0x51, 0x4e, 0x39, 0x47, 0x35, 0x4e, 0x5a, 0x66, 0x70, 0x53, 0x2f, 0x73, 0x36, 0x77, 0x76, 
  0x61, 0x42, 0x5a, 0x51, 0x45, 0x6d, 0x67, 0x65, 0x34, 0x31, 0x6e, 0x2f, 0x47, 0x47, 0x52, 0x0d, 
  0x0a, 0x72, 0x6e, 0x35, 0x36, 0x70, 0x57, 0x43, 0x54, 0x65, 0x4a, 0x66, 0x69, 0x71, 0x30, 0x4b, 
  0x51, 0x4b, 0x4d, 0x6f, 0x2b, 0x63, 0x6c, 0x45, 0x65, 0x62, 0x64, 0x63, 0x62, 0x36, 0x78, 0x6f, 
  0x54, 0x45, 0x61, 0x55, 0x64, 0x4e, 0x6b, 0x38, 0x6e, 0x33, 0x34, 0x42, 0x6d, 0x6c, 0x6b, 0x46, 
  0x7a, 0x36, 0x6c, 0x48, 0x64, 0x56, 0x50, 0x6d, 0x56, 0x0d, 0x0a, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 
  0x45, 0x4e, 0x44, 0x20, 0x50, 0x52, 0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4b, 0x45, 0x59, 0x2d, 
  0x2d, 0x2d, 0x2d, 0x2d, 0x0d, 0x0a, 
};
UINTN                                EccTestRootKeySize = sizeof (EccTestRootKey);