
        
        try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
        return res
    
    import os
import warnings
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_HOST, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
    vol.Optional(CONF_DISCOVERY, default=True): cv.boolean,
    vol.Optional(CONF_TIMEOUT, default=DEFAULT_TIMEOUT): cv.positive_int,
    vol.Optional(CONF_IGNORED_CLICK_TYPES):
        vol.All(cv.ensure_list, [vol.In(CLICK_TYPES)])
})
    
            # doing a request
        try:
            res = requests.get(self._url, timeout=10, cookies={
                'userid': self._userid
            })
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            result = res.json()
        except ValueError:
            # If json decoder could not parse the response
            _LOGGER.error('Failed to parse response from router')
            return False
    
    import requests
import voluptuous as vol
    
            try:
            result = scanner.scan(hosts=' '.join(self.hosts),
                                  arguments=options)
        except PortScannerError:
            return False
    
            # Test the router is accessible.
        data = self.get_thomson_data()
        self.success_init = data is not None
    
            def on_modified(self, event):
            '''File modified.'''
            self.process(event)
    
    
def register_device(hass, api_key, name, device_id, device_ids, device_names):
    '''Register services for each join device listed.'''
    from pyjoin import (ring_device, set_wallpaper, send_sms,
                        send_file, send_url, send_notification)