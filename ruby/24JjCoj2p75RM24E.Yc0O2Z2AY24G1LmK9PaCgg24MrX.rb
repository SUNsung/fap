
        
          has_many :other_posts,          class_name: 'Post'
  has_many :posts_with_callbacks, class_name: 'Post', before_add: :log_before_adding,
           after_add: :log_after_adding,
           before_remove: :log_before_removing,
           after_remove: :log_after_removing
  has_many :posts_with_proc_callbacks, class_name: 'Post',
           before_add: Proc.new { |o, r| o.post_log << 'before_adding#{r.id || '<new>'}' },
           after_add: Proc.new { |o, r| o.post_log << 'after_adding#{r.id || '<new>'}' },
           before_remove: Proc.new { |o, r| o.post_log << 'before_removing#{r.id}' },
           after_remove: Proc.new { |o, r| o.post_log << 'after_removing#{r.id}' }
  has_many :posts_with_multiple_callbacks, class_name: 'Post',
           before_add: [:log_before_adding, Proc.new { |o, r| o.post_log << 'before_adding_proc#{r.id || '<new>'}' }],
           after_add: [:log_after_adding,  Proc.new { |o, r| o.post_log << 'after_adding_proc#{r.id || '<new>'}' }]
  has_many :unchangeable_posts, class_name: 'Post', before_add: :raise_exception, after_add: :log_after_adding
    
              {% include params.html
            param='value' %}
        CONTENT
        create_post(content,
                    'permalink'   => 'pretty',
                    'source'      => source_dir,
                    'destination' => dest_dir,
                    'read_posts'  => true)
      end
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
          # From https://github.com/orta/danger/blob/master/lib/danger/Dangerfile.rb
      if content.tr!('“”‘’‛', %('''''))
        UI.error('Your #{File.basename(path)} has had smart quotes sanitised. ' \
                  'To avoid issues in the future, you should not use ' \
                  'TextEdit for editing it. If you are not using TextEdit, ' \
                  'you should turn off smart quotes in your editor of choice.')
      end
    
        def upload_mapping(apk_version_codes)
      mapping_paths = [Supply.config[:mapping]] unless (mapping_paths = Supply.config[:mapping_paths])
      mapping_paths.zip(apk_version_codes).each do |mapping_path, version_code|
        if mapping_path
          client.upload_mapping(mapping_path, version_code)
        end
      end
    end
    
          it 'updates whats_new' do
        updated_test_info = build.test_info.deep_copy
        updated_test_info.whats_new = 'this fixture data is new'
    
        it 'raises an exception if authentication failed' do
      expect do
        subject.login('bad-username', 'bad-password')
      end.to raise_exception(Spaceship::Client::InvalidUserCredentialsError)
    end
  end
    
        describe 'handle conflicts' do
      it 'Both primary and secondary are available, and both match the export method, it should prefer the primary mapping' do
        result = csm.merge_profile_mapping(primary_mapping: { 'identifier.1' => 'Ap-pStoreValue2' },
                                       secondary_mapping: { 'identifier.1' => 'Ap-pStoreValue1' },
                                           export_method: 'app-store')
    
            it 'finds the one build when no app version is provided' do
          allow(fake_app).to receive(:latest_version).and_return(fake_version)
          allow(fake_version).to receive(:candidate_builds).and_return(fake_builds, fake_builds_with_processed_build)
          only_build = fake_builds.first
          allow(review_submitter).to receive(:sleep)
          expect(review_submitter.wait_for_build(fake_app, nil)).to equal(fake_builds_with_processed_build.first)
        end
      end
    
            return build_settings
      end
    
          def self.details
        'This action allows you to upload symbolication files to Crashlytics. It's extra useful if you use it to download the latest dSYM files from Apple when you use Bitcode. This action will not fail the build if one of the uploads failed. The reason for that is that sometimes some of dSYM files are invalid, and we don't want them to fail the complete build.'
      end
    
            if Helper.ci? || Helper.test?
          # The 'BUILD_URL' environment variable is set automatically by Jenkins in every build
          jenkins_api_url = URI(ENV['BUILD_URL'] + 'api/json\?wrapper\=changes\&xpath\=//changeSet//comment')
          begin
            json = JSON.parse(Net::HTTP.get(jenkins_api_url))
            json['changeSet']['items'].each do |item|
              comment = params[:include_commit_body] ? item['comment'] : item['msg']
              changelog << comment.strip + '\n'
            end
          rescue => ex
            UI.error('Unable to read/parse changelog from jenkins: #{ex.message}')
          end
        end
    
          def self.available_options
        require 'match'
        Match::Options.available_options
      end
    
          def_node_matcher :find_output_method, <<-PATTERN
        (defs (self) :output ...)
      PATTERN
    
      # Returns the FQDN of the image URL.
  #
  # @param [String] path
  #
  # @return [String]
  def image_url(path)
    File.join(base_url, image_path(path))
  end
    
          # If set, will only run trigger for guests that match keys for this parameter.
      #
      # @return [String, Regex, Array]
      attr_accessor :only_on
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
    # Load in helpers
require 'unit/support/dummy_communicator'
require 'unit/support/dummy_provider'
require 'unit/support/shared/base_context'
require 'unit/support/shared/action_synced_folders_context'
require 'unit/support/shared/capability_helpers_context'
require 'unit/support/shared/plugin_command_context'
require 'unit/support/shared/virtualbox_context'
    
          env = environment.create_vagrant_env(vagrantfile_name: 'non_standard_name')
      expect(env.vagrantfile.config.ssh.port).to eq(200)
    end
    
        it 'returns all the machines' do
      configure do |config|
        config.vm.define 'foo'
        config.vm.define 'bar', autostart: false
        config.vm.define 'baz', autostart: true
      end
    
        it 'returns true if usable' do
      allow(VagrantPlugins::ProviderVirtualBox::Driver::Meta).to receive(:new).and_return(driver)
      expect(subject).to be_usable
    end
    
                if trigger.run_remote
              run_remote(trigger.run_remote, trigger.on_error, trigger.exit_codes)
            end
    
        def bad_sourceforge_url?
      bad_url_format?(/sourceforge/,
                      [
                        %r{\Ahttps://sourceforge\.net/projects/[^/]+/files/latest/download\Z},
                        %r{\Ahttps://downloads\.sourceforge\.net/(?!(project|sourceforge)\/)},
                      ])
    end
    
          def tag_without_or_later(tag)
        tag
      end
    
      def fails_with(compiler, &block)
    compiler_failures << CompilerFailure.create(compiler, &block)
  end
    
        it 'acts like #depends_on' do
      f = formula 'foo' do
        url 'foo-1.0'
    
      describe '#uses_from_macos' do
    before do
      sierra_os_version = OS::Mac::Version.from_symbol(:sierra)
    
            version < minimum_version
      end
    
      let(:local_caffeine) {
    Cask::CaskLoader.load(cask_path('local-caffeine'))
  }
    
        [stdout, stderr, status]
  end
    
            if Rake::Task.task_defined?('deploy:set_current_revision')
          before 'deploy:set_current_revision',
                 '#{scm_name}:set_current_revision'
        end
      end
      # rubocop:enable Style/GuardClause
    
        def frame_class(frame)
      if frame.filename =~ %r{lib/sinatra.*\.rb}
        'framework'
      elsif (defined?(Gem) && frame.filename.include?(Gem.dir)) ||
            frame.filename =~ %r{/bin/(\w+)\z}
        'system'
      else
        'app'
      end
    end
    
          def session?(env)
        env.include? options[:session_key]
      end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end