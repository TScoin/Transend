<h2><strong>Trandsend Coin Staging Repository (Version 1.2.0.0)</strong></h2>
<p>More information at transendcoin.com Visit our ANN thread at https://bitcointalk.org/index.php?topic=3066505.0</p>
<h3><strong>Coin specs:</strong></h3>
<p><strong><span style="color: #800080;"><em>Algo:</em></span></strong></p>
<ul>
<li>Xevan</li>
</ul>



<p>&nbsp;</p>
<p>Transend is a modern cryptocurrency, with many features not available in most other cryptocurrencies.</p>
<p>Anonymized transactions using coin mixing technology.</p>
<p>Fast transactions featuring guaranteed zero confirmation transactions, we call it <em>SwiftTX</em>.</p>
<p>Decentralized blockchain voting providing for consensus based advancement of the current Masternode technology used to secure the network and provide the above features, each Masternode is secured with collateral of 5000 TSC</p>
<br/>
<h3>Installation and compilation notes:</h3>
<p>To prevent compilation errors in Linux OS, please execute these commands first from root source folder:</p>
<br/>
<p>sudo chmod +x autogen.sh</p>
<p>sudo chmod +x share/genbuild.sh</p>
<p>sudo chmod +x src/leveldb/build_detect_platform</p>
<br/>
<p>After that you can use normal (usual) command pack for source compilation:</p>
<p>./autogen.sh && ./configure --without-gui && make</p>
<br/>
<p>Command above is example how to compile daemon under linux.</p>
<p>Permissions issue will be fixed in one of next releases. We will additionally inform you about changes.</p>
<p>Masternode setup guide now located at https://transendcoin.com/index.php/2018/03/15/masternode-setup-guide/</p>
