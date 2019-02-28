
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(2)
      expect(limit_reached_for(user.id, dt)).to eq(true)
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{lounge.id}'
      end
    end
  end
end

    
              relation.update_all(update)
        end
      end
    end
  end
end

    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
              user = Representation::User.from_api_response(note.user) if note.user
          hash = {
            noteable_type: noteable_type,
            noteable_id: matches[:iid].to_i,
            author: user,
            note: note.body,
            created_at: note.created_at,
            updated_at: note.updated_at,
            github_id: note.id
          }
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
              # Require that names be an array
          names ||= []
          names = [names] if !names.is_a?(Array)
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
      # Use a different logger for distributed setups.
  # config.logger = ActiveSupport::TaggedLogging.new(SyslogLogger.new)
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
      # log-levels from the diaspora.yml for SQL and federation debug-logging
  Logging.logger[ActionView::Base].level = Rails.env.development? ? :debug : :warn
  Logging.logger[ActiveRecord::Base].level = AppConfig.environment.logging.debug.sql? ? :debug : :info
  Logging.logger[DiasporaFederation::Salmon::MagicEnvelope].level =
    AppConfig.environment.logging.debug.federation? ? :debug : :info
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
        context 'with a public post' do
      before do
        sign_in(alice, scope: :user)
        @post = alice.post(:status_message, text: 'hey', public: true)
      end
    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
          def response
        return @response if defined? @response
    
            def call
          @validator.call
        end
      end
    end
  end
end

    
            self
      end