
        
        from scrapy.spiders import Spider
from scrapy.http import Request
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
            for spidername in args or spider_loader.list():
            spidercls = spider_loader.load(spidername)
            spidercls.start_requests = lambda s: conman.from_spider(s, result)
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
    
logger = logging.getLogger(__name__)
    
        # Perform any final work and validity checks after the collating blobs for
    # all minibatch images
    valid = True
    if cfg.MODEL.KEYPOINTS_ON:
        valid = keypoint_rcnn_roi_data.finalize_keypoint_minibatch(blobs, valid)