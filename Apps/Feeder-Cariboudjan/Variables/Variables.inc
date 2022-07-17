[Variables]

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

FontName0=Proxima Nova Rg
FontName1=Proxima Nova Rg

DropdownItemHeight=(30*#DroptopSize#)
DropdownItemPaddingY=0

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

PrevFeederTitle1=

FeederTitle1=When is the right time to apply for a Canadian passport? Your questions answered                                                            
FeederLink1=https://www.cbc.ca/news/canada/montreal/passport-application-karina-gould-answers-questions-1.6522095?cmp=rss
FeederDec1=An official talks to people as they line up outside the Guy Favreau federal building while waiting to apply for a passport in Montreal, Sunday, June 26, 2022.                               
FeederDate1=Sun, 17 Jul 2022

FeederTitle2=Mental health experts say Canada needs a 3-digit suicide crisis hotline
FeederLink2=https://www.cbc.ca/news/health/canada-three-digit-suicide-crisis-line-1.6523436?cmp=rss
FeederDec2=A volunteer takes a call at the Crisis Centre B.C at their office in Vancouver, British Columbia on Wednesday, October 21, 2020.                                                                                                                             
FeederDate2=Thu, 10 Sep 2020

FeederTitle3=I was a kid when the moratorium started. As a union leader, I'm still fighting for change
FeederLink3=https://www.cbc.ca/news/canada/newfoundland-labrador/opinion-keith-sullivan-moratorium-1.6518201?cmp=rss
FeederDec3=Keith Sullivan has been president of the Fish, Food and Allied Workers union since 2014. He says increases in value in the fisheries have helped increase the economic standing of many working in the industry.                                               
FeederDate3=Sun, 17 Jul 2022

FeederTitle4=Our life-jacket laws are archaic and need to be overhauled  
FeederLink4=https://www.cbc.ca/news/canada/newfoundland-labrador/life-jacket-laws-gord-follett-opinion-1.6521484?cmp=rss
FeederDec4=There are various types of PFDs on the market. Jeff Piercey of Port Rexton wears what most consider a ‘regular’ life-jacket.                                                                                                                                                                                                
FeederDate4=Sat, 16 Jul 2022

FeederTitle5=Freeland says decision to exempt gas turbines from Russian sanctions 'difficult' but 'right thing to do'     
FeederLink5=https://www.cbc.ca/news/politics/freeland-ukraine-turbine-decision-1.6523124?cmp=rss
FeederDec5=Canada's Finance Minister Chrystia Freeland arrives for a meeting of G7 finance ministers on Thursday in Koenigswinter near Bonn, western Germany.                                           
FeederDate5=Sat, 16 Jul 2022

FeederTitle6=As the Atlantic Ocean warms, fisheries scramble to adapt
FeederLink6=https://www.cbc.ca/radio/whatonearth/atlantic-ocean-fisheries-climate-1.6515491?cmp=rss
FeederDec6=Eric Hesse has fished off the coast of Cape Cod for decades. Now, where he used to see cod, he sees more spiny dogfish.                                    
FeederDate6=Sat, 16 Jul 2022

FeederTitle7=Lac Ste. Anne pilgrimage will be historic with papal visit, apology: Alexis Nakota Sioux Chief
FeederLink7=https://www.cbc.ca/news/canada/edmonton/lac-ste-anne-pilgrimage-will-be-historic-with-papal-visit-apology-alexis-nakota-sioux-chief-1.6522586?cmp=rss
FeederDec7=Chief Tony Alexis from Alexis Nakota Sioux Nation said this year's Lac Ste. Anne pilgrimage will be historic with Pope's visit and apology.                          
FeederDate7=Fri, 15 Jul 2022

FeederTitle8=Doctor's appeal over right to pay for private health care dismissed by B.C. court

FeederLink8=https://www.cbc.ca/news/canada/british-columbia/cambie-surgeries-case-trial-court-of-appeal-judgment-1.6521746?cmp=rss
FeederDec8=Dr. Brian Day says False Creek surgery's business model was dependent on government contracts and when those were pulled a sale was inevitable.                          
FeederDate8=Fri, 15 Jul 2022

FeederTitle9=2SLGBTQI+ agencies support North Bay, Ont., group that postponed drag show for youth over death threats
FeederLink9=https://www.cbc.ca/news/canada/sudbury/national-lgbtq-agencies-support-outloud-northbay-1.6521776?cmp=rss
FeederDec9=The operator of Outloud North Bay says they will soon be opening up a bigger space for LGBTQ youth. They recently renovated a 4,000 sq. ft. former nightclub to make room for the group, which has tripled its membership in the past year.                     
FeederDate9=Fri, 15 Jul 2022

FeederTitle10=New book club in Hamilton to help inspire Black authors to write romance novels set in Canada
FeederLink10=https://www.cbc.ca/news/canada/hamilton/hamilton-book-club-black-romance-1.6521902?cmp=rss
FeederDec10=No data                
FeederDate10=Fri, 15 Jul 2022
