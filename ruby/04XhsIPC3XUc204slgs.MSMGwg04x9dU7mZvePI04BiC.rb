
        
          def relative_url_redirect_with_status
    redirect_to('/things/stuff', status: :found)
  end
    
          test 'when a callback is modified in a child with :only, it does not work for other actions' do
        @controller.process(:not_index)
        assert_equal '', @controller.response_body
      end
    end
    
          private
    
          def create_mailer_file
        template 'mailer.rb', File.join('app/mailers', class_path, '#{file_name}_mailer.rb')
    
      test 'does not append the deliveries collection if told not to perform the delivery' do
    old_perform_deliveries = DeliveryMailer.perform_deliveries
    begin
      DeliveryMailer.perform_deliveries = false
      DeliveryMailer.welcome.deliver_now
      assert_equal [], DeliveryMailer.deliveries
    ensure
      DeliveryMailer.perform_deliveries = old_perform_deliveries
    end
  end
    
      def test_send_mail
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        with_translation 'de', email_subject: '[Anmeldung] Willkommen' do
          get '/test/send_mail'
          assert_equal 'Mail sent - Subject: [Anmeldung] Willkommen', @response.body
        end
      end
    end
  end
    
    module AccountFinderConcern
  extend ActiveSupport::Concern
    
          it 'processes payload with sender if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).not_to receive(:verify_account!)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), forwarder, instance_of(Hash))
    
        # Validates that {#boundary} is {#valid_ip_or_range? a valid IP address or
    # IP address range}. Due to this not being tested before it was moved here
    # from Mdm, the default workspace does not validate. We always validate boundaries
    # and a workspace may have a blank default boundary.
    #
    # @return [void]
    def boundary_must_be_ip_range
      unless boundary.blank?
        begin
          boundaries = Shellwords.split(boundary)
        rescue ArgumentError
          boundaries = []
        end
    
          case Rails.env
      when 'development'
        config.eager_load = false
      when 'test'
        config.eager_load = false
      when 'production'
        config.eager_load = true
      end
    end
  end
end
    
    require 'rubygems'  # install rubygems
require 'hpricot'   # gem install hpricot
require 'uri'
require 'timeout'
    
    	def initialize(filename)
		unless filename.empty?
			self.file = File.new(filename)
		else
			self.file = STDIN
		end
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
        # Concatenates two string literals or string interpolation expressions.
    #
    # @param string_or_interp1 [Sass::Script::Tree::Literal|Sass::Script::Tree::StringInterpolation]
    # @param string_or_interp2 [Sass::Script::Tree::Literal|Sass::Script::Tree::StringInterpolation]
    # @return [Sass::Script::Tree::StringInterpolation]
    def concat(string_or_interp1, string_or_interp2)
      if string_or_interp1.is_a?(Literal) && string_or_interp2.is_a?(Literal)
        return string_literal(string_or_interp1.value.value + string_or_interp2.value.value)
      end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
          it 'selects nothing when a role filter is present' do
        dsl.set :filter, role: 'web'
        SSHKit::Coordinator.expects(:new).with([]).returns(@coordinator)
        dsl.on('my.server')
      end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          def bad_cookies
        @bad_cookies ||= []
      end
    
          def initialize(*)
        super
    
      subject { described_class.new(lambda {}) }
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('ALLOW-FROM foo')
  end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
      it 'denies requests with a changing User-Agent header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
    expect(session).to be_empty
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
      def max_minus_two
    [1, (maximum - 2)].max.floor
  end
end end end
