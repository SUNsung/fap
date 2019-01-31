
        
            it 'shows all options for agents that can be scheduled, create and receive events' do
      select_agent_type('Website Agent scrapes')
      expect(page).not_to have_content('This type of Agent cannot create events.')
    end
    
          it 'should be invalid when the referenced url doesn't contain a scenario' do
        stub_request(:get, 'http://example.com/scenarios/1/export.json').to_return(:status => 200, :body => invalid_data)
        subject.url = 'http://example.com/scenarios/1/export.json'
        expect(subject).not_to be_valid
        expect(subject.errors[:base]).to include('The provided data does not appear to be a valid Scenario.')
      end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
          @log.level = 5
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
      describe 'validating' do
    before do
      expect(@checker).to be_valid
    end
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
        def handle_response(response)
      if process_response?(response)
        instrument 'process_response.scraper', response: response do
          process_response(response)
        end
      else
        instrument 'ignore_response.scraper', response: response
      end
    rescue => e
      if Docs.rescue_errors
        instrument 'error.doc', exception: e, url: response.url
        nil
      else
        raise e
      end
    end
    
          def initialize(limit)
        @limit = limit
        @minute = nil
        @counter = 0
      end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
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
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
              # Default opts to a blank optionparser if none is given
          opts ||= OptionParser.new
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
      subject { described_class.new(source, pipeline_id, unordered_config_parts, settings) }
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
    
    
    desc 'Create a release build and push to rubygems'
task :release => :build do
  unless `git branch` =~ /^\* master$/
    puts 'You must be on the master branch to release!'
    exit!
  end
  sh 'git commit --allow-empty -a -m 'Release #{version}''
  sh 'git pull --rebase origin master'
  sh 'git tag v#{version}'
  sh 'git push origin master'
  sh 'git push origin v#{version}'
  sh 'gem push pkg/#{name}-#{version}.gem'
end
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path
    
    require 'paperclip/railtie' if defined?(Rails::Railtie)