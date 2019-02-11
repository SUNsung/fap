
        
        
class CheckIp(front_base.check_ip.CheckIp):
    def check_response(self, response):
        server_type = response.headers.get('Server', '')
        self.logger.debug('status:%d', response.status)
        self.logger.debug('Server type:%s', server_type)
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3