
        
        versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
    entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
        @pytest.mark.parametrize(
        'content', (
            # HTML5 meta charset attribute
            '<meta charset='UTF-8'>',
            # HTML4 pragma directive
            '<meta http-equiv='Content-type' content='text/html;charset=UTF-8'>',
            # XHTML 1.x served with text/html MIME type
            '<meta http-equiv='Content-type' content='text/html;charset=UTF-8' />',
            # XHTML 1.x served as XML
            '<?xml version='1.0' encoding='UTF-8'?>',
        ))
    def test_pragmas(self, content):
        encodings = get_encodings_from_content(content)
        assert len(encodings) == 1
        assert encodings[0] == 'UTF-8'
    
            extract_cookies_to_jar(self.cookies, request, r.raw)
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
    import codecs
import collections
import contextlib
import io
import os
import re
import socket
import struct
import sys
import tempfile
import warnings
import zipfile
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
            for i in link_list:
            self.stream_types.append({'id': str(i[0])})
            self.streams[i[0]] = {'url': i[1]}
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
    from ..common import *
from json import loads
from base64 import b64decode
import re
import hashlib
    
    from ..common import *
    
        # mgid%3Auma%3Avideo%3Amtv81.com%3A897974
    vid = match1(html, r'getTheVideo\('(.*?)'')
    xml = parseString(
        get_content('http://intl.esperanto.mtvi.com/www/xml/media/mediaGen.jhtml?uri={}&flashPlayer=LNX%2013,0,0,206&geo=CN&sid=123456'.format(vid)))
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/sensor.pvoutput/
'''
import logging
from collections import namedtuple
from datetime import timedelta
    
    
def __feet_to_meters(feet: float) -> float:
    '''Convert feet to meters.'''
    return feet * 0.3048
    
        def test_from_event_to_delete_state(self):
        '''Test converting deleting state event to db state.'''
        event = ha.Event(EVENT_STATE_CHANGED, {
            'entity_id': 'sensor.temperature',
            'old_state': ha.State('sensor.temperature', '18'),
            'new_state': None,
        })
        db_state = States.from_event(event)