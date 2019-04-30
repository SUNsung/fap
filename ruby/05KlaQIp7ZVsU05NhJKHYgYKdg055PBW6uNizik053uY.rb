
        
          def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
        def default_failure_app(options)
      @failure_app = options[:failure_app] || Devise::FailureApp
      if @failure_app.is_a?(String)
        ref = Devise.ref(@failure_app)
        @failure_app = lambda { |env| ref.get.call(env) }
      end
    end
    
    When /^I try to sign in manually$/ do
  manual_login
end
    
    When /^I toggle nsfw posts$/ do
  find('.toggle_nsfw_state', match: :first).click
end
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
          it 'returns an array of reshares for a post' do
        bob.reshare!(@post)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to eq(@post.reshares.map(&:id))
      end
    
    #{stack}
#{executable_path}
### Plugins
    
            def listen
          while repl_command = STDIN.gets
            execute_repl_command(repl_command)
          end
        end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end