
        
        # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
    import luigi
    
            :return: the target output for this task.
        :rtype: object (:py:class:`~luigi.target.Target`)
        '''
        return RemoteTarget(
            '/tmp/stuff',
            SSH_HOST
        )
    
        date = luigi.DateParameter()
    
    
class BatchNotifier(object):
    def __init__(self, **kwargs):
        self._config = batch_email(**kwargs)
        self._fail_counts = collections.defaultdict(collections.Counter)
        self._disabled_counts = collections.defaultdict(collections.Counter)
        self._scheduling_fail_counts = collections.defaultdict(collections.Counter)
        self._fail_expls = collections.defaultdict(_fail_queue(self._config.error_messages))
        self._update_next_send()
    
    logger = logging.getLogger('luigi-interface')