
        
        require 'rdoc/task'
Rake::RDocTask.new do |rdoc|
  rdoc.rdoc_dir = 'rdoc'
  rdoc.title = '#{name} #{version}'
  rdoc.rdoc_files.include('README*')
  rdoc.rdoc_files.include('lib/**/*.rb')
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
            def print_message(json_message)
          msg = JSON.parse(json_message)
          # Not sure what the 'url' command even does in LiveReload.  The spec is silent
          # on its purpose.
          Jekyll.logger.info 'LiveReload:', 'Browser URL: #{msg['url']}' if msg['command'] == 'url'
        end
    
              reload_file = File.join(Serve.singleton_class::LIVERELOAD_DIR, 'livereload.js')
    
      # Proxy to devise map name
  def resource_name
    devise_mapping.name
  end
  alias :scope_name :resource_name
    
        def warden
      request.respond_to?(:get_header) ? request.get_header('warden') : request.env['warden']
    end
    
    require 'vagrant/capability_host'
    
      def edit; end
    
          @account_moderation_note = current_account.account_moderation_notes.new(resource_params)
    
        def destroy
      authorize @custom_emoji, :destroy?
      @custom_emoji.destroy!
      log_action :destroy, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.destroyed_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
          @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def subscription
    @_subscription ||= @account.subscription(
      api_subscription_url(@account.id)
    )
  end
    
    (deny default)
EOS
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end
    
          sh <<-SH
        git commit --allow-empty -a -m '#{source_version} release'  &&
        git tag -s v#{source_version} -m '#{source_version} release'  &&
        git push && (git push origin || true) &&
        git push --tags && (git push origin --tags || true)
      SH
    end
    
    desc 'run specs'
task(:spec) { ruby '-S rspec spec' }
    
        # execute bundle install and capture any $stdout output. any raised exception in the process will be trapped
    # and returned. logs errors to $stdout.
    # @param [Hash] options invoke options with default values, :max_tries => 10, :clean => false, :install => false, :update => false
    # @option options [Boolean] :max_tries The number of times bundler is going to try the installation before failing (default: 10)
    # @option options [Boolean] :clean It cleans the unused gems (default: false)
    # @option options [Boolean] :install Run the installation of a set of gems defined in a Gemfile (default: false)
    # @option options [Boolean, String, Array] :update Update the current environment, must be either false or a String or an Array of String (default: false)
    # @option options [Boolean] :local Do not attempt to fetch gems remotely and use the gem cache instead (default: false)
    # @option options [Boolean] :package Locks and then caches all dependencies to be reused later on (default: false)
    # @option options [Boolean] :all It packages dependencies defined with :git or :path (default: false)
    # @option options [Array] :without  Exclude gems that are part of the specified named group (default: [:development])
    # @return [String, Exception] the installation captured output and any raised exception or nil if none
    def invoke!(options = {})
      options = {:max_tries => 10, :clean => false, :install => false, :update => false, :local => false,
                 :jobs => 12, :all => false, :package => false, :without => [:development]}.merge(options)
      options[:without] = Array(options[:without])
      options[:update] = Array(options[:update]) if options[:update]
    
    module LogStash
  module Environment
    extend self
    
        def validate_plugins!
      @plugins_to_package.each do |plugin_name|
        if INVALID_PLUGINS_TO_EXPLICIT_PACK.any? { |invalid_name| plugin_name =~ invalid_name }
          raise UnpackablePluginError, 'Cannot explicitly pack `#{plugin_name}` for offline installation'
        end
      end
    end
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
    task :spec    => 'spec:all'
task :default => :spec
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    
    {        def right_whole_line_range(loc_end)
          if range_by_whole_lines(loc_end).source.strip =~ /}\s*,?\z/
            range_by_whole_lines(loc_end, include_final_newline: true)
          else
            loc_end
          end
        end
    
          def check_brace_layout(node)
        return if ignored_literal?(node)
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) { ['[', '1', ']'] }
  end
    
          it 'detects closing brace on separate line from last element' do
        inspect_source(source)
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode