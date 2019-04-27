          # Setup the options hash
          options ||= {}
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
              hosts
        end
    
              # Return the registry
          data[:communicator]
        end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
              return [main_args, sub_command, sub_args]
        end
      end
    end
  end
end

    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
    describe NotificationsController, :type => :controller do
  before do
    sign_in alice, scope: :user
  end
    
    require_relative '../lib/bootstrap/environment'
    
      subject { described_class.new(source, pipeline_id, unordered_config_parts, settings) }
    
        desc 'Bootstrap all the VM's used for this tests'
    task :setup, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
              it 'fails when installing a non logstash plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install  bundler')
            expect(command).not_to install_successfully
          end