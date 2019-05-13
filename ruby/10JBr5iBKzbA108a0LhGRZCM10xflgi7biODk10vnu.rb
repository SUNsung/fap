
        
                  def default_datetime(options)
            return if options[:include_blank] || options[:prompt]
    
          def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
          RailsMultisite::ConnectionManagement.with_connection(db) do
        begin
          warning_job = @reactor.queue(@timeout) do
            Rails.logger.error ''#{desc}' is still running after #{@timeout} seconds on db #{db}, this process may need to be restarted!'
          end if !non_block
          job.call
        rescue => ex
          Discourse.handle_job_exception(ex, message: 'Running deferred code '#{desc}'')
        ensure
          warning_job&.cancel
        end
      end
    rescue => ex
      Discourse.handle_job_exception(ex, message: 'Processing deferred code queue')
    ensure
      ActiveRecord::Base.connection_handler.clear_active_connections!
    end
  end
    
        ActiveRecord::Base.transaction do
      # Delete records that belonged to users who have been deleted
      DB.exec 'DELETE FROM directory_items
                USING directory_items di
                LEFT JOIN users u ON (u.id = user_id AND u.active AND u.silenced_till IS NULL AND u.id > 0)
                WHERE di.id = directory_items.id AND
                      u.id IS NULL AND
                      di.period_type = :period_type', period_type: period_types[period_type]
    
      describe '#<<' do
    it 'normalizes directive name' do
      builder << {
        script_src: ['symbol_underscore'],
        'script-src': ['symbol_dash'],
        'script_src' => ['string_underscore'],
        'script-src' => ['string_dash'],
      }
    
        Discourse.plugins.each(&:notify_before_auth)
    
    class ContentSecurityPolicy
  class Builder
    EXTENDABLE_DIRECTIVES = %i[
      base_uri
      object_src
      script_src
      worker_src
    ].freeze
    
        def initialize
      @directives = {}.tap do |directives|
        directives[:base_uri] = [:none]
        directives[:object_src] = [:none]
        directives[:script_src] = script_src
        directives[:worker_src] = worker_src
        directives[:report_uri] = report_uri if SiteSetting.content_security_policy_collect_reports
      end
    end
    
      def search
    RailsMultisite::ConnectionManagement.with_hostname(params[:hostname]) do
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            # This is what is called on the class to actually execute it. Any
        # subclasses should implement this method and do any option parsing
        # and validation here.
        def execute
        end
    
              results
        end
    
        # Returns an array populated with the keys of this object.
    #
    # @return [Array]
    def keys
      @items.keys
    end
    
    puts 'DONE: #{blogs.count} written to #{OUTPUT_FILENAME}'
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
        get '/pages'
    
      test 'edit returns nil for non-existant page' do
    # post '/edit' fails. post '/edit/' works.
    page = 'not-real-page'
    path = '/'
    post '/edit/', :content => 'edit_msg',
         :page              => page, :path => path, :message => ''
    page_e = @wiki.paged(page, path)
    assert_equal nil, page_e
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        # make a backup of the option and sanitize it
    base_path_original = base_path.dup
    base_path = CGI.escape(base_path)
    
    # then let the user know if we changed the URL
    unless base_path_original == base_path
      puts <<MSG
Warning: your base-path has been sanitized:
  - original: '#{base_path_original}'
  - sanitized: '#{base_path}'
MSG
    end
      
    # and finally, let others enjoy our hard work:
    wiki_options[:base_path] = base_path
  end
  opts.on('--page-file-dir [PATH]', 'Specify the subdirectory for all pages. Default: repository root.', 
    'Example: setting this to 'pages' will make Gollum serve only pages at '<git-repo>/pages/*'.') do |path|
    wiki_options[:page_file_dir] = path
  end
  opts.on('--css', 'Inject custom CSS into each page. The '<git-repo>/custom.css' file is used (must be committed).') do
    wiki_options[:css] = true
  end
  opts.on('--js', 'Inject custom JavaScript into each page. The '<git-repo>/custom.js' file is used (must be committed).') do
    wiki_options[:js] = true
  end
  opts.on('--emoji', 'Parse and interpret emoji tags (e.g. :heart:).') do
    wiki_options[:emoji] = true
  end
  opts.on('--no-edit', 'Disable the feature of editing pages.')  do
    wiki_options[:allow_editing] = false
  end
  opts.on('--live-preview', 'Enable the live preview feature in page editor.') do
    wiki_options[:live_preview] = true
  end
  opts.on('--no-live-preview', 'Disable the live preview feature in page editor.') do
    wiki_options[:live_preview] = false
  end
  opts.on('--allow-uploads [MODE]', [:dir, :page], 'Enable file uploads.',
    'If set to 'dir', Gollum will store all uploads in the '<git-repo>/uploads/' directory.',
    'If set to 'page', Gollum will store each upload at the currently edited page.') do |mode|
    wiki_options[:allow_uploads]    = true
    wiki_options[:per_page_uploads] = true if mode == :page
  end
  opts.on('--mathjax', 'Enable MathJax (renders mathematical equations).',
    'By default, uses the 'TeX-AMS-MML_HTMLorMML' config with the 'autoload-all' extension.') do
    wiki_options[:mathjax] = true
  end
  opts.on('--irb', 'Launch Gollum in 'console mode', with a predefined API.') do
    options[:irb] = true
  end
  
  opts.separator ''
  opts.separator '  Minor:'
  
  opts.on('--h1-title', 'Use the first '<h1>' as page title.') do
    wiki_options[:h1_title] = true
  end
  opts.on('--show-all', 'Also show files in the file view. By default, only valid pages are shown.') do
    wiki_options[:show_all] = true
  end
  opts.on('--collapse-tree', 'Collapse the tree, when file view is opened. By default, the tree is expanded.') do
    wiki_options[:collapse_tree] = true
  end
  opts.on('--user-icons [MODE]', [:gravatar, :identicon, :none], 'Use specific user-icons for history view.',
    'Can be set to 'gravatar', 'identicon' or 'none'. Default: 'none'.') do |mode|
    wiki_options[:user_icons] = mode
  end
  opts.on('--mathjax-config [FILE]', 'Specify path to a custom MathJax configuration.',
    'If not specified, uses the '<git-repo>/mathjax.config.js' file.') do |file|
    wiki_options[:mathjax_config] = file || 'mathjax.config.js'
  end
  opts.on('--plantuml-url [URL]', 'Sets the PlantUML server endpoint.') do |url|
    wiki_options[:plantuml_url] = url
  end
  opts.on('--template-dir [PATH]', 'Specify custom mustache template directory.') do |path|
    wiki_options[:template_dir] = path
  end
  
  opts.separator ''
  opts.separator '  Common:'
  
  opts.on('--help', 'Display this message.') do
    puts opts
    exit 0
  end
  opts.on('--version', 'Display the current version of Gollum.') do
    puts 'Gollum ' + Gollum::VERSION
    exit 0
  end
  
  opts.separator ''
end