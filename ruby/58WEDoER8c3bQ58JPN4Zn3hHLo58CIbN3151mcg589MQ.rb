
        
            # Returns last modification time for this file.
    def mtime
      modified_time.to_i
    end
    
          should 'have a relative_directory attribute' do
        assert_equal '_methods', @collection.to_liquid['relative_directory']
      end
    
        should 'ensure limit posts is 0 or more' do
      assert_raises ArgumentError do
        clear_dest
        @site = fixture_site('limit_posts' => -1)
      end
    end
    
          def [](key)
        if key != 'posts' && @obj.collections.key?(key)
          @obj.collections[key].docs
        else
          super(key)
        end
      end
    
            def setup
          @config['syntax_highlighter'] ||= highlighter
          @config['syntax_highlighter_opts'] ||= {}
          @config['syntax_highlighter_opts']['guess_lang'] = @config['guess_lang']
          @config['coderay'] ||= {} # XXX: Legacy.
          modernize_coderay_config
        end
    
    # Test https://github.com/jekyll/jekyll/pull/6735#discussion_r165499868
# ------------------------------------------------------------------------
def check_with_regex(content)
  !content.to_s.match?(%r!{[{%]!)
end
    }
    }
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    Jekyll::Deprecator.process(ARGV)
    
            private
    
      ActiveSupport.run_load_hooks(:devise_controller, self)
end

    
          def forget_cookie_values(resource)
        Devise::Controllers::Rememberable.cookie_values.merge!(resource.rememberable_options)
      end
    
          private
    
          protected
    
        # The hook which is called inside devise.
    # So your ORM can include devise compatibility stuff.
    def devise_modules_hook!
      yield
    end
  end
end
    
          def rsync_pre(machine, opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        machine.communicate.sudo('mkdir -p #{guest_path}')
      end
    
          expect(subject.ssh_info).to eq(nil)
    end
    
          env[:box_url] = tf.path
      env[:box_provider] = 'vmware'
      expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
        expect(checksum(path)).to eq(checksum(box_path))
        expect(name).to eq('foo/bar')
        expect(version).to eq('0.7')
        expect(opts[:metadata_url]).to eq('file://#{tf.path}')
        true
      }.and_return(box)
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
          # 4. Vagrant will go through all installed provider plugins (including the
      #    ones that come with Vagrant), and find the first plugin that reports
      #    it is usable. There is a priority system here: systems that are known
      #    better have a higher priority than systems that are worse. For
      #    example, if you have the VMware provider installed, it will always
      #    take priority over VirtualBox.
    
            def create(params, **opts, &block)
          # NOTE: Use the direct machine name as we don't
          # need to worry about uniqueness with compose
          name    = machine.name.to_s
          image   = params.fetch(:image)
          links   = Array(params.fetch(:links, [])).map do |link|
            case link
            when Array
              link
            else
              link.to_s.split(':')
            end
          end
          ports   = Array(params[:ports])
          volumes = Array(params[:volumes]).map do |v|
            v = v.to_s
            host, guest = v.split(':', 2)
            if v.include?(':') && (Vagrant::Util::Platform.windows? || Vagrant::Util::Platform.wsl?)
              host = Vagrant::Util::Platform.windows_path(host)
              # NOTE: Docker does not support UNC style paths (which also
              # means that there's no long path support). Hopefully this
              # will be fixed someday and the gsub below can be removed.
              host.gsub!(/^[^A-Za-z]+/, '')
            end
            # if host path is a volume key, don't expand it.
            # if both exist (a path and a key) show warning and move on
            # otherwise assume it's a realative path and expand the host path
            compose_config = get_composition
            if compose_config['volumes'] && compose_config['volumes'].keys.include?(host)
              if File.directory?(@machine.env.cwd.join(host).to_s)
                @machine.env.ui.warn(I18n.t('docker_provider.volume_path_not_expanded',
                                           host: host))
              end
            else
              @logger.debug('Path expanding #{host} to current Vagrant working dir instead of docker-compose config file directory')
              host = @machine.env.cwd.join(host).to_s
            end
            '#{host}:#{guest}'
          end
          cmd     = Array(params.fetch(:cmd))
          env     = Hash[*params.fetch(:env).flatten.map(&:to_s)]
          expose  = Array(params[:expose])
          @logger.debug('Creating container `#{name}`')
          begin
            update_args = [:apply]
            update_args.push(:detach) if params[:detach]
            update_args << block
            update_composition(*update_args) do |composition|
              services = composition['services'] ||= {}
              services[name] ||= {}
              if params[:extra_args].is_a?(Hash)
                services[name].merge!(
                  Hash[
                    params[:extra_args].map{ |k, v|
                      [k.to_s, v]
                    }
                  ]
                )
              end
              services[name].merge!(
                'environment' => env,
                'expose' => expose,
                'ports' => ports,
                'volumes' => volumes,
                'links' => links,
                'command' => cmd
              )
              services[name]['image'] = image if image
              services[name]['hostname'] = params[:hostname] if params[:hostname]
              services[name]['privileged'] = true if params[:privileged]
              services[name]['pty'] = true if params[:pty]
            end
          rescue => error
            @logger.error('Failed to create container `#{name}`: #{error.class} - #{error}')
            update_composition do |composition|
              composition['services'].delete(name)
            end
            raise
          end
          get_container_id(name)
        end
    
        return if target_account.nil? || !target_account.also_known_as.include?(origin_account.uri)
    
      describe 'POST #block' do
    let(:scopes) { 'write:blocks' }
    let(:other_account) { Fabricate(:user, email: 'bob@example.com', account: Fabricate(:account, username: 'bob')).account }
    
      let(:user)   { Fabricate(:user, account: Fabricate(:account, username: 'alice')) }
  let(:scopes) { 'read:statuses' }
  let(:token)  { Fabricate(:accessible_access_token, resource_owner_id: user.id, scopes: scopes) }
    
      let(:unknown_object_json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'https://example.com/actor/hello-world',
      type: 'Note',
      attributedTo: 'https://example.com/actor',
      content: 'Hello world',
      to: 'http://example.com/followers',
    }
  end
    
          {
          :type => queue_type,
          :events_count => events,
          :queue_size_in_bytes => queue_size_in_bytes,
          :max_queue_size_in_bytes => max_queue_size_in_bytes,
      }
    end
  end
end; end;

    
          @event.set('[@metadata]', {
        'document_type' => 'logstash_state',
        'timestamp' => Time.now
      })
    
        def fetch_node_stats(agent, stats)
      @global_stats.merge({
        'http_address' => stats.get_shallow(:http_address).value,
        'ephemeral_id' => agent.ephemeral_id
      })
    end
  end
end; end; end

    
      def execute
    signal_deprecation_warning_for_pack
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.win_platform?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.win_platform?
    
        def self.transform_pattern_into_re(pattern)
      Regexp.new('^#{pattern.gsub(WILDCARD, WILDCARD_INTO_RE)}$')
    end
  end
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end