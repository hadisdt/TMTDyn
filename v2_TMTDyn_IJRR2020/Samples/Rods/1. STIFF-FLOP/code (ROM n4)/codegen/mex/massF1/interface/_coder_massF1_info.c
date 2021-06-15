/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_massF1_info.c
 *
 * Code generation for function '_coder_massF1_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "massF1.h"
#include "_coder_massF1_info.h"

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
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("massF1"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (4.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/massF1.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737430.059224537));
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
  const char * data[32] = {
    "789ced5d4d6ce3c615e66e77832c8ab4049adffea4d9a458a448b0922d59f21608a07f4bb6f567696dd99bd4a6244aa2cd1f89a4645997fa98430e39153df490"
    "6352b4c5b6972c9a20506fbd16688aa2a70045d04bd15b73ae288ab639ab5969cd116552ef018b11fdc4f9466f67be9979f3f8485d4ba5af5114f59dc1bffffe",
    "82a27e15d5ae28ea394a177a545ea7cc82eaaf8dca00726dc84dea86e9be6b23bc5f8fae2b92a8b25d55bfe03991cdb485322b0f2e444660cfaaa94a022732a2"
    "5a3c69b294cc2a12df61ab434d8de3d92227b09bd2858b2437b81012175467179a4afb1c6db095a3425ba0e48672de5cfee20535b28f260f31bfffc694f6c960",
    "ec4323fa07f1f73c0d49603d0da6ca79d2f1b5b07222563c49ed2adc56a562ba183b113d51a9ca5ebc8eb02ae3e92cddf57a2a9a46601425b17457386fff3f30"
    "ed7b66caf67f17d3fe5ba3b27bf18fa14a68589ebeab97fda25e864625951b95995199187d3f35ba8e8fcaece8ef86dea8c7b83f392a5321e3771e607ec7b4ff",
    "4f37916beaec7bbaa6291d0f7b2729bc6790eb733c5d5395da659e3dc7fbd8225e188b67d63f486d96065db1adc81e5eaa30bc271d2e6e86239ead65efd26ad9"
    "a34a125f96ba1e56e03d3c571e74389567ca1ea9a9788616d2bade5026d969dafe879686dca29e1d7d3afde0cbc0dfc3f6e1e9b22878c6f8be6cbf7b11834723",
    "fa9dc6361b28e40b2b5bc57cbb14dbd8db960af7a3e7edc84dc099d40e0a736d57fd4e1dbf4d4cbba6ed6fd7916b438cf98336fdf54e482f5f3fe3f5534cfdd3"
    "daedc7187c1ad16bd3a77c971b2c4a6491e1ef724aa4cdf16a4a1c2c4b5899abcc8df71f59c4dbc2e299f54fd16fb47f6f0dede579cb3098073598d1916c9c07",
    "3efddf3fbf847960467876cd03d94e2b1aae253babc5bcffa41217c4e5c41e9f74cf3c60753fb18ea99f46f496e781db355e3516bd94cdfdee341d22d5ef5ec2"
    "e0d1881ee17f656032468ed7e7c6fb57b09f8ce57dc35073e0fbdfdff939acfb9dcef7deadfa52475dbf27c9f586524830f54822d58901df2fce38a64c7c8fdb",
    "6f4c6bafe7906b0af99ea1e714515fa8aa9a67717e7e1dabfd2385c533eb9f723d50e3ba6cb5290dba87c764a939f877a8dfedbc02eb7aa7f3fc9aefe8a4d0aa"
    "737cb4183dda6a45eac5a3fb71e0f985e5791cdeb4f67a16b9a6cebea76b38a5c60d36350da7faeb63583cb3de0aafeb16d27b02f0b93bf0acf2f90b183c1ad1",
    "775a6cbcd9a928f74ac73e49ca298525dfee1ee51e3e778adff59ccf6fd73859516b9cf9771c60da49b4fff50f88f9eb5fc5e0d1887e608cfd8111f66b92cc4b"
    "52735feab0728d978ef72bdaf9bef5f53c2ab8f61862e0f52f8967d4bf3701cfd05fcebf37ea464fb09cfdeb82fee75fdf043fce559d0fa65ddf2b1bf16e3cd6",
    "ebe5d6bbcbfef4b2379a0f2f79e3ee990fbec2dc3fad1d4f31f5d3887e76e3faf693bfb0df60f9262bdbdb4fd788ed076e20d7d4d9f7748db6dad5ca399f2b70"
    "6295eda644f5ac1d1f596c4768423b0cbdb57dc25dc1c67ef108ce719d3f1f144e9a9cb0d2dada59e2ca557f6a2f9f4b2fb9c9afff11e6fe051eb703f1bac68f",
    "3f693ea93498e1c938f8f1c7978680dfc71e3cf0e393a9ff2bccfdb0ce1fff7ba7eba7e4e2f427f9e1073f5c60baf39b07aea8dfdfe83ffce08347b791dd7eff"
    "fea3976e819fc7e9fc2fb7bccd434ef18785402e28e6ca25dfc6b61201fe07fe378bf9dcd75efee744e0ff49fccf89b6f3ff67c0ffcee7ff3ab31bccfa7632ad",
    "6039ac465798ac9ff5e7d7dcc3ff70ee3bbe34c4d4ffbe3a20c6eb4febbfb78af7b4f13c1f59c40b61f1cc7a07f9fbc04f3f433cf0d393a9df817cde63654969"
    "0be6df81f3a7cfe439dcfe287f43e83ddbf8bdd6e679ad8478cd71eb76a5c9c8b5b6e8d1ac64f7bafdf40fe0b7773ecfab8165612bb6b3d6d8f349bd8e9a1612",
    "e925d5453cff10733f3c577bb1df9dc7dfbf8fa96f5a7bbd89c1a3113d12ffc2349bfc49841319f9a4309cf1126db1a2729248eadc1897af8846f4b511ee7e83"
    "11ab83898054fce68309f886deea7a016bc8d1c9ae8df3c31f3f91c1afe3f4f9219f8faa47b9436fb0bc97d9c8948bcc6a36ad24dc333ff431f7c3b8368bb91f",
    "0689cd176f60f068448fce171d89ab8665993949f08caab22227d687df9b577cbfd5fde4f6043c436fb91f8d31dcc5bc8007987612ec3fa7df94615e70fabcd0"
    "5b4ffaa2f79b25215fce56c3a55a32dd15b22ecac763753c1731f5d388defabe41f710edd7788951f7cf7610f63ee7b50779792ce2b9ff396fc8cb334b3cc8cb",
    "43a67eabbc9fc7d44f237aebbc2f4a6a86c964e5d46068d70db791cd791b76889d034ccab3cc29222352ce3d078862f1cc7a4bf13b9a8decf7f3c079ef0cf1ec"
    "cadbd00ab7b382ffa4e4f76ec9cbede8127baf236428f7f03a8c5fb398fbdb4f88e56980bcca383cb31ef22a3f2d9e2e8b82077995c9d40febf9f1a521b8f5fc",
    "29a6be69edf6030c1e8de8c7fa71eed67849d22de0547f4e168b67d65b9d07ded22de6195a6c3009d8c8ffbf81f81fe7f37fb911c895445ead162421de1693be"
    "723cb2eea2b8fd2be897bd7af13fa71962fefbe7317834a247789f956569aa738b593d9f75c5d6fdcaa0796cd5a3b3fd88f351ea1fda6c0eebfe2f3676c18fef",
    "74deef8af9e35eba2944d65ab184b21a5d6f7524af8bfcf856793f83a99f46f4b37a3fe301a67d64799f5c9eb56f61f0e89146d11ebea59cebbf0f63f1ccfacb"
    "faffb4287ec578f896b2b31f84fe7cff0eace39dcee70c938cec1d1f25b9ed74b4cd4722622c98cbb888cf61fc9a6556fefb57307834a21fefb731587e7e7198",
    "56e7fdf4043c434fca6f63f419fbfa4b3ff4cb4f80ef9dcef7de956460357abcb3ec8d1c1ff3de26ef8fd57b2ecab7037c6f161cdf7f88a96f5a3bfd14834723"
    "fa71cf6b991f444889399ea9b0a3efbbe5b9ad7727e01b7a22cf778c35a8edf978cadf3e04ff8ed3e70789d93c2c33cc5ab4ea5b3d544acb6c7aaf79e2a2fd40",
    "1f733f8c6bb398fbe1dbc4fc3d93dfb3a5e5265058a7fa7b92583cb3de5ade06c34a76e6e7093dfb0ec4e13b9edf8f77524a823fda4e2cd7e402df39ccae8bbd"
    "7c14f87db1f9fdaeebfc4097e57ff0038d6f3ff881ecc1033f1099faad8ee3c538c74dda768e5b919461e9d475bd1d7ec1818de6e1178473dc19e2d9c5e7cd62",
    "f73098557381609629160e8bf2da494574119fc3f835cbd53cc735581ece71a75dbf1b7dc6463f4e00d6efcee7fb55795361f295f4ee4e79b7548e4402fe5a9d"
    "05be5f38beff10531f9ce3ead2b788bf78fe4038c79d251e9ce392a9bf8fb91fc6b559aea69f9fdc3ee1b2fe20d8278c6f3fec13ecc1837d0299fa9deee7c7f5",
    "8369fb1dceef6ebc87e5e58b7fcc2921fd43562ffb0f88cd07af61da41237a643e9059a5c134d902d763a3dadb249579f98dac3ec75b988067e8adce078f19cc"
    "febc6d7ffdedc7b03f70fabc1058f3f2c15c309fdb4e6e2bdb3b81fac656cb4def6f81f13cbe34c4dcff5e2396c7e165e49a42be67e891794064e43a27561a47",
    "4ee57fc279f8a7c9e37066337be3064ebff7b3adbf01ffcf08cf2efe3fe91ea7ee31895a7dc55bc9c6a5c261a21d3c8e03ff5fb5f16cebfe807a3ba497af8fca"
    "3bc4e28326e5693632b739353e68d6795e876f6b1ce56ad304e283dc81679b1fa815cc165b7c6ce528d228e6d70a6a2b16abb8e87d5c307ecd825bdf9f62ea83",
    "3ccdd3e1419ee659e1e9b2287890a7994cfdc0fb6699555ce855c9cb8ccab4fe9d8797c433ea87bccca4f17459143cc8cb4ca67ee07bb3405ce8f8f6415ca82e"
    "1017ea0c3c880b25537f1f733f8c6bb3cc2a2ef4aaec132eeb1f827dc2f8f6c33ec11e3cd82790a91fe27fc6978698fb9ff78cffdfc7d437addd6e63f068448f",
    "ee1b148595d56d86e7aa9a29c2727df43da79e1314b17866bde575c46386b37d5f703d7a0cfb02a7cf07cbcb47bd7bb1442455dfec16f67ac972f2de960af140"
    "0b389e07721a2216f703f93e75817c9f93f07459143cc8f749a67ee0f5f1a521665e0f431cd0e8ef100734be3404e280ecc183382032f5f731f74f6bc77d4cfd",
    "34a29fc53c709b53347d5d66787bfb617fd7b6f87eed27d62888efc7c50d0c3e788636b2ff79de47c0efcee7f7956e9a4f1c75aa87a940a9bb5e9597fd622100"
    "f1fd0b307e352117e709eb7a1c9e590febfaa7c5d36551f0605d4fa6fe3ee67ec7acebcb525bac2a36afebf3c4e6831f61f06844ffd87c90d27634ac1ce50796",
    "a1c8adfb6f20d7e7edd1359506330c202215cf9343ae29e47b86defa7c70d160b6faf93f78f116f8f99d3e0f24c4cd5c24bc93e97142377bd8ac0a593573e222"
    "3f7f1f733fcc036631cf03f789f97726adc307061098eefc78deeafe3086c533eb2ded0f8736b23d3ee7d14bc0ef8ee777b9e56d1e728a3f2c04724131572ef9",
    "36b61517e5f1ec63ee077e378bb91f6edbcaefdacb1981df9fccefa3d731dac9ef9f01bf3b9fdfebcc6e30ebdbc9b482e5b01a5d61b27ed69f8778fcb3fa162a"
    "4e8722f75e46e0755d80d727e1e9b22878c0eb64ea075e1f5f1a628ebfcc803f664a3cf0c790c2d36551f0c01f43a6febf60ee9fd68e0ca67e1ad1cfe0f9d9db",
    "1d461ea652de6fca5215f95d07987693e5f90ab1f3d757317834a21f18677f6094fd9a24f392d4dc973aac5ce3a5e3fd8a6695f9e55deb5f12cfa87f6f029ea1"
    "bfe43ca077ab2758cefeb89cfee75fdf84f9c1e9f383b211efc663bd5e6ebdbbec4f2f7ba3f9f092d745cfd33ec4dcef94f76e3531ed9bb6df5dc7b4dfc8ab6f",
    "e2c3d3fba1611922771e3b693daeb464552b9d1a6f1fc1e299f556f2f46936b29fdf43904f7f867876f1bb7f2d5e6b7803a9c36cdc9752737951ec44632e8abb"
    "84f16b16737fbb436c7dff430c1e8de81f8baf8c4902c3897159964c7e17dcbc66575e4dabeb02bbf2a7990c686ffeb43ffda70ceb7ba7f33f9f16aac291cca6",
    "9bd11d75556a576bbb6dce45fe1f18c7e3db6fee770162eb79c893a30be4c99984a7cba2e0419e1c32f5039f8f6fbfb9dfbd73c6e756f360be81c1a3113d9a07"
    "b32371d5b02c3327099e515556e4443d13e6bcfcf757ec3d9af8f3fd3186b3f7bdb8d4e937b0ae77fc3cd05b4ffaa2f79b25215fce56c3a55a32dd15b2e0d759",
    "10bfce9b2152fded790c1e8de811fe67517fce81c5763c6ddcce15cb9f30cd7b93d9d15281baf83b0e30ed24e8c7f9626317f8dee97cdf15f3c7bd745388acb5"
    "62096535badeea485e17bd0f05f8de2cb37aefc9f7317834a21fffde13e3b4767eeb7cabfbc3a9cff309bdf7c4e83336c6e57cfaaf7fc3b9ed55e5fb17307834",
    "a25f6d6f16bcdbbe6c584ef9e262697d2b206e0528e0fb45e3fb0f31f5c1fb1175e95bc45fbcf7a8c1fb11678907ef4724537f1f733f8c6bb3b87d9f60e0dbfd"
    "7e44d82790c6d36551f0609f60adfeff032ef8ceed", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 82864U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_massF1_info.c) */
