
        
            def get_path_for_upload(upload)
      extension =
        if upload.extension
          '.#{upload.extension}'
        else
          # Maintain backward compatibility before Jobs::MigrateUploadExtensions runs
          File.extname(upload.original_filename)
        end
    
    describe PrettyText do
    
          if message_template == :email_reject_old_destination
        template_args[:short_url] = e.message
        template_args[:number_of_days] = SiteSetting.disallow_reply_by_email_after_days
      end
    
    # This is used in topic lists
require_dependency 'topic_poster'
    
          limiter10 = RateLimiter.new(
        nil,
        'global_ip_limit_10_#{ip}',
        GlobalSetting.max_reqs_per_ip_per_10_seconds,
        10,
        global: true
      )
    
          override_translation('en', 'throne', '%{title} is the new queen')
      expect(I18n.t('throne', title: 'snow')).to eq('snow is the new queen')
      expect(I18n.with_locale(:en) { I18n.t('throne', title: 'snow') })
        .to eq('snow is the new queen')
    end
    
        /\Ahttps:\/\/#{bucket}.*#{prefix}\/#{filename}\?.*X-Amz-Expires=#{expires}.*X-Amz-Signature=.*\z/
  end
    
          plugin_providers[:foo] = [provider_usable_class(true), { priority: 5 }]
      plugin_providers[:bar] = [provider_usable_class(true), { priority: 7 }]
      plugin_providers[:baz] = [provider_usable_class(true), { priority: 2 }]
      plugin_providers[:boom] = [provider_usable_class(true), { priority: 3 }]
    
        it 'configures with sub-machine config' do
      register_provider('foo')
    
                if trigger.ruby_block
              execute_ruby(trigger.ruby_block)
            end
          end
        end
    
          it 'continues on if guest does not exist but is configured to continue on error' do
        trigger = trigger_run.before_triggers.first
        shell_config = trigger.run_remote
        on_error = trigger.on_error
        exit_codes = trigger.exit_codes
    
        # On Windows, we default to the USERPROFILE directory if it
    # is available. This is more compatible with Cygwin and sharing
    # the home directory across shells.
    if !path && ENV['USERPROFILE']
      path = '#{ENV['USERPROFILE']}/.vagrant.d'
    end
    
            get '/pipelines/:id' do
          pipeline_id = params['id']
          opts = {:graph => as_boolean(params.fetch('graph', false)),
                  :vertices => as_boolean(params.fetch('vertices', false))}
          payload = node.pipeline(pipeline_id, opts)
          halt(404) if payload.empty?
          respond_with(:pipelines => { pipeline_id => payload } )
        end
    
        puts('Generated at #{target_file}')
  end
    
    module LogStash
  module PluginManager
  end
end
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
      describe '#replaces' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, []
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
        # Change directory to the source path, and glob files
    # This is done so that we end up with a 'flat' archive, that doesn't
    # have any path artifacts from the packager's absolute path.
    ::Dir::chdir(path) do
      entries = ::Dir::glob('**', File::FNM_DOTMATCH)
    
        # Create a temporary config file
    logger.debug('Creating pear config file')
    config = File.expand_path(build_path('pear.config'))
    installroot = attributes[:prefix] || '/usr/share'
    safesystem('pear', 'config-create', staging_path(installroot), config)
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']