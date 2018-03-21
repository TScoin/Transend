<h2><strong>Trandsend Coin Staging Repository (Version 1.0.3)</strong></h2>
<p>More information at solaris.com Visit our ANN thread at https://bitcointalk.org/index.php?topic=3066505.0</p>
<h3><strong>Coin specs:</strong></h3>
<p><strong><span style="color: #800080;"><em>Algo:</em></span></strong></p>
<ul>
<li>Xevan</li>
</ul>
<p><strong><span style="color: #800080;"><em>PoW Block Reward:</em></span></strong></p>
<ul>
<li>[block# 2-10000] 23,4% MN (7.02 TSC) / 70,0% MINER (21.0 TSC) [block# 10000-963334] 23,4% MN (7.02 TSC) / 65,0% MINER (19.50 TSC) / 6,6% Available to the budget system (1.98 TSC) / 5,0% Dev's fee (1,50 TSC)</li>
</ul>
<p><strong><span style="color: #800080;"><em>PoS Block Reward:</em></span></strong></p>
<ul>
<li>[block# 8000-Infinite] Variable based on SeeSaw Reward Mechanism</li>
</ul>
<p><strong><span style="color: #800080;"><em>Block Time:</em></span></strong></p>
<ul>
<li>180 Seconds with Retargeting every Block</li>
</ul>
<p><strong><span style="color: #800080;"><em>Max Coin Supply:</em></span></strong></p>
<ul>
<li>PoW Phase: 28.900.020 TSC</li>
</ul>
<p><strong><span style="color: #800080;"><em>Max Coin Supply:</em></span></strong></p>
<ul>
<li>PoS Phase: Infinte</li>
</ul>
<p><strong><span style="color: #800080;"><em>PoW Phase 1:</em></span></strong></p>
<ul>
<li>[block# 1] 100000 Premine to support the listing to exchanges and diffenet marketing operations.</li>
</ul>
<p><strong><span style="color: #800080;"><em>PoW Phase 2:</em></span></strong></p>
<ul>
<li>[block#&rsquo;s 2-963334] Approx 2006 Days (5,4 years of clean mining)</li>
</ul>
<br/>
<p>&nbsp;</p>
<p>+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++</p>
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
