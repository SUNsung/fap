
        
              it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
      end
    
      before do
    login_as(user)
  end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
      protected
    
        # The path used after sending reset password instructions
    def after_sending_reset_password_instructions_path_for(resource_name)
      new_session_path(resource_name) if is_navigational_format?
    end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
              class_eval <<-METHODS, __FILE__, __LINE__ + 1
            def authenticate_#{group_name}!(favourite=nil, opts={})
              unless #{group_name}_signed_in?
                mappings = #{mappings}
                mappings.unshift mappings.delete(favourite.to_sym) if favourite
                mappings.each do |mapping|
                  opts[:scope] = mapping
                  warden.authenticate!(opts) if !devise_controller? || opts.delete(:force)
                end
              end
            end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          it 'supports Unicode characters' do
        format('%c', 1286).should == 'Ԇ'
        format('%c', 'ش').should == 'ش'
      end
    end
    
      it 'raises ArgumentError if 3 or more arguments provided' do
    lambda {
      catch :blah do
        throw :blah, :return_value, 2
      end
    }.should raise_error(ArgumentError)
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
      # Use a different cache store in production.
  # config.cache_store = :mem_cache_store
    
      config.active_support.test_order = :random
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
          attr_reader :key, :default, :options