
        
        
def _py_files(folder):
    return glob.glob(folder + '/*.py') + glob.glob(folder + '/*/*.py')
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
        name = '%s_%s' % (spider, method.__name__)
    setattr(ContractTestCase, name, lambda x: x)
    return ContractTestCase(name)

    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
    from concurrent.futures import _base
    
    import logging
    
        def __init__(self, rest, name):
        '''Initialize a PVOutput sensor.'''
        self.rest = rest
        self._name = name
        self.pvcoutput = None
        self.status = namedtuple(
            'status', [ATTR_DATE, ATTR_TIME, ATTR_ENERGY_GENERATION,
                       ATTR_POWER_GENERATION, ATTR_ENERGY_CONSUMPTION,
                       ATTR_POWER_CONSUMPTION, ATTR_EFFICIENCY,
                       ATTR_TEMPERATURE, ATTR_VOLTAGE])
    
                payload = {'host': 'http://host:8088/services/collector/event',
                       'event': body}
            self.handler_method(event)
            self.assertEqual(self.mock_post.call_count, 1)
            self.assertEqual(
                self.mock_post.call_args,
                mock.call(
                    payload['host'], data=json.dumps(payload),
                    headers={'Authorization': 'Splunk secret'},
                    timeout=10
                )
            )
            self.mock_post.reset_mock()

    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
        if unit_2 == LENGTH_MILES:
        result = __meters_to_miles(meters)
    elif unit_2 == LENGTH_FEET:
        result = __meters_to_feet(meters)
    elif unit_2 == LENGTH_KILOMETERS:
        result = __meters_to_kilometers(meters)