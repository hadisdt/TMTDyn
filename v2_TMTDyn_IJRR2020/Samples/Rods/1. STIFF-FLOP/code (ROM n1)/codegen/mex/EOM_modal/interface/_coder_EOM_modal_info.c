/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_EOM_modal_info.c
 *
 * Code generation for function '_coder_EOM_modal_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EOM_modal.h"
#include "_coder_EOM_modal_info.h"

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
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("EOM_modal"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/EOM_modal.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737429.54271990736));
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
  const char * data[48] = {
    "789ced5d4d6c23c975eefd3366b376c220b177d776ec994d30d8608d214551a4b4c9eef2ff4712ff448ad268bd4b35c926d954ff90dd4d8ae225ca25c8610f9b"
    "4b800006b2a7c03692c52608e0416c043472f1d101bc31e05c06098c5c724dae09c9eed6a87b59438ebabaa86ebe0708a5e66bd62b3ebcfaead5ab5755d47399",
    "ec731445fde6e4ef1fff84a2b65f789e9ad25728953c5af93c652433ff39adac989e757a897ad1f0bde73479dfd39eeba2a03043457de05881c9f5f91a234d1e"
    "049a67aeaa69883c2bd08252bee83294c4c82237601a334e93e59832cb33fbe2b587343b79e093d758570f53d6f4ff589ba99f95fa3c25b5e527cde5ae3f509a",
    "7ea6f408f1fb5f5c523f45847e3c26fefb890fbc6d9167bc6dbac17ab3895444be10eadef4f429d257c472b61cbf10bc31b1c15c7f8e320aed1d6c3cf079eb53"
    "4e229fadf26283e61ef0a6dff1e788767e69c9dff112e277bcac956f1a3e7d2fac96ef6a65482b29adf485f5760d117297d5ef6f23dae531f1199eabf2cac40e",
    "e46a9be1ba334b9b92de8ed31bb6c34ca876e8a4cbfbec86f2f4fab30be4e9fcf733fbc713d3eacb929713eb34e7cd46cafb91a8f7c0efdbd8ae791551e46ae2"
    "d03b518f97636b5e9e5638bae615bbb2f70b1a9bd9d4227d2d6b4fe652a797a93bda7f977ff5dae5bf45c8c953695de459ed775f43c8f398f827d9e6b0b23bdc",
    "c9d5dbb993526a5f6835445ff2493b0a0be42c6a0785782655ff18f1fd65f5f83ea27e8f898fb51fdfab8b3c2f0ad5fa742c940dbfa78b68efb276f8bce95927"
    "7d9c30e26121ac96f9abf1e01251ffb2fafc3642bec7c49f0e97d20376e28448c264b864e5689fe5948c3071431889ad5b1e1774f95f323d3f698fca6988fd1a",
    "c7e0f3370e90f28cfc67b0a7e9df5b337d79dfd215e6352b4c7738088e0f3ffa9f5f7d0ee3834df2488d0ff9412f1669a607dbe562e0a29ee0057ff2844bbb67"
    "7c70cbfce114d14ebcf6e7092f1a8796d5db9711f23c26fe04d0aa3cdba8ca0a3313490af76545ead7157c765246ca33f2f1d8c975ada9a642ce4ec2dca7affc",
    "1270df2679a4705fdad8a243722e5e28f7a5dd23beb7dbf31736a280fbebd79fa774378c0b77ef989ea9abf7548edc951a7c37195a957f6f35ee53303d53a6f7"
    "743e1ebbd0b5f58027680f9d9f03bedf5a7cff2a429ec7c4cf1fc6938d80343a3c6f1646c5727e94c8248e29f7e0bbd3fbf19bcfcd6fdfb276f73aa2fd7a9ce7",
    "67d73f7c2c8667e5a5a096a7bc5a8edb6a49d16a7997d1de3bd5ded3caf081f6de77357e42fb7e55fb3caebda73d8739edbd92566afc4b9dafd513d6eaa7b4fa"
    "a80fb4f7b472ac95d487d8c627d43a8a47e374c5f3d9dac4aac6a7ef5b941741ca33f26f1ecf9c696805f3d3cb8f3e0fc27ac46d1d97969d771cb52b4cb0542c",
    "6d1d948bfde3f8de49452c1dc6dc332e39b5ffa2e23df6ac3bdc0fabe51bb0eea07d0eeb0ef34b9d60dd818c3c5877c053bfd5f9c92ea27e8f896f791cb8d7e4"
    "14dde9a508dbdd65165b1ed2ab08791e13df84fff24465b49468ad0cf76fa19dccc57d5d512bc0fb4fef7f087ebfd3f1de77d0da1828bb3ba2d46acba524dd8a",
    "26338338e0fdfaf463ca80f7a8f9c6b2fafa8ae99932bda7f35959501d55659ac1bcbab88e55fbc820e519f9cfe80f34d921d3e88a13f3f01a34b58afc83bf3b"
    "7a1dfc7aa7e37c6af3eca2d46bb15cac1c3b3be8455be5b3c304e0fcdae23c4a1eaef564566eb293494ddba9f1fa38529e916f05d7550d11cf2b003cb7511ea9",
    "75e4418f4974077579e7f87c53140b726963f3e109e51e3c774adcf5099edf6bb292ac3459e3ef3845b413abfd8d4fb1c5ebbf8590e731f1a7bb27a6d9514d51"
    "e244b15b15078cd4e4c47375efc4eaf68f8d6f284fafff64813c9d7fb3f89e66464fd11c79bf60fc935fbf04719cdb3a1e2cebdfcb7b8961223e1a157687fe40",
    "d6ef8b15231bbe847bc683c788ef2fabc74b44fd1e13dfbe7e7defe92f689bd0c8da690adb7ce045d33375f59eca997abbd372c5eb0aacd060861941b96ac727"
    "16db115ed00e9d6f6d9e4034cff411ace33a7f3c285d74597eab7770b4c1d61a81cc49b190dd70535cff13c4f7d7b8df52d7cf8f707a1c7fd178526fd3b39571",
    "88e3cf2f7582b80f197910c7c753ff63c4f7c1cf9fff7b97b3d30c363f7f511c7ef2c3797ab8ba71e096c6fd75fbe126ff78551d918efb8f1fbdfa32c4799c8e"
    "ff52cfd7edb07220c2070b21a1503bdedcabc82eda1ffc18f17dc0fff9bf77293bbd248bffac00f8bf08ff598138feff18f0dff9f8dfa21f86f29b47b95ea816",
    "51625b743ec0048a29f7e03facfbce2f7532d8dfe3536cb8feacf17babf29e359fe7138bf2c2487946be83e27d10a7b7511ec4e9f1d4ef403c1f319228f779e3"
    "ef40c5d36dd9873bd6cf61f88018be37fb1c372d215f739edf2e7769a9d917bc532d91f6db2fff1ee2f6cec77925e8e70fe247a9f6c9a6381a28593e99dd505c",
    "84f39f21be0ffb6aafdbdd93fc7bd4bd03cbeaeb4dd333657a4fe79bf25fe86e97bb88b2022d5d9466235eb22fd415561470ad1bffd68276e9fca626b7daa685"
    "c66420c095bf69c3b9e173fd05a422b5955d82e3c33ffc4082b88ed3c7876231a69c153abe50ed24b797ab95e9ed7c5686fb00d6b85f4f29846dbcf87d843c8f",
    "896f1e2f0622db8848127d91e4684561045668cdde5b557ebfd5f924ea5e268f896fd98ee6286e6a4204ede7f27f6b302e387d5c18eda6376387dd63be58cb37"
    "22c7cd7476c8e75d741e0fb1f3a02dcf1bd40851b5c989b452bd9a4190dde77502e7f25894e7fe7dde702e8f9df2e05c1e3cf513bbffc532ee0ba292a3737929",
    "33e9daada5ef47c49bbf73846d1d60d139cbac2cd002e5dc758018529e916f297f67aa23f2711e58efb5511ea9731b7a917e9e0f5c1c077c0792bf1fdb607606"
    "7c8e720fae43ff3592d1defe00db390d70ae324a9e910fe72a3fab3c95d6451e9cab8ca77ef0e7e7973aa1fcf94b447dcbeaed1b08791e137f6e1ce741931345",
    "55034e8de7e491f28c7cabe3c05baac6bc338d4d060182f8ff43c8ff713efed7dac1c2b1c0298d92c827fa427ab39688eeba286fff16c6656f5ffecf650e5bfc"
    "fe7711f23c26be09f7194912975ab7b06b7fd62df3fbe549f3988657457b0df3cdd03fd3d90afcfe7fde7b08717ca7e3fe50289e8fb25d3e9aeac593f2766cb7",
    "37107d2e8ae35bc5fd82e99932bda7f3edbaef116507cbdadd0b88f6eb79fdaf193eed86d532ad95f8ce635e84c3724f52a6a553e3fa51a43c23ffa671c16976"
    "ff5447e4713efcd3c3fbe0df3b1de703a944b3ed0b663af9c4664629140561108bbb28be03fdd748467bbb8f2d9ef34d843c8f89ff85b87e5ce469564898fdfb",
    "aec5f658cde7774a7cc7a040b2f19d7ffa6fc8d3743cfe7359bec19f494cb61b3b52b6c57ea3f9b0cfbae85c1ee8c7f3db6fb4bb20367f7ef1fd2ad33da932e3"
    "547f3e8d9467e45bdbafab6b89e4b90ce13bef40fea5e3f1fcfc282327b9b34ad2df944adca093df1546c518e0f97ae1f93bb0ff4a23d87f656cf712f603fbaf",
    "6c9407fbaff0d40f711d2319eded4d58afb5280fd66bed92a7d2bac883f55a3cf503de1bc9686f0fb0c5f1bf8e90e731f1e7e765eaabb5abf3f3adce0f730be4"
    "e97c5c7999bacd90b397f18ffef3bf60ddf6b6e2fdb2fbb1b6fbfb255f65331f91329b09e178f720281c0429c0fb75c3fb8f11f52daba73f44c8f398f8f3ce63",
    "331e3494110a1c5d67b4f76fcb3aeed8a2fcef2e90aff3b19cdf3457a1c4cfdbafbdd281f9c06d1d1f969d0f88f47ea746d3a9586373bb231ffb99ec49f7c245"
    "f38131e2fbd0af8d64b4c3efc03aef92f2609d17973c95d6451eacf3e2a97f8cf83ee0bb91dc1e07ba29fe431c687efb210e44461ec481f0d46fb51f174ccf94",
    "e93d9d6fd73ead5344fbf09eaff93e36bf1eb52fcca371eaa23c2b9dead74790f28c7c2b71c1898e56714f3aecc7b2511e29bfbe5b1e764279a5100ce5e972a9"
    "5396521775c145f9f8d07f8d64d7396baf23e4794cfcf9febb8ef2ce5dc7cd2e90a7f371f9efbacd108ce304fff20780f74ec7fb6d695fa68bf5ecc3a3dac3e3",
    "5a341a0c345b0ce0fddae1fdc788fa601d57a5b145f9eb170f84755c3be5c13a2e9efac788ef43bf36925d71fedb324fb8693c08e609f3db0ff30432f2609e80"
    "a77e88f3cf6fbfc1ee30deabbe28ce2fb3c2ac8438ff53f27f596105f3463877cd4e79a4f09ca6d3d193f3b3345bc9c6fa5c342ac443859c8bfc7ae8bf46ba9d",
    "717e1de521cebf749e8e663304e33861f0df9d8ff7bead74703b767ee4f745cfcf395f970bc45b2317f9ef80f7468238fffcf6419c5f2588f33b431ec4f9f1d4"
    "3f467c1ffab5916e679c1fdf3ce1a6f1209827cc6f3fcc13c8c88379029efa9d1ee747f9efcbda1d0af7f47b577cd73f1c8be159792aa8659857cbc70db5bccb",
    "a9e5276d62eb02740df2ff17cd33273a5ac13c733c867501e7e37faf566b3403dd5abe5c284945712395e2f6032ec27fe8bf4632dadb5d6cfe3edcb38e9267e4"
    "c33debcf2a4fa5759107f7ace3a91f70df48467bf3dd92388feeddc37af0b2711edd6608faf97ff1ef6f03de3b1def3b5ba962ab51ac647692b98d9d4aadb8d5",
    "6a165c747e0fe0bd9150786ff57e963710f23c26fee2f560f5bddbb20e6cd5ff3f5c205fe7dbb05e447a3cf80fb887d1f9e3c15e65e34c0c8c9a74e3fcfce8c0"
    "1fc8ee240f1f26dc331e407f9e5fea64b4bf2d6ce303dcdfa512dcdf659bbc19ad8b3cb8bf0b4ffd301ecc2f7532da5fda75f1a19bae0b407c687efb213e4446",
    "1ec487f0d46fb51f174ccf94e93d9d6f571e10ca0e96b53b549e8d9e07f4daf50fc3bdb0fa8fa8969e1eb6f1e02ea21d1e13df341e488cdca6bb4c891d31b136"
    "533f939d3a2f282d90a7f3ad8e075f5098167924b84efcaf7ffb7d9817387d5c08a67c5ca8102a162ae98a5c390ab6f60e7a8a8bf609407f9e5fea84ca17b26a",
    "7faf999e29d37b3adf340e08b4d462857afbcca9f88f392eb4cc3dbf573a231b17bafc9db70f7e01f86f933c52f87f313ccfecd0c9666bcb57cf27c45227d90f"
    "9dc33ac1adebcf44e707d477c26af98656dec7b61fe025443b3c1aa7c989b38bde9dba1f20869467e45bc93398e988bc7f00e704d9288fd8b96fbd50bedce3e2",
    "5b67d176b9982a29bd78bc9e740fde43ff3512ec0780fd004ffb1d4bf8f9b01fc04679b01f004ffd80fb46b2eb7cb86f20e4794cfcf9ebbdba77efdcfd00f905"
    "f2743eaef55edd6608e2fd0f8f5e07bc773aded7dac1c2b1c0298d92c827fa427ab39688eea600efd70def3f46d407e7c3a934b6287ffdce9182f3e1ec9407e7",
    "c3e1a97f8cf83ef46b23d9753edc6d9927dc343e04f384f9ed8779021979304fc0533fe4ffcc2f75b26b1ff13d843c8f896f9e37c8322329159a631b535544a4"
    "96f69e53d709ca487946be653fe20b8a233e2f783e760ef302a78f077effd968279e8c665afbc3d2c9285d4bef1c28900fb486fd794297616c793f774ccfd4d5",
    "7b2a8795e52e2dc98c53f37ed2487946fecde28953dd4c238aba9648de1317bef3ce8780eb4ec7f5f3a38c9ce4ce2a497f532a71834e7e5718155db4ff0b707d"
    "7ea99311d7239007a47d0e7940f34b9d200f888c3cc803c253ff18f1fd65f55845d4ef31f1ed1807eeb1f294df92688eac1d8e1f12cbef9ffec42605f9fda8bc",
    "81c93fde998ec8efe77d04f8ee7c7cdf1a66b9e4d9a0d1c9048f87bb0dc91f104a41c8ef5f83fe3b257c799ee0d7a3e419f9e0d73fab3c95d6451ef8f578ea1f"
    "23beef18bfbe26f685864cd8af2f621b0f7e0f21cf63e27f613cc84c67348c14e3269aa1f0f9fd2f9a9e9fb447e5d4dbf42c8108573e4fc1f44c99ded3f9d6c7",
    "83eb0a231ae7ffe86b2f439cdfe9e34052d82f442347b911cb0ff39d6e83cf2bb90b17c5f9c788efc3386024e33870882dbeb3c80f9f2880a787abc379abf3c3"
    "38529e916f697e38d311f1fc9c47af02be3b1edfa59eafdb61e540840f164242a176bcb957915d749fe318f17dc0772319edb04214dfa797b703be3f1ddfb5eb",
    "da49e2fb8f01df9d8fef2dfa6128bf7994eb856a1125b645e7034ca008f9f857f5ad559eceb573fa51f200d755025cc7254fa5759107b88ea77ec0f5f9a54ec6"
    "fccb1cc463969407f1185cf2545a1779108fc153ffcf10df5f568f34a27e8f896fc3fed97b035a9a1da55ced4a62c3f4bb4e11edc68bf3756cebafdf42c8f398",
    "f813e554274aa936458913c56e551c30529313cfabf5a9565677eedaf886f2f4fa4f16c8d3f9371c0754b37a8ae6c8e7e58c7ff2eb97607c70faf820ef258689"
    "f86854d81dfa0359bf2f568c6cf8603fedb3fbfd58eedd9af66f9e6d546585e9aef67c1d943c38475f25179fcf07e7e8db280fced1c753bf555c2f22eaf798f8",
    "78703d91cf5679b14173ba9b46d8febe7985eb5d447dcbeaed65d333657a4fe7373bd5b3ea04cd92dab353f3ecc9dac995d6566027979d9fbff24bc07d9be491"
    "c2fdfa4e3cf3b0be77d0eaf977b6a5ec512c3038965d94670ffd797ea9935df7a9dc45c8f398f8706faed3cfd9837b73ed9407f7e6e2a9df59e3c0aafdffbbd8",
    "fcffdf40c8f398f893916fd0b8360170aaffbff43e5b5cfe82a6b515c4f3c1ffb7511e29dc2fa62fa287078993e8f91e273cdcebc577b2f239c47dd6b03f4f09"
    "fc7ff0ff8ded06ff7fb5f2c0ffc7533ff8fff34b9dec5ad75de47ff3b42c273756e7ef7f66515e0e29cfc8c76317aab6a64641d01e0ec0cf773ebed38ded6061",
    "fbb87312c9a7b29bcc56b6dbbb68b928ceeff47e3c46b46f59bbfb32a2fdfafaeaa9e1d374582d535a99d0cab7d5f232ac3d6f6b65522bff48e3ebdf7b577bd6"
    "ebc377befea27ca0ae78ce38391f28829467e4df2c1f48eccade998656b12efcd1e741980f387dbc386a579860a958da3a2817fbc7f1bd938a583a74d1b93b4e",
    "1f2f4e11edc36b77ef60c3f31710f23c1a479e6ed6a500cf9f96df29eb9b752992761086fc4e1be511f3ffe974f4e4fc2ccd56b2b13e178d0af15021e7a2f80e"
    "e0f9fcf61bedee3d62785e17e55909788ec6f3898e5611df033cb7511e293cef96879d505e29044379ba5cea94a5d4455d70d13e5da7e37917d1be65edee7944",
    "fbf5788ec7f0693eac964958bfd54a58bf9d5fea04ebb764e4c1fa2d9efa613c98dffeb9e3c1e57e58fd670f9bbfbfe89c1cb92729d3d2a9fe7e1429cfc8b714"
    "bf99e8887c5e17c46fec94470adf03a944b3ed0b663af9c4664629140561108bc3faed557d5944fd1e13ffe6eb69d3f3547885e519b9da66b8aeb6b646d6ee76",
    "b1f9f75f47c8f398f826ffbec6d1130f75a60595effabc1d8bfefd5b538d79558d118ef7bdfaab9f825f7f5b71ffab08791e139f11e3db7caeb97db177261d8b"
    "074cadb37fd8a700f7d7a81f5338ef41b482fbacc0b102a3f25715d77196bda81a236c2fc13b7ffa0bc07d9be491f2f7a3353a22477381c280db2e0a8ab27d74",
    "d6ebb9e87c6567f5e355e1fe9b615c76f72a429ec7c437e1be3c51192d255a8ef5f37791f28c7cab76a22b6a05f7dd7e7aff43f0f39d8ef7be83d6c640d9dd11"
    "a5565b2e25e95634991940fcfed6e0fdc788f62d6b7728dcd3e3f73ec3a799f0acb8caabd74a3deffe52cfc74fad7a7cd0e6058a63e7037b0be4e97c5cf30185",
    "f8fa6ef8fffeec5d181f9c3e3e745b19b9b9352c0efc3b8989258662bde4a19bee4377faf8708a681f5ebbdbc71607bae1fde733bc57dad3ac15919bde41406a"
    "7dd97c0f0bb1fddc58ece54a63abc8df7f3ff12fb0feeb74fccf362a3bf9dc763f95dc6de47a62be70181f6dbae8dc7dc0fff9ed37da5d111bfe7f1b21cf63e2",
    "cfc3ffbecc5425a639fd7f657ebf53f23b557bb9a631e2fefff8af1b7f03febfd3f1bf5b1be4fc3bfe1257da38ce46eb3bbead86187751be3f9ccf33bfd4c968"
    "7f416c799d4b9dcfe35f833c1f7c79bf7e389fc73df248e1fb459d3df1e772b9e0764cd91b6de7339d7c2c01ebbdb7a61f138dff5f9dbfa397ef69a576de0eb5",
    "a595f8c601386f4725386f67913c95d6451e9cb783a77ea7e37f17d13e7bf6f3eaebbe7f0cfb79b5d229f11ed8cfeb6e79b09f174ffd301ecc6ffffcfdbcb1b0"
    "fa4f0cf6f32e290ff6f3e292a7d2bac883fdbc78ea8778fefc5227bbced9bc637aa6aede533972576af0dd64c8a9f1fc82e99932bda7f3f1d885aead073c417b",
    "807bb56c94476adf6efe309e6c04a4d1e179b3302a96f3a34426714c391fdfff1f9e4f7f65",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 131920U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_EOM_modal_info.c) */
