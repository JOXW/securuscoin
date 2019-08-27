// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers 
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {

{ 0, "488493e8d123205a2cd81cd10abd268986d7dd1fa4f384aa692969cd4024bd6f"},
{ 2, "1a788c7ae2cacab8d6d6c46073aff32c677e13568914b6aaea11c168f5a07e97"},
{ 5000, "d8337ad8a9aaf2ffcc62c895559cc944f6fa69685c3d46591d0fbd927ca3a0da"},
{ 10000, "a34a71e80bce5fd27634243155b232666efba001239965d35d4adbee5b565abf"},
{ 15000, "6911d7e32509c57e3c3c7bde865c49f5a1d65a62072e292a43bd2854ddb7fce6"},
{ 20000, "0b1962e80dc2dda89880d33d18760163ceceef81c7c86ced31121156448ede86"},
{ 25000, "a324fd0901fd1f4c1287067482a3ae803dc95b03598e15ae9fe4154f2777f046"},
{ 30000, "9f6d24acb807b66e13204af474e6aff83de9be1d63b91dac8433462172f4d8b6"},
{ 35000, "d0a6bb1e372a94023d810f01b27681639e3d1e42572da9bdbc38e5728a8db8be"},
{ 40000, "5ec2d1a410366da1b53d27258a076fc87d0b395f534fbc368d3a70d31b05c7b0"},
{ 45000, "5cd52b76ff1b2f2499e6d526a4746fdfd2b684a2d7f8f6dc25cd250898e3726b"},
{ 50000, "d3f16ef695cba992418adc317c96279a89a8762613dc800665d8f71efa7f2348"},
{ 55000, "06b78056fa2235bb6c5f14a72a7a6e9c5f5f61577a986fc336c14fb872d93478"},
{ 60000, "27cc78a68c387fe85582730c103e198fe39f0348474d3fde4a873b622b47e953"},
{ 65000, "88c040e02a184045f210dffe4babebe83156a092473384fc41a8514167883e1e"},
{ 70000, "a521559400dab0e4728ce156ada3437fd3a27ef86d6c78d063df852ddbfb41b6"},
{ 75000, "31bdfe29e28d300b58621e57ab46e50c116f17d7d3bd831defda0f1ac794fba3"},
{ 80000, "4f7796e48e679f31fed421865b968c6e769932e2a0e6a7d870227de0cff28cc1"},
{ 85000, "93313079419bf60bf0a53089aea898c08eab7e77340c42f412eedf8a02919743"},
{ 90000, "587c0796ae5cb940229d932b5461d4dd882580e23e209153f2c394e4dfde0c32"},
{ 95000, "fd2c88fa12e4ba995d6c404c205a8a1411659fa205cfd945ff3fc253f67be012"},
{ 100000, "437732053b8f6ee1d6b1c97e6186d3084eda2648ff78b7f80f465e4180ac83cc"},
{ 105000, "ed3f274305ba9f992c97f223be962855916d2581f6ec9255764dd7c5179668fb"},
{ 110000, "463d60be738f9748d463ea7df53f229c6ece7af5f4d90c336e6864e1b89d3f27"},
{ 115000, "5521ea989cc625ca0a90e244fdce466df8f80b5f7d5786c0b2ee01a02594c4bc"},
{ 120000, "76b226b5ded6b90ee8847c72be06f7f1dab7ceeaf6cfef290337303592567f9b"},
{ 125000, "12b1d1ebb0852a89782bf37daffc1cd5b5fdc0b4eefe12c858a7644caa9013f8"},
{ 130000, "6c5b3515d485ecf860c57ed1a78513a3e5b9787cb4c780515b09c09ae5434cf0"},
{ 135000, "6803a169e1eb55f5f7bacbad7d43fd055f111896ec143e61eefc7f1a07125c72"},
{ 140000, "e0622f9e4c713a8ce0155a08ddd22c90a53ff29c74c060e799894fd81da0e6a4"},
{ 145000, "286737ad6be8b38cf684da0b26579bfb3dd411405a4aa862c52b6f3e207505d7"},
{ 150000, "ec55a0b55338fbc0b716d3b67008367e6ccc6a82f1e2b559e2e6436ec17dc1f7"},
{ 155000, "b62cccc3b1cc75694d06283d085e7254ba4e9cd9381fe52ea3e665b22b5df2e5"},
{ 160000, "fdd4563044c3dc706e8425ade0f7a9a979a15aedb804534be55f9adb23bc5259"},
{ 165000, "9ad0b6c93bcf15f34243ce75994f78226444325bf236a9fb527092a76864d27f"},
{ 170000, "0a22b95f605548f436ce369979c3a129cbe277d48cf05653ab886d28eee32873"},
{ 175000, "a80a69a825c74f43cff730c6648ad73c17add1f4a378ec6bef70bad0421db90a"}






	
};
}
