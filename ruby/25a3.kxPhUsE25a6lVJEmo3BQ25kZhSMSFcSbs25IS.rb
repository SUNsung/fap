
        
                    next if skip_up_to_date?(screenshot)
    
              enabled_services_object = self.service_object
          enabled_services.each do |k, v|
            enabled_services_object.__hash__[k] = true
            enabled_services_object.send('#{k}=', v)
          end
          Produce::Service.enable(enabled_services_object, nil) unless enabled_services.empty?
    
        # After loading, contains all the found options
    attr_accessor :options
    
          def self.is_supported?(platform)
        [:ios, :mac].include?(platform)
      end
    end
  end
end

    
        private
    
              # Alias
          key_reader = key.to_sym
          key_writer = '#{key}='.to_sym
    
    
    {        'apps' => 'apps',
        'betaGroups' => 'beta_groups',
        'betaTesterMetrics' => 'beta_tester_metrics'
      })
    
          def self.type
        return 'users'
      end
    
    end
end

    
      # @return [Bool] system version is 10.4 or lower
  def lte_tiger?
    ver_num =~ /10\.(\d+)/ and $1.to_i <= 4
  end
    
        case res.code
    when 201
      print_good('Playing https://www.youtube.com/watch?v=#{vid}')
    when 200
      print_status('Stopping video')
    when 404
      print_error('Target no longer supports casting via the DIAL protocol. ' \
                  'CASTV2 is not supported by this module at this time.')
    end
  end
    
      # List of known values and models
  def devices_list
    known_devices = {
        :'AZ-D140W'=>
            {:name=>'Azmoon', :model=>'AZ-D140W', :values=>[
                [107367693, 13]
            ]},
        :'BiPAC 5102S'=>
            {:name=>'Billion', :model=>'BiPAC 5102S', :values=>[
                [107369694, 13]
            ]},
        :'BiPAC 5200'=>
            {:name=>'Billion', :model=>'BiPAC 5200', :values=>[
                [107369545, 9],
                [107371218, 21]
            ]},
        :'BiPAC 5200A'=>
            {:name=>'Billion', :model=>'BiPAC 5200A', :values=>[
                [107366366, 25],
                [107371453, 9]
            ]},
        :'BiPAC 5200GR4'=>
            {:name=>'Billion', :model=>'BiPAC 5200GR4', :values=>[
                [107367690, 21]
            ]},
        :'BiPAC 5200SRD'=>
            {:name=>'Billion', :model=>'BiPAC 5200SRD', :values=>[
                [107368270, 1],
                [107371378, 3],
                [107371218, 13]
            ]},
        :'DSL-2520U'=>
            {:name=>'D-Link', :model=>'DSL-2520U', :values=>[
                [107368902, 25]
            ]},
        :'DSL-2600U'=>
            {:name=>'D-Link', :model=>'DSL-2600U', :values=>[
                [107366496, 13],
                [107360133, 20]
            ]},
        :'TD-8616'=>
            {:name=> 'TP-Link', :model=>'TD-8616', :values=>[
                [107371483, 21],
                [107369790, 17],
                [107371161, 1],
                [107371426, 17],
                [107370211, 5],
            ]},
        :'TD-8817'=>
            {:name=> 'TP-Link', :model=>'TD-8817', :values=>[
                [107369790, 17],
                [107369788, 1],
                [107369522, 25],
                [107369316, 21],
                [107369321, 9],
                [107351277, 20]
            ]},
        :'TD-8820'=>
            {:name=>'TP-Link', :model=>'TD-8820', :values=>[
                [107369768, 17]
            ]},
        :'TD-8840T'=>
            {:name=>'TP-Link', :model=>'TD-8840T', :values=>[
                [107369845, 5],
                [107369790, 17],
                [107369570, 1],
                [107369766, 1],
                [107369764, 5],
                [107369688, 17]
            ]},
        :'TD-W8101G'=>
            {:name=>'TP-Link', :model=>'TD-W8101G', :values=>[
                [107367772, 37],
                [107367808, 21],
                [107367751, 21],
                [107367749, 13],
                [107367765, 25],
                [107367052, 25],
                [107365835, 1]
            ]},
        :'TD-W8151N'=>
            {:name=>'TP-Link', :model=>'TD-W8151N', :values=>[
                [107353867, 24]
            ]},
        :'TD-W8901G'=>
            {:name=> 'TP-Link', :model=>'TD-W8901G', :values=>[
                [107367787, 21],
                [107368013, 5],
                [107367854, 9],
                [107367751, 21],
                [107367749, 13],
                [107367765, 25],
                [107367682, 21],
                [107365835, 1],
                [107367052, 25]
            ]},
        :'TD-W8901GB'=>
            {:name=>'TP-Link', :model=>'TD-W8901GB', :values=>[
                [107367756, 13],
                [107369393, 21]
            ]},
        :'TD-W8901N'=>
            {:name=>'TP-Link', :model=>'TD-W8901N', :values=>[
                [107353880, 0]
            ]},
        :'TD-W8951ND'=>
            {:name=>'TP-Link', :model=>'TD-W8951ND', :values=>[
                [107369839, 25],
                [107369876, 13],
                [107366743, 21],
                [107364759, 25],
                [107364759, 13],
                [107364760, 21]
            ]},
        :'TD-W8961NB'=>
            {:name=>'TP-Link', :model=>'TD-W8961NB', :values=>[
                [107369844, 17],
                [107367629, 21],
                [107366421, 13]
            ]},
        :'TD-W8961ND'=>
            {:name=>'TP-Link', :model=>'TD-W8961ND', :values=>[
                [107369839, 25],
                [107369876, 13],
                [107364732, 25],
                [107364771, 37],
                [107364762, 29],
                [107353880, 0],
                [107353414, 36]
            ]},
        :'P-660R-T3 v3'=> #This value works on devices with model P-660R-T3 v3 not P-660R-T3 v3s
            {:name=>'ZyXEL', :model=>'P-660R-T3', :values=>[
                [107369567, 21]
            ]},
        :'P-660RU-T3 v2'=> #Couldn't verify this
            {:name=>'ZyXEL', :model=>'P-660R-T3', :values=>[
                [107369567, 21]
            ]},
        :'ALL'=> # Used when `ForceAttempt` === true
            {:name=>'Unknown', :model=>'Forced', :values=>[]
            },
    }
    # collect all known cookies for a brute force option
    all_cookies = []
    known_devices.collect { |_, v| v[:values] }.each do |list|
      all_cookies += list
    end
    known_devices[:'ALL'][:values] = all_cookies.uniq
    known_devices
  end
    
    unless $LOAD_PATH.include? lib_path
  $LOAD_PATH.unshift lib_path
