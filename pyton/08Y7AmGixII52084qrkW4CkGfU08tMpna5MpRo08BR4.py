
        
        from .base import Problem, StatusCheck
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
    
    prefix_map = {
    # backend path prefix: path to the `models` parent model used
    'sentry.tagstore.legacy': 'sentry.tagstore.legacy',
    'sentry.tagstore.v2': 'sentry.tagstore.v2',
    'sentry.tagstore.snuba': 'sentry.tagstore.v2',
}
    
        complete_apps = ['tagstore']

    
    from sentry.models import (Activity, GroupResolution, Release)
from sentry.tasks.base import instrumented_task