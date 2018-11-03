
        
                  if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
                  [:year, :month, :day, :hour, :min, :sec].each do |key|
                default[key] ||= time.send(key)
              end
    
              def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
          def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
        if superenv?
      ENV.keg_only_deps = keg_only_deps
      ENV.deps = formula_deps
      ENV.x11 = reqs.any? { |rq| rq.is_a?(X11Requirement) }
      ENV.setup_build_environment(formula)
      post_superenv_hacks
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    else
      ENV.setup_build_environment(formula)
      reqs.each(&:modify_build_environment)
      deps.each(&:modify_build_environment)
    
          # we readlink because this path probably doesn't exist since caveats
      # occurs before the link step of installation
      # Yosemite security measures mildly tighter rules:
      # https://github.com/Homebrew/homebrew/issues/33815
      if !plist_path.file? || !plist_path.symlink?
        if f.plist_startup
          s << 'To have launchd start #{f.full_name} at startup:'
          s << '  sudo mkdir -p #{destination}' unless destination_path.directory?
          s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
          s << '  sudo chown root #{plist_link}'
        else
          s << 'To have launchd start #{f.full_name} at login:'
          s << '  mkdir -p #{destination}' unless destination_path.directory?
          s << '  ln -sfv #{f.opt_prefix}/*.plist #{destination}'
        end
        s << 'Then to load #{f.full_name} now:'
        if f.plist_startup
          s << '  sudo launchctl load #{plist_link}'
        else
          s << '  launchctl load #{plist_link}'
        end
      # For startup plists, we cannot tell whether it's running on launchd,
      # as it requires for `sudo launchctl list` to get real result.
      elsif f.plist_startup
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  sudo launchctl unload #{plist_link}'
        s << '  sudo cp -fv #{f.opt_prefix}/*.plist #{destination}'
        s << '  sudo chown root #{plist_link}'
        s << '  sudo launchctl load #{plist_link}'
      elsif Kernel.system '/bin/launchctl list #{plist_domain} &>/dev/null'
        s << 'To reload #{f.full_name} after an upgrade:'
        s << '  launchctl unload #{plist_link}'
        s << '  launchctl load #{plist_link}'
      else
        s << 'To load #{f.full_name}:'
        s << '  launchctl load #{plist_link}'
      end
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
              workspace_path = 'Examples.xcworkspace'
          workspace = Xcodeproj::Workspace.new_from_xcworkspace(workspace_path)
          workspace.schemes.each do |scheme_name, project_path|
            next if scheme_name == 'Pods'
            next if project_path.end_with? 'Pods.xcodeproj'
            puts '    Building scheme: #{scheme_name}'
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
          def unmasked_token?(token)
        token.length == TOKEN_LENGTH
      end
    
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
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
      it 'ignores implicit arrays' do
    expect_no_offenses(<<-RUBY.strip_indent)
      foo = a,
      b
    RUBY
  end
    
      context 'when arguments to a method' do
    let(:prefix) { 'bar(' }
    let(:suffix) { ')' }
    let(:source) { construct(false, true) }
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
    class SinatraWorker
  include Sidekiq::Worker
    
        attr_accessor :redis_pool
    
      module Worker
    ##
    # The Sidekiq testing infrastructure overrides perform_async
    # so that it does not actually touch the network.  Instead it
    # stores the asynchronous jobs in a per-class array so that
    # their presence/absence can be asserted by your tests.
    #
    # This is similar to ActionMailer's :test delivery_method and its
    # ActionMailer::Base.deliveries array.
    #
    # Example:
    #
    #   require 'sidekiq/testing'
    #
    #   assert_equal 0, HardWorker.jobs.size
    #   HardWorker.perform_async(:something)
    #   assert_equal 1, HardWorker.jobs.size
    #   assert_equal :something, HardWorker.jobs[0]['args'][0]
    #
    #   assert_equal 0, Sidekiq::Extensions::DelayedMailer.jobs.size
    #   MyMailer.delay.send_welcome_email('foo@example.com')
    #   assert_equal 1, Sidekiq::Extensions::DelayedMailer.jobs.size
    #
    # You can also clear and drain all workers' jobs:
    #
    #   assert_equal 0, Sidekiq::Extensions::DelayedMailer.jobs.size
    #   assert_equal 0, Sidekiq::Extensions::DelayedModel.jobs.size
    #
    #   MyMailer.delay.send_welcome_email('foo@example.com')
    #   MyModel.delay.do_something_hard
    #
    #   assert_equal 1, Sidekiq::Extensions::DelayedMailer.jobs.size
    #   assert_equal 1, Sidekiq::Extensions::DelayedModel.jobs.size
    #
    #   Sidekiq::Worker.clear_all # or .drain_all
    #
    #   assert_equal 0, Sidekiq::Extensions::DelayedMailer.jobs.size
    #   assert_equal 0, Sidekiq::Extensions::DelayedModel.jobs.size
    #
    # This can be useful to make sure jobs don't linger between tests:
    #
    #   RSpec.configure do |config|
    #     config.before(:each) do
    #       Sidekiq::Worker.clear_all
    #     end
    #   end
    #
    # or for acceptance testing, i.e. with cucumber:
    #
    #   AfterStep do
    #     Sidekiq::Worker.drain_all
    #   end
    #
    #   When I sign up as 'foo@example.com'
    #   Then I should receive a welcome email to 'foo@example.com'
    #
    module ClassMethods
    
        def fire_event(event, options={})
      reverse = options[:reverse]
      reraise = options[:reraise]