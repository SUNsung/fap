
        
                def initialize(project, base_dir, extension, categories = {})
          @categories     = categories
          @extension      = extension
          @repository     = project.repository
          @commit         = @repository.head_commit if @repository.exists?
    
          context 'and user can admin_group_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :admin_group_member, group).and_return(true)
        end
    
            def diffs
          @diffs ||= diffable.raw_diffs(diff_options)
        end
    
        def chronic_duration_attr_writer(virtual_attribute, source_attribute, parameters = {})
      chronic_duration_attr_reader(virtual_attribute, source_attribute)
    
            desc 'Updates a badge of a #{source_type}.' do
          detail 'This feature was introduced in GitLab 10.6.'
          success Entities::Badge
        end
        params do
          optional :link_url, type: String, desc: 'URL of the badge link'
          optional :image_url, type: String, desc: 'URL of the badge image'
        end
        put ':id/badges/:badge_id' do
          source = find_source_if_admin(source_type)
    
          desc 'Get single deploy key' do
        success Entities::DeployKeysProject
      end
      params do
        requires :key_id, type: Integer, desc: 'The ID of the deploy key'
      end
      get ':id/deploy_keys/:key_id' do
        key = find_by_deploy_key(user_project, params[:key_id])
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        def default_defaults(options)
      @defaults = Hash.new
      @defaults.merge!(options[:defaults]) if options[:defaults]
    end
    
      module Generator
    autoload :Acknowledgements,        'cocoapods/generator/acknowledgements'
    autoload :Markdown,                'cocoapods/generator/acknowledgements/markdown'
    autoload :Plist,                   'cocoapods/generator/acknowledgements/plist'
    autoload :BridgeSupport,           'cocoapods/generator/bridge_support'
    autoload :Constant,                'cocoapods/generator/constant'
    autoload :CopyResourcesScript,     'cocoapods/generator/copy_resources_script'
    autoload :DummySource,             'cocoapods/generator/dummy_source'
    autoload :EmbedFrameworksScript,   'cocoapods/generator/embed_frameworks_script'
    autoload :FileList,                'cocoapods/generator/file_list'
    autoload :Header,                  'cocoapods/generator/header'
    autoload :InfoPlistFile,           'cocoapods/generator/info_plist_file'
    autoload :ModuleMap,               'cocoapods/generator/module_map'
    autoload :PrefixHeader,            'cocoapods/generator/prefix_header'
    autoload :UmbrellaHeader,          'cocoapods/generator/umbrella_header'
    autoload :AppTargetHelper,         'cocoapods/generator/app_target_helper'
  end
    
          # @return [Hash{String => Array<Pathname>}] A hash that describes the
      #         resource bundles of the Pod. The keys represent the name of
      #         the bundle while the values the path of the resources.
      #
      def resource_bundles
        result = {}
        spec_consumer.resource_bundles.each do |name, file_patterns|
          paths = expanded_paths(file_patterns,
                                 :exclude_patterns => spec_consumer.exclude_files,
                                 :include_dirs => true)
          result[name] = paths
        end
        result
      end
    
          # In verbose mode it shows the sections and the contents.
      # In normal mode it just prints the title.
      #
      # @return [void]
      #
      def titled_section(title, options = {})
        relative_indentation = options[:relative_indentation] || 0
        verbose_prefix = options[:verbose_prefix] || ''
        if config.verbose?
          title(title, verbose_prefix, relative_indentation)
        else
          puts title
        end
    
      it 'writes a plist to disk at the given path' do
    basepath = config.sandbox.root + 'Pods-acknowledgements'
    given_path = @generator.class.path_from_basepath(basepath)
    expected_path = config.sandbox.root + 'Pods-acknowledgements.plist'
    Xcodeproj::Plist.expects(:write_to_path).with(equals(@generator.plist_hash), equals(expected_path))
    @generator.save_as(given_path)
  end
end

    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
    SpecsHelper.configure(selected_boxes)
    
          attr_reader :wiki
    
    # test/spec/mini 3
# http://gist.github.com/25455
# chris@ozmm.org
# file:lib/test/spec/mini.rb
def context(*args, &block)
  return super unless (name = args.first) && block
  require 'test/unit'
  klass = Class.new(defined?(ActiveSupport::TestCase) ? ActiveSupport::TestCase : Test::Unit::TestCase) do
    def self.test(name, &block)
      define_method('test_#{name.gsub(/\W/, '_')}', &block) if block
    end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
        post '/edit/PG', :page => 'PG', :content => '바뀐 text', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?