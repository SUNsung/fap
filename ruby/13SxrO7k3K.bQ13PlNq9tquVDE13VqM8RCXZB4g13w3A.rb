
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
      def self.source_dir; SOURCE_DIR; end
end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
          context 'without parameters' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add .', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add
          end').runner.execute(:test)
        end
      end
    
          it 'works with both select and exclude regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /\.*m/,
              exclude_regex: /Test/
            )
          end').runner.execute(:test)
    
    exec_arr = ['fastlane', tool_name] + ARGV
    
        # Description formatted to work well as page title when viewing gist
    if f.core_formula?
      descr = '#{f.name} on #{OS_VERSION} - Homebrew build logs'
    else
      descr = '#{f.name} (#{f.full_name}) on #{OS_VERSION} - Homebrew build logs'
    end
    url = create_gist(files, descr)
    
        cmd_paths = PATH.new(ENV['PATH']).append(Tap.cmd_directories) unless path
    path ||= which('brew-#{cmd}', cmd_paths)
    path ||= which('brew-#{cmd}.rb', cmd_paths)
    
    When /^I (?:log|sign) out manually on the mobile website$/ do
  manual_logout_mobile
end
    
    When /^I (?:like|unlike) the post '([^']*)' in the stream$/ do |post_text|
  like_stream_post(post_text)
end
    
    Given /^a user named '([^\']*)' with email '([^\']*)'$/ do |name, email|
  first, last = name.split
  user = create_user(:email => email, :username => '#{first}_#{last}')
  user.profile.update_attributes!(:first_name => first, :last_name => last) if first
end
    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
          class Properties
        def initialize
          @properties = {}
        end
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end
    
        # @return [String] the ruby version string bundler uses to craft its gem path
    def gem_ruby_version
      RbConfig::CONFIG['ruby_version']
    end
    
    module LogStash
  module PluginManager
  end
end
    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end
    
    describe LogStash::Config::PipelineConfig do
  let(:source) { LogStash::Config::Source::Local }
  let(:pipeline_id) { :main }
  let(:ordered_config_parts) do
    [
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/1', 0, 0, 'input { generator1 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/2', 0, 0,  'input { generator2 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/3', 0, 0, 'input { generator3 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/4', 0, 0, 'input { generator4 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/5', 0, 0, 'input { generator5 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/6', 0, 0, 'input { generator6 }'),
      org.logstash.common.SourceWithMetadata.new('string', 'config_string', 0, 0, 'input { generator1 }'),
    ]
  end
    
    shared_examples 'logstash list' do |logstash|
  describe 'logstash-plugin list on #{logstash.hostname}' do
    before(:all) do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
          it 'detects closing brace on separate line from last element' do
        inspect_source(source)
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
            self
      end
    
          # A helper class for comparing the positions of different parts of a
      # `pair` node.
      class HashElementDelta
        def initialize(first, second)
          @first = first
          @second = second
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
        def each_definition
      @attachments.each do |klass, attachments|
        attachments.each do |name, options|
          yield klass, name, options
        end
      end
    end