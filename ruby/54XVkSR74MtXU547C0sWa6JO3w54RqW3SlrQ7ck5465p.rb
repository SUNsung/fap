
        
          context 'When auditing formula text' do
    it 'with both openssl and libressl optional dependencies' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
            it 'returns false if all are higher' do
          setup_java_with_version '1.8.0_5'
          expect(subject).not_to be_satisfied
        end
      end
    
        context 'with an unusually long query string' do
      let(:url) do
        [
          'https://node49152.ssl.fancycdn.example.com',
          '/fancycdn/node/49152/file/upload/download',
          '?cask_class=zf920df',
          '&cask_group=2348779087242312',
          '&cask_archive_file_name=cask.zip',
          '&signature=CGmDulxL8pmutKTlCleNTUY%2FyO9Xyl5u9yVZUE0',
          'uWrjadjuz67Jp7zx3H7NEOhSyOhu8nzicEHRBjr3uSoOJzwkLC8L',
          'BLKnz%2B2X%2Biq5m6IdwSVFcLp2Q1Hr2kR7ETn3rF1DIq5o0lHC',
          'yzMmyNe5giEKJNW8WF0KXriULhzLTWLSA3ZTLCIofAdRiiGje1kN',
          'YY3C0SBqymQB8CG3ONn5kj7CIGbxrDOq5xI2ZSJdIyPysSX7SLvE',
          'DBw2KdR24q9t1wfjS9LUzelf5TWk6ojj8p9%2FHjl%2Fi%2FVCXN',
          'N4o1mW%2FMayy2tTY1qcC%2FTmqI1ulZS8SNuaSgr9Iys9oDF1%2',
          'BPK%2B4Sg==',
        ].join
      end
    
      def mirror_args
    Homebrew::CLI::Parser.new do
      usage_banner <<~EOS
        `mirror` <formula>
    
      def clear_cache
    downloader.clear_cache
  end
    
      # escape unicode
  content.gsub!(/./) { |c| c.bytesize > 1 ? '\\u{#{c.codepoints.first.to_s(16)}}' : c }
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
      describe '#random_string' do
    it 'outputs a string of 32 characters' do
      expect(subject.random_string.length).to eq(32)
    end
  end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
          def register(hooks, settings)
        @instance.register_hooks(hooks)
        @instance.additionals_settings(settings)
      end
    end
    
    module LogStash
  module PluginManager
  end
end
    
        attr_reader :local_file
    
      def update_gems!
    # If any error is raise inside the block the Gemfile will restore a backup of the Gemfile
    previous_gem_specs_map = find_latest_gem_specs
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
        platforms.types.each do |type|
      desc 'Run acceptance test in #{type} machines'
      task type do
        ENV['LS_TEST_PLATFORM']=type
        exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/*_spec.rb']]))
      end
    end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
    
# This is a non obvious hack,
# EllipticalCurve are not completely implemented in JRuby 9k and the new version of SSH from the standard library
# use them.
#
# Details: https://github.com/jruby/jruby-openssl/issues/105
Net::SSH::Transport::Algorithms::ALGORITHMS.values.each { |algs| algs.reject! { |a| a =~ /^ecd(sa|h)-sha2/ } }
Net::SSH::KnownHosts::SUPPORTED_TYPE.reject! { |t| t =~ /^ecd(sa|h)-sha2/ }
    
        it 'denies chat channel invitation to non-authorized user' do
      expect do
        post '/chat_channel_memberships', params: {
          chat_channel_membership: {
            user_id: second_user.id, chat_channel_id: chat_channel.id
          }
        }
      end.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
      context 'when launchy cannot be required' do
    it 'prints out a correct warning message', requires: [:screenshot] do
      file_path = File.join(Dir.tmpdir, 'test.png')
      allow(@session).to receive(:warn)
      allow(@session).to receive(:require).with('launchy').and_raise(LoadError)
      @session.save_and_open_screenshot(file_path)
      expect(@session).to have_received(:warn).with('File saved to #{file_path}.\nPlease install the launchy gem to open the file automatically.')
    end
  end
end

    
          def commands(command)
        COMMANDS[command] || super
      end
    
      it 'should fill in a text field by label without for' do
    @session.fill_in('First Name', with: 'Harry')
    @session.click_button('awesome')
    expect(extract_results(@session)['first_name']).to eq('Harry')
  end
    
    if ::Selenium::WebDriver::Service.respond_to? :driver_path=
  ::Selenium::WebDriver::Safari::Service
else
  ::Selenium::WebDriver::Safari
end.driver_path = '/Applications/Safari Technology Preview.app/Contents/MacOS/safaridriver'
    
      module Capybara::RSpecMatcherProxyInstaller
    module ClassMethods
      def included(base)
        base.include(::Capybara::RSpecMatcherProxies) if base.include?(::Capybara::DSL)
        super
      end
    end
    
      it 'should click on a button with no type attribute' do
    @session.visit('/form')
    @session.click_link_or_button('no_type')
    expect(extract_results(@session)['first_name']).to eq('John')
  end
    
        unless locator.nil?
      locator = locator.to_s
      locator_matchers = XPath.attr(:id).equals(locator) |
                         XPath.attr(:name).equals(locator) |
                         XPath.attr(:value).is(locator) |
                         XPath.attr(:title).is(locator)
      locator_matchers |= XPath.attr(:'aria-label').is(locator) if enable_aria_label
      locator_matchers |= XPath.attr(test_id) == locator if test_id