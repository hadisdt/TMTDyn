/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF124_info.c
 *
 * Code generation for function '_coder_sprdmpF124_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF124.h"
#include "_coder_sprdmpF124_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("sprdmpF124"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (8.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF124.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737612.3865625));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[34] = {
    "789ced5d4b6ce3c619e6a6bbc12e8ab402dae6d1b4e96e5a2c5224b0645996eda001f4b6645b2f4b2bc9cec326254aa2cd8744520fab48e2630f396c2f3df5b0"
    "c724688ab4972c9aa0606f3da640d3437b59b4087ae9b53d571249af87ab59694d8a16a5ff071663eae7cc37fcf7e73733ff3c485c4924af1004f1adfebf4fde",
    "27084f7d704510cf10aab8b4f4290215a3fe8a96fecc70adcb35e22a92ef8a86f76bedba2cf032dd95d50b96e1e9548ba368b17fc1931c7d564c45e0189ee4e5"
    "fc498326445a12d8365d196aaa0c4be7198ede11ce5dc499fe05173ba73abb18a8067f87eb74f938d7e208b12e3dac2e7bfe82d0ec331005f3fc5727b4cf1ec6",
    "3e2e83fecde8dbeebac0d1ee3a5961dc39b24abb93d1cda074c297ddf1c14ff9643e72c2bbc34285d6ff0ed132e96e7b973c37e33b3bee1849894cd94d0b9c5b"
    "6a8815ae115bf6fa9638c3f3e81531d6f7e9099fe7bb98e7b9a1a5f7cefff8e9bb8161fa65474d0345353d7c4f4d89a896c6d454d1f40f7a6a7aafa9a6a7da7d",
    "a7db5abaafa5112d7f49bbd6f213b49adeac69bf73daefdaf5a11cd0ed71a8a517fdffbd66b826ceee53350da133f46aabf09e365c3fc4533515a145b1f443bc"
    "0f4de205b178a8fecdc44ea9efc22d4974b3429964ddc9607e271872ef7a3dcbeb945b16049612ba6e9a63dd2c43b939526649ca2d3424f7d0428ff8e921a65e",
    "93faa931d5e506715dfbebf483affc7f0bda87a7caa2e07531e54dea77cf62f05c067db15ea0fdb96c6e75379f6d9522dbfb05217727fcb01e993138e3ea4160"
    "aeed2adfa9ef6f0353af49fded29c3b52e7a3be3427ebd1d50d397cf78fd1453fea476fb1106df65d097fbedb1b8c4f43b33224fb24b8c146a31ac9ce0fbdd19",
    "badf1c5f1aefdf3789b78bc543f54fe037837faf0eede57e553798db6830dd916c6c073efbefdfbf8276604a7876b503e976331cacc6dbebf9acefa41ce5786f"
    "6c9f8dcf4f3bf02926ffa476dcc294ef32e84db703b7aaacac777a099bfdee3419b0caef9ec3e0b90c7a03ff4b7d939162b47669bc3f837e3292f775435d02df",
    "fff6f63bd0ef773adf7b766bcb6d796b43106b752917236ba158a21d01be5f9cf79840f81e37de98d45ecf18ae09c37dba9e9178b5a32a0f22929717d731eb1f"
    "092c1eaa7fc2fe4095e9d29586d0770f3762a94b88ef109f145f807ebdd3797e73e5f824d7ac316c381f3ede6d866af9e33b51e0f985e5791cdea4f6ba6eb826",
    "ceee53358c5465fa839aba53e3f5112c1eaa37c3ebaa85544f003e9f0f3cb37cfe3d0c9ecba06f37e968a35d96364a9d1541c848b9e595bd7d627ef8dc2971d7"
    "877c7eabca88925c65d0e738c4d4d352ff530e2d8bd7bf84c17319f47d631cf48d7050154456101a07429b16abacd039280fd60598efcf1b05571f5dac5a67b0",
    "3f064fd75f2cbea7b9d1632c677fbf40f9e2eb6b10c799d5f660d2febdb41ded4623bd5e66abebf525bd9e7036b8ec89ce4f7bf000937f523b9e62ca7719f4d3"
    "7baf6f3dfe86833acd3668d15e3fddb46c3c70d5704d9cdda76a06bddd417ac9f30a0c5fa1bb095e3eabc73d93f5088ca987ae37374e58e26cf48bfb308febfc",
    "f62077d260b8d5e66e7199a12abec47e36935c9ea7b8fe3d4cfe057e6ffbe2999b38feb8f6a45c278733e310c71f9dea02711f7bf0208e6f4df90f30f9a19f3f"
    "fa7927f3d38465fdfc7171f8fe837364f7f2da81198dfbebfec3f6ff70ab36b23beeafdc7fee06c4799cceff62d3d33862245f90f367d6f80c555ad92e4821e0",
    "7fe07f54d0795f7bf99fe181ffc7f13fc3dbceff9f03ff3b9fff6be4de5a7aa5986aae514139bc4aa67db42fbb393ffc0ff3bea3535d10ff7b706819af3f69fc"
    "de2cde93aee7b967122f80c543f50e8af7419c7e8a7810a7b7a67c07f2798f1605a9c5a1cf818ba74f651faef256609806deb68ddfab2d961da4b05e7354bf5d",
    "6a9062b5c5bb0756b2bbdf7efa3b88db3b9fe765bf97db8d1437ebfb2b42af2d27b95872599e239eff14931ff6d59ef7bb87ebef7f81296f527bbd82c17319f4"
    "86f52f64a3c19e84189e144f72c3162fd6e2cb3223f056cd1b7f7b4cbd747d55c33da8937ca5df1058b57ef3cd31f8bade6c7f016b486d66d7c6f6e1f71f8910",
    "d7717afb90cd86e5e3cc91678dda4f6da7a83cb99e4e4ab1f9691f144c7e78af5141fd70cdb2f6e2c7183c97416f6c2fda0253098a227912634959a67986af0d"
    "efbbacf5fd66c793853178badeb41f8d30dcc0856cf49fd3ff51d02e38bd5de86dc557c2771a252e4ba52bc152359eec72e9393a8fc7ecfb9cc794ef32e8cd8f",
    "1bd408d141951548f9e06c0461ef3eaf7d3897c724defceff3867379a68907e7f25853be59decf62ca7719f4e6799f17e414994a8b89feab5dd3c346369fdb50"
    "b46c1e60dc39cb8cc4933ce1dc798030160fd59b5abf33b091fd711e98ef9d229e5de7363483ad34e73b29f93cbba2b7155ea637da5c8a981f5e87f71715d4df",
    "7e62d9390d70ae320e0fd5c3b9ca4f8aa7caa2e0c1b9cad6940ffdf9d1a92eb8fefc29a6bc49edf62206cf65d08f8ce32c555941502de0d4784e1a8b87eacdb6"
    "03afaa16730f2dd66f046ce4ff8f61fd8ff3f99faafb33259e952b39818bb6f8f80a150d6dcdd1bafd198ccbcedefa9fd39465f17bdcf7c35c06bd81f7695114",
    "269ab798d6feac19ebf74bfdead115b7caf61ae71ba97f68b34be8f7ff717b0fe2f84ee7fd2e9fedf4920d2eb4d98cc4a4f5f056b32d78e6288eaf60f24f6ac7"
    "59fbae23ce2f26f5c36f609e475fe7fffcf91fcfbedfb8a5a6a725dbd6fb4b4d71f8d150a7c6f943583c547fd138e160b5ffc046f6f37ee04f776e437fdfe9bc",
    "efdb8c56eb1e7fe2281d5d49c8992ccfb7c391398af7c0fb8b0aea6fb72d8beffc0083e732e81f89f347048e64f8a8b1bfdf30591fb3ebfb9d12ef410c686fbc"
    "e70fff81759b8ee77f36c955b863914e36c245795d6855aa7b2d668ecee981f77874fd51bff35bd69f1fffbd95c11e5589766a7f3e8ec543f5e6f6efea56b2f3",
    "9c86c0f537603da6e3f9bc534c4831f6b810f356c51cdb3e4a6ff1bd6c18f87cb1f8fc0dd88fa509ecc742eb3d81ffc07eac29e2c17e2c6bca87b80e2aa8bfbd"
    "02f3b726f160fe765a78aa2c0a1eccdf5a533ef03d2aa8bf2d5916c7ff3e06cf65d08f5ea7a9cfd65e5e3fdfecf83035064fd75bb54e53f719fbfc45f9ec5fff",
    "8679db59e5fb49f767adb776729ec24a3a282656a27c696bd7cfeffa09e0fb45e3fbbb98f226b5d34f31782e837ed4f96ce8c143093ec392655abb7f56e67115"
    "93f86f8dc1d7f5969ce734d2a0b69fbf4f7df308c603b3da3e4c3a1e10c89d238a2437c39595f523a9e4a593fb8d93391a0f2898fcf05ea382fae16b30cf3b21",
    "1eccf35a85a7caa2e0c13caf35e52b98fcc0efa8cc7b1ce8a2fc0f71a0d1f58738903d781007b2a67c0593dfa9fbb60e31f5b5f6fccdaa65fd7cdc3e3197a629"
    "0bd230756a3f3f88c543f566e2847d1b5d861fc0feac29e2d9d5cf6fe4bb476b6939e35f4b93f9dc515edc3c29f373b43e1fde5f54a6750edb0b183c97413fba",
    "3fafb3bc73e7759363f074bd55fd79dd676c8cebf87ff511f0bdd3f97e5ddc91c86c39b957a4f64a5428e4f7556b34f0fdc2f1fd5d4c7930afab8a62127ff1e2"
    "8330af3b4d3c98d7b5a67c05931fde6b54a615f79f9571c245e341304e185d7f1827d88307e3046bca5730f921ee8f0ae2870fec8bfb4b0c3f4c21eeff98f5c1",
    "0c7f097e00e7b24d13cf2e7e27c97868bf731c670ac9708b0d85f8c85a263547fd7c787f5199cdb8bfcef210f79f781d8fe63336c67502d09f773edf7b56e3fe"
    "f570a7e8f5843a1dd6d3607d915a6f8efaf3c0f7a840dc7f74fd20eeaf0ac4fd9d8107717f6bca5730f9e1bd466536e3fed68d132e1a0f8271c2e8fac338c11e",
    "3c18275853be82c9efd4b83fae3f3fa91fe27850ff4e8be7fc8ff7de0d0cd32f7b6aaa74d43423ab698053d3bb4ddbe609480af6078c1b77f66d7409e34e4581"
    "7902e7b7074d8aaa547d0d2a9dcfe4c4acb0bcb9c9eef8e6a83d80f71715d4df6e5ad6ff87efb4e3f0503d7ca7fd49f15459143cf84ebb35e503efa382fa9b67",
    "46e23e7aef1ee687278dfbe83e63633fff97ff781df8dee97c7fb4ba99ad55b285c4462cb5bc51a0b2abb56a668ecefb01be4705c7f766bfe7f23206cf65d08f"
    "9f1f56ef9b957961b3fdff3b63f075fd14e68fec6e0ffe09df6d747e7bb05d583e167cbd2a59e9748abb5e5f722376672f3a3fed01bccfa3535d50ff5bb5ac7d",
    "80ef7da902dffb9a1ade5016050fbef7654df9d01e8c4e7541fd2f3e77f1a18bce0b407c6874fd213e640f1ec487ac295fc1e477eaba209c5f4cea87b87537fa"
    "baa0e7cfff98793f304c959f6be97b96b50f3731f57019f486f641a4a53ad9a0734c8f0ed7e9f2b1e4d471426e0c9eae37db3e3c6230cda36c9c37fecb6f3e84",
    "7182d3db09ffa6875dcbac65338578412a14fdb5eddda63c47fb08e07d1e9dea825b3f64d6ff9e375c1386fb74bda11de049b1c6f0e5fab153f9dfe238d124df"
    "093eb399bd71a2d3efbcbefb57e0ff29e1d9c5ff27dd4e62838c556bab9e723a2ae48e62adb50ecc1bccdcfb6cebf880782da0a62f6be96dcbf6075cc3d4c3a5",
    "69aaac30fc50bc53f70784b178a8deccba83a18decef1fc0394253c4b3ed9cb8e65a3adf6423abc7a17a3ebb99939b914839363f7c0fef2f2ab03f00f6073cee"
    "3926e8e7c3fe8029e2c1fe006bca07de47655ae7c7bd88c17319f4a3e77ff5debd73f707a4c7e0e97aabe67f759fb191ef3f2ebe007cef74bea7eafe4c8967e5",
    "4a4ee0a22d3ebe4245435b9bc0f78bc6f77731e5c1f971aa2826f117ef9c29383f6e9a78707e9c35e52b98fcf05ea332adf3e366659c70d1f8108c1346d71fc6"
    "09f6e0c138c19af261fdcfe8549769ed2bbe85c17319f4c6718324d1a25c2059a632304550ac69f739759e208fc543f5a6fb118f18cef671c153e10e8c0b9cde",
    "1e78bdc7bd8d482c94a8ed7473fbbd3815dfd895613dd002becf7d390d58b6eee7bae19a38bb4fd53092d420458976eaba9f38160fd55f2c9e38b0cd20a2a85b"
    "6989b3cf0f02d7df780778dde9bcde2926a4187b5c8879ab628e6d1fa5b7f85e768ef68301af8f4e7541793d08eb80b4df611dd0e854175807640f1eac03b2a6",
    "7c05937f523b1e60ca7719f4d368076e31d2405f1349d65e3f54f66c5bdf3f78c42a01ebfb71eb06fa7fb88736b27f3fef7de077e7f3fb6a37c9c68edb95a384"
    "bfd4ddaa885e1f9ff3c3fafe05787f0762dd3a4fe8d7e3f0503df4eb9f144f9545c1837ebd35e52b98fc8ee9d753428baf4836f7ebb396b5073fc4e0b90cfa47",
    "da83c46044438b61b66f19c2ba7eff55c3f5c3faa89a729d1c2e20b26a3d4fc6704d18eed3f5e6db83f306b335ceffc1b33720ceeff47620c6ef6442c162aac7"
    "70ddf451a3c2a5e5d4c91cc5f9154c7e68075041db813b96c577c6f5c3fb06e0c8eee5f1bcd9f161048b87ea4d8d0f8736b27d7dcefde780df1dcfef62d3d338",
    "62245f90f367d6f80c555ad92e4873f47d4705931ff81d15d40f0bb6f2fbe0e3eec0ef8fe777ed73ee76f2fbe7c0efcee7f71ab9b7965e29a69a6b54500eaf92"
    "691fedcbc27afcb3f2166a9dceb973fb7178c0ebaa00af5b85a7caa2e001af5b533ef0fae8541774fd650ae23113e2413cc62a3c5516050fe231d694ff674cfe",
    "49ed4862ca7719f453d83f7bab4d8ac3a3940f1aa250313cd721a6ded6f27cd9b2f9d79730782e83be6f9c83be510eaa82c80a42e34068d36295153a07e58155"
    "2eefdc35e582787af9fb63f074fd05db01d5ad1e6339fbd7e5285f7c7d0dda07a7b70fd276b41b8df47a99adaed797f47ac2d9e0b2670ef6d3fe1f31f2fe98",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 92232U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sprdmpF124_info.c) */
