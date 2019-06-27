
        
                # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # Called to change the hostname of the virtual machine.
        def change_host_name(name)
          raise BaseError, _key: :unsupported_host_name
        end
      end
    end
  end
end

    
            # This returns all the config classes for the various provisioners.
        #
        # @return [Registry]
        def provisioner_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provisioner])
            end
          end
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
      # Under Phusion Passenger smart spawning, we need to reopen all IO streams
  # after workers have forked.
  #
  # The rolling file appender uses shared file locks to ensure that only one
  # process will roll the log file. Each process writing to the file must have
  # its own open file descriptor for `flock` to function properly. Reopening
  # the file descriptors after forking ensures that each worker has a unique
  # file descriptor.
  if defined? PhusionPassenger
    PhusionPassenger.on_event(:starting_worker_process) do |forked|
      Logging.reopen if forked
    end
  end
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
              expect(gon['preloads'][:mentioned_person][:name]).to eq(alice.person.name)
          expect(gon['preloads'][:mentioned_person][:handle]).to eq(alice.person.diaspora_handle)
        end
      end
    end
    
                <li class='frame-info <%= frame_class(frame) %>'>
              <code><%=h frame.filename %></code> in
                <code><strong><%=h frame.function %></strong></code>
            </li>
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
              delta(first.key.loc, second.key.loc, alignment)
        end
    
            private
    
          @@adjustment_attributes = [
        :id, :source_type, :source_id, :adjustable_type, :adjustable_id,
        :originator_type, :originator_id, :amount, :label, :mandatory,
        :locked, :eligible, :created_at, :updated_at
      ]