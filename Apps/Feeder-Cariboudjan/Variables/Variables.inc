[Variables]

CommunityAppRunOnce=1

; ----- Add/Modify your variables below: ----------------

FeederRSSNum=5

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

FeederTitle1=The Case for Listening to Complete Discographies                                                            
FeederLink1=https://www.newyorker.com/culture/cultural-comment/the-case-for-listening-to-complete-discographies
FeederDec1=In a world of obscene musical abundance, a listener needs a strategy.                
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
                                                                                                                          









































                               
FeederDate1=Thu, 27 Oct 2022

FeederTitle2=Can Rishi Sunak Save the Tories from Total Collapse?
FeederLink2=https://www.newyorker.com/news/q-and-a/can-rishi-sunak-save-the-tories-from-total-collapse
FeederDec2=Britain’s new Prime Minister, the nation’s third in seven weeks, will aim to steer an unpopular party through record inflation and a looming energy emergency.                                                                                                                            










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

FeederTitle3=Mike Davis Could See the Future
FeederLink3=https://www.newyorker.com/news/postscript/mike-davis-could-see-the-future
FeederDec3=Often misread as a “prophet of doom,” the Marxist historian was actually an optimist and a dreamer.                                                        






























































Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                                                                                                                                                 
FeederDate3=Wed, 26 Oct 2022

FeederTitle4=What to Make of John Fetterman’s Struggles at the Pennsylvania Senate Debate  
FeederLink4=https://www.newyorker.com/news/the-political-scene/what-to-make-of-john-fettermans-struggles-at-the-pennsylvania-senate-debate
FeederDec4=The cognitive effects of the Democratic candidate’s recent stroke were evident as he faced off against Mehmet Oz. Will his performance imperil his party’s chances?                        


Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.

Angela Chalmers woke up to the sound of her dog growling shortly before 7 the morning of June 18. She found a stranger sleeping on her couch and called 911, but waited twenty minutes for them to arrive.
                                                    







  





















        



                                                                                                                                                                                        
FeederDate4=Wed, 26 Oct 2022

FeederTitle5=The Best Books of 2022 So Far     
FeederLink5=https://www.newyorker.com/best-books-2022
FeederDec5=Reviews of the year’s notable new fiction, poetry, and nonfiction.                                                 









                                                                    



                                                 
FeederDate5=Wed, 26 Oct 2022

FeederTitle6=The United States’ Unamendable Constitution
FeederLink6=https://www.newyorker.com/culture/annals-of-inquiry/the-united-states-unamendable-constitution
FeederDec6=How our inability to change America’s most important document is deforming our politics and government.                                                                                                                                                                                         
FeederDate6=Wed, 26 Oct 2022

FeederTitle7=Polls Suggest the Battle for the Senate Is Still a Cliffhanger
FeederLink7=https://www.newyorker.com/news/our-columnists/polls-suggest-the-battle-for-the-senate-is-still-a-cliffhanger
FeederDec7=Recent surveys show a shift to Republicans, but in the key battleground states the outcomes remain highly uncertain.                                                                                                              



















                                                                                                                                                
FeederDate7=Tue, 25 Oct 2022

FeederTitle8=The Deer Who Lived Upstairs

FeederLink8=https://www.newyorker.com/news/afterword/the-deer-who-lived-upstairs
FeederDec8=Dillie, a whitetail from Ohio, defied many expectations during her unexpectedly long life.                                                                                                                                                                      



                                                                                                              

























                          
FeederDate8=Tue, 25 Oct 2022

FeederTitle9=Daily Cartoon: Tuesday, October 25th
FeederLink9=https://www.newyorker.com/cartoons/daily-cartoon/tuesday-october-25th-cinderella-coat
FeederDec9=“Could you also make me a transitional coat?”  



                                



                     
FeederDate9=Tue, 25 Oct 2022

FeederTitle10=The G.O.P.’s Big-City Scare Tactics
FeederLink10=https://www.newyorker.com/news/daily-comment/the-gops-big-city-scare-tactics
FeederDec10=Nationwide, Republicans are portraying Democratics as soft on crime. It’s a well-worn strategy, but can a candidate for governor of Illinois win by calling Chicago a “hellhole”?                                                                                                        







    





  













                                                                                                            









































                
FeederDate10=Tue, 25 Oct 2022
