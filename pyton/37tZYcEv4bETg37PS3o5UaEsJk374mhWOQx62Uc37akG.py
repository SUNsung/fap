
        
        containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
def main(args_list):
    args = get_args(args_list)
    if args.list:
        print_list()
    if args.host:
        print_host(args.host)
    
    
def get_from_rhc_config(variable):
    global configparser
    CONF_FILE = os.path.expanduser('~/.openshift/express.conf')
    if os.path.exists(CONF_FILE):
        if not configparser:
            ini_str = '[root]\n' + open(CONF_FILE, 'r').read()
            configparser = ConfigParser.SafeConfigParser()
            configparser.readfp(StringIO.StringIO(ini_str))
        try:
            return configparser.get('root', variable)
        except ConfigParser.NoOptionError:
            return None
    
    
def secure_hash(filename, hash_func=sha1):
    ''' Return a secure hash hex digest of local file, None if file is not present or a directory. '''
    
    import os
import re
    
        return results
