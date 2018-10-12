
        
            # User defines a new private lane, which can't be called from the CLI
    def private_lane(lane_name, &block)
      UI.user_error!('You have to pass a block using 'do' for lane '#{lane_name}'. Make sure you read the docs on GitHub.') unless block
    
        private_constant :GA_TRACKING
    attr_accessor :session_id
    attr_accessor :client
    
        def handle_ssl_error!(e)
      # SSL errors are very common when the Ruby or OpenSSL installation is somehow broken
      # We want to show a nice error message to the user here
      # We have over 20 GitHub issues just for this one error:
      #   https://github.com/fastlane/fastlane/search?q=errno%3D0+state%3DSSLv3+read+server&type=Issues
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
    end
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 600')
        expect(result[1]).to include('-l')
        expect(result[1]).to include('-u')
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
      end
    
            context 'when enabled' do
          it 'should not raise if swiftlint completes with a non-zero exit status' do
            allow(FastlaneCore::UI).to receive(:important)
            expect(FastlaneCore::UI).to receive(:important).with(/fastlane will continue/)
            # This is simulating the exception raised if the return code is non-zero
            expect(Fastlane::Actions).to receive(:sh).and_raise('fake error')
            expect(FastlaneCore::UI).to_not(receive(:user_error!))
    
      context 'as an admin' do
    before :each do
      login_as(users(:jane))
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
    end

    
        it 'should convert the 'escape' method correctly' do
      expect(LiquidMigrator.convert_string('Escaped: <escape $.content.name>\nNot escaped: <$.content.name>')).to eq(
                                    'Escaped: {{content.name | uri_escape}}\nNot escaped: {{content.name}}'
      )
    end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
          it 'should not propagate to disabled Agents' do
        Agent.async_check(agents(:bob_weather_agent).id)
        agents(:bob_rain_notifier_agent).update_attribute :disabled, true
        mock(Agent).async_receive(agents(:bob_rain_notifier_agent).id, anything).times(0)
        Agent.receive!
      end
    
    module Docs
  require 'docs/core/autoload_helper'
  extend AutoloadHelper
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
            self.base_url.scheme = effective_base_url.scheme
        self.base_url.host = effective_base_url.host
        self.base_url.path = effective_base_url.path
        super
      ensure
        self.base_url.scheme = original_scheme
        self.base_url.host = original_host
        self.base_url.path = original_path
      end
    end
    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
            doc
      end
    end
  end
end

    
            css('pre.prettyprint').each do |node|
          node.content = node.content.strip
          node['data-language'] = 'dart' if node['class'].include?('dart')
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('class')
        end
    
      before_action :set_filters, only: :index
  before_action :set_filter, only: [:edit, :update, :destroy]
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
        private
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
        # ghettoooooo!
    # If we don't have any newlines..., put one there.
    if (header.size > 0 && header !~ /\r\n/)
      header << '\r\n'
    end
    
              private
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequest from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    desc 'run specs'
task(:spec) { ruby '-S rspec spec' }
    
            if unmasked_token?(token)
          compare_with_real_token token, session
    
          def secure_compare(a, b)
        Rack::Utils.secure_compare(a.to_s, b.to_s)
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
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
    # when launched as a script, not require'd, (currently from bin/logstash and bin/logstash-plugin) the first
# argument is the path of a Ruby file to require and a LogStash::Runner class is expected to be
# defined and exposing the LogStash::Runner#main instance method which will be called with the current ARGV
# currently lib/logstash/runner.rb and lib/pluginmanager/main.rb are called using this.
if $0 == __FILE__
  LogStash::Bundler.setup!({:without => [:build, :development]})
  require_relative 'patches/jar_dependencies'
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
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
    
          post_install_messages.compact.each do |message|
        PluginManager.ui.info(message)
      end
    
        puts('Unpacking #{package_file}')
    
        desc 'Run one single machine acceptance test'
    task :single, :machine do |t, args|
      ENV['LS_VAGRANT_HOST']  = args[:machine]
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/**/*_spec.rb']]))
    end
  end
end
