
        
        def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
        context '@username.nil?' do
      let(:username)  { nil }
    
        File.write(dest, Oj.dump(map))
    puts 'Wrote emojo to destination! (#{dest})'
  end
end

    
      sidekiq_options unique: :until_executed, retry: 0
    
          it 'renders the body' do
        expect(mail.body.encoded).to match('brief summary')
        expect(mail.body.encoded).to include 'The body of the foreign status'
        expect(mail.body.encoded).to include sender.username
      end
    end
    
          let(:object_json) do
        ActivityPub::TagManager.instance.uri_for(status)
      end
    
      let(:user) { Fabricate(:user) }
    
      # Setup the root logger with the Rails log level and the desired set of
  # appenders. The list of appenders to use should be set in the environment
  # specific configuration file.
  #
  # For example, in a production application you would not want to log to
  # STDOUT, but you would want to send an email for 'error' and 'fatal'
  # messages:
  #
  # => config/environments/production.rb
  #
  #     config.log_to = %w[file email]
  #
  # In development you would want to log to STDOUT and possibly to a file:
  #
  # => config/environments/development.rb
  #
  #     config.log_to = %w[stdout file]
  #
  Logging.logger.root.appenders = config.log_to unless config.log_to.empty?
    
        context 'on a post you do not partecipate to' do
      it 'says it is an unprocessable request' do
        delete :destroy, params: {post_id: post.id}
        expect(response.code).to eq('422')
      end
    end
  end
end

    
          # @return [Xcodeproj::Project] The Pods Xcode project.
      #
      attr_reader :pods_project
    
        it 'handles a large amount of output' do
      cmd = ['-e', <<-RB]
        puts File.read(#{__FILE__.inspect})
      RB
      Executable.execute_command('ruby', cmd, true).should == File.read(__FILE__)
    end
    
          Header = Struct.new(:path, :umbrella, :private, :textual, :exclude, :size, :mtime) do
        alias_method :private?, :private
        def to_s
          [
            (:private if private?),
            (:textual if textual),
            (:umbrella if umbrella),
            (:exclude if exclude),
            'header',
            %('#{path.to_s.gsub(''', '\'')}'),
            attrs,
          ].compact.join(' ')
        end
    
    require_relative '../lib/bootstrap/environment'
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
        context 'when is not a system pipeline' do
      it 'returns false if the pipeline is not a system pipeline' do
        expect(subject.system?).to be_falsey
      end
    end
  end
end

    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
          JoeWorker.perform_in(0.01, 0)
    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
      it 'allows delay of any module class method' do
    q = Sidekiq::Queue.new
    assert_equal 0, q.size
    SomeModule.delay.doit(Date.today)
    assert_equal 1, q.size
  end
    
      it 'shuts down the system' do
    mgr = new_manager(options)
    mgr.stop(::Process.clock_gettime(::Process::CLOCK_MONOTONIC))
  end
    
          Sidekiq::Testing.fake! do
        assert Sidekiq::Testing.enabled?
        assert Sidekiq::Testing.fake?
        refute Sidekiq::Testing.inline?
      end
    
        class InlineFooModel
      def self.bar(str)
        raise InlineError
      end
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    Liquid::Template.register_tag('gist', Jekyll::GistTag)
Liquid::Template.register_tag('gistnocache', Jekyll::GistTagNoCache)

    
    
module OctopressLiquidFilters
    
      context 'python_scripts_executable is set' do
    it 'should have scripts with a custom hashbang line' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
        context 'when :template_scripts? is false' do
      before do
        subject.attributes[:template_scripts?] = false
      end
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}