end

    
      def data_service_exist?(data_service)
    @data_services.each_value{|value|
      if (value.name == data_service.name)
        return true
      end
    }
    
        host, _port = session.tunnel_peer.split(':')
    @clean_up_rc = ''
    
        # Create the log directory
    ::FileUtils.mkdir_p(logs)
    
      bins.each do |from, to|
    next if (from != 'metsvc.exe' and remove)
    to ||= from
    print_status(' >> Uploading #{from}...')
    fd = client.fs.file.new(tempdir + '\\' + to, 'wb')
    path = (from == 'metsrv.x86.dll') ? MetasploitPayloads.meterpreter_path('metsrv','x86.dll') : File.join(based, from)
    fd.write(::File.read(path, ::File.size(path)))
    fd.close
  end
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end
    
      it 'creates N processor instances' do
    mgr = new_manager(options)
    assert_equal options[:concurrency], mgr.workers.size
  end
    
        it 'calculates an average poll interval based on the number of known Sidekiq processes' do
      with_sidekiq_option(:average_scheduled_poll_interval, 10) do
        3.times do |i|
          Sidekiq.redis do |conn|
            conn.sadd('processes', 'process-#{i}')
            conn.hset('process-#{i}', 'info', nil)
          end
        end
    
        it 'enables fake testing in a block' do
      Sidekiq::Testing.disable!
      assert Sidekiq::Testing.disabled?
      refute Sidekiq::Testing.fake?
    
        ThirdWorker.perform_async