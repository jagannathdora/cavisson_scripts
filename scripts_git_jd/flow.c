/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: netstorm
    Date of recording: 10/03/2016 02:33:05
    Flow details:
    Build details: 4.1.6 (build# 20)
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void flow()
{

       
    ns_start_transaction("index_html");
    ns_sync_point("syncpoint");
    ns_web_url ("index_html",
        "URL=http://184.105.48.40:6558/tours/index.html",
        "HEADER=Accept-Language:en-us",
        "HEADER=Upgrade-Insecure-Requests:1",
        "PreSnapshot=webpage_1475485357440.png",
        "Snapshot=webpage_1475485360197.png",
        
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("index_html", NS_AUTO_STATUS);

    ns_page_think_time(150.422);

    ns_start_transaction("login");
    ns_web_url ("login",
        "URL=http://184.105.48.40:6558/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=netstorm&password=netstorm&login.x=63&login.y=22&login=Login&JSFormSubmit=off",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485370449.png",
        "Snapshot=webpage_1475485370623.png",
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );
    ns_end_transaction("login", NS_AUTO_STATUS);

    ns_page_think_time(150.739);

    ns_start_transaction("reservation");
    ns_web_url ("reservation",
        "URL=http://184.105.48.40:6558/cgi-bin/reservation",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485372350.png",
        "Snapshot=webpage_1475485372510.png",
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/splash_Findflight.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/continue.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );

    ns_end_transaction("reservation", NS_AUTO_STATUS);
    ns_page_think_time(71.279);

    ns_start_transaction("findflight");
    ns_web_url ("findflight",
        "URL=http://184.105.48.40:6558/cgi-bin/findflight?depart=Acapulco&departDate=10-04-2016&arrive=Acapulco&returnDate=10-05-2016&numPassengers=1&seatPref=None&seatType=Coach&findFlights.x=58&findFlights.y=22&findFlights=Submit",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485373785.png",
        "Snapshot=webpage_1475485373949.png",
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/splash_Searchresults.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/startover.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/continue.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );

    ns_end_transaction("findflight", NS_AUTO_STATUS);
    ns_page_think_time(0.944);

    ns_start_transaction("findflight_2");
    ns_web_url ("findflight_2",
        "URL=http://184.105.48.40:6558/cgi-bin/findflight?outboundFlight=button0&hidden_outboundFlight_button0=000%7C0%7C10-04-2016&hidden_outboundFlight_button1=001%7C0%7C10-04-2016&hidden_outboundFlight_button2=002%7C0%7C10-04-2016&hidden_outboundFlight_button3=003%7C0%7C10-04-2016&numPassengers=1&advanceDiscount=&seatType=Coach&seatPref=None&reserveFlights.x=57&reserveFlights.y=7",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485374901.png",
        "Snapshot=webpage_1475485375081.png",
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/splash_creditcard.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/startover.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/purchaseflight.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );

    ns_end_transaction("findflight_2", NS_AUTO_STATUS);
    ns_page_think_time(3.159);

    ns_start_transaction("findflight_3");
    ns_web_url ("findflight_3",
        "URL=http://184.105.48.40:6558/cgi-bin/findflight?firstName=Tiger&lastName=Scott&address1=4261+Stevenson+Blvd.&address2=Fremont%2C+CA+94538&pass1=Scott+Tiger&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=000%7C0%7C10-04-2016&advanceDiscount=&buyFlights.x=52&buyFlights.y=2&.cgifields=saveCC",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485378216.png",
        "Snapshot=webpage_1475485378580.png",
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/flights.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/home.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/signoff.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/splash_flightconfirm.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/bookanother.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );

    ns_end_transaction("findflight_3", NS_AUTO_STATUS);
    ns_page_think_time(4.048);

    ns_start_transaction("welcome");
    ns_web_url ("welcome",
        "URL=http://184.105.48.40:6558/cgi-bin/welcome",
        "HEADER=Upgrade-Insecure-Requests:1",
        "HEADER=Accept-Language:en-us",
        "COOKIE=akaau",
        "PreSnapshot=webpage_1475485382572.png",
        "Snapshot=webpage_1475485382692.png",
        INLINE_URLS,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/banner_animated.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/sun_swede.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/Merc10-dev/images/login.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/images/banner_merctur.jpg", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE,
            "URL=http://184.105.48.40:6558/tours/vep/images/velocigen.gif", "HEADER=Accept-Language:en-us", "COOKIE=akaau", END_INLINE
    );

    ns_end_transaction("welcome", NS_AUTO_STATUS);
    ns_page_think_time(2.401);

}
