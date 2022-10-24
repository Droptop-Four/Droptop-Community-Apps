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

FeederTitle1=National handgun sales 'freeze' takes effect today                                                            
FeederLink1=https://www.cbc.ca/news/politics/national-handgun-sales-freeze-1.6624653?cmp=rss
FeederDec1=Three hand guns are displayed at a gun owner's home after Canada's government introduced legislation to implement a "national freeze" on the sale and purchase of handguns, as a part of a gun control package that would also limit magazine capacities and ban some toys that look like guns, in New Westminster, B.C.                
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
                                                                                                                          









































                               
FeederDate1=Fri, 21 Oct 2022

FeederTitle2=New Alberta cabinet includes familiar faces in prominent portfolios
FeederLink2=https://www.cbc.ca/news/canada/edmonton/alberta-united-conservative-party-government-cabinet-1.6625263?cmp=rss
FeederDec2=Smith will will run in the Brooks-Medicine Hat byelection on Nov. 8.                                                                                                                            










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










                                                                                                                                                                                       
FeederDate2=Fri, 21 Oct 2022

FeederTitle3=Woman's lawsuit alleges abuse in Winnipeg maternity home run by United Church of Canada
FeederLink3=https://www.cbc.ca/news/canada/manitoba/united-church-canada-maternity-home-lawsuit-winnipeg-1.6622532?cmp=rss
FeederDec3=Family together. mother holding child's hand, black and white; Shutterstock ID 209250001            






























































Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                                                                                 
FeederDate3=Fri, 21 Oct 2022

FeederTitle4=Hockey Canada moved cash from fund used for sexual assault claims to avoid encouraging more claims: report  
FeederLink4=https://www.cbc.ca/news/politics/hockey-canada-transfered-millions-out-of-controversial-fund-1.6624089?cmp=rss
FeederDec4=A Hockey Canada logo is shown on the jersey of a player with Canada’s National Junior Team during a training camp practice in Calgary, Tuesday, Aug. 2, 2022.THE CANADIAN PRESS/Jeff McIntosh


Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                    







  





















        



                                                                                                                                                                                        
FeederDate4=Fri, 21 Oct 2022

FeederTitle5=Alleged victims of disgraced senator frustrated by Red Chamber's reaction to criminal charges     
FeederLink5=https://www.cbc.ca/news/politics/don-meredith-victims-alleged-sex-crimes-1.6623802?cmp=rss
FeederDec5=Former senator Don Meredith seen during an interview in Toronto, Thursday, March 16, 2017.                                                 









                                                                    



                                                 
FeederDate5=Fri, 21 Oct 2022

FeederTitle6=Most of the people N.B. quietly removed from its COVID death totals had the virus when they died
FeederLink6=https://www.cbc.ca/news/canada/new-brunswick/covid-19-death-totals-new-brunswick-1.6624173?cmp=rss
FeederDec6=A box of five BTNX’s Covid Rapid Test for home which is being handed out by pharmacies. Eligible British Columbians can get one box per month for free.                                                                                                                     
FeederDate6=Fri, 21 Oct 2022

FeederTitle7=Carly Rae Jepsen knows what it feels like to be lonely and taps into it for new album
FeederLink7=https://www.cbc.ca/news/entertainment/carly-rae-jepsen-the-loneliest-time-1.6622272?cmp=rss
FeederDec7=Carly Rae Jepsen performs on Day 1 of the Austin City Limits Music Festival's first weekend at Zilker Park on Friday, Oct. 7, 2022, in Austin, Texas. (Photo by Jack Plunkett/Invision/AP)                                                                                      



















                                                                                                                                                
FeederDate7=Fri, 21 Oct 2022

FeederTitle8=N.S. records 86 renoviction applications; advocates fear many others uncounted

FeederLink8=https://www.cbc.ca/news/canada/nova-scotia/renovictions-statistics-residential-tenancies-act-eviction-1.6623111?cmp=rss
FeederDec8=A unit is listed as "for rent" on this street in Forest Lawn.                                                                                                                          



                                                                                                              

























                          
FeederDate8=Fri, 21 Oct 2022

FeederTitle9=Toronto-area spa closes pools after customers complain of skin rashes, ear infections
FeederLink9=https://www.cbc.ca/news/canada/toronto/whitby-ontario-spa-pool-closure-staph-infections-1.6624281?cmp=rss
FeederDec9=No data  



                                



                     
FeederDate9=Thu, 20 Oct 2022

FeederTitle10=Former Canadian Nationalist Party leader Travis Patron sentenced to 1 year for promoting hatred against Jews
FeederLink10=https://www.cbc.ca/news/canada/saskatoon/former-canadian-nationalist-party-leader-travis-patron-sentenced-to-1-year-for-promoting-hatred-against-jews-1.6623901?cmp=rss
FeederDec10=A video featuring Travis Patron, leader of the Canadian Nationalist Party, is the subject of an RCMP investigation.                                                            







    





  













                                                                                                            









































                
FeederDate10=Thu, 20 Oct 2022
