[Variables]

CommunityAppRunOnce=0

; ----- Add/Modify your variables below: ----------------

FeederRSSNum=4

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

FeederTitle1=Canada not shifting to stretch supply of monkeypox vaccine yet                                                            
FeederLink1=https://www.cbc.ca/news/health/monkeypox-vaccine-canada-outbreak-1.6549614?cmp=rss
FeederDec1=A registered nurse prepares a dose of a Monkeypox vaccine at the Salt Lake County Health Department Thursday, July 28, 2022, in Salt Lake City. The country’s monkeypox outbreak can still be stopped, U.S. health officials said Thursday, despite rising case numbers and so-far limited vaccine supplies.(AP Photo/Rick Bowmer)              
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
                                                                                                                          









































                               
FeederDate1=Fri, 12 Aug 2022

FeederTitle2=Quilters from across Canada are stitching up blankets for Ontario women leaving homelessness
FeederLink2=https://www.cbc.ca/news/canada/london/canadian-quilters-for-london-ontario-women-exiting-homelessness-1.6547188?cmp=rss
FeederDec2=Michaelanne Hathaway is the owner of Stache Fabric and Notions located at 213 King St. in downtown London's historic Novacks building. She's rallying her community of customers to collectively sew quilts for My Sisters' Place in London.                                                                  










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










                                                                                                                                                                                       
FeederDate2=Fri, 12 Aug 2022

FeederTitle3=Calgary contractor uses AirTags to recover stolen construction materials
FeederLink3=https://www.cbc.ca/news/canada/calgary/airtags-building-material-thefts-calgary-1.6549098?cmp=rss
FeederDec3=Pierre Dumont owns Pierrefect Contracting Inc.            






























































Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                                                                                 
FeederDate3=Fri, 12 Aug 2022

FeederTitle4=Seniors in Nova Scotia apartment building fear they're being pushed out  
FeederLink4=https://www.cbc.ca/news/canada/nova-scotia/seniors-bridgewater-frightened-drumlinhills-1.6545875?cmp=rss
FeederDec4=David George Bryant, 90, says the new owners approach is backhanded. "Just presenting a form and saying, this is what we decide you're going to do, make your choice here and don't ask me what they are."


Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                    







  





















        



                                                                                                                                                                                        
FeederDate4=Fri, 12 Aug 2022

FeederTitle5=Quebec City police reopening probe into 2014 Gatineau Olympiques alleged group sexual assault, league says     
FeederLink5=https://www.cbc.ca/news/politics/quebec-city-police-looking-at-reviewing-investigation-alleged-group-sex-assault-1.6549383?cmp=rss
FeederDec5=The Gatineau Olympiques faced the Blainville-Boisbriand Armada Oct, 2, 2021 in the first game at Gatineau's new Centre Slush Puppie.                                               









                                                                    



                                                 
FeederDate5=Fri, 12 Aug 2022

FeederTitle6=Why financial incentives aren't enough to deal with health-care staffing shortages
FeederLink6=https://www.cbc.ca/news/health/financial-perks-doctor-recruitment-1.6548194?cmp=rss
FeederDec6=family doctor                                                                                                                     
FeederDate6=Fri, 12 Aug 2022

FeederTitle7=Telus asks CRTC permission to add 1.5% credit card surcharge to customer bills
FeederLink7=https://www.cbc.ca/news/business/telus-credit-card-bill-1.6548325?cmp=rss
FeederDec7=A woman looks at her smartphone as she walks on a busy street in downtown Shanghai, September 25, 2013. Facebook Inc and Twitter face a daunting task in China, if access to their social networks is unblocked, as they would be up against deeply entrenched domestic rivals which cater to local needs and tastes. Access to Facebook and Twitter has been blocked in China since 2009, but will be lifted by the government in the Shanghai Free Trade Zone (FTZ) which is due to launch this weekend, the South China Morning Post reported on Tuesday - a move that has been popularly dubbed the "Internet Concession". REUTERS/Carlos Barria (CHINA - Tags: SCIENCE TECHNOLOGY POLITICS BUSINESS TELECOMS SOCIETY) - RTX13YRL                                                                                    



















                                                                                                                                                
FeederDate7=Fri, 12 Aug 2022

FeederTitle8=What does 'defunding the police' mean? N.B. university course will try to answer that question

FeederLink8=https://www.cbc.ca/news/canada/new-brunswick/defunding-police-course-1.6548690?cmp=rss
FeederDec8=Professor Sulaimon Giwa is the visiting Endowed Chair in Criminology and Criminal Justice at St. Thomas University in fall 2022.                                                                



                                                                                                              

























                          
FeederDate8=Fri, 12 Aug 2022

FeederTitle9=Union and workplace training programs push for more inclusion in 'lagging' auto industry
FeederLink9=https://www.cbc.ca/news/canada/windsor/unifor-diversity-policy-windsor-workplace-1.6548879?cmp=rss
FeederDec9=Workers arrive for their shift at the Chrysler (FCA) assembly plant.



                                



                     
FeederDate9=Fri, 12 Aug 2022

FeederTitle10=Cabinet told of possible 'breakthrough' with protesters night before Emergencies Act was invoked
FeederLink10=https://www.cbc.ca/news/politics/canada-cabinet-justin-trudeau-freedom-convoy-emergencies-act-court-documents-1.6548739?cmp=rss
FeederDec10=Canadian police officers stand guard, as they work to restore normality to the capital while trucks and demonstrators continue to occupy the downtown core for more than three weeks to protest against pandemic restrictions in Ottawa, Ontario, Canada, February 19, 2022.  







    





  













                                                                                                            









































                
FeederDate10=Thu, 11 Aug 2022
