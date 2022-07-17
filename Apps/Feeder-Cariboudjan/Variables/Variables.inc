[Variables]

FeederRSSNum=3

;--------------------------

FeederVersionNum=1.0

;--------------------------

FeederBoxHeight1=(105*#DroptopSize#)
FeederBoxHeight2=(60*#DroptopSize#)
FeederBoxHeight3=(80*#DroptopSize#)
FeederBoxHeight4=(90*#DroptopSize#)
FeederBoxHeight5=(80*#DroptopSize#)
FeederBoxHeight6=(90*#DroptopSize#)
FeederBoxHeight7=(105*#DroptopSize#)

;--------------------------

FeederXOffset=(400*#DroptopSize#)

;--------------------------

FeederID1=Lifehacker
FeederSource1=Lifehacker
FeederURL1=https://lifehacker.com/rss
FeederSubstitute1="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","<br>":"","":"No data"
FeederRegExp1=(?siU)</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<p>(.*)</p>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.1=0,0,0
DropdownFontColor2.1=255,255,255
DropdownBGColor1.1=255,255,255
DropdownItemHL.1=148,179,48

;--------------------------

FeederID2=Yahoo
FeederSource2=Yahoo! News
FeederURL2=https://www.yahoo.com/news/rss
FeederSubstitute2="T..:.*":"","#CRLF#":"","":"No data"
FeederRegExp2=(?siU)<title>.*<title>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>(.*)<pubDate>(.*)</pubDate>

DropdownFontColor1.2=0,0,0
DropdownFontColor2.2=255,255,255
DropdownBGColor1.2=255,255,255
DropdownItemHL.2=96,1,210

;--------------------------

FeederID3=WSJ
FeederSource3=Wall Street Journal
FeederURL3=https://feeds.a.dj.com/rss/RSSOpinion.xml
FeederSubstitute3="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","":"No data"
FeederRegExp3=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.3=0,0,0
DropdownFontColor2.3=255,255,255
DropdownBGColor1.3=255,255,255
DropdownItemHL.3=18,18,18

;--------------------------

FeederID4=CBC
FeederSource4=CBC News
FeederURL4=https://www.cbc.ca/cmlink/rss-canada
FeederSubstitute4="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","<img src.*title='":"","' height.*":"","&#39;":"'","":"No data"
FeederRegExp4=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.4=0,0,0
DropdownFontColor2.4=255,255,255
DropdownBGColor1.4=255,255,255
DropdownItemHL.4=230,10,10

;--------------------------

FeederID5=NewYorker
FeederSource5=The New Yorker
FeederURL5=https://www.newyorker.com/feed/everything
FeederSubstitute5="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","":"No data"
FeederRegExp5=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.5=0,0,0
DropdownFontColor2.5=255,255,255
DropdownBGColor1.5=255,255,255
DropdownItemHL.5=8,8,8

;--------------------------

FeederID6=NYT
FeederSource6=New York Times
FeederURL6=https://rss.nytimes.com/services/xml/rss/nyt/HomePage.xml
FeederSubstitute6="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","&gt;":">","":"No data"
FeederRegExp6=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.6=0,0,0
DropdownFontColor2.6=255,255,255
DropdownBGColor1.6=255,255,255
DropdownItemHL.6=0,0,0

;--------------------------

FeederID7=Lincoln
FeederSource7=Lincoln Project
FeederURL7=https://lincolnproject.libsyn.com/rss
FeederSubstitute7="<a>":"","</a>":"","<![CDATA[":"","]]>":"","<a href=.*>":""," ..:.*":"","#CRLF#":"","    ":"","<p>.*400":"","</span></p>":"",";.*>":"","^\. ":"","":"No data"
FeederRegExp7=(?siU)</title>.*<title>.*</title>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>.*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>

DropdownFontColor1.7=0,0,0
DropdownFontColor2.7=255,255,255
DropdownBGColor1.7=255,255,255
DropdownItemHL.7=66,78,96

;-------------------------------

FeederTitle1=The Attorneys General Racket                                                            
FeederLink1=https://www.wsj.com/articles/the-attorneys-general-racket-daniel-cameron-national-association-of-attorneys-general-11657917818
FeederDec1=A group of state AGs seem to have built an unaccountable litigation machine.                               
FeederDate1=Fri, 15 Jul 2022

FeederTitle2=Can Biden Correct Obama's Mistakes in the Middle East?
FeederLink2=https://www.wsj.com/articles/biden-saudi-arabia-visit-obama-israel-abbas-west-bank-john-kerry-iran-nuclear-deal-liberalism-russia-syria-11657913174
FeederDec2=The opening to Iran, and the fiascoes in Libya and Syria, were devastating to U.S. credibility. But they brought Israel and its Arab neighbors closer together.                                                                                                                                 
FeederDate2=Fri, 15 Jul 2022

FeederTitle3=Elon Musk's Narrow Twitter Escape
FeederLink3=https://www.wsj.com/articles/elon-musks-narrow-twitter-escape-social-media-acquisition-eletric-car-space-tesla-11657917894
FeederDec3=His real businesses, Tesla and SpaceX, are likely to need his cash and attention in the months ahead.                                                   
FeederDate3=Fri, 15 Jul 2022

FeederTitle4=Ruy Teixeira Gets Political Asylum  
FeederLink4=https://www.wsj.com/articles/ruy-teixeira-gets-political-asylum-american-enterprise-institute-center-for-american-progress-robert-doar-11657919700
FeederDec4=A lefty scholar leaves a progressive think tank for a conservative one.                                                                                                                                                                                                
FeederDate4=Fri, 15 Jul 2022

FeederTitle5=CPI Doesn't Capture the True Cost of Living in Trump Country     
FeederLink5=https://www.wsj.com/articles/cpi-doesnt-capture-true-cost-of-living-trump-country-healthcare-housing-rental-inflation-prices-11657898754
FeederDec5=Expenses have risen much faster for low- and middle-income families in the counties he carried.                                               
FeederDate5=Fri, 15 Jul 2022

FeederTitle6=The Uvalde Shooting Videos and the Future of Policing
FeederLink6=https://www.wsj.com/articles/the-uvalde-shooting-videos-future-policing-officers-swat-law-enforcement-mental-illness-11657832673
FeederDec6=Two law-enforcement vets discuss the difficulties of mass-shooting responses and recruiting new cops.                                        
FeederDate6=Thu, 14 Jul 2022

FeederTitle7=California Power Problems Hit Texas
FeederLink7=https://www.wsj.com/articles/californiapowerproblems-hit-texas-blackouts-electricity-heat-wave-11657919178
FeederDec7=Another state where unreliable renewable energy leads to power outages.                          
FeederDate7=Fri, 15 Jul 2022

FeederTitle8=Will the GOP Abandon Ukraine?

FeederLink8=https://www.wsj.com/articles/will-the-gop-abandon-ukraine-war-russia-arms-military-missile-biden-midterm-election-11657921767
FeederDec8=Republican voters will support intelligently directed aid in the war against Russia.                          
FeederDate8=Fri, 15 Jul 2022

FeederTitle9=The Political Agony of the Euro's Parity With the Dollar
FeederLink9=https://www.wsj.com/articles/the-political-agony-of-the-euro-parity-dollar-union-brussels-italy-debt-policy-change-11657813435
FeederDec9=The currency’s slide is an effect of a fundamental yet barely acknowledged change in its purpose.                     
FeederDate9=Thu, 14 Jul 2022

FeederTitle10=Manchin's Tax Message to Democrats
FeederLink10=https://www.wsj.com/articles/joe-manchins-tax-message-to-democrats-chuck-schumer-joint-committee-on-taxation-congress-build-back-better-bill-11657835900
FeederDec10=Congress’s tax calculators reveal the high cost to all taxpayers of Build Back Smaller.                
FeederDate10=Fri, 15 Jul 2022
