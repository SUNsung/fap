
        
          * scan
'''
    
        module = AnsibleAWSModule(argument_spec=argument_spec, supports_check_mode=False, mutually_exclusive=[['distribution_id', 'alias']])
    
    # AMI Creation, excluding a volume attached at /dev/sdb
- ec2_ami:
    instance_id: i-xxxxxx
    name: newtest
    device_mapping:
        - device_name: /dev/sda1
          size: XXX
          delete_on_termination: true
          volume_type: gp2
        - device_name: /dev/sdb
          no_device: yes
    
        if region:
        ec2_client = boto3_conn(module, conn_type='client', resource='ec2', region=region, endpoint=ec2_url, **aws_connect_params)
    else:
        module.fail_json(msg='region must be specified')
    
        try:
        asgs_paginator = conn.get_paginator('describe_auto_scaling_groups')
        asgs = asgs_paginator.paginate().build_full_result()
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    
if __name__ == '__main__':
    main()

    
    '''
    
        connection = boto3_conn(module,
                            resource='ec2', conn_type='client',
                            region=region, endpoint=ec2_url, **aws_connect_params)
    
    
# Find the most recent snapshot
def _get_snapshot_starttime(snap):
    return datetime.datetime.strptime(snap.start_time, '%Y-%m-%dT%H:%M:%S.000Z')
    
        volume_info = {}
    attachment = volume.attach_data
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
            spider_loader = self.crawler_process.spider_loader
    
    
__licence__ = 'BSD (3 clause)'
    
        try:
        cognito.authenticate(password=password)
        return cognito
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
            # Test the router is accessible.
        data = self.get_swisscom_data()
        self.success_init = data is not None
    
        from libpurecoollink.dyson import DysonAccount
    dyson_account = DysonAccount(config[DOMAIN].get(CONF_USERNAME),
                                 config[DOMAIN].get(CONF_PASSWORD),
                                 config[DOMAIN].get(CONF_LANGUAGE))