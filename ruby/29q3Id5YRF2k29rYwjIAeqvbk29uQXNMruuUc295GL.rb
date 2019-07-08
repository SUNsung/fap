
        
            def lowest_date
      '1900-01-01'
    end
    
      enum req_type: %i(http_total
                    http_2xx
                    http_background
                    http_3xx
                    http_4xx
                    http_5xx
                    page_view_crawler
                    page_view_logged_in
                    page_view_anon
                    page_view_logged_in_mobile
                    page_view_anon_mobile)
    
          @directives.each do |directive, sources|
        if sources.is_a?(Array)
          policy.public_send(directive, *sources)
        else
          policy.public_send(directive, sources)
        end
      end
    
        Extension.theme_extensions(theme_ids).each { |extension| builder << extension }
    Extension.plugin_extensions.each { |extension| builder << extension }
    builder << Extension.site_setting_extension
    
        # NOTE: we only update the counts for users we have seen in the last hour
    #  this avoids a very expensive query that may run on the entire user base
    #  we also ensure we only touch the table if data changes
    
      def self.generate!(user_id: , user_agent: nil, client_ip: nil, path: nil, staff: nil, impersonate: false)
    token = SecureRandom.hex(16)
    hashed_token = hash_token(token)
    user_auth_token = UserAuthToken.create!(
      user_id: user_id,
      user_agent: user_agent,
      client_ip: client_ip,
      auth_token: hashed_token,
      prev_auth_token: hashed_token,
      rotated_at: Time.zone.now
    )
    user_auth_token.unhashed_auth_token = token
    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
          # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
            def sidekiq_worker_class
          ImportNoteWorker
        end
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
            # We inject the page number here to make sure that all importers always
        # start where they left off. Simply starting over wouldn't work for
        # repositories with a lot of data (e.g. tens of thousands of comments).
        options = collection_options.merge(page: page_counter.current)
    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
        result
  end
    
      return captured_stdout.string, captured_stderr.string
ensure
  $stdout = orig_stdout
  $stderr = orig_stderr
end
    
        context 'only $XDG_CONFIG_HOME/tmuxinator exists' do
      it 'is #xdg' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return true
        allow(described_class).to receive(:home?).and_return false
    
          new(yaml, options)
    end