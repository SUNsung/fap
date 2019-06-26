
        
              def test_controller_raise_error_about_missing_helper
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'Missing helper file helpers/missing_helper.rb', e.message
      end
    
        render inline: FEEDS[params[:id]], type: :builder
  end
end
    
    module Scheduler
    
      def call(env)
    
          if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
        def normalize(directive)
      directive.to_s.gsub('-', '_').to_sym
    end
    
        langs.sort
  end
    
        def base_url
      @base_url || Discourse.base_url
    end
    attr_writer :base_url
  end
    
              extension[directive] ||= []
          extension[directive] << source
        end
      end
    end
  end
end

    
    class ContentSecurityPolicy
  class Middleware
    def initialize(app)
      @app = app
    end
    
          script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include(*%w[
        https://cdn.com/assets/
        https://cdn.com/brotli_asset/
        https://cdn.com/highlight-js/
        https://cdn.com/javascripts/
        https://cdn.com/plugins/
        https://cdn.com/theme-javascripts/
        http://test.localhost/extra-locales/
      ])
    
              view_start = Process.clock_gettime(Process::CLOCK_MONOTONIC)
          begin
            instance.instance_eval(&blk)
          rescue => e
            # TODO we need to reuse our exception handling in ApplicationController
            Discourse.warn_exception(e, message: 'Failed to process hijacked response correctly', env: env)
          end
          view_runtime = Process.clock_gettime(Process::CLOCK_MONOTONIC) - view_start
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        flags = []
    args = []
    while rc_args.size > 0 do
      arg = rc_args.shift
      opt = self.class.find_option(arg)
      if opt and not opt.flag?
        flags.push(arg)
        flags.push(rc_args.shift)
      elsif opt or arg[0] == '-'
        flags.push(arg)
      else
        args.push(arg)
      end
    end
    
      # Get the contents of the script by a given name.
  #
  # If template_scripts? is set in attributes (often by the --template-scripts
  # flag), then apply it as an ERB template.
  def script(script_name)
    if attributes[:template_scripts?]
      erb = ERB.new(scripts[script_name], nil, '-')
      # TODO(sissel): find the original file name for the file.
      erb.filename = 'script(#{script_name})'
      return erb.result(binding)
    else
      return scripts[script_name]
    end
  end # def script
    
      def to_s(format=nil)
    return super(format.nil? ? 'NAME-VERSION.EXTENSION' : format)
  end # def to_s
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
        if File.directory?(path_to_package)
      setup_py = File.join(path_to_package, 'setup.py')
    else
      setup_py = path_to_package
    end