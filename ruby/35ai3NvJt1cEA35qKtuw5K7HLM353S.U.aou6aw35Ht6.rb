
        
            # The category for users with trust level 3 has been created.
    # Add initial permissions and description. They can be changed later.
    
        # @param filter_platform: Filter, to only show the lanes of a given platform
    # @return an array of lanes (platform lane_name) to print them out to the user
    def available_lanes(filter_platform = nil)
      all = []
      lanes.each do |platform, platform_lanes|
        next if filter_platform && filter_platform.to_s != platform.to_s # skip actions that don't match
    
          it 'adds options param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            options: '--use-single-star --keep-intermediate-files --search-undocumented-doc'
          )
        end').runner.execute(:test)
    
          it 'use custom executable' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              executable: 'custom_carthage'
            )
          end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0].shellescape} #{path[1].shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
            it 'doesn't display a deprecation message when loading a config if a deprecated option doesn't have a value' do
          c = FastlaneCore::ConfigItem.new(key: :foo,
                                           description: 'foo',
                                           deprecated: 'replaced by bar')
          values = {
            foo: 'something'
          }
          expect(FastlaneCore::UI).to receive(:deprecated).with('Using deprecated option: '--foo' (replaced by bar)')
          config = FastlaneCore::Configuration.create([c], values)
        end
    
      describe '#nav_link' do
    it 'returns a nav link' do
      stub(self).current_page?('/things') { false }
      nav = nav_link('Things', '/things')
      a = Nokogiri(nav).at('li:not(.active) > a[href='/things']')
      expect(a.text.strip).to eq('Things')
    end
    
              @bar1 = Agents::DotBar.new(name: 'bar1').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.save!
          },
    
            it 'adds errors when updated agents are invalid' do
          scenario_import.merges = {
            '0' => {
              'name' => '',
              'schedule' => 'foo',
              'keep_events_for' => 2.days.to_i.to_s,
              'options' => weather_agent_options.merge('api_key' => '').to_json
            }
          }
    
        it 'warns and returns nil when not parseable' do
      mock(STDERR).puts('WARNING: Invalid duration format: 'bogus'')
      expect(Utils.parse_duration('bogus')).to be_nil
    end
  end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
    module LogStash
  module Environment
    extend self
    
        def self.transform_pattern_into_re(pattern)
      Regexp.new('^#{pattern.gsub(WILDCARD, WILDCARD_INTO_RE)}$')
    end
  end
    
      def target_file
    target_file = File.join(LogStash::Environment::LOGSTASH_HOME, 'plugins_package')
    '#{target_file}#{file_extension}'
  end
end

    
        while readable_io = IO.select([self_read])
      signal = readable_io.first[0].gets.strip
      handle_signal(launcher, signal)
    end
  #end
rescue SystemExit => e
  #Sidekiq.logger.error('Profiling...')
  #result = RubyProf.stop
  #printer = RubyProf::GraphHtmlPrinter.new(result)
  #printer.print(File.new('output.html', 'w'), :min_percent => 1)
  # normal
rescue => e
  raise e if $DEBUG
  STDERR.puts e.message
  STDERR.puts e.backtrace.join('\n')
  exit 1
end

    
        ##
    # Define client-side middleware:
    #
    #   client = Sidekiq::Client.new
    #   client.middleware do |chain|
    #     chain.use MyClientMiddleware
    #   end
    #   client.push('class' => 'SomeWorker', 'args' => [1,2,3])
    #
    # All client instances default to the globally-defined
    # Sidekiq.client_middleware but you can change as necessary.
    #
    def middleware(&block)
      @chain ||= Sidekiq.client_middleware
      if block_given?
        @chain = @chain.dup
        yield @chain
      end
      @chain
    end
    
    
    
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
    
            names.inject(Object) do |constant, name|
          constant.const_defined?(name) ? constant.const_get(name) : constant.const_missing(name)
        end
      end
    end
  end
    
    require 'sidekiq/web/router'
require 'sidekiq/web/action'
require 'sidekiq/web/application'
    
    def attach_attachment(name, definition = nil)
  snippet = 'has_attached_file :#{name}'
  if definition
    snippet += ', \n'
    snippet += definition
  end
  snippet += '\ndo_not_validate_attachment_file_type :#{name}\n'
  cd('.') do
    transform_file('app/models/user.rb') do |content|
      content.sub(/end\Z/, '#{snippet}\nend')
    end
  end
end
    
        def names_for(klass)
      @attachments[klass].keys
    end