
        
        
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
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
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
    
class UserAgentMiddleware(object):
    '''This middleware allows spiders to override the user_agent'''
    
                logger.debug('Successfully added TXT record with id: %d', record_id)
        except digitalocean.Error as e:
            logger.debug('Error adding TXT record using the DigitalOcean API: %s', e)
            raise errors.PluginError('Error adding TXT record using the DigitalOcean API: {0}'
                                     .format(e))
    
        # WARNING: To ensure changes are in line with Certbot's privacy
    # policy, talk to a core Certbot team member before making any
    # changes here.
    if config.user_agent is None:
        ua = ('CertbotACMEClient/{0} ({1}; {2}{8}) Authenticator/{3} Installer/{4} '
              '({5}; flags: {6}) Py/{7}')
        if os.environ.get('CERTBOT_DOCS') == '1':
            cli_command = 'certbot(-auto)'
            os_info = 'OS_NAME OS_VERSION'
            python_version = 'major.minor.patchlevel'
        else:
            cli_command = cli.cli_command
            os_info = util.get_os_info_ua()
            python_version = platform.python_version()
        ua = ua.format(certbot.__version__, cli_command, os_info,
                       config.authenticator, config.installer, config.verb,
                       ua_flags(config), python_version,
                       '; ' + config.user_agent_comment if config.user_agent_comment else '')
    else:
        ua = config.user_agent
    return ua
    
            self.assertTrue(self.vhost1.same_server(self.vhost2))
        self.assertTrue(no_name1.same_server(no_name2))
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
    # -- Options for LaTeX output ---------------------------------------------