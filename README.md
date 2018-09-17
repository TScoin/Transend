<h2><strong>Trandsend Coin Staging Repository (Version 2.0.0.0)</strong></h2>
<p>More information at transendcoin.com Visit our ANN thread at https://bitcointalk.org/index.php?topic=3066505.0</p>

Transend is a modern cryptocurrency, with many features not available in most other cryptocurrencies.
Anonymized transactions using coin mixing technology.
Fast transactions featuring guaranteed zero confirmation transactions, we call it <em>SwiftTX</em>.
Decentralized blockchain voting providing for consensus based advancement of the current Masternode technology used to secure the network and provide the above features, each Masternode is secured with collateral of 5000 TSC
<br/>
<h3>Installation and compilation notes:</h3>
To prevent compilation errors in Linux OS, please execute these commands first from root source folder:<br/>
```sudo chmod +x autogen.sh
sudo chmod +x share/genbuild.sh
sudo chmod +x src/leveldb/build_detect_platform```

After that you can use normal (usual) command pack for source compilation:<br/>
```./autogen.sh && ./configure --without-gui && make```

Command above is example how to compile daemon under linux. Permissions issue will be fixed in one of next releases. We will additionally inform you about changes.
