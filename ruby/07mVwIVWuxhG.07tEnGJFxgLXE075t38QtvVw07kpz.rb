
        
            # Represents the schema of an SQL table in an abstract way. This class
    # provides methods for manipulating the schema representation.
    #
    # Inside migration files, the +t+ object in {create_table}[rdoc-ref:SchemaStatements#create_table]
    # is actually of this type:
    #
    #   class SomeMigration < ActiveRecord::Migration[5.0]
    #     def up
    #       create_table :foo do |t|
    #         puts t.class  # => 'ActiveRecord::ConnectionAdapters::TableDefinition'
    #       end
    #     end
    #
    #     def down
    #       ...
    #     end
    #   end
    #
    class TableDefinition
      include ColumnMethods
    
      private
    def post_to_foos(as:)
      with_routing do |routes|
        routes.draw do
          ActiveSupport::Deprecation.silence do
            post ':action' => FooController
          end
        end
    
        def to_json(options = {})
      super except: [:c, :e]
    end
  end
  class CsvRenderable
    def to_csv
      'c,s,v'
    end
  end
  class TestController < ActionController::Base
    def render_simon_says
      render simon: 'foo'
    end
    
            new_appendix = new_appendix.sub('.', '') if new_appendix.start_with?('.')
        major = version_match[:major].to_i
        minor = version_match[:minor].to_i || 0
        patch = version_match[:patch].to_i || 0
    
      context '.find' do
    it 'finds a build by a build_id' do
      mock_client_response(:get_build) do
        {
          id: 456,
          bundleId: 'com.foo.bar',
          trainVersion: '1.0'
        }
      end
    
        # This is a duplicate method of fastlane_core/fastlane_core.rb#fastlane_user_dir
    def fastlane_user_dir
      path = File.expand_path(File.join(Dir.home, '.fastlane'))
      FileUtils.mkdir_p(path) unless File.directory?(path)
      return path
    end
    
        describe '#in_house?' do
      it 'returns false for normal accounts' do
        expect(subject.in_house?).to eq(false)
      end
    
          stub_request(:post, 'https://developer.apple.com/services-account/QH65B2/account/mac/identifiers/addWebsitePushId.action').
        with(body: { 'name' => 'Fastlane Website Push', 'identifier' => 'web.com.fastlane.example', 'teamId' => 'XXXXXXXXXX' }).
        to_return(status: 200, body: adp_read_fixture_file('addWebsitePushId.action.json'), headers: { 'Content-Type' => 'application/json' })
    
          def self.upload_dsym(params, path)
        UI.message('Uploading '#{path}'...')
        command = []
        command << File.expand_path(params[:binary_path]).shellescape
        if params[:gsp_path]
          command << '-gsp #{params[:gsp_path].shellescape}'
        elsif params[:api_token]
          command << '-a #{params[:api_token]}'
        end
        command << '-p #{params[:platform] == 'appletvos' ? 'tvos' : params[:platform]}'
        command << File.expand_path(path).shellescape
        begin
          command_to_execute = command.join(' ')
          UI.verbose('upload_dsym using command: #{command_to_execute}')
          Actions.sh(command_to_execute, log: false)
        rescue => ex
          UI.error(ex.to_s) # it fails, however we don't want to fail everything just for this
        end
      end
    
          #####################################################
      # @!group Documentation
      #####################################################
    
      # Version of your assets, change this if you want to expire all your assets.
  config.assets.version = '1.0'
    
      # Node Settings
  option ['-n', '--node.name'], 'NAME',
    I18n.t('logstash.runner.flag.name'),
    :attribute_name => 'node.name',
    :default => LogStash::SETTINGS.get_default('node.name')
    
          packet_gem.pack
    
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
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
        context 'without a specific plugin' do
      it 'display a list of plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
            selected = if options[:match_path].is_a? Regexp
                     request.fullpath =~ options[:match_path]
                   elsif options[:match_path]
                     request.fullpath.starts_with?('#{spree.admin_path}#{options[:match_path]}')
                   else
                     args.include?(controller.controller_name.to_sym)
                   end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end
    
              count_on_hand = 0
          if params[:stock_item].key?(:count_on_hand)
            count_on_hand = params[:stock_item][:count_on_hand].to_i
          end
    
            def index
          authorize! :index, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
              @users = @users.result.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@users)
        end
    
      # The version of this package (the upstream version)
  attr_accessor :version
    
        pkgdata = {
      'arch' => architecture,
      'name' => name,
      'version' => pkg_version,
      'comment' => description,
      'desc' => description,
      'origin' => pkg_origin,
      'maintainer' => maintainer,
      'www' => url,
      # prefix is required, but it doesn't seem to matter
      'prefix' => '/',
    }
    
        if info.include?('repository')
      self.url = info['repository']['url']
    else
      self.url = 'https://npmjs.org/package/#{self.name}'
    end
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile