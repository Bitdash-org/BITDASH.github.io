# Bitdash integration/staging tree
==================================
You can find Bitdash.or @
http://www.bitdash.site.live

Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2011-2013 Litecoin Developers
Copyright (c) 02-13-2022 Bitdash Developers

What is bitdash?
----------------

Bitdash is a upgraded version of Litecoin forked from the original Bitcoin. Bitdash to is a fork from Bitcoin as well.  The coins hashes using scrypt as a proof-of-work algorithm.  - 10.0 minute block targets

Features:
 Bitdash will be a less volatile coin steming from lower transaction fees and higher coinvalue transfer at near feeless transactions costs. Also, Bitdash will securely mined by less drag on systems and  more stable due to its length of time increase of 7.5 minutes during and between per block creation allowing for lower cost mining and proof of work processes
 Bitdash will produce four times the amount of coins mineable thru blockreward than Bitcoin and to compensate for lack of high transaction fees to miners we have developed Bitdash to start with a 500 coin block reward. it pays to mine Bitdash solo!

Coin Settings for the blockchain:
- subsidy halves in 840k blocks (~4 years)
 - ~84 million total coins
 - 10000000 largest tx in bytes without size fee
blockchain
 - 600 desired seconds between blocks 
 - 0.001244 starting difficulty 
 - 256000 seconds to difficulty change 
 - 250000 miner-configurable limit on block size in bytes 
 - 1000000 hard limit on block size in bytes 
 - 500 coins per block
 - 2016 blocks to retarget difficulty
 - node pool.bitdash.network:3333

For more information, as well as an immediately useable, binary version of
the bitdash client sofware, see http://www.bitdash.site.live.

License
-------
Bitdash is released under the terms of the MIT license. See 'License'` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------
Bitdash is Brand-new and is open source blochain development and will pay those offering to help Bitdash attain values that should be comparible to any other litecoin based cryptocurrency at the least. ofcourse Bitdash is counting on all of the coin supporters and will be grateful and welcoming to have you in any instance.
Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the bitdash
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of bitdash.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake BITCOIN_QT_TEST=1 -o Makefile.test bitcoin-qt.pro
    make -f Makefile.test
    ./bitdash-qt_test
### INTERESTED IN JOINING THE DEVELOPMENTAL TEAM ###

Reach out to me 
  1) email me at gq1981inc@gmail.com 
  2) Fork and create a pull request  
  3) Create a pull request and simply open or raise an issue

I would like to thank all the developers and coders at and on github.com without you I personally wouldn't have ever gotten past solitaire on windows! Thank you for open source!
