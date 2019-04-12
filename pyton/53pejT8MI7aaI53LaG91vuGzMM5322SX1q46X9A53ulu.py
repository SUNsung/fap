
        
            def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            if response.status == 503:
            # out of quota
            if 'gws' not in server_type and 'Google Frontend' not in server_type and 'GFE' not in server_type:
                xlog.warn('503 but server type:%s', server_type)
                return False
            else:
                return True
    
    Here is a little overview over the most commonly used classes provided by
this runtime:
    
    EOF_TOKEN = CommonToken(type=EOF)
	
INVALID_TOKEN = CommonToken(type=INVALID_TOKEN_TYPE)
    
                with open('htmlout.html', 'w') as out:
                out.write(header)