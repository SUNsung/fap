
        
            def build_pages(&block)
      raise NotImplementedError
    end
  end
end

    
        def initialize
      @pages = {}
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
          def inherited(subclass)
        super
        subclass.base_url = base_url
        subclass.dir = dir
      end
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
        def normalized_path
      path == '' ? '/' : path
    end
    
            if h1 = at_css('h1')
          h1.prepend_child(css('.view-source', '.improve-docs'))
        end
    
        def set_account_moderation_note
      @account_moderation_note = AccountModerationNote.find(params[:id])
    end
  end
end

    
          @account.reset_avatar!
      @account.reset_header!
      @account.save!
    
        def resubscribe
      authorize :instance, :resubscribe?
      params.require(:by_domain)
      Pubsubhubbub::SubscribeWorker.push_bulk(subscribeable_accounts.pluck(:id))
      redirect_to admin_instances_path
    end
    
          redirect_to admin_report_path(@report)
    end
    
      def account_from_topic
    if hub_topic.present? && local_domain? && account_feed_path?
      Account.find_local(hub_topic_params[:username])
    end
  end
    
        local_gem = plugins_arg.collect { |plugin| ::File.extname(plugin) == '.gem' }.uniq
    
                              specs
                        end
  end
end # class Logstash::PluginManager

    
        def self.find_by_name_with_wildcards(pattern)
      re = transform_pattern_into_re(pattern)
      ::Gem::Specification.find_all.select do |specification|
        specification.name =~ re
      end
    end
    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
    Gem::Specification.new do |gem|
  gem.authors       = ['Elastic']
  gem.email         = ['info@elastic.co']
  gem.description   = %q{Logstash plugin API}
  gem.summary       = %q{Define the plugin API that the plugin need to follow.}
  gem.homepage      = 'http://www.elastic.co/guide/en/logstash/current/index.html'
  gem.license       = 'Apache License (2.0)'
    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end