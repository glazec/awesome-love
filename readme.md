# Awesome Love [![Awesome](https://awesome.re/badge.svg)](https://awesome.re) [![jaywcjlove/sb](https://jaywcjlove.github.io/sb/lang/chinese.svg)](readme-cn.md) [![contribute](https://img.shields.io/badge/-contribute-brightgreen.svg)](contributing.md) 
There are various Awesome Lists in github, and there are numerous programs about love, but there is not a awesome list about love in github. Thus this repo exists.

This repo will about love, including programs about love, website about love, interesting ideas about love and real love story or experience.

## Table of Contents

- [Websites](#Websites)
- [Programmes](#Programmes)
  - [Node Mail](#node-Mail--)
  - [Love-You](#love-you--)
 
## Websites


## Programmes
### Node Mail ![stars](https://img.shields.io/github/stars/Vincedream/NodeMail.svg) ![last commit](https://img.shields.io/github/last-commit/Vincedream/NodeMail.svg)
Use node to send a warm mail to your girlfriend everyday with scheduled. In the mail, there are weather reports, how long we have been together and the daily feed from ONE. You can also customize the program to build the unique feed for your lover.

![example](https://camo.githubusercontent.com/eb44a62a47273be4b9aef2e6bdb54c4d446ff680/687474703a2f2f626c6f677069632e76696e63652e78696e2f32433937313636332d344330322d344344442d384531332d3143373142383137304542342e706e67)

[Read more about...](https://github.com/Vincedream/NodeMail)

### Love-You ![stars](https://img.shields.io/github/stars/IonicaBizau/love-you.svg) ![last_comit](https://img.shields.io/github/last-commit/IonicaBizau/love-you.svg)
"I love you" in different languages.

#### example
```js
const loveYou = require("love-you");

console.log(loveYou.random());
// Мин сағаа хынчам ‎

console.log(loveYou.say("english"));
// I love you

console.log(loveYou.say("punjabi"));
// ਮੈਂ ਤੈਨੂੰ ਪਿਆਰ ਕਰਦਾ ਹਾਂ

// Promise-compatible :)
new Promise(function (answer) {
    answer(loveYou.say("french"));
}).then(function (yay) {
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

[Read more about...](https://github.com/IonicaBizau/love-you)

## License

[![Creative Commons License](http://i.creativecommons.org/l/by-nc/4.0/88x31.png)](https://creativecommons.org/licenses/by-nc/4.0/)

This work is licensed under a [Creative Commons Attribution 4.0 International License](http://creativecommons.org/licenses/by-nc/4.0/).
