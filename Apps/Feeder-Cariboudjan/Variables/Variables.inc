[Variables]

CommunityAppRunOnce=1

; ----- Add/Modify your variables below: ----------------

FeederRSSNum=3

;--------------------------

FeederVersionNum=1.0

;--------------------------

FeederBoxHeight1=(105*#DroptopSize#)
FeederBoxHeight2=(105*#DroptopSize#)
FeederBoxHeight3=(105*#DroptopSize#)
FeederBoxHeight4=(105*#DroptopSize#)
FeederBoxHeight5=(105*#DroptopSize#)
FeederBoxHeight6=(105*#DroptopSize#)
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

FeederTitle1=Joe Manchin Can Stop a Partisan Energy Takeover at the FERC                                                            
FeederLink1=https://www.wsj.com/articles/joe-manchin-energy-price-cost-heat-ferc-bipartisan-biden-richard-glick-winter-europe-shortage-hydropower-oil-lng-11666813595
FeederDec1=A Democratic supermajority would aid Biden’s efforts to stop critical infrastructure.                
Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                          









































                               
FeederDate1=Wed, 26 Oct 2022

FeederTitle2=Why Democrats Are Losing The Midterms
FeederLink2=https://www.wsj.com/articles/why-democrats-are-losing-john-fetterman-mehmet-oz-fracking-pennsylvania-far-left-u-s-senate-11666821289
FeederDec2=With Trump out of the spotlight, voters are focusing on how far left the Democratic Party has turned.                                                                                                                            










Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.










                                                                                                                                                                                       
FeederDate2=Wed, 26 Oct 2022

FeederTitle3=John Fetterman: The Midterms' October Surprise
FeederLink3=https://www.wsj.com/articles/midterms-october-surprise-john-fetterman-pennsylvania-oz-fracking-stroke-fitness-debate-new-york-hochul-zeldin-crime-11666814874
FeederDec3=By withholding crucial information about his health, the candidate has likely ensured a GOP Senate win in Pennsylvania.            






























































Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                                                                                 
FeederDate3=Wed, 26 Oct 2022

FeederTitle4=Biden's Losing Midterm Message for Democrats  
FeederLink4=https://www.wsj.com/articles/biden-losing-democrats-campaigning-abortion-inflation-reduction-act-priority-economy-approval-rating-deficit-midterm-11666808216
FeederDec4=He boasts about the economy and declares that abortion is his top priority.


Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                    







  





















        



                                                                                                                                                                                        
FeederDate4=Wed, 26 Oct 2022

FeederTitle5=California's Corporate Exodus     
FeederLink5=https://www.wsj.com/articles/californias-corporate-exodus-business-flight-gavin-newsom-lee-ohanian-joseph-vranich-hoover-institution-11666789943
FeederDec5=A new report documents the accelerating business flight from the state.                                                 









                                                                    



                                                 
FeederDate5=Wed, 26 Oct 2022

FeederTitle6=The GOP's 2022 Midterm Slate Is More Diverse Than Ever
FeederLink6=https://www.wsj.com/articles/black-republican-congressman-midterms-election-voter-turnout-diversity-candidates-gop-11666706422
FeederDec6=What do you call a black Republican? How about ‘Congressman’?                                                                                                                     
FeederDate6=Tue, 25 Oct 2022

FeederTitle7=Gary Gensler's Bad Performance Review
FeederLink7=https://www.wsj.com/articles/gary-genslers-bad-performance-review-sec-inspector-general-rulemaking-11666719584
FeederDec7=The SEC Chair’s furious rule-making pace is damaging the agency.                                                                                      



















                                                                                                                                                
FeederDate7=Wed, 26 Oct 2022

FeederTitle8=Citizenship Is Essential to Voting

FeederLink8=https://www.wsj.com/articles/citizenship-voting-law-illegal-aliens-noncitizens-immigrant-louisiana-ohio-constitution-washington-dc-new-york-election-integrity-11666786183
FeederDec8=Two states consider enshrining that idea in their constitutions.                                                                                                                          



                                                                                                              

























                          
FeederDate8=Wed, 26 Oct 2022

FeederTitle9=Special Counsel John Durham Discredits the Press
FeederLink9=https://www.wsj.com/articles/durham-discredits-the-press-fbi-investigation-media-lying-trump-falsified-evidence-collusion-leak-illegal-informant-11666729641
FeederDec9=The way back to sanity for America is for the media to rediscover its interest in truth.  



                                



                     
FeederDate9=Tue, 25 Oct 2022

FeederTitle10=Call Them the Biden-Trump Tariffs Now
FeederLink10=https://www.wsj.com/articles/call-them-the-biden-trump-tariffs-now-section-232-aluminum-steel-tariffs-beverage-manufacturers-11666721317
FeederDec10=U.S. beverage makers and consumers continue to pay for tariffs on aluminum that the President won’t lift.                                                            







    





  













                                                                                                            









































                
FeederDate10=Wed, 26 Oct 2022
