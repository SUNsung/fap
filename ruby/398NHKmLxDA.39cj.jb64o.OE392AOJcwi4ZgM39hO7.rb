
        
                      yield item, value, text, default_html_options.merge(additional_html_options)
            end.join.html_safe
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class TextField < Base # :nodoc:
        include Placeholderable
    
        def exists?(path, prefixes, *args)
      find_all(path, prefixes, *args).any?
    end
    
          private
        def self.layout(formats)
          find_template(name.underscore, { formats: formats }, { _prefixes: ['layouts'] })
        rescue ActionView::MissingTemplate
          begin
            find_template('application', { formats: formats }, { _prefixes: ['layouts'] })
          rescue ActionView::MissingTemplate
          end
        end
    
                if Fastlane::Actions.is_deprecated?(class_ref)
              puts('=========================================='.deprecated)
              puts('This action (#{method_sym}) is deprecated'.deprecated)
              puts(class_ref.deprecated_notes.to_s.deprecated) if class_ref.deprecated_notes
              puts('==========================================\n'.deprecated)
            end
            class_ref.runner = self # needed to call another action form an action
            return class_ref.run(arguments)
          end
        end
      rescue Interrupt => e
        raise e # reraise the interruption to avoid logging this as a crash
      rescue FastlaneCore::Interface::FastlaneCommonException => e # these are exceptions that we dont count as crashes
        raise e
      rescue FastlaneCore::Interface::FastlaneError => e # user_error!
        action_completed(method_sym.to_s, status: FastlaneCore::ActionCompletionStatus::USER_ERROR, exception: e)
        raise e
      rescue Exception => e # rubocop:disable Lint/RescueException
        # high chance this is actually FastlaneCore::Interface::FastlaneCrash, but can be anything else
        # Catches all exceptions, since some plugins might use system exits to get out
        action_completed(method_sym.to_s, status: FastlaneCore::ActionCompletionStatus::FAILED, exception: e)
        raise e
      end
    end
    
            is_swift = FastlaneCore::FastlaneFolder.swift?
        fastlane_client_language = is_swift ? :swift : :ruby
        action_launch_context = FastlaneCore::ActionLaunchContext.context_for_action_name(@program[:name], fastlane_client_language: fastlane_client_language, args: ARGV)
        FastlaneCore.session.action_launched(launch_context: action_launch_context)
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-copyright \'DocSet copyright\' --exit-threshold \'2\' input/dir')
      end
    
            context 'when command is bootstrap' do
          let(:command) { 'bootstrap' }
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
            it 'escapes spaces in list of files to process' do
          file = 'path/to/my project/source code/AppDelegate.swift'
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
                files: ['#{file}']
            )
          end').runner.execute(:test)
    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
    describe 'Creating a new agent', js: true do
  before(:each) do
    login_as(users(:bob))
  end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
        describe 'url' do
      it 'should be invalid with an unreasonable URL' do
        subject.url = 'foo'
        expect(subject).not_to be_valid
        expect(subject).to have(1).error_on(:url)
        expect(subject.errors[:url]).to include('appears to be invalid')
      end
    
    class ActivityPub::OutboxesController < Api::BaseController
  LIMIT = 20
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
      def available_locales
    I18n.available_locales.reverse
  end
end

    
      let(:env) { described_class.new }
    
    Rake::TestTask.new(:'test:core') do |t|
  core_tests = %w[base delegator encoding extensions filter
     helpers mapped_error middleware radius rdoc
     readme request response result route_added_hook
     routing server settings sinatra static templates]
  t.test_files = core_tests.map {|n| 'test/#{n}_test.rb'}
  t.ruby_opts = ['-r rubygems'] if defined? Gem
  t.ruby_opts << '-I.'
  t.warning = true
end
    
    
    
          def real_token(session)
        decode_token(session[:csrf])
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
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
          private
    
          def perform(yml)
        (target, method_name, args) = YAML.load(yml)
        msg = target.public_send(method_name, *args)
        # The email method can return nil, which causes ActionMailer to return
        # an undeliverable empty message.
        if msg
          deliver(msg)
        else
          raise '#{target.name}##{method_name} returned an undeliverable mail object'
        end
      end
    
          Sidekiq.logger.debug { 'Re-queueing terminated jobs' }
      jobs_to_requeue = {}
      inprogress.each do |unit_of_work|
        jobs_to_requeue[unit_of_work.queue_name] ||= []
        jobs_to_requeue[unit_of_work.queue_name] << unit_of_work.job
      end
    
          def disabled?
        self.__test_mode == :disable
      end
    
      class WebRoute
    attr_accessor :request_method, :pattern, :block, :name