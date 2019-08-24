
        
                a_length = a_split.length
        b_length = b_split.length
    
        def initialize
      @pages = {}
    end
    
            if at_css('.api-type-label.module')
          at_css('h1').content = subpath.remove('api/')
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
          private
    
            if uri 
          path = remove_domain_from_uri(uri)
          path = add_fragment_back_to_path(uri, path)
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
              # Ensure that vendored static frameworks and libraries are not linked
          # twice to the aggregate target, which shares the xcconfig of the user
          # target.
          #
          def custom_build_settings
            settings = {
              'CODE_SIGN_IDENTITY[sdk=appletvos*]' => '',
              'CODE_SIGN_IDENTITY[sdk=iphoneos*]'  => '',
              'CODE_SIGN_IDENTITY[sdk=watchos*]'   => '',
              'MACH_O_TYPE'                        => 'staticlib',
              'OTHER_LDFLAGS'                      => '',
              'OTHER_LIBTOOLFLAGS'                 => '',
              'PODS_ROOT'                          => '$(SRCROOT)',
              'PRODUCT_BUNDLE_IDENTIFIER'          => 'org.cocoapods.${PRODUCT_NAME:rfc1034identifier}',
              'SKIP_INSTALL'                       => 'YES',
    }
    
              it 'adds the architectures to the custom build configurations of the user target' do
            @installer.send(:add_target).resolved_build_setting('ARCHS').should == {
              'Release' => ['$(ARCHS_STANDARD_64_BIT)'],
              'Debug' => ['$(ARCHS_STANDARD_64_BIT)'],
              'AppStore' => ['$(ARCHS_STANDARD_64_BIT)'],
              'Test' => ['$(ARCHS_STANDARD_64_BIT)'],
            }
          end
    
            it 'compares unequal build types as unequal' do
          BuildType.new(:linkage => :dynamic, :packaging => :framework).should != BuildType.new(:linkage => :dynamic, :packaging => :library)
          BuildType.new(:linkage => :static, :packaging => :library).should != BuildType.new(:linkage => :dynamic, :packaging => :library)
        end
      end
    
    Given(/^servers with the roles app and web$/) do
  begin
    vagrant_cli_command('up')
  rescue
    nil
  end
end
    
        def add_cmdline_filter(type, values)
      cmdline_filters << Filter.new(type, values)
    end
    
          private
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
      describe 'GET /:username/:slug' do
    context 'when story is an article' do
      it 'renders to appropriate page' do
        get article.path
        expect(response.body).to include CGI.escapeHTML(article.title)
      end
    
        class Mgr
      attr_reader :latest_error
      attr_reader :mutex
      attr_reader :cond
      def initialize
        @mutex = ::Mutex.new
        @cond = ::ConditionVariable.new
      end
      def processor_died(inst, err)
        @latest_error = err
        @mutex.synchronize do
          @cond.signal
        end
      end
      def processor_stopped(inst)
        @mutex.synchronize do
          @cond.signal
        end
      end
      def options
        { :concurrency => 3, :queues => ['default'] }
      end
    end
    
          Time.stub(:now, Time.now - 9) do
        dead_set.kill(Sidekiq.dump_json(jid: '000102', class: 'MyWorker2', args: []))
      end
    
      def self.io_adapters
    @io_adapters ||= Paperclip::AdapterRegistry.new
  end
    
          attr_reader :status, :message, :headers
    
          # Set or get a cookie
      #
      # @example
      #   cookies[:mycookie] = 'mycookie val'
      #   cookies['mycookie-string'] = 'mycookie string val'
      #   cookies[:more] = { value: '123', expires: Time.at(0) }
      #   cookies.delete :more
      #
      def cookies
        @cookies ||= Cookies.new
      end
    
    task default: %i[rubocop spec]

    
        def read(request)
      request.cookies.each do |name, value|
        @cookies[name.to_s] = value
      end
    end