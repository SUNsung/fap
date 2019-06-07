
        
        def pr(url)
  if url.end_with?(FORWARD_SLASH)
    url
  else
    url_dir = File.dirname(url)
    url_dir.end_with?(FORWARD_SLASH) ? url_dir : '#{url_dir}/'
  end
end
    
    Jekyll::PluginManager.require_from_bundler
    
          def after_feature_element(feature_element)
        @timings[feature_element_timing_key(feature_element)] = Time.now - @timings[feature_element_timing_key(feature_element)]
        @io.print ' (#{@timings[feature_element_timing_key(feature_element)]}s)'
      end
    
          def jekyll
        JekyllDrop.global
      end
    
            def id_for_already_imported_cache(issue)
          issue.number
        end
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
            expose_attribute :id, :login
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def options
      @options ||= self.class.options.deep_dup.tap do |options|
        options.merge! base_url: base_url, root_url: root_url,
                       root_path: root_path, initial_paths: initial_paths,
                       version: self.class.version, release: self.class.release
    
            css('br', 'hr', '.material-icons', '.header-link', '.breadcrumb').remove
    
            css('div.badges').each do |node|
          node.name = 'p'
        end
    
      # Setup the root logger with the Rails log level and the desired set of
  # appenders. The list of appenders to use should be set in the environment
  # specific configuration file.
  #
  # For example, in a production application you would not want to log to
  # STDOUT, but you would want to send an email for 'error' and 'fatal'
  # messages:
  #
  # => config/environments/production.rb
  #
  #     config.log_to = %w[file email]
  #
  # In development you would want to log to STDOUT and possibly to a file:
  #
  # => config/environments/development.rb
  #
  #     config.log_to = %w[stdout file]
  #
  Logging.logger.root.appenders = config.log_to unless config.log_to.empty?
    
      describe '#read_all' do
    let(:post) { FactoryGirl.create(:status_message) }
    
        describe 'other streams' do
      it 'redirects to the login page' do
        %i[activity followed_tags liked mentioned multi].each do |stream_path|
          get stream_path
          expect(response).to be_redirect
          expect(response).to redirect_to new_user_session_path
        end
      end
    end
  end
end

    
    def system!(*args)
  system(*args) || abort('\n== Command #{args} failed ==')
end
    
      # Tell Action Mailer not to deliver emails to the real world.
  # The :test delivery method accumulates sent emails in the
  # ActionMailer::Base.deliveries array.
  config.action_mailer.delivery_method = :test