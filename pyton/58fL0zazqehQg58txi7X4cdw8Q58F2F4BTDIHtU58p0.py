
        
            Returns:
        List
        [
            {
                'auto_scaling_group_arn': (
                    'arn:aws:autoscaling:us-west-2:275977225706:autoScalingGroup:58abc686-9783-4528-b338-3ad6f1cbbbaf:'
                    'autoScalingGroupName/public-webapp-production'
                ),
                'auto_scaling_group_name': 'public-webapp-production',
                'availability_zones': ['us-west-2c', 'us-west-2b', 'us-west-2a'],
                'created_time': '2016-02-02T23:28:42.481000+00:00',
                'default_cooldown': 300,
                'desired_capacity': 2,
                'enabled_metrics': [],
                'health_check_grace_period': 300,
                'health_check_type': 'ELB',
                'instances':
                [
                    {
                        'availability_zone': 'us-west-2c',
                        'health_status': 'Healthy',
                        'instance_id': 'i-047a12cb',
                        'launch_configuration_name': 'public-webapp-production-1',
                        'lifecycle_state': 'InService',
                        'protected_from_scale_in': false
                    },
                    {
                        'availability_zone': 'us-west-2a',
                        'health_status': 'Healthy',
                        'instance_id': 'i-7a29df2c',
                        'launch_configuration_name': 'public-webapp-production-1',
                        'lifecycle_state': 'InService',
                        'protected_from_scale_in': false
                    }
                ],
                'launch_config_name': 'public-webapp-production-1',
                'launch_configuration_name': 'public-webapp-production-1',
                'load_balancer_names': ['public-webapp-production-lb'],
                'max_size': 4,
                'min_size': 2,
                'new_instances_protected_from_scale_in': false,
                'placement_group': None,
                'status': None,
                'suspended_processes': [],
                'tags':
                [
                    {
                        'key': 'Name',
                        'propagate_at_launch': true,
                        'resource_id': 'public-webapp-production',
                        'resource_type': 'auto-scaling-group',
                        'value': 'public-webapp-production'
                    },
                    {
                        'key': 'env',
                        'propagate_at_launch': true,
                        'resource_id': 'public-webapp-production',
                        'resource_type': 'auto-scaling-group',
                        'value': 'production'
                    }
                ],
                'target_group_names': [],
                'target_group_arns': [],
                'termination_policies':
                [
                    'Default'
                ],
                'vpc_zone_identifier':
                [
                    'subnet-a1b1c1d1',
                    'subnet-a2b2c2d2',
                    'subnet-a3b3c3d3'
                ]
            }
        ]
    '''
    
    
class EIPException(Exception):
    pass
    
        # find an unused name
    name_in_use = True
    while name_in_use:
        random_name = 'ansible-' + str(uuid.uuid4())
        name_in_use = find_key_pair(module, ec2_client, random_name)
    
        module = AnsibleAWSModule(
        argument_spec=argument_spec,
        supports_check_mode=True
    )
    
    
if __name__ == '__main__':
    main()

    
    
def WaitUntilReady( timeout = 5 ):
  expiration = time.time() + timeout
  while True:
    try:
      if time.time() > expiration:
        raise RuntimeError( 'Waited for the server to be ready '
                            'for {0} seconds, aborting.'.format( timeout ) )
      if _IsReady():
        return
    except requests.exceptions.ConnectionError:
      pass
    finally:
      time.sleep( 0.1 )
    
    
@patch( 'ycm.vimsupport.CurrentFiletypes', return_value = [ 'ycmtest' ] )
def OnCompleteDone_NoActionIfNotDone_test( *args ):
  request = CompletionRequest( None )
  request.Done = MagicMock( return_value = False )
  action = MagicMock()
  request._complete_done_hooks[ 'ycmtest' ] = action
  request.OnCompleteDone()
  action.assert_not_called()
    
      def _adjust_thread_count( self ):
    # When the executor gets lost, the weakref callback will wake up
    # the worker threads.
    def weakref_cb( _, q=self._work_queue ):
      q.put( None )
    # TODO(bquinlan): Should avoid creating new threads if there are more
    # idle threads than items in the work queue.
    if len( self._threads ) < self._max_workers:
      t = threading.Thread( target=_worker,
                            args=( weakref.ref( self, weakref_cb ),
                                   self._work_queue ) )
      t.daemon = True
      t.start()
      self._threads.add( t )