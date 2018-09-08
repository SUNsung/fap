
        
              def find_oauth_access_token
        token = Doorkeeper::OAuth::Token.from_request(current_request, *Doorkeeper.configuration.access_token_methods)
        return unless token
    
            def metadata
          @metadata ||= Coverage::Metadata.new(self)
        end
    
            def key_text
          @entity.to_s
        end
    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
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
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = false
      super
    end
    
        def load_capybara_selenium
      require 'capybara/dsl'
      require 'selenium/webdriver'
      Capybara.register_driver :chrome do |app|
        options = Selenium::WebDriver::Chrome::Options.new(args: %w[headless disable-gpu])
        Capybara::Selenium::Driver.new(app, browser: :chrome, options: options)
      end
      Capybara.javascript_driver = :chrome
      Capybara.current_driver = :chrome
      Capybara.run_server = false
      Capybara
    end
    
      private
    
      def next_page
    account_outbox_url(@account, page: true, max_id: @statuses.last.id) if @statuses.size == LIMIT
  end
    
        def memorialize
      authorize @account, :memorialize?
      @account.memorialize!
      log_action :memorialize, @account
      redirect_to admin_account_path(@account.id)
    end
    
        def set_domain_block
      @domain_block = DomainBlock.find(params[:id])
    end
    
        def form_status_batch_params
      params.require(:form_status_batch).permit(status_ids: [])
    end
    
    class Api::PushController < Api::BaseController
  include SignatureVerification
    
      path = 'assets/stylesheets'
  css_path = args.with_defaults(css_path: 'tmp')[:css_path]
  puts Term::ANSIColor.bold 'Compiling SCSS in #{path}'
  Dir.mkdir(css_path) unless File.directory?(css_path)
  %w(_bootstrap bootstrap/_theme).each do |file|
    save_path = '#{css_path}/#{file.sub(/(^|\/)?_+/, '\1').sub('/', '-')}.css'
    puts Term::ANSIColor.cyan('  #{save_path}') + '...'
    engine    = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    css       = engine.render
    File.open(save_path, 'w') { |f| f.write css }
  end
end
    
          configure_sass
    end
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
    Given /^I have been invited by '([^\']+)'$/ do |email|
  AppConfig.settings.enable_registrations = false
  @inviter = User.find_by_email(email)
  @inviter_invite_count = @inviter.invitation_code.count
  i = EmailInviter.new('new_invitee@example.com', @inviter)
  i.send!
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
      end
    
      it 'ignores implicit hashes' do
    expect_no_offenses(<<-RUBY.strip_indent)
      foo(a: 1,
      b: 2)
    RUBY
  end
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
            def incorrect_style_detected(node)
          add_offense(node, message: PREFER_FOR) do
            opposite_style_detected
          end
        end