
        
            OPERATOR = 0
    SUPERVISOR = 1
    DIRECTOR = 2
    
    
if __name__ == '__main__':
    SpendingByCategory.run()

    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
    
# Are two filenames really pointing to the same file?
def samefile(f1, f2):
    '''Test whether two pathnames reference the same actual file'''
    s1 = os.stat(f1)
    s2 = os.stat(f2)
    return samestat(s1, s2)
    
            #
        # Test error handling
        #
    
    def test():
    NUMBER_OF_PROCESSES = 4
    TASKS1 = [(mul, (i, 7)) for i in range(20)]
    TASKS2 = [(plus, (i, 8)) for i in range(10)]
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
                uid = item.get(CONF_UID)
            if uid is None:
                uid = str(uuid.uuid4())
            output[ATTR_UID] = uid
    
        return True

    
            # The Tado device tracker can work with or without a home_id
        self.home_id = config[CONF_HOME_ID] if CONF_HOME_ID in config else None
    
            Return boolean if scanning successful.
        '''
        if not self.success_init:
            return False
    
                    else:
                    if filename is None and \
                       'content-disposition' in req.headers:
                        match = re.findall(r'filename=(\S+)',
                                           req.headers['content-disposition'])
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import (
    CONF_API_KEY, CONF_WHITELIST, CONF_URL, STATE_UNKNOWN, STATE_UNAVAILABLE,
    CONF_SCAN_INTERVAL)
from homeassistant.helpers import state as state_helper
from homeassistant.helpers.event import track_point_in_time
from homeassistant.util import dt as dt_util
    
    from homeassistant.const import (CONF_PASSWORD, CONF_SCAN_INTERVAL,
                                 CONF_USERNAME)
import homeassistant.helpers.config_validation as cv
from homeassistant.helpers.discovery import load_platform
    
    from functools import wraps
import logging