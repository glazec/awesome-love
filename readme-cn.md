# Awesome Love [![Awesome](https://awesome.re/badge.svg)](https://awesome.re) [![contribute](https://img.shields.io/badge/-贡献-brightgreen.svg)](contributing-cn.md)

Github 上有各种各样的 Awesome，也有各种各样自称为恋爱神器的东西，但却没有一个关于恋爱的集合。因此有了这个代码仓库。

这个仓库将围绕着恋爱，包含与恋爱有关的程序，网站，各种小想法和恋爱小故事。

## 目录

- [网站](#网站)
  <!-- - 展示 -->
    - [Loveyue](#Loveyue--)
- [程序](#程序)
  - [Love-You](#Love-You--)
  - [Node Mail](#node-Mail--)

## 网站

### Loveyue ![stars](https://img.shields.io/github/stars/wuxia2001/loveyue.svg) ![last commit](https://img.shields.io/github/last-commit/wuxia2001/loveyue.svg)

这是程序员表白系列中的网站表白，旨在让任何人都能使用并创建自己的表白网站给心爱的人看。 此波共有 8 个表白网站，可以任意修改和使用，源码已上传，演示网址如下。

![示例](https://raw.githubusercontent.com/Yuandong-Fei/awesome-love_2/master/images/wuxia2001.png)

[更多。。。](https://github.com/wuxia2001/loveyue)

## 程序

### Love-You ![stars](https://img.shields.io/github/stars/IonicaBizau/love-you.svg) ![last_comit](https://img.shields.io/github/last-commit/IonicaBizau/love-you.svg)

多种语言的我爱你。浪漫不止一种方法～

#### 示例

```js
const loveYou = require("love-you");

console.log(loveYou.random());
// Мин сағаа хынчам ‎

console.log(loveYou.say("english"));
// I love you

console.log(loveYou.say("punjabi"));
// ਮੈਂ ਤੈਨੂੰ ਪਿਆਰ ਕਰਦਾ ਹਾਂ

// Promise-compatible :)
new Promise(function(answer) {
  answer(loveYou.say("french"));
}).then(function(yay) {
  console.log(yay);
  // Je t'aime
});

console.log(loveYou.list);
// [ 'I suɔ mo',
//   'Ek het jou lief',
//   'Mo dow',
//   ...
//   'Kenkamken',
//   'Mena tanda wena',
//   'I love you' ]

console.log(loveYou.i18n);
// { adangme: 'I suɔ mo',
//   afrikaans: 'Ek het jou lief',
//   ...
//   punjabi:
//    { by_man: 'ਮੈਂ ਤੈਨੂੰ ਪਿਆਰ ਕਰਦਾ ਹਾਂ',
//      by_woman: 'ਮੈਂ ਤੈਨੂੰ ਪਿਆਰ ਕਰਦੀ ਹਾਂ' },
//   quechua: 'qanta munani',
//   romanian: 'Te iubesc',
//   ...
//   english: 'I love you' }
```

[更多。。。](https://github.com/IonicaBizau/love-you)

### Node Mail ![stars](https://img.shields.io/github/stars/Vincedream/NodeMail.svg) ![last commit](https://img.shields.io/github/last-commit/Vincedream/NodeMail.svg)

用 Node 写一个爬虫脚本每天定时给女朋友发一封暖心邮件。在这封邮件里，有着天气预报，在一起多少天了，还有来自 ONE 的每日订阅。你还可以对代码进行扩展，为心爱的她用心地定制一份信息流。

![示例](https://camo.githubusercontent.com/eb44a62a47273be4b9aef2e6bdb54c4d446ff680/687474703a2f2f626c6f677069632e76696e63652e78696e2f32433937313636332d344330322d344344442d384531332d3143373142383137304542342e706e67)

[更多。。。](https://github.com/Vincedream/NodeMail)

## 开源许可

[![知识共享协议](http://i.creativecommons.org/l/by-nc/4.0/88x31.png)](https://creativecommons.org/licenses/by-nc/4.0/)

本项目采用[知识共享协议 4.0-署名-非商业性](http://creativecommons.org/licenses/by-nc/4.0/).
